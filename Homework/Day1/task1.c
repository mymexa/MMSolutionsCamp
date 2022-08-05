#include <stdio.h>
#include <math.h>

int main()
{
    double mass, height, bmi,bminew;

    printf("Input mass:");
    scanf("%lf", &mass);
    printf("Input height:");
    scanf("%lf", &height);

    bmi=mass/pow(height,2);
    bminew=1.3*mass/pow(height,2.5);

    printf("BMI=%lf\n",bmi);
    printf("BMInew=%lf\n",bminew);
}