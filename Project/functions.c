#include "image.h"

int read_ppm_color_bitmap(char *filename, PPM_Image_Buffer *buf)
{

    FILE *pic = fopen(filename, "rb");

    fscanf(pic, "P3\n %d %d %d", &buf->rown, &buf->coln, &buf->max_colour);

    buf->data = (Pixel_Data *)malloc(buf->rown * buf->coln * sizeof(Pixel_Data));
    for (int i = 0; i < buf->rown * buf->coln; i++)
    {
        fscanf(pic, "%d %d %d", &buf->data[i].R, &buf->data[i].G, &buf->data[i].B);
    }

    fclose(pic);
}

int write_ppm_color_bitmap(char *filename, PPM_Image_Buffer *buf)
{
    FILE *pic = fopen(filename, "wb");

    fprintf(pic, "P3\n%d %d\n%d\n", buf->rown, buf->coln, buf->max_colour);

    for (int i = 0; i < buf->rown * buf->coln; i++)
    {
        fprintf(pic, "%d %d %d ", buf->data[i].R, buf->data[i].G, buf->data[i].B);
    }

    fclose(pic);
}



void filter_color_component(PPM_Image_Buffer *img,int a)
{
    for (int i = 0; i < (img->coln * img->rown); i++)
    {
        switch(a)
        {
            case 49:
            img->data[i].G=0;
            img->data[i].B=0;
            break;
            case 50:
            img->data[i].R=0;
            img->data[i].B=0;
            break;
            case 51:
            img->data[i].B=0;
            break;
            case 52:
            img->data[i].R=0;
            img->data[i].G=0;
            break;
            case 53:
            img->data[i].G=0;
            break;
        }
    }
}

void convert_to_grayscale(PPM_Image_Buffer *img)
{
    for (int i = 0; i < (img->coln * img->rown); i++)
    {
        img->data[i].R = img->data[i].R * 0.3;
        img->data[i].G = img->data[i].R;
        img->data[i].B = img->data[i].R;
    }
}