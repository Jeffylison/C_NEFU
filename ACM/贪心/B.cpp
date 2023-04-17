#include <bits/stdc++.h>
using namespace std;
int main()
{
    int start[401],end[401],temp[401];
    int T,n,sum;
    cin>>T;
    while(T--)
    {
        memset(temp,0,sizeof(temp));
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>start[i]>>end[i];
            if(start[i]>end[i]) swap(start[i],end[i]);
            if(start[i]%2==0) start[i]/=2; else start[i]=(start[i]+1)/2;
            if(end[i]%2==0) end[i]/=2; else end[i]=(end[i]+1)/2;
            for(int k=start[i];k<=end[i];k++)
                temp[k]++;
        }
        sum=0;
        for(int i=2;i<=200;i++)
        {
           if(sum<temp[i]) sum=temp[i];
        }
        cout<<sum*10<<endl;
    }
    return 0;
}
