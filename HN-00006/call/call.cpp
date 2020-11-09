#include <bits/stdc++.h>
using namespace std;
template <typename T> inline void read(T &a){
	T w = 1; a=0;
	char ch=getchar();
	for(;!isdigit(ch);ch=getchar()) if(ch == '-') w=-1;
	for(;isdigit(ch);ch=getchar()) a=(a<<3)+(a<<1)+(ch^48);
	a*=w;
}
const int MAX=1e5+19;
int a[MAX];
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int n; read(n);
	for(int i= 1; i <= n;++i) read(a[i]);

	for(int i= 1; i<=n;++i) cout<<a[i]<<" ";
}
