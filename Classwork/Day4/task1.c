#include <stdio.h>
#include <stdint.h>

void set_attendance(uint64_t *attendance);
void clear_attendance(uint64_t *attendance);
void check_attendance(uint64_t attendance);

int main(void)
{
    uint64_t attendance = 8;
    int option;
    
    
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
        while(1)
        {
        scanf("%d", &option);
        if (1 == option)
        {
             set_attendance(&attendance);
             
        }
        else if (2 == option)
        {
            clear_attendance(&attendance);
        }
        else if (3 == option)
        {
           check_attendance(attendance);
        }
        else if (4 == option)
        {

        }
        else if (5 == option)
        {
            printf("Attendance logged, exit program\n");
            break;
        }
        printf("\n1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
        }
    //printf("%d\n", !! (attendance & 1ull<<bit ));
    printf("\n%lu\n", attendance);
    //printf("%d", bit);

    return 0;
}


void set_attendance(uint64_t *attendance)
{
    int bit=0;
    printf("Choose student number that attends from 1-64, for all press 65\n");
    scanf("%d", &bit);
    if(bit==65)
    {
        bit=0;
        for(int i=0;i<65;i++)
        {
           *attendance = *attendance  | (1ull<<bit);
            bit++;
        }
    }
    else
    {
    *attendance = *attendance  | (1ull<<bit);
    }

}

void clear_attendance(uint64_t *attendance)
{
    int bit=0;
    printf("Choose student number that attends from 1-64, for all press 65\n");
    scanf("%d", &bit);
    if(bit==65)
    {
        bit=0;
        for(int i=0;i<65;i++)
        {
           *attendance = *attendance  & ~(1<<bit);
            bit++;
        }
    }
    else
    {
    *attendance = *attendance  & ~(1<<bit);
    }

}

void check_attendance(uint64_t attendance)
{
    printf("For attendance press 1, for absence press 0, for all press 65\n");
    int opt=0;
    scanf("%d", &opt);
    switch (opt)
    {
        case 65:
        for(int i=64;i>0;i--)
        {
          printf("%d",   !! (attendance & 1ull<<i ));
          
        }
        break;

        case 1:
        for(int i=64;i>0;i--)
        {
            if(!!(attendance & 1ull<<i)==1)
            {
                printf("Student %d  - %d\n",i ,   !! (attendance & 1ull<<i ));
                
            }
           
        }
         break;

        case 0:
        for(int i=64;i>0;i--)
        {
            if(!!(attendance & 1ull<<i)==0)
            {
                printf("Student %d  - %d\n",i ,   !! (attendance & 1ull<<i ));
            }
          
        }
    }
    
}