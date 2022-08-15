#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    unsigned char buffer[10];
    FILE *ptr;

    int counter = 0;
    int total_counter = 0;

    for (int i = 1; i < argc; i++)
    {
        ptr = fopen(argv[i], "rb");
        if (ptr == NULL)
        {
            printf("%s not exists!\n", argv[i]);
        }
        else
        {
            fread(buffer, sizeof(buffer), 1, ptr);
            for (int i = 0; i < 32; i++)
            {
                if (!!(buffer[0] & 1ull << i))
                {
                    counter++;
                }
            }
            printf("%s - %d\n", argv[i], counter);
        }
        total_counter += counter;
        counter = 0;
        ptr++;
    }

    printf("Total sum - %d\n", total_counter);
}