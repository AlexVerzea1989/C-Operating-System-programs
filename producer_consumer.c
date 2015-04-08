/*
ALEX VERZEA
260324472
COMP310
Mini-Assignment 2
*/ 

/* Compile this program using -pthread and -o as parameters for gcc. */
/* This program uses synchronization. */

# include <stdio.h>
# include <pthread.h>
# include <stdlib.h>
# include <sys/time.h>
# define BufferMemory 1000000 /* Means "infinite buffer QUEUE of type LIFO"*/

void *Producer();
void *Consumer();

int BufInd=0;
int *BUF;
int N=3;        /* Each producer creates N items */

int ProducedItems=0;
int ConsumedItems=0;

pthread_cond_t Buf_Not_Full=PTHREAD_COND_INITIALIZER;
pthread_cond_t Buf_Not_Empty=PTHREAD_COND_INITIALIZER;
pthread_mutex_t m=PTHREAD_MUTEX_INITIALIZER;

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
    
    pthread_mutex_destroy(&m); /* Destroy mutex */

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
        pthread_mutex_lock(&m);  /* Producer waits to put LOCK on mutex */ 
                                    /* Since the Queue is unlimited, Producer does NOT test if Queue is FULL */
        BUF[BufInd++]=1;
        printf("Produced -> item id: %d BY  Thread %p\n",BufInd,(void *)pthread_self());
        ProducedItems++;
        pthread_mutex_unlock(&m);
        pthread_cond_signal(&Buf_Not_Empty);
    }        
}

void *Consumer()
{ 
    int i;

    for(i=0;i<10*N;i++)
    {
        pthread_mutex_lock(&m);
        if(BufInd<=0)
        {            
            pthread_cond_wait(&Buf_Not_Empty,&m);
        }               
        printf("Consumed -> item id: %d \n",BufInd--);
        ConsumedItems++;
        pthread_mutex_unlock(&m);   
        pthread_cond_signal(&Buf_Not_Full);     
    }    
}
