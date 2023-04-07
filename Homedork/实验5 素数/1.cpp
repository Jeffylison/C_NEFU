#include <iostream>

#include <cmath>

using namespace std;

typedef long long LL;

int main()

{

    LL n;

    double m;

    while(cin>>n)

    {

        m=n*log10(10)-log10(n)-log10(log(10))+1;

        cout<<(int)m<<endl;//log10(n/log(10^n))+1;

    }

    return 0;

}

