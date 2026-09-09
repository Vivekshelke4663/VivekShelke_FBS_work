void main()
{
	int arr1[100], arr2[100], arr3[100], s1, s2, i;
	printf("Enter how many elements you want to enter in arr1: ");
	scanf("%d",&s1);

	printf("Enter how many elements you want to enter in arr2: ");
	scanf("%d",&s2);
	if(s1 == s2)
	{
		printf("Enter the numbers in arr1:\n");
		for(i=0; i<s1; i++)
		{
			scanf("%d",&arr1[i]);
		}
		printf("Enter the numbers in arr2:\n");
		for(i=0; i<s2; i++)
		{
			scanf("%d",&arr2[i]);
		}
		printf("The sum of array:\n");

		for(i=0; i<s1; i++)
		{
			arr3[i] = arr1[i] + arr2[i];
		}
		for(i=0; i<s1; i++)
		{
			printf("%d\n",arr3[i]);
		}
	}
	else
	{
		printf("Both array sizes should be same");
	}
}