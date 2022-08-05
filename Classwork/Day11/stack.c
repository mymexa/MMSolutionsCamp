#include <stdio.h> 
#include <stdlib.h>

typedef struct MyStack
{
    int *stack_arr;
    int elem_count;
    int max_elem_count;
} MyStack;

void push(MyStack *stack_p,int new_elem)
{
    if(stack_p->elem_count==stack_p->max_elem_count)
    {
        perror("Push:Stack is full");
    }
    stack_p->stack_arr[stack_p->elem_count]=new_elem;
    stack_p->elem_count++;
}

void pop(MyStack *stack_p)
{
    
}



void printStack(MyStack *stack_p)
{
    for(int i=0;i<stack_p->elem_count;i++)
    {
        printf("%d ,",stack_p->stack_arr[i]);
    }
    printf("\n");
}

MyStack create_stack(int max_elem_count)
{
    MyStack mystack;
    mystack.elem_count=0;
    mystack.max_elem_count=max_elem_count;
    mystack.stack_arr=malloc(max_elem_count*sizeof(int));
    if(mystack.stack_arr==NULL)
    {
        perror("Stack creation:Malloc failed\n");
        exit(-1);
    }
    return mystack;
}

MyStack* create_stack_dynamic(int max_elem_count)
{
    MyStack* mystack=malloc(sizeof(MyStack));
    if(!mystack)
    {
        perror("Stack creation:Malloc failed\n");
        exit(-1);
    }
    mystack->elem_count=0;
    mystack->max_elem_count=max_elem_count;

}   


int main()
{
    MyStack mystack = create_stack(250);
    push(&mystack,10);
    push(&mystack,20);
    push(&mystack,30);

    printStack(&mystack);
    free(mystack.stack_arr);
}