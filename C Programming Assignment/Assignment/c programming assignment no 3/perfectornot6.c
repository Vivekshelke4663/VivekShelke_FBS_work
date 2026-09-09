void main()
{
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
	while(i < n)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }
	if(sum == n)
    {
        printf("The Number is Perfect");
    }
    else
    {
        printf("The Number is Not Perfect");
    }
}