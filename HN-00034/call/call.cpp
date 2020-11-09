#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// {{{ FAST IO
#define FILE(s) freopen(s".in", "r", stdin), freopen(s".out", "w", stdout)
#define ge getchar()
#define ri read_int()
#define rl read_ll()

template<typename T> inline void chkmin(T &x, T y) { x = x < y ? x : y; }
template<typename T> inline void chkmax(T &x, T y) { x = x > y ? x : y; }

template<typename T>
inline void read(T &x) {
	int t = x = 0, ch = ge;
	while(!isdigit(ch)) ch = ge, t |= ch == '-';
	while(isdigit(ch)) x = x * 10 + (ch - 48), ch = ge;
	x = t ? -x : x;
}

inline int read_int() { int x; return read(x), x; }
inline ll read_ll() { ll x; return read(x), x; }
// }}}

const int mod = 998244353;
const int MAXN = 100010;
const int MAXM = 1000010;

inline void Add(int &x, int y) { x += y, x -= x >= mod ? mod : 0; }

int a[MAXN];

int C[MAXM];
int Pos;

int Q[MAXN];
int tim[MAXN];

int tot;
int fi[MAXN];
int ne[MAXM];
int to[MAXM];

int cnt[MAXN];
int deg[MAXN];
int in[MAXN];

inline void Link(int u, int v) {
	tot++;
	to[tot] = v;
	ne[tot] = fi[u];
	fi[u] = tot;
}

struct Function {
	int opt, pos, val, L, R;
}fc[MAXN];

inline void TopSort(int n) {
	queue<int>q;
	for(int i = 1; i <= n; i++)
		if(!deg[i])
			q.push(i);
	while(!q.empty()) {
		int x = q.front(); q.pop();
		for(int i = fi[x]; i; i = ne[i]) {
			int u = to[i];
			--deg[u];
			if(deg[u] == 0)
				q.push(u);
			if(fc[x].opt != 1)
				fc[u].val = 1LL * fc[u].val * fc[x].val % mod;
		}
	}
}

inline void TopSort2(int n) {
	queue<int>q;
	for(int i = 1; i <= n; i++)
		if(!in[i])
			q.push(i);
	while(!q.empty()) {
		int x = q.front(); q.pop();
		int mul = tim[x];
		for(int i = fc[x].R; i >= fc[x].L; i--) {
			int u = C[i];
			--in[u];
			if(in[u] == 0) q.push(u);
			Add(tim[u], mul);
			if(fc[u].opt != 1)
				mul = 1LL * mul * fc[u].val % mod;
		}
	}
}

int main() {
	FILE("call");

	int n = ri, Mul = 1;
	for(int i = 1; i <= n; i++)
		a[i] = ri;

	int m = ri;
	for(int i = 1; i <= m; i++) {
		fc[i].opt = ri;
		if(fc[i].opt == 1) fc[i].pos = ri, fc[i].val = ri;
		if(fc[i].opt == 2) fc[i].val = ri;
		if(fc[i].opt == 3) {
			cnt[i] = deg[i] = ri;
			fc[i].L = Pos + 1;
			fc[i].R = Pos + cnt[i];
			fc[i].val = 1;
			int ct = cnt[i];
			while(ct--) {
				C[++Pos] = ri;
				Link(C[Pos], i);
				in[C[Pos]]++;
			}
		}
	}

	TopSort(m);

	int q = ri;
	for(int i = 1; i <= q; i++) {
		Q[i] = ri;
		if(fc[Q[i]].opt != 1)
			Mul = 1LL * Mul * fc[Q[i]].val % mod;
	}

	for(int i = 1; i <= n; i++)
		a[i] = 1LL * a[i] * Mul % mod;

	Mul = 1;
	for(int i = q; i >= 1; i--) {
		Add(tim[Q[i]], Mul);
		if(fc[Q[i]].opt != 1)
			Mul = 1LL * Mul * fc[Q[i]].val % mod;
	}

	TopSort2(m);

	for(int i = 1; i <= m; i++)
		if(fc[i].opt == 1)
			Add(a[fc[i].pos], 1LL * fc[i].val * tim[i] % mod);

	for(int i = 1; i <= n; i++)
		printf("%d ", a[i]);

	return 0;
}
