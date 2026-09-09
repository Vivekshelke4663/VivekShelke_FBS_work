void prime1ton();
void main()
{
	prime1ton();
}
prime1ton()
{
	int i,flag=0,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		
			flag=1;
		}
		}
		if(flag==0)
		{
			printf("The number is prime");
		}
		else
		{
			printf("The number is not prime");
		}
	
}