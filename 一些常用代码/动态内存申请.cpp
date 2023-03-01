#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int (*a)[5];
    int n,i,j;
    p=(int *)malloc(sizeof(int)*n);
    if(p==NULL) exit(1);
    a=(int (*)[5])malloc(sizeof(int)*n*5);
    if(a==NULL) exit(1);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    for(i=0;i<n;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        printf("%d ",p[i]);
    printf("\n");
    for(i=0;i<n;i++)
        for(j=0;j<5;j++)
            printf("%d ",a[i][j]);
    free(a[5]);
    free(p);
    return 0;
}
