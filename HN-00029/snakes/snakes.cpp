#include<bits/stdc++.h>
using namespace std ; 
#define re register
#define il inline
#define rep(i, s, t) for(register int i = (s); i <= (t); ++ i)
#define drep(i, s, t) for(register int i = (t); i >= (s); -- i)
#define Next(i, x) for(register int i = head[x]; i; i = e[i].next)

int gi() {
	char cc = getchar() ; int cn = 0, flus = 1 ; 
	while(cc > '9' || cc < '0') {if(cc == '-') flus = -flus ; cc = getchar() ;}
	while(cc >= '0' && cc <= '9') cn = cn * 10 + cc - '0', cc = getchar() ; 
	return cn * flus ; 
}
const int N = 2e6 + 5 ; 
int n, Ans, a[N], cnt, head[N], W[N], Id[N] ; 
struct E {
	int to, next ; 
} e[N << 1] ; 
void add(int x, int y, int z) {
	e[++ cnt] = (E){ y, head[x] }, head[x] = cnt ; 
	W[y] = z ; 
}
struct node {
	int id, w ; 
	bool operator < (const node& x) const {	
		return (w == x.w) ? id < x.id : w < x.w ; 
	}
	bool operator == (const node& x) const {	
		return (w == x.w) && (id == x.id) ; 
	}
} ;
node q1[N], q2[N] ; 
int he1, ta1, he2, ta2 ; 
void Solve() {
	//cerr << "Solve" << endl ; 
	//cerr << n << endl ; 
	//rep( i, 1, n ) printf("%d ", a[i] ) ; puts("") ; 
	rep( i, 1, n ) W[i] = head[i] = 0 ; cnt = 0 ; 
	he1 = 1, ta1 = 0, he2 = n + 1, ta2 = n ; 
	rep( i, 1, n ) 
		q1[++ ta1] = (node){i, a[i]} ; 
	int tt = 0, rt = 0 ; 
	while(he1 <= ta1 || he2 <= ta2) {
		node mx ; mx.id = 0, mx.w = 0 ; 
		node mi ; mi.id = n + 1, mi.w = a[n] + 100 ; 
		if(he1 <= ta1) mx = q1[ta1] ;
		if(he2 <= ta2) {
			if( mx < q2[ta2] ) mx = q2[ta2] ;
		}
		if(he1 <= ta1) mi = q1[he1] ;
		if(he2 <= ta2) {
			if( q2[he2] < mi ) mi = q2[he2] ; 
		}
		if(mx.id == mi.id) break ; 
		++ tt, add(mx.id, mi.id, tt) ; 
		if(q1[he1] == mi) ++ he1 ;
		if(q2[he2] == mi) ++ he2 ; 
		if(q1[ta1] == mx) -- ta1 ;
		if(q2[ta2] == mx) -- ta2 ; 
		q2[-- he2] = (node){mx.id, mx.w - mi.w} ;
	}
	Ans = n ; W[rt] = n ; 
	int Mi = n ; 
	for(re int i = 1; i <= n; ++ i) Id[W[i]] = i ; 
	for(re int i = n; i >= 1; -- i) {
		int u = Id[i] ; 
		if( W[u] < Mi ) {
			int fll = 0 ; 
			for(re int i = head[u]; i; i = e[i].next) {
				int v = e[i].to ; 
				if(!fll) Mi = min( Mi, W[v] ) ; 
				fll = 1 ; 
			}
		}
	}
	cout << n - (Mi - 1) << endl ; 
} 
void solve() {
	int k = gi() ; 
	rep( i, 1, k ) {
		int x = gi(), y = gi() ; a[x] = y ; 
	}
	Solve() ; 
}
signed main() {
	freopen("snakes.in", "r", stdin ) ;
	freopen("snakes.out", "w", stdout ) ; 
	int T = gi() - 1 ; 
	n = gi() ; 
	rep( i, 1, n ) a[i] = gi() ; 
	Solve() ; 
	while(T--) solve() ; 
	return 0 ; 
}
