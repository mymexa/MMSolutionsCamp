#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    double grade;
    unsigned int courses_taken;
    char name[7];
    unsigned char age;
} Student;

int main()
{
    FILE *f = fopen("binary_structs", "rb");
    Student students[5];

    fread(students, sizeof(Student),5,f);
    for(int i =0; i<5;i++)
    {
        printf("%lf %u %s %d \n", students[i]);
    }
    fclose(f);

    return 0;
}