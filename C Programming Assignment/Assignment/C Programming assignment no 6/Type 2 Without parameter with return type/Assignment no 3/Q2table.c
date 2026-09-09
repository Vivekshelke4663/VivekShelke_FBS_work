int table();
void main()
{
   int x=table();
   printf("%d",x);
}
int table()
{
	int i,no=1;
	while(no<=10)
	{
		i=no*5;
		printf("%d\n",i);
		no++;
	}
	return i;
}