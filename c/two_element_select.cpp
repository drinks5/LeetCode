#include<stdio.h>

void two_select(int a[],int n);
void main()
{
	int i;
	int a[]={12,43,65,232,454,23,56,43};
//	printf("i is %d\n",sizeof(a)/sizeof(int));
	two_select(a,8);
	printf("the sorted arry is \n");
	for(i=0;i<8;i++)
		printf(" %d ",a[i]);
}

void two_select(int a[],int n)
{
	int i,j,tmp,min,max;
	
	for(i=1;i<=n/2;i++)
	{
		min=i-1,max=i;
		for(j=i;j<=n-i;j++)
		{
			if(a[j]>a[min])
			{
				max=j;
				
			}

			if(a[j]<a[min])
			{
				min=j;
				continue;
			}
		}
		tmp=a[i-1];a[i-1]=a[max];a[max]=tmp;
		tmp=a[n-i];a[n-i]=a[min];a[min]=tmp;
	}
}

/*void SelectSort(int r[],int n) {  
    int i ,j , min ,max, tmp;  
    for (i=1 ;i <= n/2;i++) {    
        // 做不超过n/2趟选择排序   
        min = i; max = i ; //分别记录最大和最小关键字记录位置  
        for (j= i+1; j<= n-i; j++) {  
            if (r[j] > r[max]) {   
                max = j ; continue ;   
            }    
            if (r[j]< r[min]) {   
                min = j ;   
            }     
      }    
      //该交换操作还可分情况讨论以提高效率  
      tmp = r[i-1]; r[i-1] = r[min]; r[min] = tmp;  
      tmp = r[n-i]; r[n-i] = r[max]; r[max] = tmp;   
  
    }   
}  */