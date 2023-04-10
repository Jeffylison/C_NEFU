#include <iostream>
#include <set>
#include <cstring>
#include <cstdio>
using namespace std;
set<int>a;
set<int>::iterator it;
int main()
{
    int N,i,x;
    while(cin>>N)
    {
        for(i=0;i<N;i++)
            a.clear();
        for(i=1;i<=N;i++)
        {
            cin>>x;
            a.insert(x);
        }
        cout<<a.size()<<endl;
        for(it=a.begin();it!=a.end();it++)
            cout<<*it<<" ";
        cout<<endl;
    }
    return 0;
}
