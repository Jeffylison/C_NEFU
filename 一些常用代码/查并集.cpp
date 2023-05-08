#include <bits/stdc++.h>
using namespace std;
int fa[1001];
struct sa
{
    int fr;
    int to;
}data[1001];
int find(int a)
{
    if(fa[a]!=a)
        fa[a]=find(fa[a]);
    return fa[a];
}
void merge(int a,int b)
{
    int x,y;
    x=find(a);y=find(b);
    if(x!=y) fa[x]=y;
}
int main()
{
    int n,m;
    while(scanf("%d",&n)&&n!=0)
    {
        scanf("%d",&m);
        for(int i=1;i<=n;i++)
            fa[i]=i;
            for(int i=1;i<=m;i++)
            {
                int x,y;
                scanf("%d%d",&x,&y);
                merge(x,y);
            }
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            //cout<<fa[i]<<" ";
            if(fa[i]==i) sum++;
        }
        cout<<sum-1<<endl;
    }
    return 0;
}
