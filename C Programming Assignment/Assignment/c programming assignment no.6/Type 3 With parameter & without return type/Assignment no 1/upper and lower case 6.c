void uppandlow(char);
void main()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	uppandlow(ch);
	
}
void uppandlow(char ch)
{
	if(ch>='A'&& ch<='Z')
	{
		printf("the given character is uppercase");
	}
	else
	{
		printf("the given character is lowercase");
	}
}