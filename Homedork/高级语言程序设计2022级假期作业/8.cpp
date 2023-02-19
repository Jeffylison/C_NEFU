#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct date
{
    int no;
    char name[30];
    int data1;
    int data2;
    int data3;
};
int main()
{
    struct date ba[30];
    int i,j,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d %s %d %d %d",&ba[i].no,&ba[i].name,&ba[i].data1,&ba[i].data2,&ba[i].data3);
        //for(i=0;i<n;i++)
            //printf("%d %s %d %d %d\n",ba[i].no,ba[i].name,ba[i].data1,ba[i].data2,ba[i].data3);
        int sum=ba[0].data1+ba[0].data2+ba[0].data3;
        for(i=0;i<n;i++)
            if(ba[i].data1>=60&&ba[i].data2>=60&&ba[i].data3>=60)
                if(sum<ba[i].data1+ba[i].data2+ba[i].data3)
                    sum=ba[i].data1+ba[i].data2+ba[i].data3;
        for(i=0;i<n;i++)
            if(ba[i].data1>=60&&ba[i].data2>=60&&ba[i].data3>=60)
                if(sum==ba[i].data1+ba[i].data2+ba[i].data3)
                    printf("%d %s %d\n",ba[i].no,ba[i].name,sum);
    }
    return 0;
}
