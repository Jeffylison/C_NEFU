#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,j,n,T,x,aso;
    cin>>T;
    n=0;
    for(i=1;i<1<<14;i++)
    {
        x=T;
        aso=0;
        for(j=0;j<14;j++)
        {
            if(i&1<<j)
                x*=2,aso++;
            else x--;
        }
        if(x==1&&aso==5)
            n++;
    }
    cout<<n<<endl;
    return 0;
}
