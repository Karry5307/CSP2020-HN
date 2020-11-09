#define REP(i, s, e) for (register int i(s), end_##i(e); i <= end_##i; i++)
#define DEP(i, s, e) for (register int i(s), end_##i(e); i >= end_##i; i--)

#include <vector>
#include <set>
#include <iostream>
#include <cstdio>

using namespace std;
const int maxn = 1e6 + 10;

int n, a[maxn], lst[maxn];
set <pair <pair <int, int>, int> > s;

int read()
{
	int x;scanf("%d", &x);
	return x;
}

namespace cheat
{
	void work()
	{
		REP(i, 1, n) lst[i] = 0;
		s.clear();
		REP(i, 1, n) s.insert(make_pair(make_pair(a[i], i), 0));
		int ans = 1;
		REP(rd, 1, n - 1)
		{
			pair <pair <int, int>, int> x = *s.begin(), y = *s.rbegin();
			if (lst[x.second])
			{
				ans = lst[x.second];
				break;
			}
			s.erase(s.begin());s.erase(--s.end());
			y.first.first -= x.first.first;
			y.second = rd;
			s.insert(y);
			lst[rd] = n - rd + 1;
		}
		printf("%d\n", ans);
	}
}

namespace bf
{
	set <pair <int, int> > s;
	int top;
	vector <int> v[2005], stk[2005];
	bool gg[maxn];
	void work()
	{
		register int T = read();
		REP(Case, 1, T)
		{
			if (Case == 1)
			{
				n = read();
				REP(i, 1, n) scanf("%d", a + i);
			}
			else
			{
				int k = read();
				REP(i, 1, k)
				{
					int x = read(), y = read();
					a[x] = y;
				}
			}
			if (n == 3)
			{
				if (a[3] - a[1] < a[2]) puts("1");
				else puts("3");
				continue;
			}
			cheat :: work();
		}
	}
}

int main()
{
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	bf :: work();
	return 0;
}
