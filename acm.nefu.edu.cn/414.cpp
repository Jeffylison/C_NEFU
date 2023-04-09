#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,t=0;
    scanf("%d/%d/%d",&x,&y,&z);
    if(x%4==0){
        for(y=y-1;y>=1;y--)
            {if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
                t+=31;
            else if(y==2) t+=29;
            else t+=30;}}
    else if(x%4!=0){
        for(y=y-1;y>=1;y--)
            {if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
                t+=31;
            else if(y==2) t+=28;
            else t+=30;}}
        t+=z;
        cout<<t;
    return 0;
}
