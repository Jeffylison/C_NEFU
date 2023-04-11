#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n,m,i,j,sum;
    double x,y;
    while(cin>>t)
    {
        while(t--)
        {//a  b
         //n  m
         sum=0;
            cin>>a>>b>>n>>m;
            sum=min(b*n,n*a);
            sum=min(sum,n/(m+1)*m*a+(n-n/(m+1)*(m+1))*b);
            sum=min(sum,n/(m+1)*m*a+(n-n/(m+1)*(m+1))*a);
            cout<<sum<<endl;
        }
    }
}
