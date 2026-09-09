int evenodd();
void main()
{
	int x=evenodd();
	if(x==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	
}
int evenodd()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if (num % 2 == 0)
	{
		 return 0;
	}
	return 1;
}