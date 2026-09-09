void main()
{
	double Price,Discount,Finalprice ;
	char ch;
	printf("Enter Price");
	scanf("%lf",&Price);
	printf("You are student?\n");
	scanf(" %c",&ch);
	if(ch=='y'||ch=='Y')
	{
	  if(Price>500)
	  {
	  	Discount=Price*0.20;
	  }
	  else
	  {
	  	Discount=Price*0.10;
	  }
	}
	else
	{
	if(Price>600)
	{
		Discount=Price*0.15;
	}
	else
	{
		printf("There Is No Discount");
	}
}
 Finalprice=Price-Discount;
 printf("The final price is %lf\n",Finalprice);
 printf("Discount is %lf\n",Discount);	
}