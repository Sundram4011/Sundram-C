#include<stdio.h>

struct node
{
	int d;
	struct node *p;
	
};
struct node *start=NULL;
//start=NULL;

struct node* createnode()
{
	int i;
	struct node *t,*r,*u;
	t= (struct node *) malloc(sizeof(struct node));
	
	if(start==NULL)
	{
		start=t;
		return(start);
	}
	else
	{
	printf("1.enter the node as first node");
	printf("\n2.enter the node as last node");
	printf("\n3.enter the node in increasing order");
	printf("\n\nenter the choice" );
    scanf("%d",&i);
    switch(i)
    {
    	case 1 :
    		{
    			r=start;
    			start=t;
    			start->p=r;
    		}
    	case 2 :
			{
				r=start;
				while((r->p)!=NULL)
				{
					r=r->p;
				}
				r->p=t;
			}
			case 3 :
				{
					r=start;
				    u=start->p;
				    while((u->p)!=NULL)
					{
						if(((r->d) < (t->d)) && ((u->d)>(t->d)) )
						{
							r->p=t;
							t->p=u;
							break;
						}
						else
						{
							r=r->p;
							u=u->p;
						}
						
					}
					if((u->p)==NULL)
					{
						u->p=t;
					}
				}
    }
    return(start);
	}
}





void deletenode (struct node *m)
 {
 	int j,k;
 	struct node *a,*n,*q,*r;
 	if(m==NULL)
 	{
 		printf("list is empty");
 	}
 	else
	 {
 	printf("\n1.Delete first node");
 	printf("\n1.Delete last node");
 	printf("\n1.Delete specified node");
 	printf("\n\nenter your choice");
 	scanf("%d",&j);
 	switch(j)
 	{
 		case 1 :
 			{
 				a=m;
 				m=m->p;
 				free(a);
 			}
 		case 2 :
		 	{
		 		n=m->p;
		 		while(n->p != NULL)
		 		{
		 			m=m->p;
		 			n=n->p;
		 		}
		 		m->p=NULL;
		 		free(n);
		 	
			 case 3 :
			 	printf("enter the value to be deleted");
			 	scanf("%d",&k);
			 	m=q;
			 	n=q->p;
			 	r=q->p;
			 	
			 	if(m->d=k)
			 	{
			 		m=m->p;
			 		free(q);
			 	}
			 	else
			 	{
			 		while(n->d!=j && n!=NULL)
			 		q=q->p;
			 		n=n->p;
			 	}
			 	if(n!=NULL)
			 	{
			 		q->p=r;
			 		free(n);
			 	}
			 	if(n=NULL)
			 	{
			 		printf("match not found");
			 	}
			 	
			 }
 		
 	}
    }
 	
}





 void traverse(struct node *t)
 {
 	struct node *b;
 	if(t==NULL)
 	{
 		printf("list is empty");
 	}
 	else
 	{
 	b=t;
 	while(b != NULL)
 	{
 		printf("\n%d",b->d);
 		printf("\n");
 	    b=b->p;
	}
    }
 }
 
 void main()
 {
 	struct node *s;
 	int m;
 	while(1)
 	{
 		printf("1.create node");
 		printf("delete node");
 		printf("3.traverse");
 		printf("enter your choice");
 		scanf("%d",&m);
 		switch(m)
 		{
 			case 1 :
 				s=createnode();
 			case 2:
 				deletenode(s);
 			case 3:
 				traverse(s);
 	    
 		}
 	}
 }
