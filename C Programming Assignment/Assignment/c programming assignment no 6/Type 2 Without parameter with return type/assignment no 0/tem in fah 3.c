float teminfah();
void main()
{
	float x=teminfah();
	printf("Temperature in Fahrenheit is = %f",x);
}
float teminfah()
{
    float c = 16 ,f;
    f = (c*9/5+32);
    return f;
}