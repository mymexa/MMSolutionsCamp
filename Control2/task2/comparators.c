#include "comparators.h"

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
