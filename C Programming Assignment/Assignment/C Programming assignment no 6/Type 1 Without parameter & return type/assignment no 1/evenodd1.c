int evenodd();
void main()
{
	evenodd();
}
evenodd()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if (num % 2 == 0)
	{
		 printf("The number is even");
	}
	else 
	{
		printf("The number is odd");
    }
}