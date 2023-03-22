#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,t,min;
    int *a;
    cin>>n>>k;
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
                t=a[j],a[j]=a[j+1],a[j+1]=t;
    min=a[0];
    t=1;
    for(i=0;i<n;i++)
    {
        if(min<a[i]) {t++;min=a[i];}
        if(t==k) break;
    }
    if(t==k)
    cout<<min<<endl;
    else
    cout<<"NO RESULT"<<endl;
    return 0;
}
