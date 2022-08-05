#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>

size_t onesCount(size_t count, ...);

int main()
{

    onesCount(4, 0x0a, 0, 1, 2);

}

size_t onesCount(size_t count, ...)
{
    int n=0,i=0,j=0,counterones=0;
    va_list args;
    va_start(args, count);
    
    for(i=0; i<count; i++)
    {
        n=sizeof(va_arg(args,int))*__CHAR_BIT__;
        for(j=0;j<n;j++)
        {
            if(va_arg(args,int) & (1 << j))
            {
                counterones+=1;
                printf("\n%d", counterones);
            }
        }
    }

    va_end(args);

    return count;
}