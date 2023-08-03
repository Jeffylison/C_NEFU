#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long ll;
const int N = 1e6 + 10;
ll a[N], ans[N << 2], tag[N << 2], n, m;

void push_up(ll p)
{
	ans[p] = ans[p << 1] + ans[p << 1 | 1];
}

void build(ll p, ll l, ll r)
{
	tag[p] = 0;
	if(l == r)
	{
		ans[p] = a[l];
		return ;
	}
	
	ll mid = l + r >> 1;
	build(p << 1, l, mid);
	build(p << 1 | 1, mid + 1, r);
	push_up(p);
}

inline void open(ll p, ll l, ll r, ll k)
{
	tag[p] += k;
	ans[p] += k * (r - l + 1);
}

inline void push_down(ll p, ll l, ll r)
{
	ll mid = l + r >> 1;
	open(p << 1, l, mid, tag[p]);
	open(p << 1 | 1, mid + 1, r, tag[p]);
	tag[p] = 0;
}

inline void update(ll nl, ll nr, ll l, ll r, ll p, ll k)
{
	if(nl <= l && nr >= r)
	{
		ans[p] += k * (r - l + 1);
		tag[p] += k;
		return ;
	}
	push_down(p, l, r);
	
	ll mid = l + r >> 1;
	if(nl <= mid) update(nl, nr, l, mid, p << 1, k);
	if(nr > mid) update(nl, nr, mid + 1, r, p << 1 | 1, k);
	
	push_up(p);
}

ll query(ll x, ll y, ll l, ll r, ll p)
{
	ll res = 0;
	if(x <= l && y >= r) return ans[p];
	ll mid = l + r >> 1;
	push_down(p, l, r);
	if(x <= mid) res += query(x, y, l, mid, p << 1);
	if(y > mid) res += query(x, y, mid + 1, r, p << 1 | 1);
	return res;
}

int main()
{
	scanf("%d%d", &n, &m);
	for(ll i = 1; i <= n; i ++) scanf("%lld", &a[i]);
	
	build(1, 1, n);
	
	while(m --)
	{
		ll x;
		scanf("%lld", &x);
		if(x == 1)
		{
			ll a1, a2, a3;
			scanf("%lld%lld%lld", &a1, &a2, &a3);
			update(a1, a2, 1, n, 1, a3);
		}
		else if(x == 2)
		{
			ll a1, a2;
			scanf("%lld%lld", &a1, &a2);
			ll sum = query(a1, a2, 1, n, 1);
			printf("%lld\n", sum);
		}
	}
}
