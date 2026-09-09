void main()
{
	int num;
	printf("The Enter number");
	scanf("%d",&num);
	if(num%3==0 && num%5==0)
	{
		printf("The number is divisible by 3 and 5");
	}
	else
	{
		if(num%3==0)
		{
			printf("The number is divisible by 3");
		}
		else
		{
			printf("The number is divisible by 5");
		}
	}
}