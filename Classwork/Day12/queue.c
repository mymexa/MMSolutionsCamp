#include <stdio.h>

typedef struct Queue
{
    int elem_count;
    char *queue_arr;
    int max_elem_count;
    
}Queue;

typedef struct BetterQueue
{
    int begin,end;
    char *queue_arr;
    int max_elem_count;
    
}BetterQueue;

void push(Queue *queue_p,char new_elem)
{
    if(queue_p->elem_count==queue_p->max_elem_count)
    {
        perror("Full");
    }
    queue_p->queue_arr[queue_p->elem_count]=new_elem;
    queue_p->elem_count++;
}

void pop(Queue *queue_p)
{
    if(queue_p->elem_count==0)
    {
        perror("Queue is empty");
        return;
    }
    for(int i=0 ;i<queue_p->elem_count-1 ;i++)
    {
        queue_p->queue_arr[i]=queue_p->queue_arr[i+1];
    }
    queue_p->elem_count--;
}

int getNextIndex(int i, BetterQueue *p)
{
    return (i+1)%p->max_elem_count;
}

void push_better(BetterQueue *p, char new)
{
    int next_end=getNextIndex(p->end, p);
   
    if(next_end==p->begin)
    {
        perror("Queue is full");
        return;
    }
    p->queue_arr[p->end]=new;
    p->end=next_end;
    
}

void pop_better(BetterQueue *p)
{
    if(p->begin==p->end)
    {
        perror("Queue is empty");
        return;
    }
    
    p->begin++;
    
}



int getFirst(BetterQueue *p)
{
    return p->queue_arr[p->begin];
}

void printQueueBetter(BetterQueue *p)
{
    for(int i=p->begin;i<p->end;i++)
    {
        printf("%d ", p->queue_arr[i]);
    }
    printf("\n");
}


void printQueue(Queue *queue_p)
{
    for(int i=0;i<queue_p->elem_count;i++)
    {
        printf("%d ", queue_p->queue_arr[i]);
    }
    printf("\n");
}

int main()
{
/*    
char arr[200];
Queue myqueue;
myqueue.elem_count=0;
myqueue.max_elem_count=200;
myqueue.queue_arr=arr;

push(&myqueue,21);
push(&myqueue,31);
push(&myqueue,55);
pop(&myqueue);
printQueue(&myqueue);
*/

char arr1[5];
BetterQueue q;
q.begin=0;
q.end=0;
q.max_elem_count=5;
q.queue_arr=arr1;

push_better(&q,1);
push_better(&q,2);
push_better(&q,3);
//pop_better(&q);
//pop_better(&q);
//pop_better(&q);
//pop_better(&q);
push_better(&q,4);
push_better(&q,5);
//push_better(&q,3);
//push_better(&q,4);
printQueueBetter(&q);

}