#include <stdio.h>

double sum(double num1,double num2)
{
    return num1+num2;
}

double sub(double num1,double num2)
{
    return num1-num2;
}


double mult(double num1,double num2)
{
    return num1*num2;
}

double div(double num1,double num2)
{
    return num1/num2;
}

int main()
{

    

    double (*calcFun)(double,double);

    double (*calFunArray[4])(double, double)={sum,sub,mult,div};
    printf("%.2lf\n", calcFun(5.1,3.7));
    calcFun = sum;

    printf("%.2lf\n", calcFun(5.1,3.7));
}