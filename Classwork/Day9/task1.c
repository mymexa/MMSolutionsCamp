#include <stdio.h>

size_t mystrlen(const char *str)
{
    size_t cnt=0;
    while(str[cnt]!='\0')
    {
        cnt++;
    }
    return cnt;
}

int main()
{


const char str[]="Hello";
printf("%lu\n", mystrlen(str));

char name[101];
fgets(name, 100, stdin);
printf("%s\n", name);


}