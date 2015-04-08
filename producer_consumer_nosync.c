/*
ALEX VERZEA
260324472
COMP310
Mini-Assignment 2
*/

/* Compile this program using -pthread and -o as parameters for gcc. */
/* This program doesn't use synchronization. */ 

# include <stdio.h>
# include <pthread.h>
# include <stdlib.h>
# include <sys/time.h>
# define BufferMemory 1000000 /* Means "infinite buffer QUEUE of type LIFO "*/

void *Producer();
void *Consumer();

int BufInd=0;
int *BUF;
int N=3;        /* Each producer creates N items */

int ProducedItems=0;
int ConsumedItems=0; 

int main()
{    
    pthread_t ptid[10],ctid;
    int i;
    int a=0;

    struct timeval start, end; 
    struct timezone tzp;
    gettimeofday(&start, &tzp);

    BUF=(int *) malloc(sizeof(int) * BufferMemory);  
  
    for(i=0;i<10;i++)
    { 
        pthread_create(&ptid[a++],NULL,Producer,NULL);
    }

    pthread_create(&ctid,NULL,Consumer,NULL);
    a=0;

    for(i=0;i<10;i++)
    {    
       pthread_join(ptid[a++],NULL);
    }
   
    pthread_join(ctid,NULL);  

    free(BUF);  /* Deallocate memory used by QUEUE */ 

    printf("-----------------------------------\n");
    printf("ProducedItems=%d\n",ProducedItems);
    printf("ConsumedItems=%d\n",ConsumedItems); 
    gettimeofday(&end, &tzp);
    printf("start program: %lu\n", start.tv_usec);
    printf("end program:   %lu\n", end.tv_usec);
    printf("time program:  %lu\n", end.tv_usec - start.tv_usec);

    return 0;
}

void *Producer()
{   
    int i; 

    for(i=0;i<N;i++)
    {
        BUF[BufInd++]=1;
        printf("Produced -> item id: %d BY  Thread %p\n",BufInd,(void *)pthread_self());
        ProducedItems++;
    }        
}

void *Consumer()
{ 
    int i;

    for(i=0;i<10*N;i++)
    {
        {            
            if(BufInd<=0) /* NO item in the QUEUE */
              sleep(1); /* WAIT 1 second to see if new items are produced */

              if(BufInd<=0) /* NO item in the QUEUE after 1 second*/
                break;  /* Consummer exits */
        }               
        printf("Consumed -> item id: %d \n",BufInd--);
        ConsumedItems++;
    }    
}
