#define REP(i, s, e) for (register int i = s, end_##i(e); i <= end_##i; i++)
#define DEP(i, s, e) for (register int i = s, end_##i(e); i >= end_##i; i--)

#include <queue>
#include <vector>
#include <iostream>
#include <cstdio>
#define i64 long long

using namespace std;
const int maxn = 1e5 + 10, MOD = 998244353;

i64 power_pow(i64 base, i64 b)
{
	i64 ans = 1;
	while (b)
	{
		if (b & 1) (ans *= base) %= MOD;
		(base *= base) %= MOD;
		b >>= 1;
	}
	return ans;
}
#define inv(x) power_pow(x, MOD - 2)

int n, a[maxn];

int m, T[maxn], P[maxn], V[maxn], IV[maxn];
vector <int> o[maxn];

int q;

namespace bf
{
	int v, iv;
	void maintain(int f)
	{
		if (T[f] == 1)
		{
			a[P[f]] = (a[P[f]] + 1ll * iv * V[f]) % MOD;
			return;
		}
		if (T[f] == 2)
		{
			v = 1ll * v * V[f] % MOD;
			iv = 1ll * iv * IV[f] % MOD;
			return;
		}
		REP(i, 1, P[f]) maintain(o[f][i]);
	}
	void work()
	{
		v = iv = 1;
		while (q--)
		{
			int f;scanf("%d", &f);
			maintain(f);
		}
		REP(i, 1, n) printf("%lld%c", 1ll * a[i] * v % MOD, i == end_i ? '\n' : ' ');
	}
}

int main()
{
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	cin >> n;
	REP(i, 1, n) scanf("%d", a + i);
	cin >> m;
	REP(i, 1, m)
	{
		scanf("%d", T + i);
		if (T[i] == 1) scanf("%d%d", P + i, V + i);
		else if (T[i] == 2)
		{
			scanf("%d", V + i);
			IV[i] = inv(V[i]);
		}
		else
		{
			scanf("%d", P + i);
			o[i].resize(P[i] + 1);
			REP(j, 1, P[i]) scanf("%d", &o[i][j]);
		}
	}
	cin >> q;
	bf :: work();
	return 0;
}
