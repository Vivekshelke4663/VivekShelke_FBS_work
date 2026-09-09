void main()
{
    float a,b,c;

    printf("Enter the first side\n");
    scanf("%f",&a);

    printf("Enter the second side\n");
    scanf("%f",&b);

    printf("Enter third side\n");
    scanf("%f",&c);

    if(a==b && b==c)
    {
        printf("The triangle is Equilateral");
    }
    else if(a==b || b==c || a==c)
    {
        printf("The triangle is Isosceles");
    }
    else
    {
        printf("The triangle is Scalene");
    }
}