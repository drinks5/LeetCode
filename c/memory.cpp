#include<stdio.h>

//s#define (0x67a9) 0xaa66

void main()
{
	float a,b,c;
	(a+b)+c==(b+a)+c?printf("y\n"):printf("0\n");
	(a+b)+c==(a+c)+b?printf("1\n"):printf("0\n");
}