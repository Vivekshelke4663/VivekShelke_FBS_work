int checkcase();
void main()
{
	int x=checkcase();
	if(x==0)
    {
		printf("the given character is uppercase");
	}
	else
	{
		printf("the given character is lowercase");
	}
}
int checkcase()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='z')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}