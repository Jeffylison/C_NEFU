#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL n;
    double m;
    while(cin>>n)
    {
        //log10(10^n/ln10^n)+1;n*log10(10)-log10(n*log(10))+1;
        m=n*log10(10)-log10(n*log(10))+1;
        cout<<(int)m<<endl;
    }
    return 0;
}
