#include <stdio.h>
#include <math.h>

int main()
{
    double r, l, h,volume,volume2,s,s2;

    printf("Input R:");
    scanf("%lf", &r);
    printf("Input H:");
    scanf("%lf", &h);
    printf("Input L:");
    scanf("%lf", &l);

    s=3.14*r*r;
    volume = s*h;
    
    s2=acos((r-h)/r)*r*r-(r-h)*sqrt(2*r*h-h*h);
    volume2=s2*l;

    printf("Volume=%lf\n",volume);
    printf("Volume2=%lf\n",volume2);
}