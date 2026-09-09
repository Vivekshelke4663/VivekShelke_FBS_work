int basic(int);
void main()
{
	float bs,da,ta,hra,total;
	printf("Enter the basic salary:");
	scanf("%f",&bs);
	int x=basic(bs);
	if(x==0)
	{
		da=bs*0.10;
		ta=bs*0.20;
		hra=bs*0.25;
	}
	else
	{
		da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;	
	}
	total=bs+da+ta+hra;
	printf("Total salary is %f",total);
}
int basic(int bs)
{
	
	if(bs<=5000)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
	
}