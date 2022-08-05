#include <stdio.h>
#include <string.h>

int main(int argc, char **argp)
{
    FILE *f =fopen(argp[1],"r");

    char world[10];
    scanf("%s", world);
    int n=strlen(world);
    char world2[n];
    int counter=0;
    int result;
    int cur_sym;
    while((world2[n-1]!=EOF))
    {
        for(int i=0;i<n;i++)
        {
            world2[i]=fgetc(f);
        }
        if(world2[n-1]==EOF){
            break;
        }
        world2[n]='\0';
        printf("%s\n", world2);
        fseek(f,-(n-1),SEEK_CUR);
        result=strcmp(world,world2);
        if(result ==0)
        {
            counter++;
        }
    }

    printf("COUNTER:%d\n", counter);
    
    fclose(f);

    return 0;
}