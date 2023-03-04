#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[100],b[100],n,i,j,t;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            {scanf("%d",&a[i]);b[i]=a[i];}
        for(i=0;i<n;i++)
        {
            t=1;
            for(j=i-1;j>=0;j--)
            {
                if(a[i]==b[j])
                    t++;
            }
            printf("%d ",t);
        }
        printf("\n");
    }
    return 0;
}
