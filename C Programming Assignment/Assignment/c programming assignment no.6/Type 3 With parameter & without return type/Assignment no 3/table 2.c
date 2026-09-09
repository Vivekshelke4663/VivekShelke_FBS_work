void table(int);
void main()
{
	int num = 5;
	table(num);	
}
void table(int num)
{
    int i = 1;

    while(i <= 10)
    {
        printf(" %d", num * i);
        i = i + 1;
    }
}