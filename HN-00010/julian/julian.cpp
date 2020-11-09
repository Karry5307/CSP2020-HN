#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, l, r) for (int i = l; i <= r; ++i)
int Q, x, st, ansy, ansm, ansd;
int fx[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int fy[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int read() {
	char c; int x = 0, f = 1;
	c = getchar();
	while (c > '9' || c < '0') { if(c == '-') f = -1; c = getchar();}
	while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}
void solve2() {
	ansy = x / 1461 * 4 + 1;
	x -= x / 1461 * 1461;
	if(x <= 365) {
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else if(x <= 730) {
		x -= 365, ++ansy;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else if(x <= 1095) {
		x -= 730, ansy += 2;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else {
		x -= 1095, ansy += 3;
		rep(i, 1, 12) {
			if(x > fy[i]) x -= fy[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
}
void solve3() {
	ansy = 4713 - x / 1461 * 4;
	x -= x / 1461 * 1461;
	if(x <= 366) {
		rep(i, 1, 12) {
			if(x > fy[i]) x -= fy[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else if(x <= 731) {
		x -= 366, --ansy;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else if(x <= 1096) {
		x -= 731, ansy -= 2;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else {
		x -= 1096, ansy -= 3;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
}
bool check(int x) {
	if(x % 400 == 0) return 1;
	if(x % 4 == 0 && x % 100 != 0) return 1;
	return 0;
}
void solve4() {
	ansy = 1583 + x / 1461 * 4;
	x -= x / 1461 * 1461;
	if(x <= 365) {
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else if(x <= 731) {
		x -= 365, ++ansy;
		rep(i, 1, 12) {
			if(x > fy[i]) x -= fy[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else if(x <= 1096) {
		x -= 731, ansy += 2;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else {
		x -= 1096, ansy += 3;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	int del = ansy / 100 - 15 - (ansy / 400 - 3);
	if(ansy % 100 == 0 && ansy % 400 != 0 && ansm <= 2) --del;
	while (del) {
		if(check(ansy)) {
			if(del >= fy[ansm] - ansd + 1) del -= fy[ansm] - ansd + 1;
			else { ansd += del; break;}
		}
		else {
			if(del >= fx[ansm] - ansd + 1) del -= fx[ansm] - ansd + 1;
			else { ansd += del; break;}
		}
		if(ansm != 12) ++ansm, ansd = 1;
		else ansm = ansd = 1, ++ansy;
	}
}
signed main() {
	freopen ("julian.in", "r", stdin);
	freopen ("julian.out", "w", stdout);
	Q = read();
	while (Q--) {
		ansy = ansm = ansd = 0;
		x = read();
		if(x >= (4713 - 1) / 4 * 1461 + 366) {
			x -= (4713 - 1) / 4 * 1461 + 366;
			st = 1580 / 4 * 1461 + 365 + 276;
			if(x > st) {
				x -= st + 1;
				if(x <= 16) {
					ansy = 1582, ansd = 15 + x, ansm = 10;
				}
				else if(x <= 46) {
					ansy = 1582, ansd = x - 16, ansm = 11;
				}
				else if(x <= 77) {
					ansy = 1582, ansd = x - 46, ansm = 12;
				}
				else {
					x -= 77;
					solve4();
				}
			}
			else ++x, solve2();
			printf("%lld %lld %lld\n", ansd, ansm, ansy);
		}
		else {
			++x, solve3();
			printf("%lld %lld %lld BC\n", ansd, ansm, ansy);
		}
	}
	return 0;
}
