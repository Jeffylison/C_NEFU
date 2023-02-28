#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int n,i,j;
   double (*a)[5]=NULL,(*p)[5]=NULL,*q,sum;
   while(scanf("%d",&n)!=EOF)
   {
       a = (double (*)[5]) malloc(n*5*sizeof(double));
       if(a==NULL) exit(1);
       for(p=a;p<a+n;p++)
       {
           sum = 0;
           for(q=*p;q<*p+3;q++)
           {
               scanf("%lf",q);
               sum += *q;
           }
           *q++ = sum;
           *q = sum/3;
       }

       for(p=a;p<a+n;p++)
       {
           for(q=*p;q<*p+5;q++)  printf("%.2f ",*q);
           printf("\n");
       }

   }

    return 0;

}
