#include<stdio.h>

#define MAX(x,y) (x)>(y)?(x):y

void main()
{
	int a = 5, b=2, c=3,d=3,t;
	t=MAX(c+d,a+b)*10;
	printf("%d\n",t);
}