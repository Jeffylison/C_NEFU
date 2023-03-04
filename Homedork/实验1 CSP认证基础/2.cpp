#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i,a[100];
    double ap,da,fa[100];
    while(scanf("%d",&n)!=EOF)
    {
        ap=da=0.0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            ap+=a[i];
        ap=ap/n;
        for(i=0;i<n;i++)
            da+=(a[i]-ap)*(a[i]-ap);
        da=da/n;
        for(i=0;i<n;i++)
            fa[i]=(a[i]-ap)/pow(da,0.5);
        for(i=0;i<n;i++)
            printf("%.4lf\n",fa[i]);
    }
    return 0;
}
