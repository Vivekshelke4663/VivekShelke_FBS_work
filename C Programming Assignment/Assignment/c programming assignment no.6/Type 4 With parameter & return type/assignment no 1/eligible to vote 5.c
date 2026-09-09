int eligible(int);
void main()
{
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	int x=eligible(age);
	if(x==0)
	{
		printf("Candidate is eligibal for vote");
	}
	else
	{
		printf("Candidate is not eligibal for vote");
	}
}
int eligible(int age)
{
	if(age>=18)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}