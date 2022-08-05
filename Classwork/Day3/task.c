#include <stdio.h>

int main()
{
    double n = 1.1;
    double m = 0; 

   for(int i=0;i<11;i++)
   {
    m+=0.1;
   }

    printf("%.30f\n", n);
    printf("%.30f\n", m);

    return 0; 

}