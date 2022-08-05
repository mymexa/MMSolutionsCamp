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

int main()
{
    void *p=malloc(sizeof(int)*1000);
    int *int_pointer = (int*)p;
    int_pointer[1000];

    randinit();
    

    printf("\nRandom array:\n");

    for(int i=0; i<1000;i++)
    {
        int_pointer[i]=randint(250,500);
        printf("%d ", int_pointer[i]);
    }
    free(p);

    return 0;
}