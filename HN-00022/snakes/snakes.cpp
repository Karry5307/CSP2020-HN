#include <bits/stdc++.h>
using namespace std;
template<typename tp>inline void r(tp &n){
	n=0;char c=getchar();int f=1;
	while(!isdigit(c)&&c!='-') c=getchar();
	if(c=='-') c=getchar(),f=-1;
	while( isdigit(c)) n=n*10+c-48,c=getchar();
	n*=f;
}
template<typename tp>inline void w(tp  n){
	if(n<0) n=-n,putchar('-');
	if(n/10) w(n/10);
	putchar(n%10+48);
}
struct Snake{
	int v,id;
}a[4];
int n,b[4];
bool Cmp(Snake a,Snake b){if(a.v==b.v) return a.id<b.id;return a.v<b.v;}
void solve(){
	for(int i=1;i<=n;++i)
		a[i].v=b[i],a[i].id=i,cerr<<a[i].v<<endl;
	sort(a+1,a+n+1,Cmp);
	if(a[3].v>a[1].v+a[2].v)
		puts("1");
	else if(a[3].v==a[1].v+a[2].v)
		if(a[3].id!=1) puts("1");
		else puts("3");
	else puts("3");
}
int main(){
	
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	
	int t;r(t);r(n);
	for(int i=1;i<=n;++i)
		r(b[i]);
	solve();
	for(int i=2,k,x,y;i<=t;++i) {
		r(k);
		for(int i=1;i<=k;++i)
			r(x),r(y),b[x]=y;
		solve();
	}
	return 0;
}
