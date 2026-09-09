#include <stdio.h>

typedef struct HR
{
    int id;
    char name[20];
    float salary;
    float commission;
} hr;

void hrStore(hr *h);
void hrDisplay(hr *h);

void main()
{
    hr h;

    printf("Enter HR Details\n");

    hrStore(&h);

    printf("\nDisplay HR Details\n");

    hrDisplay(&h);
}

void hrStore(hr *h)
{
    printf("Enter HR id: ");
    scanf("%d", &h->id);

    printf("Enter HR name: ");
    scanf("%s", h->name);

    printf("Enter HR salary: ");
    scanf("%f", &h->salary);

    printf("Enter HR commission: ");
    scanf("%f", &h->commission);
}

void hrDisplay(hr *h)
{
    printf("\nID = %d", h->id);
    printf("\nName = %s", h->name);
    printf("\nSalary = %.2f", h->salary);
    printf("\nCommission = %.2f", h->commission);
}