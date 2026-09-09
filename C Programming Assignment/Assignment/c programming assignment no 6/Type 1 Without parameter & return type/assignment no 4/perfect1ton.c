void perfect1ton();
void main()
{
	perfect1ton();
}
perfect1ton()
{
	int n,i,sum=0,temp,rem;
	printf("Enter any number");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}	
	}
	if(sum==n)
	{
		printf("The number is perfact");
	}
	else
	{
		printf("The number is not perfact");
	}
}