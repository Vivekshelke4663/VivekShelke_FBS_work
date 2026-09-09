void even(int);
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	even(num);
}
void even(int num)
{
	
	if (num % 2 == 0)
	{
		 printf("The number is even");
	}
	else 
	{
		printf("The number is odd");
    }
}