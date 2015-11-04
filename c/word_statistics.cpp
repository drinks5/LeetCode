#include <iostream>
#include <set>
#include <string>
using namespace std;
/*
字符串中单词数的统计
*/
int main()
{
    
    set <string> S;
    set <string>::iterator it;
    string t;
    while( cin >> t)
    {
        S.insert(t);
        if(t == "end")
            break;
    }
    cout<< "------------"<<"\n";
    for(it = S.begin(); it!= S.end(); it++)
    {
        cout << *it << "\n";

    }
    
    short *p = 0;
    short *pp=0;
    ++p;
    ++pp;
    printf("%d %d \n",p,pp);
    return 0;
}
