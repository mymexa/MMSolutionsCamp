#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("Rand max: %d", RAND_MAX);
    for (int i=0;i<10;i++)
    {
        printf("%d\n", rand());
    }
}