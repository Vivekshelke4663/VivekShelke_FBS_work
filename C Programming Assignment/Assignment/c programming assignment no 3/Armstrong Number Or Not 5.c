void main()
{
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
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