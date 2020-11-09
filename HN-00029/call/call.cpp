#include<bits/stdc++.h>
using namespace std ; 
#define re register
#define il inline
#define rep(i, s, t) for(register int i = (s); i <= (t); ++ i)
#define drep(i, s, t) for(register int i = (t); i >= (s); -- i)
#define Next(i, x) for(register int i = head[x]; i; i = e[i].next)
#define int long long
#define pb push_back
int gi() {
	char cc = getchar() ; int cn = 0, flus = 1 ; 
	while(cc > '9' || cc < '0') {if(cc == '-') flus = -flus ; cc = getchar() ;}
	while(cc >= '0' && cc <= '9') cn = cn * 10 + cc - '0', cc = getchar() ; 
	return cn * flus ; 
}
const int P = 998244353 ; 
const int N = 1e5 + 5 ; 
int n, m, flag, opt[N], a[N], vis[N], deg[N] ; 
struct node {
	int id, w ; 
} p[N] ; 
struct E {
	int to, next ; 
} e[N << 1] ;
int cnt, head[N] ; 
void add(int x, int y) {
	e[++ cnt] = (E){y, head[x]}, head[x] = cnt ; 
}
int fpow(int x, int k) {
	int ans = 1, base = x ; 
	while(k) {
		if(k & 1) ans = ans * base % P ; 
		base = base * base % P, k >>= 1 ; 
	} return ans ; 
}
namespace S1 {
	int f[N], g[N] ; 
	int q[N], he, ta ; 
	int M ; 
	void solve1() {
		if(flag == 2) M = P - 1 ; 
		else M = P ; 
		int z = gi(), x ; 
		while(z--) {
			x = gi(), ++ f[x] ;
		}
		he = 1 ; 
		int dAns = 1 ; 
		rep( i, 1, m ) if(!deg[i]) q[++ ta] = i ; 
		while( he <= ta ) {
			int u = q[he] ; ++ he ; 
			if(opt[u] != 3) {
				if(flag == 2) dAns = dAns * fpow(p[u].w, f[u]) % M ; 
				else a[p[u].id] = ( a[p[u].id] + p[u].w * f[u] % M ) % M ; 
			}
			for(re int i = head[x]; i; i = e[i].next) {
				int v = e[i].to ; 
				f[v] = (f[v] + f[u]) % M ; 
				-- deg[v] ;
				if(!deg[v]) q[++ ta] = v ; 
			}
		}
		rep( i, 1, n ) printf("%lld ", a[i] * dAns % M ) ; 
	}
}
namespace S2 {
	void solve2() {
		
	}
}
namespace S3 {
	void solve3() {
		int z = gi(), x ; 
		int D = 1 ; 
		while(z--) {
			x = gi() ; 
			if(opt[x] == 2) D = D * p[x].w % P ; 
			else 
			a[p[x].id] = ( a[p[x].id] + fpow(D, P - 2) * p[x].w % P ) % P ; 
		}
		rep( i, 1, n ) {
			printf("%lld ", a[i] * D % P ) ; 
		}
	}
}
const int M = 1000 + 5 ; 
namespace S4 {
	int D, f[M], deg[M], g[M] ; 
	struct node {
		int id, w ; 
	} ; 
	vector<node> ch[M] ; 
	vector<int> Go[M] ; 
	int q[M], he, ta ; 
	int col[M] ; 
	void solve4() {
		rep( i, 1, m ) {
			opt[i] = gi() ; g[i] = 1 ; 
			if(opt[i] == 1) p[i].id = gi(), p[i].w = gi(), ch[i].pb((node){p[i].id, p[i].w}) ; 
			if(opt[i] == 2) p[i].w = gi(), g[i] = p[i].w ;
			if(opt[i] == 3) {
				int x = gi(), y ; deg[i] = x ; 
				rep( j, 1, x ) y = gi(), Go[i].push_back(y), add(y, i) ; 
			}
		}
		ta = 0, he = 1 ; 
		rep( i, 1, m ) {
			if(!deg[i]) q[++ ta] = i ; 
		}
		while(he <= ta) {
			int u = q[he] ; ++ he ;
			if(opt[u] == 3) {
				int fd = 1 ; 
				for(re int i = 0; i < Go[u].size(); ++ i) {
					int d = fpow(fd, P - 2), v = Go[u][i] ; 
					for(re int j = 0; j < ch[v].size(); ++ j) {
						col[ch[v][j].id] = (col[ch[v][j].id] + d * ch[v][j].w % P) % P ; 
					}
					fd = fd * g[v] % P ; 
				}
				g[u] = fd ; 
				for(re int i = 1; i <= n; ++ i) 
				if(col[i]) 
					ch[u].push_back((node){i, col[i]}), col[i] = 0 ;
			}
			for(re int i = head[u]; i; i = e[i].next) {	
				int v = e[i].to ; 
				-- deg[v] ;
				if(!deg[v]) q[++ ta] = v ; 
			}
		}
		int z = gi() ; D = 1 ; 
		while(z--) {
			int u = gi() ; 
			int d = fpow(D, P - 2) ;
			for(re int j = 0; j < ch[u].size(); ++ j) {
				int id = ch[u][j].id ; 
				a[id] = ( a[id] + d * ch[u][j].w % P ) % P ; 
			}
			D = D * g[u] % P ; 
		}
		D = D % P ; 
		for(re int i = 1; i <= n; ++ i) 
			printf("%lld ", a[i] * D % P ) ; 
		exit(0) ; 
	}
}
signed main() { 
	freopen("call.in", "r", stdin ) ; 
	freopen("call.out", "w", stdout ) ; 
	n = gi() ; flag = 0 ; 
	rep( i, 1, n ) a[i] = gi() ;
	m = gi() ; 
	if( max(n, m) <= 1000 ) S4::solve4() ; 
	rep( i, 1, m ) {
		opt[i] = gi() ; 
		if(opt[i] == 1) {
			flag |= opt[i] ; 
			p[i].id = gi(), p[i].w = gi() ; 
		}
		if(opt[i] == 2) {
			flag |= opt[i] ; 
			p[i].w = gi() ;
		}
		if(opt[i] == 3) {
			int x = gi(), y ; 
			rep( j, 1, x ) y = gi(), add(i, y), ++ deg[y] ; 
		}
	}
	if( flag != 3 ) S1::solve1() ; 
	else if(cnt == 0) S3::solve3() ;
	else if(cnt == m - 1) S2::solve2() ; 
	return 0 ; 
}
