#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct sa
{
    int time;
    int id;
}data[1001];
int cmp(const sa &a,const sa &b)
{
    if(a.time==b.time)
        return (a.id)<(b.id);
    else
        return (a.time)<(b.time);
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {cin>>data[i].time;data[i].id=i;}
    sort(data+1,data+n+1,cmp);
    int sum=0,t=0;
    cout<<data[1].id;
    //sum+=data[1].time;
    for(int i=2;i<=n;i++)
    {
        cout<<" "<<data[i].id;
        t+=data[i-1].time;
        sum+=t;
    }
    cout<<endl;
    printf("%.2lf\n",(double)sum/(double)n);
    return 0;
}
