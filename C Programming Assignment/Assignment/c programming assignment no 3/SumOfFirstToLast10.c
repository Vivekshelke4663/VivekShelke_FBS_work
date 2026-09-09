void main()
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
    int x=first + last;

    printf("Sum of first and last digit = %d",x);
}