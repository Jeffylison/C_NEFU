#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout;
    int i,n;
    char (*a)[100];
    scanf("%d\n",&n);
    //string filename="C:\\asd\\student.txt";
    a=(char (*)[100])malloc(sizeof(char)*n*100);
    fout.open("C:\\asd\\student.txt");
    for(i=0;i<n;i++)
    {
        gets(a[i]);
        fout<<a[i]<<endl;
    }
    fout.close();
    return 0;
}
