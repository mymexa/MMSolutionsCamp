#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void randinit(void)
{
    srand(time(NULL));
}

int randint(int min, int max)
{
    return min+rand()%(max-min+1);

}

int compareUp(const void *num1, const void *num2)
{
  
    return *(int*)num1-*(int*)num2;
}

int compareDown(const void *num1, const void *num2)
{
  
    return *(int*)num2-*(int*)num1;
}

int compareABS(const void *num1, const void *num2)
{
    if((*(int*)num1-*(int*)num2)<0)
    {
        return ((*(int*)num1-*(int*)num2))*(-1);
    }
    else
    {
        return (*(int*)num1-*(int*)num2);
    }
}

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

//gcc task1.c -D COUNT=5 -D MIN=10 -D MAX=100 -std=c99 -o task1