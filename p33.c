
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;

struct node * createnode()
{
	struct node *t,*b,*m;
	int data;
	printf("\nenter the data");
	scanf("%d",&data);
	t=(struct node *)malloc(sizeof(struct node) );
	t->info=data;
	t->left=NULL;
	t->right=NULL;
	if(root==NULL)
	     root=t;
    else
    {
    	m=root;
    	while(m!=NULL)
    	{
    		b=m;
    		if(m->info>t->info)
    			m=m->left;
    		else
    		    m=m->right;
    	}
    	if(b->info>t->info)
    	     b->left=t;
        else
             b->right=t;
    }
    return(root);
}
struct node* deletenode(struct node *root)
{
	int item;
	struct node *a,*b,*c,*d,*e;
	printf("\nenter the no to be deleted");
	scanf("%d",&item);
	a=root;
	if(item==root->info)
	{
		root=root->right;
		b=root;
		while(b->left!=NULL)
	    {
	    	b=b->left;
	    }
	    b->left=a->left;
	    free(a);
	}
	else
	{
		while(a->info!=item)
		{
			b=a;
			if((a->info)>item)
			     a=a->left;
			else
			     a=a->right;
		}
		if(a->left!=NULL&&a->right!=NULL)
		{
			c=a->left;
			d=a->left;
			while(c->right!=NULL)
			{
				c=c->right;
			}
			e=a->right;
			c->right=e->left;
			if(b->left==a)
			    b->left=a->right;
			else
			    b->right=a->right;
		    e->left=a->left;
		    free(a);
		}
		else
		{
			if(a==b->right)
			{
				if(a->left!=NULL)
				   b->right=a->left;
				else
				   b->right=a->right;
				free(a);
			}
			else
			{
				if(a->left!=NULL)
				     b->left=a->left;
			    else
			         b->left=a->right;
			    free(a);     
			}
		}
	}
return(root);
}
void inordertraverse(struct node *root)
{
	if(root!=NULL)
	{
		inordertraverse(root->left);
		printf("\n%d",root->info);
		inordertraverse(root->right);
	}
}
main()
{
	int choice;
	struct node *root=NULL;
	while(1)
	{
		printf("\n1.create node");
		printf("\n2.delete node");
		printf("\n3.inordertraverse node");
		printf("\n4.exit");
		printf("\n\nenter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			root=createnode();
			break; 
			
			case 2:
			if(root==NULL)
			     printf("\nlist is empty");
		    else
			     root=deletenode(root);
			break;
			
			case 3:
			if(root==NULL)
			    printf("\nlist is empty");
			else
			    inordertraverse(root);
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

