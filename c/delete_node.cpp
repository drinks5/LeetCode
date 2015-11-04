#include<stdio.h>

struct listnode
{
	int value;
	listnode* next;
}

listnode* delete_node(listnode* head,int key);

void main()
{

}

listnode* delete_node(listnode* head,int key)
{
	listnode* p1=head;
	listnode* p2=NULL;

	if(head==NULL)
		return NULL;
	else
	{
		if(p1->value==key)
		{
			head = head->nxt;
			free(p1);
			return head;
		}
		else
		{
			while(node1 != NULL)
			{
				p2 = p1;
				p2=p2->next;
				if(p2->value ==key)
				{
					
				}
	}

}