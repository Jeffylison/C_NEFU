#include <bits/stdc++.h>
using namespace std;
struct se
{
    int l;
    int w;
}data[101];
int cmp(const se &a,const se &b)
{
    if(a.w!=b.w)
    return (a.w)<(b.w);
    else
    return (a.l)<(b.l);
}
int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        for(int i=0;i<n;i++)
        {
            cin>>data[i].l>>data[i].w;
        }
        sort(data,data+n,cmp);
        int sum=1;
        se tmp=data[0];
        for(int i=1;i<n;i++)
        {
            if(tmp.w<=data[i].l)
            {
                tmp=data[i];
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
