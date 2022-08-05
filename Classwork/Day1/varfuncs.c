#include <stdio.h>
#include <stdarg.h>

int sum(int cnt,...);

int main()
{
    int x=sum(4, 5, 6, 7,9);
    printf("%d", x);
    int y=sum(4, 5, 6, 0,9);
    printf("\n%d", y);
}

int sum(int cnt,...)
{
    int sum=0;
    va_list args;
    va_start(args, cnt);
    int i =0;
    for(i=0; i<cnt; i++)
    {
        sum+=va_arg(args,int);
    }

    va_end(args);

    return sum;
}

int sum2(int cnt,...)
{
    
    va_list args;
    va_start(args, cnt);
    int sum2=0;
    sum2=cnt;
    int i =0;
    while (cnt==0)
    {
        sum2+=va_arg(args, int);
    }

    va_end(args);

    return sum2;
}