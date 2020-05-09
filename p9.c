main()
{
	int i,j,k,l;
	printf("enter the no of rows");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		for(k=1;k<=(i-j);k++)
		{
			printf(" ");
		}
		for(l=1;l<=j;l++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}
