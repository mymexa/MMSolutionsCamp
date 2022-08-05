#include <stdio.h>
#include <stdint.h>

int main()
{
    int a = 20, b = 18, c=a^b;
    int d = a<<29;

    printf("%d\n",~c);
    printf("%d\n",~d);

    uint16_t mask;

    int bit = 1;

    printf("%d\n", (mask |= (1<<bit)));


}