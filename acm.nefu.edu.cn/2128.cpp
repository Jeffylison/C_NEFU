#include <bits/stdc++.h>
const int N=1e4;
using namespace std;
vector<int>a[N+5];
int n,m,n1,x;
int main()
{

    ios::sync_with_stdio(false);
    while(cin>>n>>m)
    {
     for(int i=1;i<=n;i++)
        a[i].clear();
    for(int i=1;i<=m;i++)
    {
        cin>>n1>>x;
        a[n1].push_back(x);
    }
   for(int i=1;i<=n;i++)
   {
       for(int j=0;j<a[i].size();j++)
       {
           if(j==a[i].size()-1)  printf("%d",a[i][j]);
           else printf("%d ",a[i][j]);
        }
        printf("\n");
   }
    }
    return 0;
}
