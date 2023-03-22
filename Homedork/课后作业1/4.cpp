#include <iostream>
using namespace std;
int main()
{
    char * a;
    long long int sum=0;
    int N,i,j,k;
    scanf("%d\n",&N);
    a=(char *)malloc(sizeof(char)*N);
    for(i=0;i<N;i++)
        scanf("%c",&a[i]);
    for(i=0;i<N;i++)
    {
        if(a[i]=='C')
        for(j=i;j<N;j++)
        {
            if(a[j]=='O')
            for(k=j;k<N;k++)
            {
                if(a[k]=='W') sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}
