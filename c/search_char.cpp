#include<stdio.h>

int search(char byte,char* str);

int search(char byte,char* str)
{
    int i,count=0;
	printf("byte is %c\n",byte);
	for(i=0;str[i]!='\0';i++)
		count++;
	printf("the count is %d\n",count);
	for(i=0;i<count;i++)
	{
		if(str[i]=='\0')
			return 0;
		if(str[i]==byte)
			return i;
	}
}

void main()
{
	char* str="asdfghjklzxc";
	char byte;
	int flag;
	byte=getchar();
//printf("byte is %c\n",byte);

	printf("now the result is %d\n",search(byte,str));
	flag= search(byte,str);
	if(flag==0)
		printf("no search result\n");
	else
		printf("the result is %d\n",flag);

}
