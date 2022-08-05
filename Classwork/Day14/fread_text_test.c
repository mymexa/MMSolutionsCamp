#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f_ptr = fopen("test_text_file", "wb");
    if (!f_ptr)
    {
        perror("Could not open file\n");
        exit(-1);
    }
    int arr[]={500000,22,45,10};
    fwrite(arr,sizeof(int),4,f_ptr);

    fclose(f_ptr);
}