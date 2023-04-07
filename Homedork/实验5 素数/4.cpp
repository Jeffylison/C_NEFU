#include <iostream>

#include <cmath>

using namespace std;

typedef long long LL;

#define MAX (int)1e6

int su[MAX+1];

bool b[MAX+1];

int cnt=0;

void init()

{

    int i,j;

    memset(b,1,sizeof(b));

    b[0]=b[1]=0;

    for(i=2;i<=MAX;i++)

    {

        if(b[i])

        {

            su[++cnt]=i;

            for(j=i*2;j<=MAX;j+=i)

                b[j]=0;

        }

    }

}

int main()

{

    int i,n,sum;

    init();

    while(cin>>n)

    {

        sum=-1;

        for(i=1;i<=cnt&&su[i]<=n;i++)

        {

            if(b[i]) sum=su[i];

        }

        cout<<sum<<endl;

    }

    return 0;

}
