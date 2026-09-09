int eligibalvote();
void main()
{
	int x=eligibalvote();
	if (x==0)
	{
		printf("Candidate is eligibal for vote");
	}
	else
	{
		printf("Candidate is not eligibal for vote");
	}
	
}
eligibalvote()
{
	int age;
	printf("Enter the age");
	scanf("%d",&age);
	if(age>=18)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}