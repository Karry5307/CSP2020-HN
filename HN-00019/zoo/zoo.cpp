#include<bits/stdc++.h>

using namespace std;

#define M 1000005
#define N 10000005

typedef long long LL;

int read()
{
	int x = 0, f = 1; char ch = getchar();
	while (!isdigit(ch)) {if (ch == '-') f = -1; ch = getchar();}
	while (isdigit(ch)) {x = (x << 1) + (x << 3) + (ch ^ 48); ch = getchar();}
	return x * f;
}

LL n, m, c, kk, ans, P[M], J[M], vis[73];

bool judge(LL x)
{
	for (int i = 0; i <= 63; i ++)
	{
		if (((x >> i) & 1) == 1)
		{
			if (!vis[i]) return false;
			else continue;
		}
	}
	return true;
}

int main()
{
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	LL x;
	scanf("%lld%lld%lld%lld%lld", &n, &m, &c, &kk);
	LL k = 0;
	for (int i = 1; i <= n; i ++); 
	{
		scanf("%lld", &x);
		k |= x;
	}
	for (int i = 1; i <= 63; i ++) vis[i] = 1;
	for (int i = 1; i <= m; i ++)
	{
		scanf("%lld%lld", &P[i], &J[i]);
		if (((k >> P[i]) & 1) == 1) vis[P[i]] = 1;
		else vis[P[i]] = 0;
	}
	for (int i = 0; i <= (1 << kk) - 1; i ++)
	{
		LL w = k ^ (k | i);
		if (judge(w)) ++ ans;
	}
	printf("%lld\n", ans - n);
	return 0;
}
