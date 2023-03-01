#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
int main()
{
    int i,n;
    NODE *phead,*pnew;
    phead=(NODE *)malloc(sizeof(NODE));
    if(phead==NULL) exit(1);
    phead->next=NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        pnew=(NODE *)malloc(sizeof(NODE));
        if(pnew==NULL) exit(1);
        scanf("%d",&pnew->data);
        pnew->next=phead->next;
        phead->next=pnew;
    }
    phead=phead->next;
    while(phead)
    {
        printf("%d ",phead->data);
        phead=phead->next;
    }
    return 0;
}
