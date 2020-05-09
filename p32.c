#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct arraystack
{
	int top;
	int capacity;
	int *array;
};
struct arraystack* createstack(int i)
{
    struct arraystack *s;
    s=(struct arraystack*)malloc(sizeof(struct arraystack));
    s->top=-1;
    s->capacity=i;
    s->array=(int*)malloc((s->capacity)*(sizeof(int)));
    return(s);
}
int isfull(struct arraystack *a)
{
	if(a->top==(a->capacity-1))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
void push(struct arraystack *k)
{
	int item;
	printf("enter the data");
	scanf("%d",&item);
	k->top=k->top+1;
	if(k->top!=0)
	     k->array=((k->array)+1);
	*(k->array)=item; 
}
int isempty(struct arraystack *l)
{
	if(l->top==-1)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
void pop(struct arraystack *n)
{
	int deitem;
	deitem=*(n->array);
	printf("popped no is %d",deitem);
	if(n->top>0)
	{
		n->array=(n->array)-1;
    }
    n->top=(n->top)-1;
}
struct arraystack* deletestack(struct arraystack *r)
{
	free(r->array);
	free(r);
	r=NULL;
	return(r);
}
void main()
{
	int i,choice,j,m;
	struct arraystack *stack,*sta,*r;
	printf("enter the capacity of stack");
	scanf("%d",&i);
	stack=createstack(i);
	while(1)
	{
	printf("\n1.push");
	printf("\n2.pop");
	printf("\n3.deletestack");
	printf("\n4.exit");
	printf("\n\nenter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1 :	
		j=isfull(stack);
		if(j==1)
			printf("list is full");
        else
		    push(stack);
		 break;   
	case 2 :
		m=isempty(stack);
		if(m==1)
		    printf("list is empty");
		else
		    pop(stack);
	    break;
	case 3:
	    sta=deletestack(stack); 
		if(sta==NULL)
		{
			printf("\n stack deleted");
		}
		else
		  printf("abc");
		  exit(0);
	    break;
	case 4 :
	    exit(0);
	    break;
	default:
	    printf("invalid choice"); 
	    break;
	}
    }
}
