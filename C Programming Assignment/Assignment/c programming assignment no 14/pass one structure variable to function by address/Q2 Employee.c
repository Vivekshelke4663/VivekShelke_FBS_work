#include <stdio.h>

typedef struct Employee
{
    int id;
    char name[20];
    float salary;
} employee;

void employeeStore(employee *e);
void employeeDisplay(employee *e);

void main()
{
    employee e;
    printf("Enter Employee Details\n");
    employeeStore(&e);
    printf("\nDisplay Employee Details\n");
    employeeDisplay(&e);
}

void employeeStore(employee *e)
{
    printf("Enter Employee id: ");
    scanf("%d", &e->id);

    printf("Enter Employee name: ");
    scanf("%s", e->name);

    printf("Enter Employee salary: ");
    scanf("%f", &e->salary);
}

void employeeDisplay(employee *e)
{
    printf("\nID = %d", e->id);
    printf("\nName = %s", e->name);
    printf("\nSalary = %.2f", e->salary);
}