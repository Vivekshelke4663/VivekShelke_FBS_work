void strong1ton();
void main()
{
	strong1ton();
}
strong1ton()
{
	int num,i,rem,fact=1,temp,sum=0;
	printf("Enter the Number");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		fact=1;
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;
			
		}
		sum=sum+fact;
		num=num/10;
	}
		
	
	
	if(temp==sum)
	{
		printf("The number is strong");
	}
	else
	{
		printf("The number is not strong");
	}
}
