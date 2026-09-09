void main()
{
	int n, i, arr[50], sum=0;
	printf("How many numbers you want to enter: ");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("The sum of given array is %d",sum);
}