#include "functions.h"
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    PPM_Image_Buffer buf;
    read_ppm_color_bitmap(argv[1], &buf);
    if(*argv[3]=='g')
    {
        convert_to_grayscale(&buf);
    }
    else if(*argv[3]=='f')
    {
    int a=*argv[4];
    printf("%d",a);    
    filter_color_component(&buf,a);
    }
    write_ppm_color_bitmap(argv[2], &buf);

    return 0;
}