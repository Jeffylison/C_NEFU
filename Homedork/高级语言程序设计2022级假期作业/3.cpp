#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int a[100][100],n,m,x,y,i,j,sum;
    while(scanf("%d%d%d%d",&n,&m,&x,&y)!=EOF)
    {
        sum=0;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&a[i][j]);
        for(i=0;i<n;i++)
            {
                if(i==x) continue;
                for(j=0;j<m;j++)
                {
                    if(j==y) continue;
                    sum+=a[i][j];
                }
            }
            printf("%d\n",sum);
    }
    return 0;
}
