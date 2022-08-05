#include <stdio.h>
#include <stdint.h>

void setbit(uint32_t *mask, int bit)
{
    *mask |= (1ull<<(bit));
}

void clearbit(uint32_t *mask, int bit)
{
    *mask &= ~(1ull<<(bit));
}

void flipbit(uint32_t *mask, int bit)
{
    *mask ^= (1ull<<(bit));
}
