#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

void dateStore(date *d);
void dateDisplay(date *d);

void main()
{
    date d;
    printf("Enter Date Details\n");
    dateStore(&d);
    printf("\nDisplay Date\n");
    dateDisplay(&d);
}

void dateStore(date *d)
{
    printf("Enter Day: ");
    scanf("%d", &d->day);

    printf("Enter Month: ");
    scanf("%d", &d->month);

    printf("Enter Year: ");
    scanf("%d", &d->year);
}

void dateDisplay(date *d)
{
    printf("\nDate = %d:%d:%d", d->day, d->month, d->year);
}