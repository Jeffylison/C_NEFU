#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,i,j,n;
    int a[5]={1,2,3,4,5};
    cin>>m;
    if(m%2==0)
    do
    {
        for(i=0;i<m/2;i++)
            cout<<a[i];
        for(i=m/2-1;i>=0;i--)
            cout<<a[i];
        cout<<endl;
    }while(next_permutation(a,a+m/2));
    else
    do
    {
        for(i=0;i<(m+1)/2;i++)
            cout<<a[i];
        for(i=(m+1)/2-2;i>=0;i--)
            cout<<a[i];
        cout<<endl;
    }while(next_permutation(a,a+(m+1)/2));
    return 0;
}
