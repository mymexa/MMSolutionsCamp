#include <stdio.h>

int main()
{
    int option,number;
    printf("Choose an option:");
    scanf("%d", &option);

    switch (option)
    {
        case 1:
        printf("Enter decimal number:");
        scanf("%d", &number);
        printf("%d in decimal is %x in HEX\n",number,number);
        break;

        case 2:
        printf("Enter decimal number:");
        scanf("%d", &number);
        printf("%d in decimal is %o in HEX\n",number,number);
        break;

        case 3:
        printf("Enter hex number:");
        scanf("%x", &number);
        printf("%x in decimal is %d in HEX\n",number,number);
        break;

        
    }
}