int leapyear();
void main()
{
	int x=leapyear();
	if(x==0)
	{
		printf("the year is leap");
	}
	else
	{
		printf("the year is not leap year");
	}
}
int leapyear()
{
	int year ;
	printf("Enter the year");
	scanf("%d",&year);
	if(year%4 == 0 && year%100!= 0 || year%400 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}