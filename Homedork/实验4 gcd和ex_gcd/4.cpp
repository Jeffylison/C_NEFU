#include <bits/stdc++.h>
using namespace std;
int ex_gcd(long long a,long long b,long long &x,long long &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return 0;
    }
    ex_gcd(b,a%b,x,y);
    int t;
    t=x;x=y;y=t-(a/b)*y;
}
int main()
{
    long long a,b,x,y,n,ans;
    ex_gcd(6,1007,x,y);
    if(x<0) x=(x+1007)%1007;
    while(cin>>n)
    {
        ans=(n*(n+1))%1007;
        ans=(ans*(2*n+1))%1007;
        ans=(ans*x)%1007;
        cout<<ans<<endl;
    }
    return 0;
}
