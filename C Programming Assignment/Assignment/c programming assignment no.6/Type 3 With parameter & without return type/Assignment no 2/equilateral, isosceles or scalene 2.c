void eqisoscal(float,float,float);
void main()
{
	float a,b,c;
	printf("Enter the first side\n");
	scanf("%f",&a);
	printf("Enter the second side\n");
	scanf("%f",&b);
	printf("Enter thrid side\n ");
	scanf("%f",&c);
	eqisoscal(a,b,c);
}
void eqisoscal(float a,float b,float c)
{
	if(a==b&&b==c)
	{
		printf("The equilateral triangle");
	}
	else if(a==b||b==c||a==c)
	{
		printf("The isosceles triangle");
	}
	else
	{
	printf("The scelene triangle");
    }
}