#include<stdio.h>
 void main()
{
	int r1,c1,r2,c2;
	printf("enter the order of first matrix\n");
	scanf("%d",&r1);
	scanf("%d",&c1);
	printf("enter the order of second matrix\n");
    scanf("%d",&r2);
	scanf("%d",&c2);
	int arr[r1][c1],i,j,k,l,brr[r2][c2],m,n,crr[r1][c1];
	
	
	printf("enter elements in array\n");
	for(i=0;i<=(r1-1);i++)
	{
		for(j=0;j<=(c1-1);j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nenter elements in array");
	for(k=0;k<r2;k++)
	{
		for(l=0;l<c2;l++)
		{
			scanf("%d",&brr[k][l]);
		}
	}
	
	printf("adding matrix");
	for(m=0;m<r1;m++)
	{
		for(n=0;n<c1;n++)
		{
			crr[m][n]=arr[m][n] + brr[m][n];
		}
	}
	printf("\nresult");
	for(m=0;m <r1;m++)
	{
		for(n=0;n<c1;n++)
		{
			printf("%d",crr[m][n]);
		}
		printf("\n");
	}
}
