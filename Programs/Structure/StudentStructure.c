/*
    Create a structure name 'Student' with members age, roll, name and marks. Create a user defined function to read and display student info
    of 10 students.
*/
#include <stdio.h>
struct Student
{

    int age, roll;
    char name[20];
    float marks;
}s[10];

void ReadStudentInfo();
void DisplayStudentInfo();
void main()
{   
    ReadStudentInfo(); 
    DisplayStudentInfo();  
}

void ReadStudentInfo()
{
    int i;
    for (i = 0; i <= 1; i++)
    {
        printf("Enter the information of student: %d\n", i + 1);

        printf("Enter roll:");
        scanf("%d", &s[i].roll);

        printf("Enter name:");
        scanf("%s", &s[i].name);

        printf("Enter age:");
        scanf("%d", &s[i].age);

        printf("Enter marks:");
        scanf("%f", &s[i].marks);
    }
}
void DisplayStudentInfo()
{
    int i;
    printf("\nStudent Details: \n");
    printf("Name\t\tAge\tRoll\tMarks\n");
    printf("==============================================\n");
    for (i = 0; i <= 1; i++)
    {
        printf("%s\t\t%d\t%d\t%f", s[i].name, s[i].age, s[i].roll, s[i].marks);
        printf("\n----------------------------------------------\n");
    }
}