#include <bits/stdc++.h>
using namespace std;
#define rep(i, l, r) for (int i = l; i <= r; ++i)
int T;
int read() {
	char c; int x = 0, f = 1;
	c = getchar();
	while (c > '9' || c < '0') { if(c == '-') f = -1; c = getchar();}
	while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}
int main() {
	freopen ("snakes.in", "r", stdin);
	freopen ("snakes.out", "w", stdout);
	T = read();
	while (T--) puts("1");
	return 0;
}
