#define REP(i, s, e) for (register int i = s, end_##i(e); i <= end_##i; i++)
#define DEP(i, s, e) for (register int i = s, end_##i(e); i >= end_##i; i--)

#include <algorithm>
#include <cstring>
#include <iostream>
#include <cstdio>
#define i64 long long
#define ui64 unsigned i64

using namespace std;
const int maxn = 1e6 + 10, maxc = 1e8 + 10;
const ui64 one = 1;

int n, m, c, k, p[maxn], q[maxn];
bool ban[100], good[100];

int read()
{
	register char c = getchar();
	int res = 0;
	while (!isdigit(c)) c = getchar();
	while (isdigit(c)) res = res * 10 + (c - 48), c = getchar();
	return res;
}
int b[maxn], qaq;
bool in(int x)
{
	if (!qaq) return 0;
	int ps = lower_bound(b + 1, b + 1 + qaq, x) - b;
	if (ps > qaq) return 0;
	return b[ps] == x;
}

int main()
{
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	cin >> n >> m >> c >> k;
	REP(i, 1, n)
	{
		int a = read();
		REP(j, 0, k - 1) if (a >> j & 1) good[j] = 1;
	}
	REP(i, 1, m)
	{
		p[i] = read(), q[i] = read();
		if (good[p[i]]) b[++qaq] = q[i];
	}
	if (qaq)
	{
		sort(b + 1, b + qaq + 1);
		qaq = unique(b + 1, b + 1 + qaq) - b - 1;
	}
	ui64 ans = 0;
	int tot = k;

	REP(i, 1, m)
	{
		if (ban[p[i]]) continue;
		if (!in(q[i]))
		{
			ban[p[i]] = 1;
			tot--;
		}
	}
	if (tot <= 63)
		ans = (one << tot) - n;
	else
		ans = (((one << 63) - 1) << 1) + 1 - (n - 1);
	cout << ans << endl;

	return 0;
}

//kachang later
