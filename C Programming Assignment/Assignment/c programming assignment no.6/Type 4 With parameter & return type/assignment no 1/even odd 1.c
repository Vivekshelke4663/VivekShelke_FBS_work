int evenodd(int);
void main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	int x=evenodd(num);
	if(x==0)
		printf("\n The given number is even");
	else
		printf("The given number is odd");	
}
int evenodd(int num)
{

	if (num%2==0)
		return 0;	
	else
		return 1;	
	
}