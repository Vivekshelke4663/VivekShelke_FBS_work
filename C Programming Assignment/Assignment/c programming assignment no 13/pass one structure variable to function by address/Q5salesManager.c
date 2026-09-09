#include <stdio.h>

typedef struct salesManager
{
    int id;
    char name[20];
    float salary;
    float incentive;
    float Target;
} SM;

void smStore(SM *s);
void smDisplay(SM *s);

void main()
{
    SM s;

    printf("Enter SalesManager Details\n");

    smStore(&s);

    printf("\nDisplay SalesManager Details\n");

    smDisplay(&s);
}

void smStore(SM *s)
{
    printf("Enter Manager ID: ");
    scanf("%d", &s->id);

    printf("Enter Manager Name: ");
    scanf("%s", s->name);

    printf("Enter Manager Salary: ");
    scanf("%f", &s->salary);

    printf("Enter Incentive: ");
    scanf("%f", &s->incentive);

    printf("Enter Target: ");
    scanf("%f", &s->Target);
}

void smDisplay(SM *s)
{
    printf("\nManager ID = %d", s->id);
    printf("\nManager Name = %s", s->name);
    printf("\nManager Salary = %.2f", s->salary);
    printf("\nIncentive = %.2f", s->incentive);
    printf("\nTarget = %.2f", s->Target);
}