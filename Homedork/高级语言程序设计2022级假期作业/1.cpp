#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int ba(int *p,int n,int x)
{
    int j;
    for(j=0;j<n;j++)
            if(p[j]>=x)
                printf("%d ",p[j]);
    return 0;
}
int main()
{
    int i,n,x,a[100];
    while(scanf("%d %d",&n,&x)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        ba(a,n,x);
        printf("\n");
    }
    return 0;
}
