#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *arr=malloc(sizeof(int)*1000);
    arr=realloc(arr,5000*sizeof(int));
    srand(100);
    for(int i=0;i<1000;i++)
    {
        arr[i]=250 + rand()%501;
    }
    int res=0;
    for(int *p=arr;p<arr+1000;p++)
    {
        if(*p==500)
        {
            res++;
        }
    }
    printf("%d\n",res);

    free(arr);

    return 0;
}