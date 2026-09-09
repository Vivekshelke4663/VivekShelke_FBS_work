int perimeter();
void main()
{
  int x=perimeter();
  printf("The perimeter is %d",x);
}
int perimeter()
{
	int len=8;
	int bred=5;
	int per= 2*(len+bred);
	return per;
}