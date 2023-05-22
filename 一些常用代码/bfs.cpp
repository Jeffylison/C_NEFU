#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int n,m;
struct sa
{
    int x;
    int y;
};
queue<pair<int,int> >se;
int s1[4]={1,-1,0,0};
int s2[4]={0,0,1,-1};
int bfs(int x,int y)
{
    int sum=0;
    se.push({x,y});
    //a[x][y]=0;
    while(!se.empty())
    {
        sum++;
        int x1,y1,x2,y2;
        x1=se.front().first;
        y1=se.front().second;
        a[x1][y1]=0;
        se.pop();
        for(int i=0;i<4;i++)
        {
            x2=x1+s1[i];
            y2=y1+s2[i];
            if(x2>=1&&x2<=n&&y2>=1&&y2<=m&&a[x2][y2]==1)
            se.push({x2,y2});
        }
    }
    return sum;
}
int main()
{
    //int nn;
    while(~scanf("%d%d",&n,&m))
    {
        //scanf("%c",&nn);
        //getchar();
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                scanf("%d",&a[i][j]);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j]==1)
                    cout<<bfs(i,j)<<endl;
            }
        }
        cout<<"---------------"<<endl;
    }
    return 0;
}
