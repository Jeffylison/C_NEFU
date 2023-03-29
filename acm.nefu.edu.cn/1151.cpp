#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define MAX (int)1e6
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
int main()
{
    int n;
    int i,x;
    init();
    while(cin>>n)
    {
        x=-1;
        for(i=1;i<=cnt&&su[i]<=n;i++)
        {
            if(b[i]) x=su[i];
        }
        cout<<x<<endl;
    }
    return 0;
}
