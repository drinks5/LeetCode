#include<stdio.h>

struct listnode
{
	int value;
	listnode* next;
};

listnode* combine_link(listnode* head1,listnode* head2);
void main()
{

}

listnode* combine_link(listnode* head1,listnode* head2)
{
	listnode* p3=NULL;
	
	if(head1 == NULL)
		return head2;
	if(head2 == NULL)
		return head1;

		if(head1->value < head2->value)
		{
			p3=head1;
			p3->next = combine_link(head1->next,head2);
		}
		else if(head1->value > head2->value)
		{
			p3=head2;
			p3->next = combine_link(head1->next,head2);
		}	
	}
	return p3;
}