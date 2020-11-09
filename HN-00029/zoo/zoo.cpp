#include<bits/stdc++.h>
using namespace std ; 
#define re register
#define il inline
#define rep(i, s, t) for(register int i = (s); i <= (t); ++ i)
#define drep(i, s, t) for(register int i = (t); i >= (s); -- i)
#define Next(i, x) for(register int i = head[x]; i; i = e[i].next)
#define ull unsigned long long
int gi() {
	char cc = getchar() ; int cn = 0, flus = 1 ; 
	while(cc > '9' || cc < '0') {if(cc == '-') flus = -flus ; cc = getchar() ;}
	while(cc >= '0' && cc <= '9') cn = cn * 10 + cc - '0', cc = getchar() ; 
	return cn * flus ; 
}
const int N = 1e6 + 5 ; 
int p[N], q[N] ; 
int n, m, c, k ;
ull lim ; 
signed main() {
	freopen("zoo.in", "r", stdin ) ;
	freopen("zoo.out", "w", stdout ) ; 
	n = gi(), m = gi(), c = gi(), k = gi() ; 
	ull t = 0, x ; 
	rep( i, 1, n ) scanf("%llu", &x), t |= x ; 
	rep( i, 1, m ) {
		p[i] = gi(), q[i] = gi() ; 
		if( !((1ull << p[i]) & t) ) lim |= (1 << p[i]) ;
	}
	for(re int i = 0; i <= 63; ++ i) {
		if((1ull << i) & lim) -- k ;
	}
	if(k == 64) {
		if(n) {
			ull Ans = (1ull << 63ll), z = (1ull << 63ll) ;
			Ans = Ans - n ;
			Ans = Ans + z ; 
			cout << Ans << endl ; 
		}
		else {
			long double ans = 1 ; 
			rep( i, 1, 64 ) ans = ans * 2.0 ;
			printf("%.0Lf\n", ans ) ; 
		}
	}
	else {
		ull ans = (1ull << k) - n;
		cout << ans << endl ; 
	}
	return 0 ; 
}
