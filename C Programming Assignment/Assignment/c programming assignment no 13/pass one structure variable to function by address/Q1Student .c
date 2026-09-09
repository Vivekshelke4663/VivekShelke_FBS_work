#include <stdio.h>
typedef struct student
{
    int rollno;
    char name[20];
    int marks;
} student;

void studentStore(student *s1);
void studentDisplay(student *s1);

void main()
{
    student s1;

    printf("Enter Student Details\n");

    studentStore(&s1);

    printf("\nDisplay Student Details\n");

    studentDisplay(&s1);
}

void studentStore(student *s1)
{
    printf("Enter Student Roll No: ");
    scanf("%d", &s1->rollno);

    printf("Enter Student Name: ");
    scanf("%s", s1->name);

    printf("Enter Student Marks: ");
    scanf("%d", &s1->marks);
}

void studentDisplay(student *s1)
{
    printf("\nRoll No = %d", s1->rollno);
    printf("\nName = %s", s1->name);
    printf("\nMarks = %d", s1->marks);
}