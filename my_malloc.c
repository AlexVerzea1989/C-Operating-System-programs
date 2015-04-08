/* 
 * =============================================================================
 *
 *      Filename:  my_malloc.c
 *
 *   	Description: memory allocation library that is equivalent to the "malloc"
	library provided by Unix-like operating systems
 *
 *	Alex Verzea

 *      Course: Operating Systems 
 *	Assignment: A2
 * =============================================================================
*/

/* The implementation of the memory allocation package is straightforward. It first scans the list of free memory blocks previously released by my_free() to find one whose size is large than or equal to the one to be allocated. We use different strategies such as first-fit or  best-fit for scanning the free list. If a larger block is found, then it is split and a portion is returned as the allocation while the other portion remains in the free list. If no block on the free list is large enough, sbrk() is used to allocate more memory.
*/


#include <unistd.h>
#include <stdio.h>


#include "mymalloc.h"

/* "mymalloc.h" is the header file that contains:
- definion of "FIRST_FIT", "BEST_FIT: define strategies for scanning the free list
- declaration of global error string variable: "my_malloc_error"
- declaration of functions: "my_malloc", "my_free", "my_mallopt", "my_mallinfo"
*/




int CURRENT_FIT = FIRST_FIT; // default memory allocation policy is FIRST_FIT 
                             // can be setup by "my_mallopt" function

char *my_malloc_error; //If memory could not be allocated, then my_malloc sets this global error string variable   

// Structure to represent the  allocated block: used (used=1) or or unused (used=0)

struct memory_block {
  char used;
  size_t length;
  char data[0];
} memory_block;

// Structure to represent the free block

struct memory_block_free {
  char used;
  size_t length;
  struct memory_block_free * next_free;
  struct memory_block_free * prev_free;
} memory_block_free;

static struct memory_block *first = NULL;
static struct memory_block *last = NULL;
static struct memory_block_free *last_free = NULL;


static const size_t data_offset = sizeof(struct memory_block);
static const size_t min_size = 2*sizeof(struct memory_block_free *);



/****************** new_block ******************/

/* Allocate new block. If memory could not be allocated, it returns NULL and sets a global error string variable */

static struct memory_block * new_block(size_t size_block) {
  struct memory_block * res = (struct memory_block *) sbrk(size_block);

   if (res == (struct memory_block *) -1)      /* Memory could not be allocated */
   {
        my_malloc_error = "Memory could not be allocated";
        printf("%s\n",my_malloc_error); 
        return NULL;
   }

  res->used = 1;
  res->length = size_block;
  return res;
}


/****************** next_block ******************/

/* Find next allocated block*/ 
#define next_block(cur) ((struct memory_block *) (((char *) cur) + cur->length))



/******************* my_malloc ********************/

/* This function returns void * that we can assign to any C pointer. If memory could not be
allocated, then my_malloc() returns NULL and sets a global error string variable given by the
declaration of external variable "my_malloc_error".
*/

void * my_malloc(int n) {


  /* We need a bit of space for the freelist pointers */
  if (n < min_size) n = min_size;

  /* First bit of memory allocated */
  if (first == NULL) {
    last = first = new_block(data_offset + n);
    return first->data;
  }

  /* Find a free block of memory */
  struct memory_block * cur = first;


  if (CURRENT_FIT == FIRST_FIT) {
    while (cur->used || cur->length < n) {
      if (cur == last) break;
      cur = next_block(cur);
    }
  }
  else
  if (CURRENT_FIT == BEST_FIT) {
      
     while (cur->used || cur->length < n) {
      if (cur == last) break;
      cur = next_block(cur);
     }
  
     if (cur != last) {  
       struct memory_block * curr = cur; 
       struct memory_block * best_curr = cur;
       int best_length = cur->length;
       while (curr != last) {
         if (!curr->used && curr->length >=n ) {
            if (curr->length <= best_length) {
               best_length=curr->length;
               best_curr=curr;
            }
         }
         curr = next_block(curr);
       }
       cur=best_curr;
     }
  }  


  if (cur->used) {
    /* No free piece, allocate new thing */
    last = cur = new_block(data_offset + n);
  } else {
    struct memory_block_free * fcur = (struct memory_block_free *) cur;
    fcur->used = 1;
    if (data_offset + n + data_offset + min_size > fcur->length) {
      if (fcur->prev_free)
fcur->prev_free->next_free = fcur->next_free;
      if (fcur->next_free)
fcur->next_free->prev_free = fcur->prev_free;
      else
last_free = fcur->prev_free;
    } else {
      size_t rest_length = fcur->length - data_offset - n;
      fcur->length = data_offset + n;
      struct memory_block_free * rest = (struct memory_block_free *) next_block(cur);
      rest->used = 0;
      rest->length = rest_length;
      rest->prev_free = fcur->prev_free;
      if (rest->prev_free)
rest->prev_free->next_free = rest;
      rest->next_free = fcur->next_free;
      if (rest->next_free)
rest->next_free->prev_free = rest;
      else
last_free = rest;
      if (last == cur)
last = (struct memory_block *) rest;
    }
  }
  return cur->data;
}



