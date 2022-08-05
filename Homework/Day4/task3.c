#include <stdio.h>
#include<math.h>

int main()
{
    int number=0,base=0,remainder=0,decimal_number=0,counter=0,convert_base;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter base to convert to:");
    scanf("%d",&convert_base);

    while(number!=0)
    {
        remainder=number%10;
        number=number/10;
        decimal_number+=remainder*(pow(base,counter));
        counter++;
    }


}