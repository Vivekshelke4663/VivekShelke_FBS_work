int palindrome();
void main()
{
 	int x=palindrome();
 	if(x==0)
 	{
 		printf("The number is palindrome");
	}
	else
	{
		printf("The number is not palindrome");
	}
}
int palindrome()
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
			return 0;
		}
		else
		{
			return 1;
		}
    }
	else
    {
        printf("Please enter a 3-digit number.");
    }
	
}