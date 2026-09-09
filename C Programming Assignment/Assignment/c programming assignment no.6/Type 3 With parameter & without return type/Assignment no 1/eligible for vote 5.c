void eligible(int);
void main()
{
	int age;
	printf("Enter the age");
	scanf("%d",&age);
	eligible(age);
}
void eligible( int age)
{
	
	if(age>=18)
	{
		printf("Candidate is eligibal for vote");
	}
	else
	{
		printf("Candidate is not eligibal for vote");
	}
}