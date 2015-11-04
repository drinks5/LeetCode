#include<stdio.h>

void insert_sort(int a[],int n);

void main()
{
	int a[8]={7,5,3,9,2,4,8,6};
	insert_sort(a,8);
	printf("the sorted arry is \n");
	for(int i=0;i<8;i++)
		printf(" %d ",a[i]);
}

void insert_sort(int a[],int n)
{
	int i,j,x;
	for(i=n;i>1;i--)
	{
		if(a[i]<a[i-1])
		{
			j=i-1;
			x=a[i];
			a[i]=a[i-1];
			while(x>a[j])
			{
				a[j-1]=a[j];
				j--;
			}
			a[j-1]=x;
		}
	}
		return;
}