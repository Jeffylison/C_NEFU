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
            printf("%d ",phead->data);
            phead=phead->next;
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
                if(phhead->data==pphead->data)
                {
                    tt++;
                    break;
                }
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
//4 6 8 10 0 1 2 3 4 5 6 7 0   3 2 5 6 4 0 1 2 6 7 8 5 3 10 0  3 6 9 7 5 1 2 30 0 1 3 2 8 6 8 42 5 6 4 5 0   9 8 7 6 4 2 2 5 7 0 5 4 7 5 6 2 7 4 5 5 0
