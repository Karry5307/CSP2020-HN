#include<bits/stdc++.h>

using namespace std;

#define re register
#define Rep(i, s, e) for (re int i = s; i <= e; i ++)
#define Dep(i, s, e) for (re int i = s; i >= e; i --)

int read()
{
	int x = 0, f = 1; char ch = getchar();
	while (!isdigit(ch)) {if (ch == '-') f = -1; ch = getchar();}
	while (isdigit(ch)) {x = (x << 1) + (x << 3) + (ch ^ 48); ch = getchar();}
	return x * f;
}

int Q;
int d1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int d2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int ni[5] = {0, 366, 365, 365, 365};
int ni2[5] = {0, 365, 365, 365, 366};
int main()
{
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	Q = read();
	while (Q --)
	{
		int x = read();
		int zq = x / 1461;
		if (zq <= 1178 && x - (1178 * 1461) < 366)
		{
			int ansn = 4713, ansy = 1, ansr = 1;
			ansn -= zq * 4;
			x -= 1461 * zq;
			Rep (i, 1, 4) 
				if (x >= ni[i]) ansn --, x -= ni[i];
			if ((ansn - 1) % 4 == 0)
			{
				Rep (i, 1, 12)
				{
					if (x >= d2[i]) {ansy ++, x -= d2[i];}
				}
			}
			else if ((ansn - 1) % 4 != 0)
			{
	            Rep (i, 1, 12)
				{
					if (x >= d1[i]) {ansy ++, x -= d1[i];}
				}				
			}
			ansr += x;
			printf("%d %d %d BC\n", ansr, ansy, ansn);
		}
		else if ((x - (1461*1178) >= 366))
		{
			int ansn = 1, ansy = 1, ansr = 1;
			x -= ((1461 * 1178) + 366);
			int zq2 = x / 1461;
			if (zq2 <= 395 && x - (1461 * zq2) < 366)
			{
				ansn += 4 * zq2;
				x -= 1461 * zq2;
				Rep (i, 1, 4)
				{
					if (x > ni2[i])
					{
						ansn ++;
						x -= ni2[i];
					}
				}
				if (ansn % 4 == 0)
				{
					Rep (i, 1, 12)
					{
						if (x > d2[i])
						{
							ansy ++;
							x -= d2[i];
						}
					}
				}
				else if (ansn % 4 != 0)
				{
                    Rep (i, 1, 12)
					{
						if (x > d1[i])
						{
							ansy ++;
							x -= d1[i];
						}
					}					
				}
				ansr += x;
				printf("%d %d %d\n", ansr, ansy, ansn);
			}
		}
	}
	return 0;
}
