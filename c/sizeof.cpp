#include<stdio.h>


void main()
{
     typedef struct test{
		int i;
		short s;
		char c;
		union{
			int a;
			short b;
		      }
};
}
	example ;

	int y;
	y = sizeof(example);
	printf("y is %d\n ",y);
	y = sizeof(int);
	printf("int is %d\n ",y);

	y = sizeof(short);
	printf("short is %d\n ",y);

	y = sizeof(double);
	printf("double is %d\n ",y);
}