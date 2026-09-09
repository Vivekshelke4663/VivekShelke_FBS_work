int leap(int);
void main()
{
	int year;
	printf("Enter the year\n");
	scanf("%d",&year);
	int x=leap(year);
	if(x==0)
		printf(" The given year is leap year");
	else
		printf("The given year is not leap year");
}
int leap(int year)
{

	if (year%4==0 && year%100!=0|| year%400==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}