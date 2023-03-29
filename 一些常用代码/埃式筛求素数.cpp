#include <bits/stdc++.h>
using namespace std;
#define MAX (int)1e7
typedef long long LL;
LL su[MAX+1];
bool b[MAX+1];
int cnt=0;
void init()
{
    LL i,j;
    memset(b,1,sizeof(b));
    b[0]=b[1]=0;
    for(i=2;i<=MAX;i++)
    {
        if(b[i])
        {
            su[++cnt]=i;
            for(j=i*2;j<=MAX;j+=i)
                b[j]=0;
        }
    }
}
int isprime(LL n)
{
    if(n<2) return 0;
    int i;
    for(i=1;su[i]<=sqrt(n);i++)
        if(n%su[i]==0) return 0;
    return 1;
}
int main()
{
    LL n;
    int i;
    init();
    cin>>n;
    if(isprime(n)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    for(i=1;su[i]<=n;i++)
        cout<<su[i]<<" ";
    return 0;
}
