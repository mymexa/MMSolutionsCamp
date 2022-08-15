#include <stdio.h>
#include <stdlib.h>

typedef struct InnerVector
{
   double data;
   struct InnerVector *next;

}InnerVector;

void push_back(InnerVector **head, double new)
{
    InnerVector *new_node=malloc(sizeof(InnerVector));
    if(!new_node)
    {
        perror("Malloc failed");
        exit(-1);
    }
    new_node->data=new;
    new_node->next=NULL;

      if(*head == NULL)
    {
        *head=new_node;
        return;
    }

    InnerVector *last_node=*head;
    while(last_node->next !=NULL)
    {
        last_node=last_node->next;
    }
    last_node->next=new_node;

}

void print_ll(InnerVector *head)
{
    if(!head)
    {
        printf("Empty list");
        return;
    }

    InnerVector *curNode = head;

    while(curNode)
    {
        printf("%f ", curNode->data);
        curNode=curNode->next;
    }
}

InnerVector *head1;

int main()
{
    
    int n,m;
    printf("Enter the N number of Vectors:");
    scanf("%d",&n);
    printf("Enter the M number of numbers per vector:");
    scanf("%d",&m);
    printf("Add M numbers in the vector: ");
    double p;
    for(int i=0;i<m;i++)
    {
        scanf("%lf",&p);
        push_back(&head1,p);
    }


    print_ll(head1);
}