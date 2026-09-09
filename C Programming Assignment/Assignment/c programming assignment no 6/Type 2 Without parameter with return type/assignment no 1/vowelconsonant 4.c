int vowelconsonant();
void main()
{
  int x=vowelconsonant();
  if(x==0)
    {
  	printf("Character is vowel");
    }	
  	else
	{
		printf("Character is consonant");
	}
}
vowelconsonant()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		
		return 0;	
	}
	else
	{
		return 1;
	}
}