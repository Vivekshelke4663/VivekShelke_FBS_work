void armstrong(int);
void main()
{
	int num;
	printf("Enter a number: ");
    scanf("%d", &num);
    armstrong(num);
	
}
armstrong(int num)
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
        printf("This is a Armstrong Number");
    }
    else
    {
        printf("This is Not Armstrong Number");
    }
}