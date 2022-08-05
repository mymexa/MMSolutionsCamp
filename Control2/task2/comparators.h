#ifndef __COMPARATORS_H__

#define __COMPARATORS_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void randinit(void);
int randint(int min, int max);
int compareUp(const void *num1, const void *num2);
int compareDown(const void *num1, const void *num2);
int compareABS(const void *num1, const void *num2);

#endif