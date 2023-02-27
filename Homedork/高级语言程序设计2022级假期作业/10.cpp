#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        NODE *phead,*ptail,*pnew;
        phead=(NODE *)malloc(sizeof(NODE));
        phead->next=NULL;
        ptail=phead;
        NODE *pphead,*pptail,*ppnew;
        pphead=(NODE *)malloc(sizeof(NODE));
        pphead->next=NULL;
        pptail=pphead;
        pnew=(NODE *)malloc(sizeof(NODE));
        pnew->data=a;
        if(pnew->data==0) goto aa;
        pnew->next=NULL;
        ptail->next=pnew;
        ptail=pnew;
        while(1)
        {
            pnew=(NODE *)malloc(sizeof(NODE));
            scanf("%d",&pnew->data);
            if(pnew->data==0) break;
            pnew->next=NULL;
            ptail->next=pnew;
            ptail=pnew;
        }

aa:
        while(1)
        {
            ppnew=(NODE *)malloc(sizeof(NODE));
            scanf("%d",&ppnew->data);
            if(ppnew->data==0) break;
            ppnew->next=NULL;
            pptail->next=ppnew;
            pptail=ppnew;
        }
        //ptail->next=pphead->next;
        ptail=phead->next;
        pptail=pphead->next;
        phead=phead->next;
        NODE *phhead=phead;
        NODE *phhhead=phead;
        while(phead)
        {
            int t=0;
            while(phhead!=phead)
            {
                if(phhead->data==phead->data) {t++;break;}
                phhead=phhead->next;
            }
            if(t==0)printf("%d ",phead->data);
            phead=phead->next;
            phhead=phhhead;
        }
        while(ptail)
        {
            NODE *temp;
            temp=pphead;
            while(pptail)
            {
                if(ptail->data==pptail->data)//1 2 2 4 5 6 7
                {
                    temp->next=temp->next->next;
                    pptail=pptail->next;
                    continue;
                }
                pptail=pptail->next;
                temp=temp->next;
            }
            ptail=ptail->next;
            pptail=pphead->next;
        }
        pphead=pphead->next;
        phhead=pphead;
        phhhead=pphead;
        while(pphead)
        {
            int tt=0;
            while(phhead!=pphead)
            {
                if(phhead->data==pphead->data) {tt++;break;}
                phhead=phhead->next;
            }
            if(tt==0)printf("%d ",pphead->data);
            pphead=pphead->next;
            phhead=phhhead;
        }

        /* while(phead)
         {
             printf("%d ",phead->data);
             phead=phead->next;
         }*/
        printf("\n");

    }
    return 0;
}
