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

namespace Subtask {

const int MAXN = 1000010;
const ll bs = 1000000;

int n;
int a[MAXN];
int tmp[MAXN];

set<ll>S;
set<ll>::iterator it;
int tim[MAXN];
int die[MAXN];
int A[MAXN];
int B[MAXN];

inline void Work() {
	ll Sum = 0;
	for(int i = 1; i < n; i++) Sum += a[i];
	if(a[n] > Sum) {
		puts("1");
		return ;
	}

	for(int i = 1; i <= n; i++)
		S.insert(a[i] * bs + i - 1);
	memset(tim, 0, sizeof(tim));
	int flag = 0, lim = n, res = 0;
	for(int i = 1; i < n; i++) {
		ll x, y;
		it = S.begin(), x = *it, S.erase(it);
		it = S.end(), --it, y = *it, S.erase(it);
		int idx = x % bs + 1;
		int idy = y % bs + 1;
		x /= bs, y /= bs;
		S.insert((y - x) * bs + idy - 1);
		A[i] = idx, B[i] = idy, tim[idy] = i, die[i] = idx;
	} S.clear();
	for(int i = n - 1; i >= 1; i--) {
		int x = die[i];
		if(tim[x])
			res = i = tim[x];
	} printf("%d\n", n - res + 1);
}

}

const int MAXN = 1000010;
const ll bs = 1000000;
const ll inf = 1e18;

int n;
int a[MAXN];
int tmp[MAXN];

struct DeQue {
	ll v[MAXN];
	int l, r;

	DeQue() { l = 1, r = 0; }

	inline void reset() {
		l = 1, r = 0, memset(v, 0, sizeof(v));
	}

	inline ll front() { return l <= r ? v[l] : -inf; }
	inline ll back() { return l <= r ? v[r] : inf; }
	inline bool empty() { return l > r; }
	inline void push(ll x) { v[++r] = x; }
	inline void pop_front() { ++l; }
	inline void pop_back() { --r; }
}A, B;

int tim[MAXN];
int die[MAXN];


inline void Work() {
	ll Sum = 0;
	for(int i = 1; i < n; i++) Sum += a[i];
	if(a[n] > Sum) {
		puts("1");
		return ;
	}

	if(n <= 50000) {
		Subtask::Work();
		return ;
	}

	A.reset(), B.reset();
	memset(tim, 0, sizeof(tim));

	for(int i = n; i >= 1; i--)
		A.push(a[i] * bs + i - 1);

	int flag = 0, lim = n, res = 0;
	for(int i = 1; i < n; i++) {
		ll x, y;

		if(A.front() > B.front()) y = A.front(), A.pop_front();
		else y = B.front(), B.pop_front();
		if(A.back() < B.back()) x = A.back(), A.pop_back();
		else x = B.back(), B.pop_back();

		int idx = x % bs + 1;
		int idy = y % bs + 1;
		x /= bs, y /= bs;
		B.push((y - x) * bs + idy - 1);
		tim[idy] = i, die[i] = idx;
	}

	for(int i = n - 1; i >= 1; i--) {
		int x = die[i];
		if(tim[x])
			res = i = tim[x];
	} printf("%d\n", n - res + 1);
}

int main() {
	FILE("snakes");

	int Case = ri - 1;

	n = ri;
	for(int i = 1; i <= n; i++)
		a[i] = tmp[i] = ri;
	Work();

	while(Case--) {
		int m = ri;
		for(int i = 1; i <= m; i++) {
			int p = ri;
			a[p] = ri;
		} Work();
	}
	return 0;
}
