void upper();
void main()
{
	upper();
}
upper()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='z')
	{
		printf("the given character is uppercase");
	}
	else
	{
		printf("the given character is lowercase");
	}
}