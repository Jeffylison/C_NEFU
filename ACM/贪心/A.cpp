#include <bits/stdc++.h>
using namespace std;
struct sa
{
    int j;
    int f;
    double awk;
} data[1001];
int cmp(const sa &a,const sa &b)
{
    return (a.awk)>(b.awk);
}
int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        double sum=0.0;
        if(m==-1&&n==-1) break;
        for(int i=0; i<n; i++)
        {
            cin>>data[i].j>>data[i].f;
            data[i].awk=(double)data[i].j/(double)data[i].f ;
        }
        sort(data,data+n,cmp);
        for(int i=0; i<n; i++)
        {
            if (m>=data[i].f)
            {
                sum+=data[i].j;

                m-=data[i].f;
            }
            else
            {
                sum+=(double)m*data[i].awk;
                break;
            }
        }
        printf("%.3f\n",sum);

    }
    return 0;
}
