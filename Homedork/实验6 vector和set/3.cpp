#include <iostream>
#include <set>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
set<int>a[50];
set<int>b;
set<int>::iterator it;
int main()
{
    int N,K,M,i,j,x,y,Nc,Nt,t;
    double sum;
    while(cin>>N){
    for(i=1;i<=N;i++)
        {a[i].clear();b.clear();}
    for(i=1;i<=N;i++)
    {
        cin>>M;
        for(j=1;j<=M;j++)
        {
            cin>>x;
            a[i].insert(x);
        }
    }
    cin>>K;
    for(i=1;i<=K;i++)
    {
        b.clear();
        cin>>x>>y;
        for(it=a[x].begin();it!=a[x].end();it++)
            b.insert(*it);
        for(it=a[y].begin();it!=a[y].end();it++)
            b.insert(*it);
        t=a[x].size()+a[y].size();
        Nt=b.size();
        Nc=t-Nt;
        for(it=b.begin();it!=b.end();it++)
        //cout<<*it<<" ";
        //cout<<endl<<t<<" "<<Nc<<" "<<Nt<<" ";
        sum=(double)Nc/Nt*100;
        cout<<setiosflags(ios::fixed)<<setprecision(2)<<sum<<"%"<<endl;
    }}
    return 0;
}
