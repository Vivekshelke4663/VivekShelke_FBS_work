void main()
{
    int A, B, C;

    printf("Enter the numbers: ");
    scanf("%d%d%d", &A, &B, &C);
    if(A>B)
	printf("A is greater");
    else if(B>C)
    {
        printf("B is greater");
    }
    else
    {
        printf("C is greater");
    }
}