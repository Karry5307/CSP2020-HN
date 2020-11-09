#include <bits/stdc++.h>
using namespace std;
#define ls (p << 1)
#define rs (p << 1 | 1)
#define mid (l + r) / 2
#define rep(i, l, r) for (int i = l; i <= r; ++i)
#define dep(i, l, r) for (int i = r; i >= l; --i)
#define Next(i, u) for (int i = h[u]; i; i = e[i].next)
const int N = 1e6 + 5;
const int Mod = 998244353;
struct edge { int v, next;} e[N];
struct tree { int sum, tag;} t[N << 2];
int n, m, q, x, y, cnt, opt, tot, a[N], b[N], p[N], v[N], h[N];
int read() {
	char c; int x = 0, f = 1;
	c = getchar();
	while (c > '9' || c < '0') { if(c == '-') f = -1; c = getchar();}
	while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}
int Inc(int a, int b) { return (a += b) >= Mod ? a - Mod : a;}
int Mul(int a, int b) { return 1ll * a * b % Mod;}
void lazy(int p, int k) {
	t[p].sum = Mul(t[p].sum, k);
	t[p].tag = Mul(t[p].tag, k);
}
void pushup(int p) {
	t[p].sum = Inc(t[ls].sum, t[rs].sum);
} 
void down(int p) {
	if(t[p].tag == 1) return;
	lazy(ls, t[p].tag), lazy(rs, t[p].tag);
	t[p].tag = 1;
}
void build(int p, int l, int r) {
	t[p].tag = 1;
	if(l == r) { t[p].sum = a[l]; return ;}
	build(ls, l, mid), build(rs, mid + 1, r);
	pushup(p);
}
void update(int p, int l, int r, int x, int y, int k1, int k2) {
	if(l >= x && r <= y) { 
		t[p].sum = Inc(t[p].sum, k1);
		lazy(p, k2);
		return ;
	}
	down(p);
	if(mid >= x) update(ls, l, mid, x, y, k1, k2);
	if(mid < y) update(rs, mid + 1, r, x, y, k1, k2);
	pushup(p);
}
int query(int p, int l, int r, int x, int y) {
	if(l >= x && r <= y) return t[p].sum;
	down(p);
	if(mid >= x) return query(ls, l, mid, x, y);
	else return query(rs, mid + 1, r, x, y);
}
void add(int u, int v) {
	e[++tot].v = v, e[tot].next = h[u], h[u] = tot;
}
void dfs(int u) {
	Next(i, u) dfs(e[i].v);
	if(!h[u]) {
		if(p[u]) update(1, 1, n, p[u], p[u], v[u], 1);
		else update(1, 1, n, 1, n, 0, v[u]);
	}
}
int main() {
	freopen ("call.in", "r", stdin);
	freopen ("call.out", "w", stdout);
	n = read();
	rep(i, 1, n) a[i] = read();
	build(1, 1, n);
	m = read();
	rep(i, 1, m) {
		opt = read();
		if(opt == 1) p[i] = read(), v[i] = read();
		if(opt == 2) v[i] = read();
		if(opt == 3) {
			cnt = read();
			rep(j, 1, cnt) b[j] = read();
			dep(j, 1, cnt) add(i, b[j]);
		}
	}
	q = read();
	while (q--) x = read(), dfs(x);
	rep(i, 1, n) printf("%d ", query(1, 1, n, i, i));
	return 0;
}
