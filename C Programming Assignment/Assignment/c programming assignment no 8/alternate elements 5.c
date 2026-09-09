void main()
{
    int n, i, arr[10];

    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Alternative numbers are:\n");

    for(i = 0; i < n; i = i + 2)
    {
        printf("%d\n", arr[i]);
    }
}