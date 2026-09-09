void table();
void main()
{
	table();
}
table()
{
    int num = 5;
    int i = 1;

    while(i <= 10)
    {
        printf(" %d", num * i);
        i = i + 1;
    }
}