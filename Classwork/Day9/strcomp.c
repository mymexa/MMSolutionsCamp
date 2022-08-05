#include <stdio.h>

int strcmp(char str1[],char str2[])
{
    size_t n=0;
    while(*(str1+n)!='\0' || *(str2+n)!='\0')
        if((*(str1+n)-*(str2+n))==0 || *(str1+n)-*(str2+n)==32 || *(str1+n)-*(str2+n)==-32 )
        {
            n++;
        }
        else
        {
        return (*(str1+n)-*(str2+n));
        }
}

int main ()
{
    char arr1[100];
    char arr2[100];
    //fgets(arr1,100,stdin);
    //fgets(arr2,100,stdin);
    scanf("%s",arr1);
    scanf("%s",arr2);
    printf("%d\n",strcmp(arr1,arr2));
}