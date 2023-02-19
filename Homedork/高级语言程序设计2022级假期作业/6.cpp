#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int n,i,sum,a[10],m=1;
    char b[10][100];
    scanf("%d",&n);
    for(n;n>0;n--)
    {
        sum=0;
        for(i=0;i<10;i++)
            scanf("%s %d",&b[i],&a[i]);
        sum=a[0];
        for(i=0;i<10;i++)
            if(sum<a[i])
                sum=a[i];
        printf("Case #%d:\n",m);
        for(i=0;i<10;i++)
            if(sum==a[i])
                printf("%s\n",b[i]);
        m++;
    }
    return 0;
}
