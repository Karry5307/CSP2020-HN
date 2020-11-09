#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define rep(i, l, r) for (int i = l; i <= r; ++i)
const int N = 1e6 + 5;
bool vis[N], book[N];
int n, m, c, k, p, q, ans, a[N];
int read() {
	char c; int x = 0, f = 1;
	c = getchar();
	while (c > '9' || c < '0') { if(c == '-') f = -1; c = getchar();}
	while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}
signed main() {
	freopen ("zoo.in", "r", stdin);
	freopen ("zoo.out", "w", stdout);
	n = read(), m = read(), c = read(), k = read();
	rep(i, 1, n) a[i] = read();
	rep(i, 1, m) p = read(), q = read(), book[p] = 1;
	rep(i, 1, n) {
		rep(j, 0, k - 1) if((1ull << j) & a[i]) vis[j] = 1;
	}
	rep(i, 0, k - 1) if(!book[i] || vis[i]) ++ans;
	if(ans == 64) {
		ans = (1ull << 63) - n;
		ans += (1ull << 63);
		printf("%llu", ans);
	}
	else printf("%llu", (1ull << ans) - n);
	return 0;
}
