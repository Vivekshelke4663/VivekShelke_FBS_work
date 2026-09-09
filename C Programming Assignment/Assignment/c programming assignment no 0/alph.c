void main()
{ 
	char ch="b";
	
	if ((ch >= "a " && ch<='z') || (ch>= "A " && ch<= 'Z'))
   {
   	printf("%c is alpha", ch);
   }
   else
   {
   	printf("%c is not alpha", ch); 
   }
}