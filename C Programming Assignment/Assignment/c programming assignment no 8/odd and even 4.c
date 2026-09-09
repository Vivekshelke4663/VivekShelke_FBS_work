void main()
{
	int n, i, arr[10];
	printf("How many numbers you want to enter: ");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
	{
		if(arr[i] % 2 == 0)
		{
			printf("%d is even\n",arr[i]);
		}
		else
		{
			printf("%d is odd\n",arr[i]);
		}
	}
}