#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef struct Product
{
    unsigned int id;
    float price;
    unsigned short sales_count;
    char name[10];
}Product;

char *names_list[]={"Product1","Product2","Product3","Product4","Product5"};

void init_random_product(Product *p)
{
    static int id_counter=0;
    p->id=id_counter++;

    p->price=(150 + rand()%(20025-150))/100.;
    p->sales_count=rand()%1000;
    strcpy(p->name,names_list[rand()%5]);

}

void print_product(Product *p)
{
    printf("Revenue: %f, id: %d, price: %f, Sales_count: %d, Names: %s\n",p->price*p->sales_count, p->id,p->price,p->sales_count,p->name);
}

int comparator(const void *p1,const void *p2)
{
    const Product *prod1=p1, *prod2=p2;
    double sales_diff=prod1->price*prod1->sales_count-prod2->price*prod2->sales_count;
    if(fabs(sales_diff)>0.01)
    {
        return sales_diff;
    }

    int cmp_res=strcmp(prod1->name,prod2->name);
    if(cmp_res!=0)
    {
        return cmp_res;
    }

    return prod1->id-prod2->id;
}

int main()
{
    Product *product_list;
    product_list=malloc(30*sizeof(Product));
    if(!product_list)
    {
        perror("Malloc Failed");
        return -1;
    }
    srand(100);

    for(int i=0;i<30;i++)
    {
        init_random_product(product_list+i);
    }

    for(int i=0;i<30;i++)
    {
        print_product(product_list+i);
    }

    product_list[0].price=0;
    product_list[1].price=0;
    product_list[2].price=0;
    product_list[3].price=0;
    product_list[4].price=0;

    qsort(product_list,30,sizeof(Product),comparator);

    printf("-------------------\n");

    for(int i=0;i<30;i++)
    {
        print_product(product_list+i);
    }

    free(product_list);
}