#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
map<string,vector<string> >sa;
vector<string>::iterator it;
vector<string>::iterator op;
vector<string> se;
int main()
{
    int N,M;
    string a,b;
    cin>>N>>M;
    sa.clear();
    for(int i=0;i<M;i++)
    {
        cin>>a>>b;
        if(sa.find(a)!= sa.end())
            sa[a].push_back(b);
        else
        {
            se.push_back(a);
            sa.insert(make_pair(a,vector<string>(1,b)));
        }
    }
    for(it=se.begin();it!=se.end();it++)
    {
        cout<<(*it);
        for(op=sa[*it].begin();op!=sa[*it].end();op++)
            cout<<" "<<*op;
        cout<<endl;
    }
    return 0;
}
