#include <stdio.h>
#include <stdlib.h>

typedef struct Pixel_Data
{

    int R,G,B;

} Pixel_Data;

typedef struct PPM_Image_Buffer
{

    Pixel_Data *data;
    int rown, coln,max_colour;
    int image_size;

} PPM_Image_Buffer;