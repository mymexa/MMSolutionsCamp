#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f =fopen("Binary_file", "w");
    if(!f)
    {
        perror("Could not open file\n");
        exit(-1);
    }

    int long arr[]={63213123123, 612313124,611115,61234556};
    fwrite(arr,sizeof(long),4,f);
    fclose(f);
}