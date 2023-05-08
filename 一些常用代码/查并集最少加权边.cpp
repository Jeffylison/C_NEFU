#pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int fa[1000001],cnt[1000001];
LL len[1000001];
struct sa
{
    int fr,to;
    int llen;
}data[1000001];
bool cmp(const sa &a,const sa &b)
{
    return (a.llen)<(b.llen);
}
int find(int a)
{
    if(fa[a]!=a)
        fa[a]=find(fa[a]);
    return fa[a];
}
int main()
{
    ios::sync_with_stdio(0);
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        for(int i=1;i<=m;i++)
        {
            int x,y,z;
            scanf("%d%d%d",&x,&y,&z);
            data[i].fr=x;
            data[i].to=y;
            data[i].llen=z;
        }
        sort(data+1,data+1+m,cmp);
        for(int i=1;i<=n;i++)
            fa[i]=i,cnt[i]=1,len[i]=0;
        for(int i=1;i<=m;i++)
        {
            int ffr,tto;
            ffr=data[i].fr;tto=data[i].to;
            if(find(ffr)!=find(tto))
            {
                if(find(ffr)>find(tto))
                    swap(ffr,tto);
                cnt[find(ffr)]+=cnt[find(tto)];
                len[find(ffr)]+=len[find(tto)]+data[i].llen;
                fa[find(tto)]=find(ffr);
            }
        }
        if(cnt[1]==n)
            printf("%lld\n",len[1]);
        else printf("-1\n");
    }
    return 0;
}
