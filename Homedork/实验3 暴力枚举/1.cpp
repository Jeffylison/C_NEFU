#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,n,i;
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<setfill('0')<<setw(3)<<n+i<<" ";
        if((n+i+1)>999) break;
    }
    return 0;
}
