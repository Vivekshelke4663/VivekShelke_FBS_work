#include <stdio.h>

typedef struct time
{
    int hour;
    int min;
    int sec;
} time;

void timeStore(time *t);
void timeDisplay(time *t);

void main()
{
    time t;
 	printf("Enter Time Details\n");
    timeStore(&t);
    printf("\nDisplay Time\n");
	timeDisplay(&t);
}

void timeStore(time *t)
{
    printf("Enter Hours: ");
    scanf("%d", &t->hour);

    printf("Enter Minutes: ");
    scanf("%d", &t->min);

    printf("Enter Seconds: ");
    scanf("%d", &t->sec);
}

void timeDisplay(time *t)
{
    printf("\nTime = %d:%d:%d", t->hour, t->min, t->sec);
}