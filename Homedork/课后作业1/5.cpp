#include <iostream>
using namespace std;
int main()
{
    int N,K,i,j,sum,t;
    int *a;
    while(scanf("%d%d",&N,&K)!=EOF){
    a=(int *)malloc(sizeof(int)*N);
    t=0;
    for(i=0;i<N;i++)
        cin>>a[i];
    for(i=0;i<1<<N;i++)
    {
        sum=0;
        for(j=0;j<N;j++)
            if(i&1<<j)
            sum+=a[j];
        if(sum==K) {t=1;}
    }
    if(t==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;}
    return 0;
}
