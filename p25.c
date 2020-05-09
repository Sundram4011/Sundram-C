#include<stdio.h>
#include<conio.h>
main()
{
	int j;
int i,arr[j],k,l=0,m;
printf("enter the size the of array");
scanf("%d",&j);
printf("enter the array element");
for(i=0;i<=j;i++)
{
scanf("%d",&arr[i]);
}
for(l=0;l<=j;l++)
{
for(k=l;k<=j;k++)
{
if(arr[l]>arr[k])
{
m=arr[k];
arr[k]=arr[l];
arr[l]=m;
}
}
}
printf("largest no is %d",arr[j]);
}
