#include <bits/stdc++.h>
using namespace std;
int main()
{
    //389 207 155 300 299 170 158 65
    //1   1   1   2   2   2   2   1
    int n,m;
    while(cin>>n){
    m=0;
    int a[n+1],dp[n+1];
    for(int i=1;i<=n;i++)
        {cin>>a[i];dp[i]=1;}
    for(int i=1;i<=n;i++)
        for(int j=1;j<i;j++)
    {
        if(a[j]<a[i]) dp[i]=max(dp[i],dp[j]+1);
        m=max(m,dp[i]);//cout<<m<<" ";
    }
    cout<<m<<endl;}
    return 0;
}
