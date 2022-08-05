#include <stdio.h>
#include <stdint.h>

#ifndef __BITMASK_H__

#define __BITMASK_H__

void setbit(uint32_t *mask, int bit);
void clearbit(uint32_t *mask, int bit);
void flipbit(uint32_t *mask, int bit);

#endif