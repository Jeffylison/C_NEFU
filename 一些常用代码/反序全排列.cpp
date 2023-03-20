#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={5,4,3,2,1};
    do
    {
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
    }while(prev_permutation(a,a+5));
    return 0;
}
