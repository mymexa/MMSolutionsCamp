#include <stdio.h>
#include <string.h>

int main(int argc, char **argp)
{
    FILE *f =fopen(argp[1],"r");

    char world[5]="world";
    char world2[5];
    int counter=0;
    int result;
    int cur_sym;
    while((world2[4]!=EOF))
    {
        world2[0]=fgetc(f);
        //fseek(f,1,SEEK_CUR);
        world2[1]=fgetc(f);
        //fseek(f,1,SEEK_CUR);
        world2[2]=fgetc(f);
        //fseek(f,1,SEEK_CUR);
        world2[3]=fgetc(f);
        //fseek(f,1,SEEK_CUR);
        world2[4]=fgetc(f);
        world2[5]='\0';
        printf("%s\n", world2);
        fseek(f,-4,SEEK_CUR);
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