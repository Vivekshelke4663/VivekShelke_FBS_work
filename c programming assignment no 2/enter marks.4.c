void main()
{
	int mark;
	printf("Enter the marks");
	scanf("%d",&mark);
	if(mark>=75)
	printf("The Distinction");
	else if(mark>=65 && mark<75)
	printf("The First class");
	else if(mark>=55 && mark<65)
	printf("The Second class");
	else if (mark>=40)
	printf("The Pass class");
	else
	printf("Fail"); 
}