#include <bits/stdc++.h>
using namespace std;
struct se
{
    int l;
    int w;
    bool temp;
}data[5001];
int cmp(const se &a,const se &b)
{
    if(a.l!=b.l)
    return (a.l)<(b.l);
    else
    return (a.w)<(b.w);
}
int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int sum=0,tmp;
        for(int i=0;i<n;i++)
        {
            cin>>data[i].l>>data[i].w;
            data[i].temp=0;
        }
        sort(data,data+n,cmp);
        for(int i=0;i<n;i++)
        {
            if(data[i].temp==1) continue;
            sum++;data[i].temp=1;tmp=i;
            for(int j=i+1;j<n;j++)
            {
                if(!data[j].temp&&data[j].l>=data[tmp].l&&data[j].w>=data[tmp].w)
                {data[j].temp=1;tmp=j;}
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
