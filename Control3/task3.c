#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef struct Product
{
    double old_price;
    double new_price;
    unsigned int id;
    char product_type;
    char product_name[4];
}Product;

char *names_list[]={"kola","pile","koza","reka","voda"};
char *type_list[]={"A","B","C","D"};

void init_random_product(Product *p)
{
    static int id_counter=0;
    p->id=id_counter++;

    p->old_price=(150 + rand()%(20025-150))/100.;
    p->new_price=(150 + rand()%(20025-150))/100.;
    p->product_type=*type_list[rand()%4];
    strcpy(p->product_name,names_list[rand()%5]);

}

void print_product(Product *p)
{
    printf("Id: %d, Old price: %.2f, New price: %.2f, Product Type: %c, Names: %s\n",p->id, p->old_price, p->new_price,p->product_type, p->product_name);
}

int comparator(const void *p1,const void *p2)
{
    const Product *prod1=p1, *prod2=p2;
    double sales_diff=(prod1->old_price-prod1->new_price)-(prod2->old_price-prod2->new_price);
    if(fabs(sales_diff)>0.01)
    {
        return sales_diff;
    }

    int cmp_res=strcmp(prod1->product_name,prod2->product_name);
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

    product_list[0].new_price=0;
    product_list[1].new_price=0;
    product_list[2].new_price=0;
    product_list[3].new_price=0;
    product_list[4].new_price=0;
    product_list[0].old_price=0;
    product_list[1].old_price=0;
    product_list[2].old_price=0;
    product_list[3].old_price=0;
    product_list[4].old_price=0;




    qsort(product_list,30,sizeof(Product),comparator);

    printf("-------------------\n");

    for(int i=0;i<30;i++)
    {
        print_product(product_list+i);
    }

    free(product_list);
}