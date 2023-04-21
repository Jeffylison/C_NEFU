#include <bits/stdc++.h>
using namespace std;
struct sa
{
    int a;
    bool b;
}data[101];
int cmp(const sa &x,const sa &y)
{
    return (x.a)>(y.a);
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        for(int i=0;i<n;i++)
        {
            cin>>data[i].a;
            if(data[i].a<0) {data[i].b=0;data[i].a=-data[i].a;}
            else data[i].b=1;
        }
        sort(data,data+n,cmp);
        if(data[0].b==0)
        cout<<-data[0].a;
        else
        cout<<data[0].a;
        for(int i=1;i<n;i++)
        {
            if(data[i].b==0)
                cout<<" "<<-data[i].a;
            else
                cout<<" "<<data[i].a;
        }
        cout<<endl;
    }
    return 0;
}
