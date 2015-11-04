#include<stdio.h>

strcu node
{
	node* pleft;
	node* pright
	int   nmax_left;
	int   nmax_right;
	int   value;
};

int max_len = 0;
void Find_Max_Len(node* root);

int main()
{
	node
	return 0;
}

void Find_Max_Len(node* root)
{
	//detect the boundary conditions
	if( proot == NULL)
		return;
	if( proot->pleft == NULL)
		proot->nmax_left = 0;
	if( proot->pright == NULL)
		proot->nmax_right = 0;
	
	//Find the max len in left leaf
	if( proot->left != NULL)
		Find_Max_Len( proot->left );

	//find  the max len in right leaf
	if( proot->pright != NULL)
		Find_Max_Len( proot->pright);

	//Calculate the max len
	if( proot->pleft != NULL)
	{
		int tmp_len = 0;
		if( proot->pleft->nmax_left > proot->pright->nmax_right)
		{
			tmp_len = proot->pleft->nmax_left;
		}
		else
		{
			tmp_len = proot->pright->nmax_right;
		}
		proot->nmax_left = tmp_len+1;
	}


	if( proot->right != NULL)
	{
		int tmp_len = 0;
		if( proot->right->nmax_right > proot->pleft->nmax_left)
		{
			tmp_len = proot->pright->nmax_right;
		}
		else
		{
			tmp_len = proot->pleft->nmax_left;
		}
		proot->nmax_right = tmp_len+1;
	}

	//update the max len
	if( proot->nmax_right + proot->nmax_left > max_len)
	{
		max_len = proot->nmax_right + proot->nmax_left;
	}
}