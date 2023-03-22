#include <iostream>
using namespace std;
int main()
{
    int N,i,j,x,y,t=0;
    int *a;
    cin>>N;
    a=(int *)malloc(sizeof(int)*N);
    for(i=0;i<N;i++)
        cin>>a[i];
    for(i=0;i<N;i++)
    {
        x=y=0;
        for(j=i;j>=0;j--)
            if(a[j]>a[i]) x++;
        for(j=i;j<N;j++)
            if(a[j]>a[i]) y++;
        if(x==y) t++;
    }
    cout<<t;
    return 0;
}
