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
    // pָ���ַ���ͷ��
    char* p = s ;

    // qָ���ַ���β��
    char* q = s ;
    while( *q )
        ++q ;
    q -- ;

    // �������ƶ�ָ�룬ֱ��p��q����
    while(q > p)
    {
        char t = *p ;
        *p++ = *q ;
        *q-- = t ;
    }

    return s ;
}