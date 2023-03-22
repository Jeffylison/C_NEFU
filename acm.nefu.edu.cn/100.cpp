#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,max,i;
    int *a;
    while(scanf("%d",&m)!=EOF)
    {
        a=(int *)malloc(sizeof(int)*m);
        max=0;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            if(a[i]>max)
                max=a[i];
        }
        cout<<max<<endl;
    }
    return 0;
}
