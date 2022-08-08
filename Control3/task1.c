#include <stdio.h>


typedef struct Node
{
    int begin,end;
    int *Data;
    int max_elem_count;
    
}Node;



int getNextIndex(int i, Node *p)
{
    return (i+1)%p->max_elem_count;
}

void push_better(Node *p, char new)
{
    int next_end=getNextIndex(p->end, p);
   
    if(next_end==p->begin)
    {
        perror("Queue is full");
        return;
    }
    p->Data[p->end]=new;
    p->end=next_end;
    
}

void pop_better(Node *p)
{
    if(p->begin==p->end)
    {
        perror("Queue is empty");
        return;
    }
    
    p->begin++;
    
}



int getFirst(Node *p)
{
    return p->Data[p->begin];
}

void printQueueBetter(Node *p)
{
    for(int i=p->begin;i<p->end;i++)
    {
        printf("%d ", p->Data[i]);
    }
    printf("\n");
}


int main()
{

Node q;
int N;
printf("Enter N>0 and then N integers:");
scanf("%d", &N);
q.max_elem_count=N+1;
int Data[q.max_elem_count];

q.begin=0;
q.end=0;
q.Data=Data;

for(int i=0;i<N;i++)
{
    scanf("%d", &Data[i]);
}

for(int i=0;i<q.max_elem_count;i++)
{
    push_better(&q,Data[i]);
}

printQueueBetter(&q);


}