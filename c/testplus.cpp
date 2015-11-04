#include<stdio.h>

void main()
{
	int a=0x7fffffff;
	int b=0x70000000;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	a+=b;
		printf("a+=b=%d\n",a);
	b=a-b;
	printf("b=a-b=%d\n",b);
	a=a-b;
	printf("a=a-b=%d\n",a);
}