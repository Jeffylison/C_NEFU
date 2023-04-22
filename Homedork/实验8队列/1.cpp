#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int>man,woman;
    int m,n,k;
    cin>>m>>n>>k;
    for(int i=1;i<=m;i++)
    {
        man.push(i);
    }
    for(int i=1;i<=n;i++)
        woman.push(i);
    while(k--)
    {
        cout<<man.front()<<" ";
        man.push(man.front());
        man.pop();
        cout<<woman.front()<<endl;
        woman.push(woman.front());
        woman.pop();
    }
    return 0;
}
