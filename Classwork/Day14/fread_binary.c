#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("Binary_file", "rb");
    if(!f)
    {
        perror("Could not open file\n");
        exit(-1);
    }
    int long arr[4];
    fread(arr,sizeof(long),4,f);

    fprintf(stdout,"%ld %ld %ld %ld", arr[0],arr[1],arr[2],arr[3]);
    fclose(f);
}   