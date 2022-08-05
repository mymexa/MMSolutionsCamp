#include <stdio.h>
#include "randoms.h"

#define COUNT 5

int compare(const void *num1, const void *num2)
{
  
    return *(int*)num1-*(int*)num2;
}

int main()
{
    randinit();
    int arr[COUNT];

    for(int i=0; i<COUNT;i++)
    {
        arr[i]=randint(10,100);
    }

    for(int i=0; i<COUNT;i++)
    {
        printf("%d ", arr[i]);
    }

    qsort(arr,COUNT,sizeof(*arr),compare);

    printf("\n");

    for(int i=0; i<COUNT;i++)
    {
        printf("%d ", arr[i]);
    }
}