void sum1sttolast();
void main()
{
	sum1sttolast();
}
sum1sttolast()
{
    int num, first, last;

    printf("Enter the number: ");
    scanf("%d", &num);

    last = num % 10;

    while(num >= 10)
    {
        num = num / 10;
    }

    first = num;

    printf("Sum of first and last digit = %d", first + last);
}