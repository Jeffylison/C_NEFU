#include <bits/stdc++.h>
using namespace std;
int ex_gcd(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;y=0;return 0;
    }
    ex_gcd(b,a%b,x,y);
    int t;
    t=x;x=y;y=t-(a/b)*y;
}
int main()
{
    int m,n,x,y;
    cin>>m>>n;
    ex_gcd(m,n,x,y);
    cout<<x<<" "<<y;
    return 0;
}
//运算ax+by=gcd(a,b);的x或y;
