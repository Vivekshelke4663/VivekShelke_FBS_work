int starttoend(int,int);
void main()
{
	int start = 1, end = 5;
	int x=starttoend(start,end);
    printf("Sum = %d",x);
}
int starttoend(int start,int end)
{
	int sum = 0;

    while(start <= end)
    {
        sum = sum + start;
        start = start + 1;
    }
    return sum;

	
}