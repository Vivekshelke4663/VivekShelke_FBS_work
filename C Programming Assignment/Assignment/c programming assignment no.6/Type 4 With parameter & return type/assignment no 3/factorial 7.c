int fact(int);
void main()
{
    int n;
	printf("Enter a number: ");
    scanf("%d", &n);
	int x=fact(n);
	printf("The factorial number is %d", x);
}
int fact(int n)
{
	int num = 1, fact = 1;
	while(num <= n)
    {
        fact = fact * num;
        num = num + 1;
    }
    return fact;
}