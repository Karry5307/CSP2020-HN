#include<bits/stdc++.h>
using namespace std ; 
#define re register
#define il inline
#define rep(i, s, t) for(register int i = (s); i <= (t); ++ i)
#define drep(i, s, t) for(register int i = (t); i >= (s); -- i)
#define LL long long
LL gi() {
	char cc = getchar() ; LL cn = 0, flus = 1 ; 
	while(cc > '9' || cc < '0') {if(cc == '-') flus = -flus ; cc = getchar() ;}
	while(cc >= '0' && cc <= '9') cn = cn * 10 + cc - '0', cc = getchar() ; 
	return cn * flus ; 
}
const LL inf = 1e9 + 7 ; 
const LL N = 3e6 + 5 ; 
struct node {
	int d, m, y ; 
} vis[N] ; 
inline void Big(LL x) {
	if(vis[x].d == 32) vis[x].d = 1, vis[x].m ++ ; 
	if(vis[x].m == 13) ++ vis[x].y, vis[x].m = 1 ; 
}
inline void Small(LL x) {
	if(vis[x].d == 31) vis[x].d = 1, vis[x].m ++ ; 
}
LL Get(LL x) {
	LL y = (x - 2000) * 365 ; 
	y += ((x - 1) / 4 - 1999 / 4) ;
	y -= ((x - 1) / 100 - 19) ;
	y += ((x - 1) / 400 - 1999 / 400) ;
	return y ; 
}
bool check(LL x, LL tk) {
	return (Get(x) <= tk) ; 
}
LL cost[100] ; 
int main() {
	freopen("julian.in", "r", stdin ) ;
	freopen("julian.out", "w", stdout ) ;
	LL T = gi() ;  
	vis[0].d = 1, vis[0].m = 1, vis[0].y = -4713 ; 
	LL cnt = 0 ; 
	for(re LL i = 1; i <= N; ++ i) {
		vis[i] = vis[i - 1] ;
		++ vis[i].d ; 
		if(vis[i].y == 2000) { break ; }
		if(vis[i].y == 0) vis[i].y = 1 ; 
		if(vis[i].y == 1582 && vis[i].m == 10 && vis[i].d == 5 ) vis[i].d = 15 ; 
		cnt = i ; 
		if( vis[i].y < 0 ) {
			if( vis[i].m == 1 ) { Big(i) ; continue ; }
			if( vis[i].m == 2 ) {
				LL y = -vis[i].y ; 
				if(y % 4 == 1) {
					if(vis[i].d == 30) vis[i].d = 1, vis[i].m = 3 ; 
				}
				else if(vis[i].d == 29) vis[i].d = 1, vis[i].m = 3 ; 
			}
			if( vis[i].m == 3 ) { Big(i) ; continue ; }
			if( vis[i].m == 4 ) { Small(i) ; continue ; }
			if( vis[i].m == 5 ) { Big(i) ; continue ; }
			if( vis[i].m == 6 ) { Small(i) ; continue ; }
			if( vis[i].m == 7 ) { Big(i) ; continue ; }
			if( vis[i].m == 8 ) { Big(i) ; continue ; }
			if( vis[i].m == 9 ) { Small(i) ; continue ; }
			if( vis[i].m == 10 ){ Big(i) ; continue ; }
			if( vis[i].m == 11 ) { Small(i) ; continue ; }
			if( vis[i].m == 12 ) { Big(i) ; continue ; }
		}
		else {
			if( vis[i].m == 1 ) { Big(i) ; continue ; }
			if( vis[i].m == 2 ) {
				LL y = vis[i].y ; 
				if( y <= 1582 ) {
					if(y % 4 == 0 ) {
						if(vis[i].d == 30) vis[i].d = 1, vis[i].m = 3 ; 
					}
					else if(vis[i].d == 29) vis[i].d = 1, vis[i].m = 3 ; 
				}
				else {
					if((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0))) {
						if(vis[i].d == 30) vis[i].d = 1, vis[i].m = 3 ; 
					}
					else if(vis[i].d == 29) vis[i].d = 1, vis[i].m = 3 ; 
				}
			}
			if( vis[i].m == 3 ) { Big(i) ; continue ; }
			if( vis[i].m == 4 ) { Small(i) ; continue ; }
			if( vis[i].m == 5 ) { Big(i) ; continue ; }
			if( vis[i].m == 6 ) { Small(i) ; continue ; }
			if( vis[i].m == 7 ) { Big(i) ; continue ; }
			if( vis[i].m == 8 ) { Big(i) ; continue ; }
			if( vis[i].m == 9 ) { Small(i) ; continue ; }
			if( vis[i].m == 10 ) { Big(i) ; continue ; }
			if( vis[i].m == 11 ) { Small(i) ; continue ; }
			if( vis[i].m == 12 ) { Big(i) ; continue ; }
		}
	}
	rep( i, 1, 12 ) cost[i] = 31 ; 
	cost[2] = 28, 
	cost[4] = cost[6] = cost[9] = cost[11] = 30 ;  
	while(T--) {
		LL i = gi() ; 
		if(i <= cnt) {
			if(vis[i].y < 0) printf("%d %d %d BC\n", vis[i].d, vis[i].m, -vis[i].y ) ;
			else printf("%d %d %d\n", vis[i].d, vis[i].m, vis[i].y ) ;
		}
		else {
			i -= cnt ; 
			LL l = 2000, r = inf, ans = 0 ; 
			while(l <= r) {	
				LL mid = (l + r) >> 1 ; 
				if(check(mid, i)) ans = mid, l = mid + 1 ; 
				else r = mid - 1 ; 
			}
			LL u = Get(ans), y = ans, d = 1, m = 1 ;
			LL flag = ((y % 400 == 0) | ((y % 4 == 0) && (y % 100 != 0))) ; 
			i -= u ; 
			rep( j, 1, 12 ) {
				if( (flag) && j == 2 ) ++ cost[j] ; 
				if( i >= cost[j] ) i -= cost[j] ;
				else {
					m = j ; 
					if( (flag) && j == 2 ) -- cost[j] ; 
					break ; 
				}
				if( (flag) && j == 2 ) -- cost[j] ; 
			}
			d += i ;
			printf("%lld %lld %lld\n", d, m, y ) ; 
		} 
	} 
	return 0 ; 
}
