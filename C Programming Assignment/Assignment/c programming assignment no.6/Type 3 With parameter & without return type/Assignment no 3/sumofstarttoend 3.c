void main()
{
    int start = 1, end = 5;
    int sum = 0;

    while(start <= end)
    {
        sum = sum + start;
        start = start + 1;
    }

    printf("Sum = %d", sum);
}