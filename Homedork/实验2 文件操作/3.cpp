#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int no;
    char name1[20];
    char name2[20];
    char sex;
    double score[3];
    double scorem;
    double scoren;
    struct node *next;
}NODE;
int main()
{
    int tno;
    char tname1[20];
    char tname2[20];
    char tsex;
    double tscore[3];
    double tscorem;
    double tscoren;
    NODE *phead,*pnew,*ptail;
    phead=(NODE *)malloc(sizeof(NODE));
    if(phead==NULL) exit(1);
    phead->next=NULL;
    ptail=phead;
    ofstream fout;
    fout.open("C:\\Users\\Administrator\\Desktop\\student.dat");
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        pnew=(NODE *)malloc(sizeof(NODE));
        if(pnew==NULL) exit(1);
        //scanf("%s %s %s ",&pnew->no,&pnew->name1,&pnew->name2);
            scanf("%d ",&pnew->no);
        scanf("%s %s ",&pnew->name1,&pnew->name2);
        cout<<pnew->no<<endl;
        //cin>>pnew->name1;
        //cin>>pnew->name2;
        if(strlen(pnew->name2)==1&&(pnew->name2[0]=='F'||pnew->name2[0]=='M')){pnew->sex=pnew->name2[0];}
        else cin>>pnew->sex;
        cin>>pnew->score[0]>>pnew->score[1]>>pnew->score[2];
        pnew->scorem=pnew->score[0]+pnew->score[1]+pnew->score[2];
        pnew->scoren=pnew->scorem/3.0;
        pnew->next=NULL;
        ptail->next=pnew;
        ptail=pnew;
    }
    phead=phead->next;
    /*while(phead)
    {
        cout<<phead->no<<" "<<phead->name1<<" ";
        if(strlen(phead->name2)==1&&(phead->name2[0]=='F'||phead->name2[0]=='M')) cout<<phead->sex<<" ";
        else cout<<phead->name2<<" "<<phead->sex<<" ";
        cout<<phead->score[0]<<" "<<phead->score[1]<<" "<<phead->score[2]<<" "<<phead->scorem<<" "<<phead->scoren<<endl;
        phead=phead->next;
    }*/
    /*NODE *pcp1,*pcp2,*pcp11,*pcp22,*pcp;
    pcp1=pcp2=phead->next;
    pcp11=pcp22=phead;
    int max=pcp1->scorem;
    while(pcp1)
    {
        if(max<pcp1->scorem)
            {max=pcp1->scorem;pcp=pcp1;}
        pcp1=pcp1->next;pcp=pcp->next;//3 1 2 3 4 5 6 3
    }
     pcp1->next=pcp2->next;pcp*/
    NODE *p,*q;
    p=phead;
    for(p=phead;p->next!=NULL;p=p->next)
        for(q=p->next;q!=NULL;q=q->next)
    {
        if(p->scorem<q->scorem)
        {
            //strcpy(tno,p->no),strcpy(p->no,q->no),strcpy(q->no,tno);
            tno=p->no,p->no=q->no,q->no=tno;
            strcpy(tname1,p->name1),strcpy(p->name1,q->name1),strcpy(q->name2,tname1);
            strcpy(tname2,p->name2),strcpy(p->name2,q->name2),strcpy(q->name2,tname2);
            tsex=p->sex,p->sex=q->sex,q->sex=tsex;
            tscore[0]=p->score[0],p->score[0]=q->score[0],q->score[0]=tscore[0];
            tscore[1]=p->score[1],p->score[1]=q->score[1],q->score[1]=tscore[1];
            tscore[2]=p->score[2],p->score[2]=q->score[2],q->score[2]=tscore[2];
            tscorem=p->scorem,p->scorem=q->scorem,q->scorem=tscorem;
            tscoren=p->scoren,p->scoren=q->scoren,q->scoren=tscoren;
        }
    }
    while(phead){
    fout<<phead->no<<" "<<phead->name1<<" ";
    if(strlen(phead->name2)==1&&(phead->name2[0]=='F'||phead->name2[0]=='M')) fout<<phead->sex<<" ";
        else fout<<phead->name2<<" "<<phead->sex<<" ";
    fout<<setiosflags(ios::fixed)<<setprecision(2)<<phead->score[0]<<" "<<phead->score[1]<<" "<<phead->score[2]<<" "<<phead->scorem<<" "<<phead->scoren<<endl;
    phead=phead->next;
    }
    fout.close();
    return 0;
}
