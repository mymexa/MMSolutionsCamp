#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Product
{
    unsigned int id;
    float price;
    unsigned short sales_count;
    char name[10];
}Product;

void create_product(Product *p,int i)
{
    char names_list[5]={"Kola","Kolelo","Trotinetka","Karavana","Bus"};
    srand(100);
    Product *new_product=malloc(sizeof(Product));
    new_product->id=i;
    new_product->price=rand()%200;
    new_product->sales_count=rand()%1000;
    strcpy(new_product->name,names_list[rand()%4]);

}

int main()
{

    Product p;

    for(int i=0;i<30;i++)
    {
        create_product(&p,i);
    }



    return 0;
}