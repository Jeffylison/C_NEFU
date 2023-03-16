#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m;
    double score[2],scorem,scoren;
    char name1[20],name2[20],no[7],sex;
    //FILE *fp=fopen("C:/asd/student.txt","w");
    ofstream fout;
    fout.open("C:\\asd\\student.txt");
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>no;
        fout<<no<<" ";
        cin>>name1>>name2;
        if(strlen(name2)==1&&(name2[0]=='F'||name2[0]=='M'))
            {m=strlen(name1);fout<<m<<" "<<name1<<" "<<name2<<" ";}
        else{cin>>sex;m=strlen(name1)+strlen(name2)+1;fout<<m<<" "<<name1<<" "<<name2<<" "<<sex<<" ";}
        scanf("%lf %lf %lf",&score[0],&score[1],&score[2]);
        scorem=score[0]+score[1]+score[2];
        scoren=scorem/3.0;
        fout<<setiosflags(ios::fixed)<<setprecision(2)<<score[0]<<" "<<score[1]<<" "<<score[2]<<" "<<scoren<<" "<<scorem<<endl;
    }
    fout.close();
    return 0;
}

