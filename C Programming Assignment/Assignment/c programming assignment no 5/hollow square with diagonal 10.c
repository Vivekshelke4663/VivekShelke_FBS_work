void main()
{
    int n=5,row,col;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1 || col==1 || row==5 || col==5 || row==col)
            {
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