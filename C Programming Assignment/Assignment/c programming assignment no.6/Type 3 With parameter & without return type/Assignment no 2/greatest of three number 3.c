void greatest(int,int,int);
void main()
{
	int A,B,C;
	printf("Enter the number");
	scanf("%d%d%d",&A,&B,&C);
	greatest(A,B,C);
	
}
void greatest(int A,int B,int C)
{
	if(A>B)
	printf("A is greater");
	else if(B>C)
	printf("B is greater");
	else
	printf("C is greater");
}