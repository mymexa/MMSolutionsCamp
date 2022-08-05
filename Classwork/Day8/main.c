#include <stdio.h>
#include <stdint.h>
#include "bitmask.h"

int main()
{
    uint32_t mask = 0;
    setbit(&mask,3);
    printf("\n%d\n",mask);

    clearbit(&mask,3);
    printf("\n%d\n",mask);
    flipbit(&mask,3);
    printf("\n%d\n",mask);
    
}