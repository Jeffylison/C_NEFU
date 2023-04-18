#include <iostream>
#include <bits/stdc++.h>
using namespace std;
stack<int>sa,sb;
int main()
{
    int N,a,b,t=1;
    cin>>N;
    for(int i=0;;i++)
    {
        cin>>a>>b;
        if(a==1)
        {
            for(int j=1;j<=b;j++)
            {
                sa.push(t++);
            }
        }
        else
        {
            for(int j=1;j<=b;j++)
            {
                sb.push(sa.top());sa.pop();
            }
        }
        if(sb.size()==N) break;
    }
    while(sb.size())
    {
        cout<<sb.top()<<endl;
        sb.pop();
    }
    return 0;
}
