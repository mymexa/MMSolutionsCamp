#include <stdio.h>

int main(int argc, char *argp[])
{
    FILE *f= fopen(argp[1],"r");

    int cur_sym;
    
    

    while((cur_sym=fgetc(f)) !=EOF)
    {
    printf("%c\n", cur_sym);
    }

    printf("%ld\n", ftell(f));

    return 0;
}