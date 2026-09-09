void entermarks(int);
void main()
{
    int mark;
    printf("Enter the marks: ");
    scanf("%d", &mark);
	entermarks(mark);
}
void entermarks(int mark)
{
    if(mark >= 75)
        printf("The Distinction");
    else if(mark >= 65)
        printf("The First class");
    else if(mark >= 55)
        printf("The Second class");
    else if(mark >= 40)
        printf("The Pass class");
    else
        printf("Fail");
}