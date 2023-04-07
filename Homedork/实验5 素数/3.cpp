#include <iostream>

#include <cmath>

using namespace std;

typedef long long LL;

int isprime(int n)

{

    if(n<2) return 0;

    int i;

    for(i=2;i<n;i++)

        if(n%i==0) return 0;

    return 1;

}

int main()

{

    int n;

    int sum,i;

    while(cin>>n)

    {

        sum=0;

        for(i=2;i<n/2;i++)

            if(isprime(i)&&isprime(n-i))

                sum++;

                cout<<sum<<endl;

    }

    return 0;

}
