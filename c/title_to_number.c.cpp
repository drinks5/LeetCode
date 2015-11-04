/*
Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int titleToNumber(char* s);

int main()
{
    char src[] = "CFDGSXM";
    int flag = 0;
    flag = titleToNumber(src);
    printf("flag = %d \n",flag);
    return 0;
}


int titleToNumber(char* s) {
    int i;
    char* tmp = s;
    int len = 0;
    double count = 0;
    while(*tmp != '\0')
    {
    if( (*tmp>='a') && (*tmp<='z') )
        {
            *tmp -=96;
        }
        else if( (*tmp>='A') && (*tmp<='Z'))
        {
            *tmp -= 64;
        }
        else
        {
            printf("error\n");
            return -1;
        }
        tmp++;
        len++;
    }
    for(i=0;i<len;i++)
    {
        tmp--;
        count += (*tmp)*pow(26,i);
    }
    return count;
}

