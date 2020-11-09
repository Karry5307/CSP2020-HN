#include <bits/stdc++.h>
using namespace std;
#define int long long
template <typename T> inline void read(T &a){
	T w = 1; a=0;
	char ch=getchar();
	for(;!isdigit(ch);ch=getchar()) if(ch == '-') w=-1;
	for(;isdigit(ch);ch=getchar()) a=(a<<3)+(a<<1)+(ch^48);
	a*=w;
}
const int MAX = 1e6+10;
int a[MAX];
int pos[100],Pos[100];
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k;
	read(n); read(m); read(c); read(k);
	for(int i = 1; i <= n; ++i){
		read(a[i]); 
	}
	for(int i = 1; i <= m; ++i){
		int u,v; read(u); read(v);
		pos[u] = 1;
	}
	for(int i = 1; i <= n; ++i){
		for(int j = 0; j < k; ++j){
			if((1<<j) & a[i]){
				Pos[j] = 1;
			}
		}
	}
	int ans = (1 << k);
	for(int i = 0; i < k; ++i){
		if(pos[i] && !Pos[i]){
			ans /= 2;
		}
	}
	ans -= n;
	cout<<ans;
}
