#include <bits/stdc++.h>
using namespace std;
struct sa
{
    int id;
    int time;
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
    for(int i=0;i<n;i++)
    {
        cin>>data[i].time;
        data[i].id=i+1;
    }
    sort(data,data+n,cmp);
    int sum=0,t=0;
    cout<<data[0].id;
    for(int i=1;i<n;i++)
    {
        cout<<" "<<data[i].id;
        t+=data[i-1].time;
        sum+=t;
    }
    cout<<endl<<fixed<<setprecision(2)<<(double)sum/(double)n<<endl;
    return 0;
}
