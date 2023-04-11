#include <bits/stdc++.h>
using namespace std;
//const int N = 1e5 + 10;
//int a[N];

int main()
{
	//for(int i = 1;i <= N -1;i++)a[i] = i;
	int t;

	while(scanf("%d",&t)!=EOF)
	{
		while(t -- )
		{
			int n;
			int x;
			int sum = 0;

			scanf("%d%d",&n,&x);

			for(int i = 1;i <= n;i++)
			{
				int r = x / i;
				if(r * i == x && r <= n)sum++;
			}

			cout << sum << endl;
		}
	}
	return 0;
}
