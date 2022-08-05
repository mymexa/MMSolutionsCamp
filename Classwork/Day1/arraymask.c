#include <stdio.h> 
#include <stdint.h>
#include <stdlib.h> 

void print_mask(uint32_t *mask);

int main()
{
    uint32_t mask[10];
    print_mask(&mask[10]);
    printf("\n%lu\n", sizeof(mask));

}

void print_mask(uint32_t *mask)
{
    int i=0, j=0;
    int n = sizeof(*mask)*__CHAR_BIT__;
    size_t index = sizeof(mask);
    //printf("\n%d\n",index);
    printf("\n%d\n",n);
    for (j=index-1;j>=0;j--)
    {
    for (i=n; i>0;i--)
    {
        printf("%llu", !! mask[j] & (1ull<<i));
    }
    }
}
