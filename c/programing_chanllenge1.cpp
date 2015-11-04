#include<stdio.h>

#define MAX_NUM 100000
#define MAX_VALUE 1000000000

void main()
{
	int n;
	int value[MAX_NUM];
	int count;
	unsigned int flag=MAX_VALUE;
	printf("flag is %d\n",flag);
	printf("please input max row\n");
	scanf("%d",&n);
	while(n<1||n>MAX_NUM)
	{
		printf("input eroor,please input again\n");
		scanf("%d",&n);	
	}
	printf("please input every value\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&value[i]);
		if(value[i]<1||value[i]>MAX_VALUE)
		{
			printf("please input value again\n");
			scanf("%d",&value[i]);
		}
	}
	int tmp=value[i];
	for(i=0;i<n;i++)
	{
		count=0;
		while(value[i])
		{
			value[i]&=value[i]-1;
			count++;
		}
		if(count<=flag)
		{
			tmp=i;
			flag=count;
		}
	}
	printf("the num is %d\n",tmp+1);
	printf("the num of 1 is %d\n",flag);
}
