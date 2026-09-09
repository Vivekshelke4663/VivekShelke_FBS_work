int area();
void main()
{
 int x=area();
 printf("the area is %d",x);
}
int area()
{
	int base=8;
	int height=12;
	int area=0.5*(base*height);
	return area;
}