#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int i,j,n,sum[10],m;
    char a[10][10];
    while(scanf("%d",&n)!=EOF)
    {
        m=0;
        for(i=0;i<n;i++){sum[i]=1;
            scanf("%s",&a[i]);}
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                if(strcmp(a[i],a[j])==0) sum[i]++;
            //1 3 1 1 2 3 4
        m=sum[0];
        for(i=0;i<n;i++)
            if(m<sum[i]) m=sum[i];
        for(i=0;i<n;i++)
            if(m==sum[i]) printf("%s ",a[i]);
        printf("\n");
    }
    return 0;
}
