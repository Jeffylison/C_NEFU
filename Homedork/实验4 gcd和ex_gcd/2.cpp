#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    return b>0? gcd(b,a%b):a;
}

int main()
{
    int n,i,j,t;
    int *a;
    while(scanf("%d",&n)!=EOF)
    {
        a=(int *)malloc(sizeof(int)*n);
        for(i=0;i<n;i++)
            cin>>a[i];
        t=a[0];
        for(i=0;i<n;i++)
        {
            t=gcd(t,a[i]);
        }
        cout<<t<<endl;
    }
    return 0;
}
