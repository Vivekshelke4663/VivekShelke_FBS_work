int perfect (int);
void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    int x=perfect(n);
	if( x== 0)
    {
        printf("The Number is Perfect");
    }
    else
    {
        printf("The Number is Not Perfect");
    }
}
int perfect(int n)
{
	int i = 1, sum = 0;
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
        return 0;
    }
    else
    {
        return 1;
    }
}