#include <stdio.h>

typedef struct product
{
    int id;
    char name[20];
    int quantity;
    float price;
} product;

void productStore(product *p);
void productDisplay(product *p);

void main()
{
    product p;
    printf("Enter Product Details\n");
    productStore(&p);
    printf("\nDisplay Product Details\n");
    productDisplay(&p);
}

void productStore(product *p)
{
    printf("Enter id: ");
    scanf("%d", &p->id);

    printf("Enter name: ");
    scanf("%s", p->name);

    printf("Enter quantity: ");
    scanf("%d", &p->quantity);

    printf("Enter price: ");
    scanf("%f", &p->price);
}

void productDisplay(product *p)
{
    printf("\nID = %d", p->id);
    printf("\nName = %s", p->name);
    printf("\nQuantity = %d", p->quantity);
    printf("\nPrice = %.2f", p->price);
}