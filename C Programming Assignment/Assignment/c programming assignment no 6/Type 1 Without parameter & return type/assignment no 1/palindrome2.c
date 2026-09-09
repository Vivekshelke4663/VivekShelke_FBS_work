void palindrome();
void main()
{
	palindrome();
}
void palindrome()
{

	int num,first,last;
	printf("Enter the number");
	scanf("%d",&num);
	if(num >= 100 && num <= 999)
	{
		first= num/100;
		last= num%10;
		if(first==last)
		{
			printf("The number is palindrome");
		}
		else
		{
			printf("The number is not palindrome");
		}
    }
	else
    {
        printf("Please enter a 3-digit number.");
    }
	
}