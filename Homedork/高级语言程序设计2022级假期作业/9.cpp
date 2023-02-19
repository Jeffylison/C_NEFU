#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * pNext;
} Node;
//统计链表长度
int StatLengthNode(Node * head)
{
    int len=0;
    if(head!=NULL && head->pNext!=NULL)
    {
        head=head->pNext;
        while(head!=NULL)
        {
            len++;
            head=head->pNext;
        }
    }
    return len;
}
//创建链表
Node * createNodeList(int n)
{
    Node * head=NULL,* ptail, *pnew;
    if(n>0)
    {
        head = (Node*) malloc(sizeof(Node));
        if(NULL == head) return head;
        ptail=head;
        while(n)
        {
            pnew =(Node*) malloc(sizeof(Node));
            scanf("%d",&pnew->data);
            pnew->pNext=NULL;
            ptail->pNext=pnew;
            ptail=pnew;
            n--;
        }
    }
    return head;
}
//删除值为value的节点
void deleteNode(Node* head,int value)//OO--OO--OO--OO
{
    //start
    Node *temp;
    temp=(Node *)malloc(sizeof(Node));
    //head=head->pNext;
    temp=head->pNext;
    while(temp!=NULL)
    {
        if(temp->data==value)
        {
            head->pNext=head->pNext->pNext;
            temp=temp->pNext;
            continue;
        }
        //if(head->pNext->pNext==NULL) break;
        temp=temp->pNext;
        head=head->pNext;
    }
    //end
}
void printNodeList(Node * head)
{
    if(head==NULL || head->pNext==NULL) return;
    head=head->pNext;
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->pNext;
    }
    printf("\n");
}
//销毁
void destroyNodeList(Node* head)
{
    if(NULL == head)
    {
        return;
    }
    if(NULL != head->pNext)
    {
        Node* p = head->pNext;
        while(NULL != p)
        {
            Node* tmp = p;
            p = p->pNext;
            free(tmp);
        }
    }
    free(head);
    head = NULL;
}
void main()
{
    int n,i,v,len;
    Node * pHead;
    while(scanf("%d",&n)!=EOF)//输入数据个数n
    {
        pHead = createNodeList(n);//依次输入n个整数
        scanf("%d",&v);//输入欲删除数据m
        printf("%d\n",n);//输出原始单链表的长度
        printNodeList(pHead);//依次输出原始单链表的数据
        deleteNode(pHead,v);//销毁链表
        len=StatLengthNode(pHead);
        printf("%d\n",len);//输出完成删除后的单链表长度
        printNodeList(pHead);//依次输出完成删除后的单链表数据
        destroyNodeList(pHead);//销毁链表
    }
}
