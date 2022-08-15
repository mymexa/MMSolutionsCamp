#include <stdio.h>
#include <stdlib.h>

int comparator(const void *num1, const void *num2)
{
    return *(int*)num1-*(int*)num2;
}

int main()
{
    FILE *f = fopen("nums", "r");
    if(!f)
    {
        perror("Could not open file\n");
        exit(-1);
    }
    int  arr[4];
    fread(arr,sizeof(int),4,f);

    qsort(arr,4,sizeof(int),comparator);

    fclose(f);

    FILE *ff =fopen("sorted", "w");
    if(!ff)
    {
        perror("Could not open file\n");
        exit(-1);
    }

    fwrite(arr,sizeof(int),4,ff);
    fclose(ff);
}