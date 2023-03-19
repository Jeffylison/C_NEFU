#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,j,n,x,a[30],sum,minsum=0;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        minsum+=a[i];
    }
    for(i=1;i<1<<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
            if(i&1<<j)
                sum+=a[j];
        if(sum==x)
        {minsum=sum;break;}
        else if(sum>x&&sum<minsum)
            minsum=sum;
    }
    cout<<minsum<<endl;
    return 0;
}
