int add();
void main()
{
	int x=add();
	printf("The sum is %d",x);
}
int add()
{
    int a = 10;
    int b = 20;
    int res=a+b;
    return res;
}