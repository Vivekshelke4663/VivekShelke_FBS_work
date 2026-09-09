#include <stdio.h>

typedef struct distance
{
    int inch;
    int feet;
} dist;

void distanceStore(dist *d);
void distanceDisplay(dist *d);

void main()
{
    dist d;

    printf("Enter Distance Details\n");

    distanceStore(&d);

    printf("\nDisplay Distance\n");

    distanceDisplay(&d);
}

void distanceStore(dist *d)
{
    printf("Enter Feet: ");
    scanf("%d", &d->feet);

    printf("Enter Inch: ");
    scanf("%d", &d->inch);
}

void distanceDisplay(dist *d)
{
    printf("\nDistance = %d Feet %d Inch", d->feet, d->inch);
}