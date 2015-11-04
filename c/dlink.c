#include<stdlib.h>

typedef struct dlist dnode;
typedef dnode *dlink;

void printdlist(dlink head);
dlink insert_node(dlink head,dlink ptr,int value);

struct dlist
{
	int data;
	struct dlist *front;
	struct dlist *back;
};



void printdlist(dlink head)
{
	while(head!= NULL)
	{
	printf("[%d]",head->data);
	head = head->front;
	printf("\n");
}

dlink insert_node(dlink head,dlink ptr,int value)
{
	dlink new_node;
	new_node=(dlink)malloc(sizeof(dnode));

	if(!new_node)
		return NULL;
	new_node->data=value;
	new_node->front=NULL;
	new_node->back=NULL;

	if(head==NULL)
		return new_node;

	if(ptr=NULL)//从头结点插入
	{
		new_node->front=head;
		head->back=new_node;
		head = new_node;
	}

	else if(ptr->front==NULL)
	{
		new_node->back = ptr;
		ptr->front=new_node;
	}
	else
	{
		ptr->front->back=new_node;
		new_node->front=ptr->front;
		new_node->back=ptr;
		ptr->front=new_node;
	}
}