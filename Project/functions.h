#include "image.h"

int read_ppm_color_bitmap(char *filename, PPM_Image_Buffer *buf);
int write_ppm_color_bitmap(char *filename, PPM_Image_Buffer *buf);
void filter_color_component(PPM_Image_Buffer *img,int a);
void convert_to_grayscale(PPM_Image_Buffer *img);