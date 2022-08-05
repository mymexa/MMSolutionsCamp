#include <stdio.h>
#include <stdint.h>


void mirrorBits(uint16_t *mask);
void flipOddBits(uint64_t* mask);

int main()
{


uint64_t mask1 = 0b0000000000000000000000000000000000000000000000000000000000000000;

flipOddBits(&mask1);

uint16_t mask = 0b0011111100000011;

mirrorBits(&mask);



}

void flipOddBits(uint64_t *mask1)
{

int i=0;
    for (i = 1; i < 64; i+=2) 
    {
        if (*mask1 & (1ull << i))
        {
            *mask1 = *mask1 &= ~(1ull << i);
        }
        else
        {
            *mask1 = *mask1 | (1ull<<i);
        }
    }

}

void mirrorBits(uint16_t *mask)
{
    
    int i=0;
    for (i = 0; i < 16; i++) 
    {
        if (*mask & (1 << i))
        {
            *mask = *mask &= ~(1 << i);
        }
        else
        {
            *mask = *mask | (1<<i);
        }
    }
            
}