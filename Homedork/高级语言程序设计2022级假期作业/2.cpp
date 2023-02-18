#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int ba(int *p,int x,int m,int n)
{
    int j,sum;
    sum=0;
    for(j=0;j<n;j++)
        if(p[j]>x-m&&p[j]<x+m)
            sum++;
          //printf("%d ",a[j]);
    printf("%d\n",sum);
    return 0;
}
int main()
{
    int a[100],x,m,n,i;
    while(scanf("%d%d%d",&n,&x,&m)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        ba(a,x,m,n);
    }
    return 0;
}
