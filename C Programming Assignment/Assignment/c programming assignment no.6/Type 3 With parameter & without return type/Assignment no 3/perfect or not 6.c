void perfect(int);
void main()
{
	int n;
	printf("Enter a number: ");
    scanf("%d", &n);
	perfect(n);
	
}
void perfect(int n)
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
        printf("The Number is Perfect");
    }
    else
    {
        printf("The Number is Not Perfect");
    }
}