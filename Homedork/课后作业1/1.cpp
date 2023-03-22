#include <iostream>
using namespace std;
int main()
{
    int n,i,num,t=0;
    int *a;
    cin>>n;
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>num;
    for(i=0;i<n;i++)
        if(num==a[i])
    {
        t=1;
        cout<<i+1;
        break;
    }
    if(t==0) cout<<0;
    return 0;
}
