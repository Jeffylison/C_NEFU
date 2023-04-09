#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m;
    cin>>n;
    int a[n+1];
    if(n%2!=0) m=(n+1)/2;
    else m=n/2;
    for(i=0;i<m;i++)
        a[i]=i+1;
    do
    {
        for(i=0;i<m;i++)
            cout<<a[i];
        if(n%2==0)
        for(i=m-1;i>=0;i--)
            cout<<a[i];
        else
        for(i=m-2;i>=0;i--)
            cout<<a[i];
        cout<<endl;
    }while(next_permutation(a,a+m));
    return 0;
}
