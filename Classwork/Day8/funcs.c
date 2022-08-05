#include <stdio.h>

typedef int(*operation_t)(int,int);

int sum(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a+b;
}

int mult(int a, int b)
{
    return a*b;
}

int div(int a, int b)
{
    return a/b;
}

/*int (*getOp(char op))(int,int)
{
    switch (op)
    {
        case '+':
        return sum;
        case '-':
        return sub;
        case '*':
        return mult;
        case '/':
        return div;
    }
}
*/


operation_t getOp(char op)
{
    switch (op)
    {
        case '+':
        return sum;
        case '-':
        return sub;
        case '*':
        return mult;
        case '/':
        return div;
    }
}
