#include<stdio.h>
#include<stdlib.h>

struct listnode
{
	int value;
	listnode* lnext;
};

listnode* findnode(listnode* head,int k);

listnode* findnode(listnode* head,int k)
{
	listnode* lfront=head;
	listnode* lback=NULL;

	if(head == NULL||k<=0)
		return head;

	int i;
	for(i=0;i<k;i++)
	{
		if(lfront->lnext != NULL)
			lfront = lfront->lnext;
		else
			return NULL;
	}
	lback = head;

	while(lfront->lnext != NULL)
	{
		lfront = lfront->lnext;
		lback  = lback->lnext;
	}

	return lback;
}


void main()
{
	char* const a="123456";
	const char b[]={'1','26'};
	int c;
	int* d;
	int **e;

	int f[10];
	int* g[10];
	int *h[10];
	int (*i)(int );
	int (*j[10])(int );
}