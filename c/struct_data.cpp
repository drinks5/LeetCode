#include<stdio.h>

int function0(int );

int function1(int );

int function2(int );

void main()
{
//	int *a[10](int)={function0,function1,funciton2};
	int (*f[3])(int) = {function0,function1,function2};

}

int function2(int a);
{
	return 0;
}

int function1(int a);
{
	return 0;

}

int function0(int a);
{
	return 0;
}