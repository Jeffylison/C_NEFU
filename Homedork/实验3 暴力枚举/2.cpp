#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,j,n,m,k;
    int (*a)[100];
    //int a[10][10];
    cin>>n;
    a=(int (*)[100])malloc(sizeof(int)*n*100);
    for(i=0; i<n; i++)
    {
        m=0;
        for(j=0;; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0) break;
        }
        for(j=0;; j++)
        {
            if(a[i][j]==0) break;
            for(k=0;; k++)
            {
                if(a[i][k]==0) break;
                else if(a[i][j]%2==0&&a[i][j]/2==a[i][k])
                    m++;
            }
        }
        cout<<m<<endl;
    }

    return 0;
}
