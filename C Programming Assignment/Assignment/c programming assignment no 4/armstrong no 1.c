void main()
{
	int num,i,j,digit,rem,temp,sum,original,power;

	printf("Enter the number: ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		original=i;
		digit=0;
		sum=0;
		for(temp=i;temp!=0;temp=temp/10)
		{
			digit++;
		}
		for(temp=i;temp!=0;temp=temp/10)
		{
			rem=temp%10;

			power=1;
			for(j=1;j<=digit;j++)
			{
				power=power*rem;
			}

			sum=sum+power;
		}

		if(original==sum)
		{
			printf("%d ",original);
		}
	}
}