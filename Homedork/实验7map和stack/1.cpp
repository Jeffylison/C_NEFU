#include <iostream>
#include <map>
#include <string>
using namespace std;
map<string,int>sa;
map<string,int>::iterator it;
int main()
{
    int n;
    while(cin>>n)
    {
        string x;
        sa.clear();
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sa[x]++;
        }
        int max=0;
        for(it=sa.begin();it!=sa.end();it++)
        {
            if(max<(*it).second) {max=(*it).second;x=(*it).first;}
        }
        cout<<x<<endl;
    }
    return 0;
}
