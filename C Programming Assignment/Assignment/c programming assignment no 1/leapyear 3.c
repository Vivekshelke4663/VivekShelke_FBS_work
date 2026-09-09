void main()
{
	int year ;
	printf("Enter the year");
	scanf("%d",&year);
	if(year%4 == 0 && year%100!= 0 || year%400 == 0)
	{
		printf("the year is leap");
	}
	else
	{
		printf("the year is not leap year");
	}
}