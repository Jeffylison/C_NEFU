#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL MAX=1e9+7;
LL pow(LL a,LL b)
{
    LL sum=1;
    while(b)
    {
        if(b%2)
        {
            sum=(sum*a)%MAX;
            b--;
        }
        b/=2;
        a=a*a%MAX;
    }
    return sum;
}
int main()
{
    LL n;
    LL sum;
    cin>>n;
    sum=pow(3,n);
    sum=(sum*2)%MAX;
    cout<<sum<<endl;
    return 0;
}
