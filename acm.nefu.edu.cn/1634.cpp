#include <bits/stdc++.h>
using namespace std;
queue<int>kid;
int main()
{
    int n,m,x,i;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    kid.push(i);
    i=0;
    while(kid.size()>1)
    {
        x=kid.front();
        kid.pop();
        i++;
        if(i==m) i=0;
        else kid.push(x);
    }
    cout<<kid.front()<<endl;
    return 0;
}
