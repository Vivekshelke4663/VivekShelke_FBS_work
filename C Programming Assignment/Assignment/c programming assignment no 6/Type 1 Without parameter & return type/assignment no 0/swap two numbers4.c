void swap();
void main()
{
	swap();
}
swap()
{
    int a = 10, b = 20, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\n", a);
    printf("b = %d", b);

}