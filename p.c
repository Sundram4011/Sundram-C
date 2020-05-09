#include<stdio.h>
#include<conio.h>
struct node
{
	int d;
	struct node *p;
};
p=NULL;
struct arraystack
{
	int capacity;
	int top;
	struct node *a;
};
capacity=0;
top=-1;
a=NULL;

createstack(struct arraystack *m)
{
	struct node *t,*u;
	m->capacity=(m->capacity)+1;
	m->top=(m->top)+1;
	t=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&t->d);
    t->p=NULL;
    if(m->a==NULL)
    {
	m->a=t;
    }
    else
    {
	u=m->a;
	m->a=t;
	t->p=u;
    }
}
pop(struct arraystack *b)
{
	struct node *x;
	if(b->a==NULL)
	{
		printf("list is empty");
	}
	else
	{
	x=b->a;
	printf("poped no is %d",x->d);
	b->a=x->p;
	}

}

main()
{
	int i;
	struct arraystack *stack;
	stack=(struct arraystack*)malloc(sizeof (struct arraystack));
	while(1)
	{
	printf("\n1.create stack and push");
	printf("\n2.pop");
	printf("\nmake choice");
	scanf("%d",&i);
	switch(i)
	{
		case 1 :
			createstack(stack);
			break;
		case 2 :
			pop(stack);
			break;
		default :
			printf("invalid choice");
			break;
	}
    }
	
}

