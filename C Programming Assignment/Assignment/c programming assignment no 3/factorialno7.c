void main()
{
    int num = 1, n, fact = 1;
	printf("Enter a number: ");
    scanf("%d", &n);
	while(num <= n)
    {
        fact = fact * num;
        num = num + 1;
    }
	printf("The factorial number is %d", fact);
}