#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int>sa;
    int n,m,x;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        sa.push(i);
    }
    int t=0;
    while(sa.size()!=1)
    {
        x=sa.front();
        sa.pop();
        t++;
        if(t==m) t=0;
        else sa.push(x);
    }
    cout<<sa.front()<<endl;
    return 0;
}
