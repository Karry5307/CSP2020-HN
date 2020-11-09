#include <bits/stdc++.h>
using namespace std;
template <typename T> inline void read(T &a){
	T w = 1; a=0;
	char ch=getchar();
	for(;!isdigit(ch);ch=getchar()) if(ch == '-') w=-1;
	for(;isdigit(ch);ch=getchar()) a=(a<<3)+(a<<1)+(ch^48);
	a*=w;
}
const int MAX = 1e6+10;
int a[MAX];
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T,n;
	read(T);
	read(n);
	for(int i = 1; i <= n; ++i) read(a[i]);
	if(n == 3){
		if((a[3]-a[1]) > a[2]) puts("1");
		else puts("3");
		for(int i = 2; i <= T;++i){
			int m; read(m);
			for(int j=1;j<=m;++j){
				int x,y; read(x);read(y);a[x]=y;
			}
			if((a[3]-a[1]) > a[2]) puts("1");
			else puts("3");
		}
		return 0;
	}

}
