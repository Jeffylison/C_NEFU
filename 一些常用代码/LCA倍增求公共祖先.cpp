#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

const int N = 5e5 + 10;

int fa[N][20], dep[N];//fa[i][j] i½ÚµãµÚ2^i×æÏÈ£¬depÎªÉî¶È 
int n, m, s;//n¸öÏß£¬m¸öÑ¯ÎÊ£¬sÎª¸ù½Úµã 
vector<int> rod[N];//´æ´¢µã 
bool vis[N];
double limit;

void dfs(int u, int f)
{
	dep[u] = f;
	for(int i = 1; i <= n; i ++)
	{
		if((1 << i) > f) break;
		fa[u][i] = fa[fa[u][i - 1]][i - 1];
	}
	
	for(auto p : rod[u])
	{
		if(vis[p]) continue;
		vis[p] = 1;
		fa[p][0] = u;
		dfs(p, f + 1);
	}
}

int lca(int a, int b)
{
	if(dep[a] != dep[b])
	{
		if(dep[a] < dep[b]) swap(a, b);
		int d = dep[a] - dep[b];
		for(int i = 0; i < 20; i ++)
			if(d & (1 << i))
				a = fa[a][i];
	}
	if(a == b) return a;
	for(int i = 19; i >= 0; i --)
	{
		if(dep[a] < (1 << i)) continue;
		if(fa[a][i] == fa[b][i]) continue;
		a = fa[a][i], b = fa[b][i];
	}
	
	return fa[a][0];
}

int main()
{
	cin >> n >> m >> s;
	
	for(int i = 1; i < n; i ++)
	{
		int u, v;
		cin >> u >> v;
		rod[u].push_back(v);
		rod[v].push_back(u);
	}
	limit = log(n);
	vis[s] = 1;
	dfs(s, 0);
	
	for(int i = 1; i <= m; i ++)
	{
		int u, v;
		cin >> u >> v;
		cout << lca(u, v) << endl;
	}
}
