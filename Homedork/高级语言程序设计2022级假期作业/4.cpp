#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int a[10][10],i,j,n,sum,sum1,sum2,m;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;sum1=0;sum2=0;m=0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        for(i=0;i<n;i++)
            sum+=a[i][i];
        for(i=0;i<n;i++)
            sum2+=a[i][n-1-i];
            if(sum!=sum2) m++;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                sum1+=a[i][j];
            if(sum1!=sum) m++;
            sum1=0;
        }
        for(j=0;j<n;j++)
        {
            for(i=0;i<n;i++)
                sum1+=a[i][j];
            if(sum1!=sum) m++;
            sum1=0;
        }
        if(m==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
