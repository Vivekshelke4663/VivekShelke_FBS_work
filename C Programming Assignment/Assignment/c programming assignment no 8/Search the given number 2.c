void main()
{
    int n, i, arr[50], num, index=-1;
	printf("Enter which number you want to search: ");
    scanf("%d", &num);
	printf("How many numbers you want to enter: ");
    scanf("%d", &n);
	printf("Enter the numbers:\n");
	for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
	for(i=0; i<n; i++)
    {
        if(arr[i] == num)
        {
            index = i;
            break;
        }
    }
	if(index == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("The number is found at %d index", index);
    }
}