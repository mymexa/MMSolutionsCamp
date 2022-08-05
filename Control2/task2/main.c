#include "comparators.h"

int main()
{
    randinit();
    int arr[COUNT];

    printf("\nRandom array:\n");

    for(int i=0; i<COUNT;i++)
    {
        arr[i]=randint(MIN,MAX);
        printf("%d ", arr[i]);
    }

    qsort(arr,COUNT,sizeof(*arr),compareUp);

    printf("\nSorted ascending:\n");

    for(int i=0; i<COUNT;i++)
    {
        printf("%d ", arr[i]);
    }

    qsort(arr,COUNT,sizeof(*arr),compareDown);

    printf("\nSorted descending:\n");

    for(int i=0; i<COUNT;i++)
    {
        printf("%d ", arr[i]);
    }

    qsort(arr,COUNT,sizeof(*arr),compareABS);

    printf("\nSorted absoulutely:\n");

    for(int i=0; i<COUNT;i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

}  

//gcc main.c comparators.c -D COUNT=5 -D MIN=-50 -D MAX=50 -std=c99 -o out