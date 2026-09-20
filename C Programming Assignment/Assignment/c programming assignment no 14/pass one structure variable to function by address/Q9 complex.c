#include <stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
} complex;

void complexStore(complex *c);
void complexDisplay(complex *c);

void main()
{
    complex c;
    printf("Enter Complex Number\n");
    complexStore(&c);
    printf("\nDisplay Complex Number\n");
    complexDisplay(&c);
}

void complexStore(complex *c)
{
    printf("Enter Real Part: ");
    scanf("%d", &c->real);

    printf("Enter Imaginary Part: ");
    scanf("%d", &c->imaginary);
}

void complexDisplay(complex *c)
{
    printf("\nComplex Number = %d + %di",
           c->real,
           c->imaginary);
}