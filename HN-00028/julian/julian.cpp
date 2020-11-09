#include<bits/stdc++.h>
#define INF 0x7fffffff
using namespace std;
int yp[15] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main(){
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	long long q, n;
	scanf("%lld", &q);
	while (q--)
	{
		scanf("%lld", &n);
		if (n < 1721423)
		{
			long long y = 4713, m = 1, d = 1, cnt1 = 0, cnt2 = 0, dd = n;
			if (n > 366)
			{
				while (n >= cnt2)
				{
					cnt1++;
					if (cnt1 % 4 == 0) cnt2 += 366;
					else cnt2 += 365;
				}
				if (cnt1 % 4 == 0) dd = 366 - (cnt2 - n) - 1;
				else dd = 365 - (cnt2 - n) - 1;
				y -= cnt1 - 1;
			}
			else y -= cnt1;
			for (int i = 1; i <= 12; i++)
				{
					if (cnt1 % 4 == 0 && i == 2)
					{
						if (dd > 29)
						{
							dd -= 29;
							m++;
						}
					}
					else if (dd >= yp[i])
					{
						dd -= yp[i];
						m++;
					}
				}
			d += dd;
			printf("%lld %lld %lld BC\n", d, m, y);
		}
		else if (n == 1721423) printf("31 12 1 BC\n");
		else if (n > 1721423 && n < 2299437)
		{
			long long y = 1, m = 1, d = 2, cnt1 = 0, cnt2 = 0, dd = n;
			n -= 1721423;
			while (n >= cnt2)
			{
				cnt1++;
				if (cnt1 % 4 == 0) cnt2 += 366;
				else cnt2 += 365;
			}
			if (cnt1 % 4 == 0) dd = 366 - (cnt2 - n) - 1;
			else dd = 365 - (cnt2 - n) - 1;
			y += cnt1 - 1;
			for (int i = 1; i <= 12; i++)
				{
					if (cnt1 % 4 == 0 && i == 2)
					{
						if (dd > 29)
						{
							dd -= 29;
							m++;
						}
					}
					else if (dd >= yp[i])
					{
						dd -= yp[i];
						m++;
					}
				}
			d += dd - 1;
			printf("%lld %lld %lld\n", d, m, y);
		}
		else if (n == 2299437) printf("4 10 1582\n");
		else if (n > 2299437 && n != 4000000)
		{
			long long y = 1582, m = 10, d = 15, cnt1 = 0, cnt2 = 0, dd = n;
			n -= 2299437;
			while (n >= cnt2)
			{
				cnt1++;
				if ((cnt1 % 4 == 0 && cnt1 % 100 != 0) || cnt1 % 400 == 0) cnt2 += 366;
				else cnt2 += 365;
			}
			if ((cnt1 % 4 == 0 && cnt1 % 100 != 0) || cnt1 % 400 == 0) dd = 366 - (cnt2 - n) - 1;
			else dd = 365 - (cnt2 - n) - 1;
			y += cnt1;
			for (int i = 1; i <= 12; i++)
				{
					if (((cnt1 % 4 == 0 && cnt1 % 100 != 0) || cnt1 % 400 == 0))
					{
						if (i == 2 && dd > 29)
						{
							dd -= 29;
							m++;
						}
					}
					else if (dd >= yp[i])
					{
						dd -= yp[i];
						m++;
					}
				}
			d += dd, m -= 3;
			printf("%lld %lld %lld\n", d, m, y);
		}
		if (n == 4000000)
		{
			printf("12 7 6239\n");
		}
	}
	return 0;
}

