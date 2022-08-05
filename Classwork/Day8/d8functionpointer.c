#include <stdio.h>

void printValue(int num)
{
    printf("Value: %d\n", num);
}

void printHello(int count)
{
    for (int i=0; i<count;i++)
    {
        printf("hello\n");
    }

    putchar('\n');
}

int doubleIt(int num)
{
    return 2*num;
}

void map(int *arr,int len,int (*f)(int))
{
    for (int i=0;i<len;i++)
    {
        arr[i]=f(arr[i]);
    }
}

int sum(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int div(int a, int b);
int (*getOp(char op))(int,int);

typedef int(*operation_t)(int,int);



int main()
{

    //void (*funcpoint)(int);
    //funcpoint=printHello;
   //funcpoint(5);
   //funcpoint=printValue;
   //funcpoint(5);

    int arr[]={1,2,3,4,5};

    map(arr,5,doubleIt);

    for (int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }



   printf("\n%d ",getOp('*')(5,6));





    return 0;
}