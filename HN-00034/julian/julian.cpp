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

const int D0[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int D1[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int Special = 2299161;
const int Days = 2305458;
const int Round = 146097;

inline void Calc1(ll &y, ll &m, ll &d, ll x) {
	y += (x / 1461) * 4, x %= 1461;
	if(x >= 366) {
		++y, x -= 366;
		y += x / 365, x %= 365;
		m = 1;
		while(x >= D0[m])
			x -= D0[m], ++m;	
		d = x + 1;
	} else {
		m = 1;
		while(x >= D1[m])
			x -= D1[m], ++m;	
		d = x + 1;
	}
}

inline void Calc2(ll &y, ll &m, ll &d, ll x) {
	y += (x / Round) * 400, x %= Round;
	if(x > 36524) {
		x--;
		y += (x / 36524) * 100, x %= 36524;
		Calc1(y, m, d, x + (x >= 59 ? 1 : 0));
	} else Calc1(y, m, d, x);
}

int main() {
	FILE("julian");

	int q = ri;
	while(q--) {
		ll x = ri;
		ll y = 0, m = 0, d = 0;
		if(x >= Special) x += 10;
		if(x < Days) Calc1(y, m, d, x);
		else Calc2(y, m, d, x - Days), y += 6312;
		y -= 4712;

		if(y < 0) printf("%lld %lld %lld BC\n", d, m, 1 - y);
		else printf("%lld %lld %lld\n", d, m, y);
	}

	return 0;
}
