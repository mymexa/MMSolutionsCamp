#include <stdio.h>

#define PI 3.14
#define THIS 6
#define SUM(x,y) ((x)+(y))
#define MULT(x,y) ((x)*(y))
#define MAX(x,y) (x>y?x:y)
#define FORI(start,end,step)  for(int j=start; j <=end; j+=step)
#define MAX4(a,b,c,d) MAX(MAX(a,b),MAX(c,d))
#define CIRCLEAREA(r)= (PI*(r)*(r))

#define PRINTNAME(name) printf("Name is %s", #name);
#define PRININT(num) printf("\n\n %s %d", #num,num);
#define PRINTNUM(n) printf("\n\n  %d", num##n);


int main()
{
    int i=0;

    for(i=0;i<THIS;i++)
    {
        printf("%d", i);
    }

    int arr[THIS];
    printf("\n----%lu",sizeof(arr));

    int result = SUM(10,20);
    printf("%d", result);

    int mult = MULT(10,20);
    printf("%d", mult);

    int max=MAX(4,44);
    printf("\n%d", max);


    FORI(1,100,2)
    {
        printf("%d",j);
    }

    PRINTNAME("Gosho");

    int number=100;
    PRININT(number);

    int num1=20,num2=30,num3=30,num4=40;

    PRINTNUM(2);

  
}