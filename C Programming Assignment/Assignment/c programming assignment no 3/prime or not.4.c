void main()
{
    int num, i = 2;
	printf("Enter number: ");
    scanf("%d", &num);
	while(i < num)
    {
        if(num % i == 0)
        {
            printf("The Number is Not Prime");
            return;
        }
        else
        {
            i = i + 1;
        }
    }
	if(num <= 1)
    {
        printf("The Number is Not Prime");
    }
    else
    {
        printf("The Number is Prime");
    }
}