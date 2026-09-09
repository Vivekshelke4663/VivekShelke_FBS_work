void armstrong();
void main()
{
	armstrong();
}
armstrong()
{

	int num,i,digit=0,rem,temp,sum=0,original;
	printf("Enter number");
	scanf("%d",&num);
	original=num;
	for(temp=num;temp!=0;temp=temp/10)
	{
		digit++;
	}
	for(temp=num;temp!=0;temp=temp/10)
	{
		rem=temp%10;
		sum=sum+pow(rem,digit);
	}
		if(original==sum)
		{
			printf("Number is Armstrong");
		}
		else
		{
			printf("Number is not Armstrong");
		}
		
}