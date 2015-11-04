#include<stdio.h>

char* reverse_char(char *s);
int reverse_word(char *str,int word_count);

void main()
{
	char *str;
	char x[255]={"asdfghjk lzxcvbnm haha"};
	str=x;
	//printf("the word_count is %d \n ",reverse_word(str);
	printf("the result is %s \n",reverse_char(str));
	int *ptr = (int *)0x67a9;
*ptr = 0xaa66;
}

char* reverse_char(char *s) //字符串顺序逆转
{
	char *p=s;
	char *q=s;
	char tmp;

	while(*q)
		q++;
	q--;
	while(q>p)
	{
		tmp=*p;
		*p++=*q;
		*q--=tmp;
	}
	return s;
}

int reverse_word(char *str,int char_count) //单词顺序逆转
{
	int i,word_count=0,word_start=0;
	char tmpword[255];
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')    //遇空格则把空格转化为 字符串结束符\0 并且重置 单词标识符
		{
			word_start=0;
			str[i]='\0';
		}
		else
			if(word_start==0)
			{
				word_start=1;
				tmpword[word_count]=str[i];
				word_count++;
			}
	}
	for(int j=0;j<word_count;j++)
	{
		str[j]=tmpword[word_count-1-j];
	}
	return word_count;
}
