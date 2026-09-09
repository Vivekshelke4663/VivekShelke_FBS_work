void fact(int);
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
	fact(n);
}
void fact(int n)
{
    int num = 1, fact = 1;

    while(num <= n)
    {
        fact = fact * num;
        num = num + 1;
    }

    printf("The factorial number is %d", fact);
}