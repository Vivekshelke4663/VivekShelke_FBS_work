int armstrong(int);
void main()
{
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

	if(sum == 0)
    {
        printf("This is a Armstrong Number");
    }
    else
    {
        printf("This is Not Armstrong Number");
    }
}
int armstrong(int num)
{
	int temp, rem, sum = 0;
	temp = num;
	while(num != 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
	if(sum == temp)
    {
        return 0;
    }
    else
    {
        return 1;
    }
	
}