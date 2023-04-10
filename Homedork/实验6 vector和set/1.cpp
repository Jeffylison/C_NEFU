#include <iostream>
#include <vector>
#include <cstring>
#include <cstdio>
using namespace std;
vector<int>a[10005];
vector<int>::iterator it;
int main()
{
    int n,m,x,y,i;
    while(cin>>n>>m)
    {
        for(i=1;i<=n;i++)
        {
            a[i].clear();
        }
        for(i=1;i<=m;i++)
        {
            cin>>x>>y;
            a[x].push_back(y);
        }
        for(i=1;i<=n;i++)
        {
            for(it=a[i].begin();it!=a[i].end();it++)
                {if(it+1==a[i].end())cout<<(*it);
                else cout<<*it<<" ";}
            cout<<endl;
        }
    }
    return 0;
}
