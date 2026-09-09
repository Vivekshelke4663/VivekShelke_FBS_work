void main()
{
	int n=4,row,col;
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{	
			if(col==1||row==1||col==4||row==4 )
			{ 
			
				if(row == 9 && col == 9)
					printf("O ");
				else
				printf("* ");
			}
			else
			{
				printf("  ");
			}
			
		}
		printf("\n");
	}
}