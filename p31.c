#include<stdio.h>
struct node
{
	int d;
	struct node *p;
	
};
struct node *start=NULL;
//*start=NULL;

createnode()
{
	int i;
	struct node *t,*r,*u;
	t= (struct node *) malloc(sizeof(struct node));
	
	if(start==NULL)
	{
	    printf(" enter data");
	    scanf("%d",&t->d);
        start=t;
		start->p=NULL;
		return(start);
	}
	else
	{
	printf("1.enter the node as first node");
	printf("\n2.enter the node as last node");
	printf("\n\nenter the choice" );
    scanf("%d",&i);
    switch(i)
    {
    	case 1 :
    		{
			    printf(" enter data");
	            scanf("%d",&t->d);
	
    			r=start;
    			start=t;
    			start->p=r;
    		}
    			break;
    	case 2 :
			{
				
				printf(" enter data");
	            scanf("%d",&t->d);
	
				r=start;
				while((r->p)!=NULL)
				{
					r=r->p;
				}
				r->p=t;
				t->p=NULL;
			}
				break;
		 default :
		    {
		    	printf("invalid choice");
		    	break;
		    }		
			
    }
    return(start);
	}
}

struct node * deletenode (struct node *m)
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
 	printf("\n2.Delete last node");
 	printf("\n\nenter your choice");
 	scanf("%d",&j);
 	switch(j)
 	{
 		case 1 :
 			{
 				a=m;
 				m=m->p;
 				free(a);
 				return(m);
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
		 		return(m);
		    }
		default :
			{
				printf("invalid choice");
				break;
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
 	while(b!= NULL)
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
 		printf("1.create node\n");
 		printf("2.delete node\n");
 		printf("3.traverse\n");
 		printf("enter your choice\n");
 		scanf("%d",&m);
 		switch(m)
 		{
 			case 1:
 				s=createnode();
 				break;
 			case 2:
 				s=deletenode(s);
 				break;
 			case 3:
 				traverse(s);
 				break;
 		    default :
 		    	{
 		    		printf("invalid choice");
 		    	}
 	    
 		}
 	}
 }


