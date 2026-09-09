#include <stdio.h>

typedef struct Admin
{
    int id;
    char name[20];
    float salary;
    float allowances;
} admin;

void adminStore(admin *a);
void adminDisplay(admin *a);

void main()
{
    admin a;
    printf("Enter Admin Details\n");
    adminStore(&a);
 	printf("\nDisplay Admin Details\n");
	adminDisplay(&a);
}
void adminStore(admin *a)
{
    printf("Enter Admin id: ");
    scanf("%d", &a->id);

    printf("Enter Admin name: ");
    scanf("%s", a->name);

    printf("Enter Salary: ");
    scanf("%f", &a->salary);

    printf("Enter Allowances: ");
    scanf("%f", &a->allowances);
}
void adminDisplay(admin *a)
{
    printf("\nID = %d", a->id);
    printf("\nName = %s", a->name);
    printf("\nSalary = %.2f", a->salary);
    printf("\nAllowances = %.2f", a->allowances);
}