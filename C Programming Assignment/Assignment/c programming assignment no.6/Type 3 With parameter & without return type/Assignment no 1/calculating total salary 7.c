void salary(double);
void main()
{
	double bs;
	printf("Enter the basic salary: ");
    scanf("%lf", &bs);
    salary(bs);
}
void salary(double bs)
{
    double da, ta, hra, total;

    
    if (bs <= 5000)
    {
        da = bs * 0.10;
        ta = bs * 0.20;
        hra = bs * 0.25;
    }
    else
    {
        da = bs * 0.15;
        ta = bs * 0.25;
        hra = bs * 0.30;
    }

    total = bs + da + ta + hra;

    printf("\nBasic Salary = %.2lf", bs);
    printf("\nDA = %.2lf", da);
    printf("\nTA = %.2lf", ta);
    printf("\nHRA = %.2lf", hra);
    printf("\nTotal Salary = %.2lf", total);

   
}