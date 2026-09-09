int firsttolast(int);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int x=firsttolast(num);
	printf("Sum of first and last digit = %d", x);
}
int firsttolast(int num)
{
	int first, last;
	
    last = num % 10;

    while(num >= 10)
    {
        num = num / 10;
    }

    first = num;
    int x=first + last;
    return x;
}