#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    long data;
    struct Node *next;
}Node;

void push_back(Node **head, long new)
{
    Node *new_node=malloc(sizeof(Node));
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

    Node *last_node=*head;
    while(last_node->next !=NULL)
    {
        last_node=last_node->next;
    }
    last_node->next=new_node;


}

Node *head1;

void pop_front()
{
    Node *deleted_node =head1;
    head1=head1->next;
    free(deleted_node);

}

void pop_front_updated(Node **head_pp)
{
    if(!*head_pp)
    {
        perror("Empty list");
        return;
    }
    Node *deleted_node=*head_pp;
    *head_pp=(*head_pp)->next;
    free(deleted_node);
}

void print_ll(Node *head)
{
    if(!head)
    {
        printf("Empty list");
        return;
    }

    Node *curNode = head;

    while(curNode)
    {
        printf("%ld ", curNode->data);
        curNode=curNode->next;
    }
}


int main()
{
    Node *n1=malloc(sizeof(Node));
    Node *n2=malloc(sizeof(Node));
    Node *n3=malloc(sizeof(Node));
    Node *n4=malloc(sizeof(Node));

    n1->next=n2;
    n1->data=5;
    n2->next=n3;
    n2->data=8;
    n3->next=n4;
    n3->data=3;
    n4->next=NULL;
    n4->data=12;

    Node *head=n1;
    head1=n1;

    push_back(&n1,100);
    push_back(&n1,200);

    pop_front_updated(&n1);

    while(n1)
    {
        printf("%ld ",n1->data);
        n1=n1->next;
    }
    printf("---------\n");
    print_ll(head);
}