/******************* block_merge *******************/

/* If free blocks are next to the block being freed, we merge them into a larger free block */

void block_merge(struct memory_block_free * block1, struct memory_block_free * block2) {

  size_t new_length = block1->length + block2->length;
  block1->next_free = block2->next_free;
  if (block2->next_free)
    block2->next_free->prev_free = block1;
  if (last_free == block2)
    last_free = block1;
  if (last == (struct memory_block *) block2)
    last = (struct memory_block *) block1;
  block1->length = new_length;

}



/****************** check_merge *******************/

/* Check if free blocks are next to the block being freed */ 

void check_merge(struct memory_block_free * block) {

  char merge_prev = (block->prev_free && next_block(block->prev_free) == (struct memory_block *) block);
  char merge_next = (next_block(block) == (struct memory_block *) block->next_free);

  if (merge_prev) {
    block_merge(block->prev_free, block);
  }
  if (merge_next) {
    block_merge(block, block->next_free);
    
  }
}



/****************** my_free ******************/

/* This function deallocates the block of memory pointed by the ptr argument. The ptr should be an address previously allocated by the Memory Allocation Package */

void my_free(void * ptr) {

  struct memory_block_free * block = (struct memory_block_free *) (ptr - data_offset);
  /* don't set block->used = 0 yet */

  /* Find next free block from here */
  struct memory_block * cur = (struct memory_block *) block;
  while (cur != last && cur->used) {
    cur = next_block(cur);
  }
  if (cur->used) {
    /* We're the last free block */
    block->used = 0;
    block->next_free = NULL;
    if (last_free) {
      last_free->next_free = block;
    }
    block->prev_free = last_free;
    last_free = block;
    check_merge(block);
    return;
  }
  block->used = 0;
  /* cur is free */
  struct memory_block_free * fcur = (struct memory_block_free *) cur;
  /* insert into freelist */
  block->next_free = fcur;
  block->prev_free = fcur->prev_free;
  if (fcur->prev_free) {
    fcur->prev_free->next_free = block;
  }
  fcur->prev_free = block;

  check_merge(block);
}



/******************* my_mallinfo ******************/

/* This function prints statistics about the memory allocation performed so far by the library: 
- address and size of each used / free block
- total number of bytes allocated, 
- total free space, 
- largest contiguous free space
*/

void my_mallinfo() {

  printf("\n-> Memory allocation statistics\n");
  int total_allocated=0;
  int total_free=0;
  int max_free=0;
 
  if (first == NULL) {
    printf("Nothing allocated\n");
  } else {
    struct memory_block * cur = first;
    while (1) {
      if (cur->used) {
printf("-> Blk:%p Size:%d bytes is used\n", cur, cur->length);
        total_allocated=total_allocated+cur->length;
      } else {
struct memory_block_free * fcur = (struct memory_block_free *) cur;
printf("-> Blk:%p Size:%d bytes is free Next Free Blk:%p Prev Free Blk:%p\n", fcur, fcur->length, fcur->next_free, fcur->prev_free);
        total_free=total_free+fcur->length;
        if (fcur->length>max_free) max_free=fcur->length;
      }
      if (cur == last) break;
      cur = next_block(cur);
    }
  }
  printf("* Total bytes allocated:%d\n",total_allocated);
  printf("* Total bytes free:%d\n",total_free);
  printf("* Largest contiguous free space:%d\n",max_free);
  printf("-> End of Memory allocation statistics\n\n");
}



/******************* my_mallopt ******************/

/* This function specifies the memory allocation policy. It implements two policies: first fit and best fit 
*/

void my_mallopt(int policy) {
CURRENT_FIT = policy;
}
