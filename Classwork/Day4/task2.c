#include <stdio.h>

int main()
{
    int num = 20;
    int *p=&num;
    int num2=50;

    printf("%p\n",p);
    printf("%p\n",p+1);

    printf("%p\n",&num2);

    printf("%d\n",*p);
    printf("%d\n",*(p+1));

    printf("%ld\n", sizeof(p));
}