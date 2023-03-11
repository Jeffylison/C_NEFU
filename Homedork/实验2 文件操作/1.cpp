#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    int n,i;
    char a[100][300];
    while(scanf("%d",&n)!=EOF)
    {
        fout.open("test01.txt");
        for(i=0;i<n;i++)
    {
        cin>>a[i];
        fout<<a[i]<<endl;
    }
    fout.close();
    fin.open("test01.txt",ios::in);
    //char buff[1024]={0};
    string buff;
    while(getline(fin,buff))
        cout<<buff<<endl;
    fin.close();
    //system("start C:\\asad\\test01.txt");
    }
    return 0;
}
