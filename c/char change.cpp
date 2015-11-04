#include<stdio.h>

char* Reverse(char* s);

void main()
{
	char ch[100] ;
	scanf("%s",ch);
 
	/*char *p=ch;

	char *q=ch;
	char tmp;
	while(*q)
		q++;
	q--;

	if(q>p)
	{
		tmp= *p;
		*p++=*q;
		*q--=tmp;
	}
	*/

	printf("the string q is %s\n",Reverse(ch));


    Reverse(ch);

}

char* Reverse(char* s)
{
    // p指向字符串头部
    char* p = s ;

    // q指向字符串尾部
    char* q = s ;
    while( *q )
        ++q ;
    q -- ;

    // 交换并移动指针，直到p和q交叉
    while(q > p)
    {
        char t = *p ;
        *p++ = *q ;
        *q-- = t ;
    }

    return s ;
}