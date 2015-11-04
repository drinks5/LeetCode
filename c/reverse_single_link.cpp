#include<stdio.h>

//typedef struct single_link slink;
struct slink
{
	int s_value;
	slink* s_next;

};

slink* reverse_link(slink* head);

slink* reverse_link(slink* head)
{
	slink* prev=NULL;
	slink* node=head;
	slink* reverse=NULL;

	while(node != NULL)
	{
		if(node->s_next == NULL)
			reverse = node;
		node->s_next  = prev;
		prev = node;
		node = node->s_next;
	}
}	