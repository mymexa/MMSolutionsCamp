#include <stdio.h>

void encodeNumber(char* str);

int main()
{
    char str[500]="102691";
    //scanf("%s", str);
    int arr[10]={'!','#','/','~','`','=','\\','>','.',','};
    encodeNumber(str);
    printf("%c",arr[(str[3])]);

    for(int i=0;i<6;i++)
    {
    printf("%c",str[i]);
    printf("%c",arr[str[3]]);
    }
    

}

void encodeNumber(char* str)
{
    int i=0,j=1,l=0;
    int arr[6]={'!','#','/','~',',','='};
    char c;

    while(str[i]!='\0')
    {
            
            //str[i]+=17;
            
            printf("%c",arr[(str[i])]);
            i++;
            
    }
        
}
    




