void number(int);
void main()
{
	int num = 1;
	number(num);
}
void number(int num)
{

    while(num <= 10)
    {
    
        printf(" %d", num);
        num=num+1;
    }
    num++;
}