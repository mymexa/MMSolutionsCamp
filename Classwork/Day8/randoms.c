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

double randreal(double min, double max)
{
    return min + (rand()/RAND_MAX);
}