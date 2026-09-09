void palindrome(int);
void main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	palindrome(num);
	
}
void palindrome(int num)
{

	int first,last;
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

    return 0;
	
}