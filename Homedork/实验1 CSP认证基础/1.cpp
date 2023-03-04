#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,j;
    double i,x,sum,sum1;
    while(scanf("%d%lf%lf",&n,&i,&x)!=EOF)
    {
        sum1=x;
        sum=0;
        for(j=1;j<=n;j++)
        {
            scanf("%lf",&x);
            sum=sum+x*(1/pow((1+i),j));
        }
        printf("%.3lf\n",sum+sum1);
    }
    return 0;
}
