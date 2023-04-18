#include <bits/stdc++.h>
using namespace std;
queue<int>man,woman;
int main()
{
    int m,n,k;
    cin>>m>>n>>k;
    for(int i=1;i<=m;i++)
    man.push(i);
    for(int i=1;i<=n;i++)
    woman.push(i);
    for(int i=0;i<k;i++)
    {
        cout<<man.front()<<" "<<woman.front()<<endl;
        man.push(man.front());woman.push(woman.front());
        man.pop();woman.pop();
    }
    return 0;
}
