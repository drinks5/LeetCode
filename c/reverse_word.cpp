#include<stdio.h>

char* reverse_char(char *s);

int reverse_word(char *sh,char* shh[]);

char* reverse_char(char *s)
{
	char *p=s;
	char *q=s;

	while(*q)
		q++;
	q--;

	if(q>p)
	{
		char tmp=*p;
		*p++=*q;
		*q--=tmp;
	}
	return s;
}

int reverse_word(char *zh,char* resultwords[])
{
    int word_count=0;
	int word_start=0;
	int i,j;
	char* tmpword[256];

	for(i=0;zh[i]!='\0';i++)  
	{
		if(zh[i]==' ')  //如果当前字符为空格 ，则把空格转化为 字符串结束符  并且标识符置零
		{
			word_start=0;
			zh[i]='\0';
		}
		else
			if(word_start==0)
			{
				word_start=1;
				tmpword[word_count++]= &zh[i];
			}
	}

	for(j=0;j < word_count; j++)
	{
		resultwords[j]=tmpword[word_count-1-j];//逆序存储
	}

	return word_count;
}

void main()
{
    char str[]="hello world! axiba";
	char *resultwords[256];
	int word_count=reverse_word(str,resultwords);
	printf("the result is \n");
	for(int i=0;i<word_count;i++)
		//printf("%s",reverse_char(resultwords[i]));
		printf("%s",resultwords[i]);
	printf("\n");
}