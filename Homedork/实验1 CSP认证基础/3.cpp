#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[100],b[100],i,j,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {scanf("%d",&a[i]);
            b[i]=a[i];
        }
        a[0]=(a[1]+a[0])/2;
        a[n-1]=(a[n-2]+a[n-1])/2;
        for(i=1;i<n-1;i++)
            a[i]=(b[i-1]+b[i]+b[i+1])/3;
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
    return 0;
}
