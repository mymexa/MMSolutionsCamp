#include <stdio.h>
#include <stdint.h>

struct Point
{
    char name[99];
    char name2[100];
    int x;
    double y;

};

struct Bitfield
{
    uint8_t u:3;
    uint8_t g:3;
    uint8_t o:3;
};

union myunion
{
    uint16_t num ;
    uint8_t num2[2];
};

int main()
{
    struct Point p1;
    printf("%lu\n",sizeof(p1));

     struct Bitfield bit;
    printf("%lu\n",sizeof(bit));

    union myunion u1;
    u1.num = 0xabcd;
    printf("%x,%x", u1.num2[0],u1.num2[1]);
}