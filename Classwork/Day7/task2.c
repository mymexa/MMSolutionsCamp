#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define COUNT 10

int compareup(const void *a ,const void *b)
{
    return *(int*)a-*(int*)b;
}

int comparedown(const void *a ,const void *b)
{
    return *(int*)b-*(int*)a;
}

int main()
{

    int (*comparearray[2])(const void*, const void*)={compareup,comparedown};
    int num=0;
    scanf("%d", &num);

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

    printf("---------\n");

    qsort(numbers,COUNT,sizeof(numbers[0]),comparearray[num]);
    for (int i=0; i<COUNT;i++)
    {
        printf("%d\n", numbers[i]);
    }


}