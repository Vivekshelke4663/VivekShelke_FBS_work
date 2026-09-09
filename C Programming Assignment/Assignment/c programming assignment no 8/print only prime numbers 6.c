void main()
{
	int n, a[10], flag, i, j;
	printf("How many numbers you want to enter in array: ");
	scanf("%d",&n);
	printf("Enter the elements in array:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Prime numbers are:\n");
	for(i=0; i<n; i++)
	{
		flag=0;
		for(j=2; j<a[i]; j++)

		{
			if(a[i]%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0 && a[i]>1)
		{
			printf("%d ",a[i]);
		}
	}
}