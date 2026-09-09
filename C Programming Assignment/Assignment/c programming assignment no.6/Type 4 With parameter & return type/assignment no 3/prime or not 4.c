int prime(int);
void main()
{
    int num;
	printf("Enter number: ");
    scanf("%d", &num);
    int x=prime(num);
	if(num==0)
    {
		printf("The Number is Not Prime");
    }
	if(num==1)
    {
        printf("The Number is Not Prime");
    }
    else
    {
        printf("The Number is Prime");
    }
}
int prime(int num)
{
	int i = 2;
	while(i < num)
    {
        if(num % i == 0)
        {
            return 0;
        }
        else
        {
            i = i + 1;
        }
    }
	if(num <= 1)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}