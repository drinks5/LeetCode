#include<stdio.h>

void main()
{
    char s[10];
	scanf("%s",s);
	char* p=s;
    printf("the p is %c\n",*p);
    char* q=s;
	while(*q)
		q++;
	q--;
	printf("the q is %c\n",*q);

    while(q>=p)
	{
    char t=*p;
	*p++=*q;
    *q--=t;
	}
	q+=1;
	p-=1;

	printf("%s\n",s);
}