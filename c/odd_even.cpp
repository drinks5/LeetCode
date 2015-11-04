#include<stdio.h>

void odd_even(int a[],int n);

void main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	odd_even(a,10);
}

void odd_even(int a[],int n)
{
	int* p1;
	p1=a;
	int* p2=a+n-1;
	printf("p1=%d \n",p1);
	printf("p2=%d \n",p2);
	
}