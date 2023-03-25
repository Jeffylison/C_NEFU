#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    return b>0? gcd(b,a%b):a;
}
int lcm(int a,int b)
{
    return a/gcd(a,b)*b;
}
int main()
{
    int m,n,min,max;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        min=gcd(m,n);
        max=lcm(m,n);
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
