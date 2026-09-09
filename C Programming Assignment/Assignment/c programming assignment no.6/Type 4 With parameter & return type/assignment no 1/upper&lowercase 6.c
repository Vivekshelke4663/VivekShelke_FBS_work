int upplowcase(char);
void main()
{
	char ch;
	printf("Enter the character ");
	scanf("%c",&ch);
	int x=upplowcase(ch);
	if(x==0)
	{
		printf("the given character is uppercase");
	}
	else
	{
		printf("the given character is lowercase");
	}
}
int upplowcase(char ch)
{
	if(ch>='A'&& ch<='Z')
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
}