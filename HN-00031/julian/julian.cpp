#define REP(i, s, e) for (int i(s), end_##i(e); i <= end_##i; i++)
#define DEP(i, s, e) for (int i(s), end_##i(e); i >= end_##i; i--)

#include <iostream>
#include <cstdio>
#define i64 long long

using namespace std;

inline i64 read() {i64 x;scanf("%lld", &x);return x;}

bool judge(int y)
{
	if (y < 0) return (y + 1) % 4 == 0;
	if (y <= 1582) return y % 4 == 0;
	return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}
inline int dy(int y)
{
	return 365 + judge(y);
}

const int table[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

inline int dm(int y, int m)
{
	return table[m] + (m == 2 && judge(y));
}

int _sum(int i)
{
	if (!i) return 0;
	return (-1 - i) / 4 + 1;
}
int sum_(int i)
{
	if (!i) return 0;
	if (i <= 1582) return i / 4;
	//	return 1582 / 4 + (i / 4 - i / 100 + i / 400) - (1582 / 4 - 1582 / 100 + 1582 / 400);
	return (i / 4 - i / 100 + i / 400) + 12;
}
inline i64 sum(int s, int t)//days
{
	if (s > t) return 0;
	if (s < 0 && t < 0)
	{
		int r = _sum(s) - _sum(t + 1);
		return 365ll * (t - s + 1) + r;
	}
	if (s < 0 && t > 0)
	{
		int r = _sum(s) + sum_(t);
		return 365ll * (-s + t) + r;
	}
	if (s > 0 && t > 0)
	{
		int r = sum_(t) - sum_(s - 1);
		return 365ll * (t - s + 1) + r;
	}
}

namespace bf
{
	void work(i64 r)
	{
		r++;
		if (r <= sum(-4713, -1))
		{
			int L = -4713, R = -1, i = 114514;
			while (L <= R)
			{
				int mid = L + R >> 1;
				if (r <= sum(-4713, mid))
				{
					i = mid;
					R = mid - 1;
				}
				else L = mid + 1;
			}
			r -= sum(-4713, i - 1);
			REP(j, 1, 12)
				if (r > dm(i, j)) r -= dm(i, j);
				else
				{
					printf("%lld %d %d BC\n", r, j, -i);
					return;
				}
		}
		r -= sum(-4713, -1);
		if (r <= sum(1, 1581))
		{
			int L = 1, R = 1581, i = 114514;
			while (L <= R)
			{
				int mid = L + R >> 1;
				if (r <= sum(1, mid))
				{
					i = mid;
					R = mid - 1;
				}
				else L = mid + 1;
			}
			r -= sum(1, i - 1);

			REP(j, 1, 12)
				if (r > dm(i, j)) r -= dm(i, j);
				else
				{
					printf("%lld %d %d\n", r, j, i);
					return;
				}
		}
		r -= sum(1, 1581);

		//to 1582.1.0
		REP(j, 1, 9)
			if (r > dm(1582, j)) r -= dm(1582, j);
			else
			{
				printf("%lld %d 1582\n", r, j);
				return;
			}
		if (r <= 4)
		{
			printf("%lld 10 1582\n", r);
			return;
		}
		r += 10;
		if (r <= dm(1582, 10))
		{
			printf("%lld 10 1582\n", r);
			return;
		}
		r -= dm(1582, 10);
		if (r > dm(1582, 11)) r -= dm(1582, 11);
		else
		{
			printf("%lld 11 1582\n", r);
			return;
		}
		if (r > dm(1582, 12)) r -= dm(1582, 12);
		else
		{
			printf("%lld 12 1582\n", r);
			return;
		}
		int L = 1583, R = 1e9 + 5, i = 114514;
		while (L <= R)
		{
			int mid = L + R >> 1;
			if (r <= sum(1583, mid))
			{
				i = mid;
				R = mid - 1;
			}
			else L = mid + 1;
		}
		r -= sum(1583, i - 1);
		REP(j, 1, 12)
			if (r > dm(i, j)) r -= dm(i, j);
			else
			{
				printf("%lld %d %d\n", r, j, i);
				return;
			}

		puts("gg");
	}
}

int main()
{
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	register int T = read();
	REP(Case, 1, T)
	{
		bf :: work(read());
		//		if (Case % 100 == 0) fprintf(stderr, "Done %d / %d = %.2lf%%\n", Case, T, Case * 100. / T);
	}
	return 0;
}
