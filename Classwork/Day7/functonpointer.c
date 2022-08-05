#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 10

int compareint1(const void *num1, const void *num2)
{
    return (*(int*)num1-*(int*)num2) ; //if((*(int*)num1-*(int*)num2)<0*(-1));
}

int main()

{
    int numbers[COUNT];

    srand(time(NULL));
    
    for (int i=0;i<10;i++)
    {
        numbers[i]=rand()%-100;
    }

    for (int i=0;i<10;i++)
    {
        printf("%d\n", numbers[i]);
    }


    qsort(numbers,COUNT,sizeof(numbers[0]),compareint1);
    for (int i=0; i<COUNT;i++)
    {
        printf("%d\n", numbers[i]);
    }











}