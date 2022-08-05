#include <stdio.h>

int main()
{
    FILE *f = fopen("HelloWorld","w+");

    fputs("Hello World", f);

    fclose(f);

    return 0;
}