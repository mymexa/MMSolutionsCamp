#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define LAPTOPS_COUNT 30


typedef struct Laptop
{
    double weight;
    double price;
    unsigned int id;
    char label[100];
}Laptop;

char *label_list[]={"A","B","C","D"};

void init_random_laptop(Laptop *p)
{
   
    p->id=rand();
    p->price=(10000 + rand()%(500000-10000))/100.;
    p->weight=(25 + rand()%(1000-25))/100.;
    strcpy(p->label,label_list[rand()%4]);

}

int comparator(const void *p1,const void *p2)
{
    const Laptop *prod1=p1, *prod2=p2;
    double sales_diff=(prod1->price)-(prod2->price);
    if(fabs(sales_diff)>0.01)
    {
        return sales_diff;
    }
}

void print_product(Laptop *p)
{
    printf("Id: %d, Price: %.2f, Weight: %.2f, Label: %s\n",p->id, p->price, p->weight,p->label);
}

Laptop *minPriceItem(Laptop *p)
{
    qsort(p,LAPTOPS_COUNT,sizeof(Laptop),comparator);
    return p;
}

double totalLaptopWeight(Laptop *p)
{
    double total_weight;

    for(int i=0;i<LAPTOPS_COUNT;i++)
    {
        total_weight+=p->weight;
        p++;
    }

    return total_weight;
}

int main()
{
    Laptop *Laptops_count;
    Laptops_count=malloc(LAPTOPS_COUNT*sizeof(Laptop));
    if(!Laptops_count)
    {
        perror("Malloc Failed");
        return -1;
    }
    srand(100);

    for(int i=0;i<LAPTOPS_COUNT;i++)
    {
        init_random_laptop(Laptops_count+i);
    }

    for(int i=0;i<LAPTOPS_COUNT;i++)
    {
        print_product(Laptops_count+i);
    }

    
    printf("----------------------\n");
    printf("The cheapest laptop is: ");
    print_product(minPriceItem(Laptops_count));
    printf("Total weight of all laptops is:");
    printf("%.2f\n",totalLaptopWeight(Laptops_count));

    free(Laptops_count);
}   