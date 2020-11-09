#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

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

const int MAXN = 1000010;

bitset<100000010>Have;
vector<int>need[80];

template<typename T>
inline int bitcount(T x) {
	int c = 0;
	while(x) c += x & 1, x >>= 1;
	return c;
}

int main() {
	FILE("zoo");

	int n = ri, m = ri, c = ri, k = ri;
	ull animal = 0;
	for(int i = 1; i <= n; i++) {
		ull x; read(x);
		animal |= x;
	}
	int cnt = bitcount(animal);
	for(int i = 1; i <= m; i++) {
		int p = ri, q = ri;
		if((animal >> p) & 1) Have.set(q);
		else need[p].push_back(q);
	}
	for(int i = 0; i < k; i++) {
		if((animal >> i) & 1) continue;
		int able = 1, sz = need[i].size();
		for(int j = 0; j < sz; j++) {
			if(!Have[need[i][j]]) {
				able = 0;
				break;
			}
		} cnt += able;
	}

	ull res = 1;
	res <<= cnt;
	cout << res - n << endl;
	return 0;
}
