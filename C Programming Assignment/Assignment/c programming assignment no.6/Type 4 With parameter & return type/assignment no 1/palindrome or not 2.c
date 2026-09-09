int palindrome(int);
int main()
{

	int num;
	printf("Enter the number");
	scanf("%d",&num);
	
	if(num >= 100 && num <= 999)
	{
		int x = palindrome(num);
		if(x == 0)
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
int palindrome(int num)
{
		int first= num/100;
		int last= num%10;
		
		if(first==last)
		{
			return 0;
		}
		else
		{
			return 1;
		}
}