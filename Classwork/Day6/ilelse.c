#include <stdio.h>

#define OS 1

int main()
{

#if OS==1
    printf("Hello Linux");

#elif OS==2
    printf("Hello Windows");

#else
    printf("Hello macOS");

#endif

}