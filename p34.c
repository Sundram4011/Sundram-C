#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int* createheap(int capacity)
{
	int* start;
	start=NULL;
	start=(int*)malloc(capacity*sizeof(int));
	return(start);
}
insertheap(int* start,int top)
{
	int data;
	printf("\nenter the data");
	scanf("%d",&data);
	start[top]=data;
}
arrangeinsertheap(int* start,int top)
{
	int data,i;
	i=top;
	data=start[i];
	while(data>start[(i-1)/2])
	{
	start[i]=start[(i-1)/2];
    i=(i-1)/2;
    if(i==0)
      break;
    }
    start[i]=data;
}
deleteheap(int* start,int top)
{
	int i,t,k,l;
	i=0;
	t=start[top];
	start[0]=start[top];
	if(top>2)
	{
		k=2*i+1;
		l=2*i+2;
		while((start[k]>t || start[l]>t)&&top>=k&&top>=l)
		{
			if(start[k]>t&&start[k]>start[l])
			{
				start[i]=start[k];
				i=2*i+1;
				k=2*i+1;
				l=2*i+2;
				if(k>top||l>top)
				      break;
			}
			if(start[l]>t&&start[l]>start[k])
			{
				start[i]=start[l];
				i=2*i+2;
				k=2*i+1;
				l=2*i+2;
				if(k>top||l>top)
				      break;
			}
		}
	}
	start[i]=t;
}
traverseheap(int* start,int top)
{
    int i=0;
	if(top==-1)
	    printf("\nheap is empty");
	else
	{
	while(i<=top)
	{
		printf("\n%d",start[i]);
		i=i+1;
	}
    }
}
main()
{
 int* start;
 int choice,capacity,top;
 top=-1;
 printf("\nenter the size of heap");
 scanf("%d",&capacity);
 start=createheap(capacity);
 if(start==NULL)
 {
 	printf("\nfailed to create heap");
 }
 while(1)
 {
 	printf("\n1.insert value in heap.");
 	printf("\n2.delete value from heap.");
 	printf("\n3.traverse heap.");
 	printf("\n4.exit.");
 	printf("\n\n.enter your choice.");
 	scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		if(top==capacity-1)
    		      printf("\nheap tree is full");
			else
			{
				top=top+1;
				insertheap(start,top);
				arrangeinsertheap(start,top);
				break;
			}
		case 2:
		   if(top==-1)
		    printf("\nheap is empty");
		   else
		    {
		    	deleteheap(start,top);
		    	top=top-1;
		    }
		    break;
		case 3:
		    traverseheap(start,top);
			break;  
		case 4:
			exit(0);
			break;
		default:
			printf("\ninvalid choice");
			break;
	}
 }
}
