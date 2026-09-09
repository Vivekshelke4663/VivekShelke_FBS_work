void sumoffirsttolast(int);
void main()
{
	int num;
	printf("Enter the number: ");
    scanf("%d", &num);
    sumoffirsttolast(num);
}
sumoffirsttolast(int num)
{
    int first, last;

    last = num % 10;

    while(num >= 10)
    {
        num = num / 10;
    }

    first = num;

    printf("Sum of first and last digit = %d", first + last);
}