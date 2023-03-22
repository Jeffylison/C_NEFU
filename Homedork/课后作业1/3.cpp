#include <iostream>
using namespace std;
int main()
{
    int m,t,i,n,x=0,y=0;
    cin>>m>>t;
    for(i=1;i<=m;i++)
    {
        x=0;
        n=i;
        while(n>=0)
        {
            if(n%10==t) {x=1;break;}
            if(n==0) break;
            n/=10;
        }
        if(x==1) continue;
        else {y++;}
    }
    cout<<y;
    return 0;
}
