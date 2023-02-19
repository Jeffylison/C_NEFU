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

    aa:    while(1)
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
                if(ptail->data==pptail->data)//1 2 3 4 5 6 7
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
        while(pphead)
        {
            printf("%d ",pphead->data);
            pphead=pphead->next;
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
