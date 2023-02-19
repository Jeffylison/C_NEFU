#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int i,n,j;
    double *m,*sum;
    //double m[10],sum[10];
    double **a;
    while(scanf("%d",&n)!=EOF)
    {
        a=(double **)malloc(sizeof(double *)*3);
        m=(double *)malloc(sizeof(double)*n);
        sum=(double *)malloc(sizeof(double)*n);
        for(i=0; i<3; i++)
            a[i]=(double *)malloc(sizeof(double));
        for(i=0; i<n; i++)
            sum[i]=m[i]=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<3; j++)
            {
                scanf("%lf",&a[i][j]);
                sum[i]+=a[i][j];
            }
            m[i]=sum[i]/3;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%.2lf ",a[i][j]);
            }
            printf("%.2lf %.2lf\n",sum[i],m[i]);
        }
    }
    free(a[i]);
    free(a);
    free(sum);
    free(m);
    return 0;
}
