#include <bits/stdc++.h>
using namespace std;
template<typename tp>inline void r(tp &n){
	n=0;char c=getchar();
	while(!isdigit(c)) c=getchar();
	while( isdigit(c)) n=n*10+c-48,c=getchar();
}
template<typename tp>inline void w(tp  n){
	if(n/10) w(n/10);
	putchar(n%10+48);
}
const int N=1e5+5,Mod=998244353;
long long n,m,q,sum=1,now=1;
long long a[N],f[N],t[N],p[N],v[N],ind[N],delta[N];
vector<int>c[N];
int Q(long long b,int t){
	long long ret=1;
	for(int i=1;i<=t;i<<=1,b=b*b%Mod)
		if(i&t) ret=ret*b%Mod;
	return ret;
}
void solve1(int x){
	if(t[x]==2) sum=1ll*sum*v[x]%Mod;
	else if(t[x]==3)
		for(int i=0,j=c[x].size();i<j;++i)
			solve1(c[x][i]); 
}
void solve2(int x){
	if(t[x]==1) (a[p[x]]+=v[x])%=Mod,(delta[p[x]]+=1ll*(now-1)*v[x]%Mod*sum%Mod*Q(now,Mod-2)%Mod)%=Mod;
	else if(t[x]==2) now=1ll*now*v[x]%Mod;
	else if(t[x]==3)
		for(int i=0,j=c[x].size();i<j;++i)
			solve2(c[x][i]); 
}
namespace Sub1{
	long long s[N];
	void DPit(){
		queue<int>q;
		for(int i=1;i<=m;++i)
			if(!ind[i]) q.push(i);
		while(!q.empty()){
			int u=q.front();q.pop();
			for(int i=0,j=c[u].size();i<j;++i){
				int v=c[u][i];
				s[v]+=s[u];--ind[v];
				if(!ind[v])
					q.push(v);
			}
		}
	}
	void solve(){
		for(int i=1;i<=q;++i)
			++s[f[i]];
		DPit();
		for(int i=1;i<=m;++i)
			if(t[i]==1) a[p[i]]=(a[p[i]]+v[i]*s[i]%Mod)%Mod;
		for(int i=1;i<=n;++i)
			w(a[i]),putchar(' ');
		exit(0);
	}
}
namespace Sub2{
	long long s[N],tot=1;
	void DPit(){
		queue<int>q;
		for(int i=1;i<=m;++i)
			if(!ind[i]) q.push(i);
		while(!q.empty()){
			int u=q.front();q.pop();
			for(int i=0,j=c[u].size();i<j;++i){
				int v=c[u][i];
				s[v]+=s[u];--ind[v];
				if(!ind[v])
					q.push(v);
			}
		}
	}
	void solve(){
		for(int i=1;i<=q;++i)
			++s[f[i]];
		DPit();
		for(int i=1;i<=m;++i)
			if(t[i]==2) tot=tot*Q(v[i],s[i])%Mod;
		for(int i=1;i<=n;++i)
			w(a[i]*tot%Mod),putchar(' ');
		exit(0);
	}
}
int main(){
	
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	
	r(n);
	for(int i=1;i<=n;++i) r(a[i]);
	r(m);
	bool f1=false,f2=false;
	for(int i=1,tp;i<=m;++i){
		r(tp);t[i]=tp;
		if(tp==1) r(p[i]),r(v[i]),f1=true;
		else if(tp==2) r(v[i]),f2=true;
		else if(tp==3){
			r(p[i]);
			for(int j=1,x;j<=p[i];++j)
				r(x),c[i].push_back(x),++ind[x];
		}
	}
	r(q);
	for(int i=1;i<=q;++i)
		r(f[i]),solve1(f[i]);
	if(!f1) Sub2::solve();
	if(!f2) Sub1::solve();
	for(int i=1;i<=q;++i)
		solve2(f[i]);
	for(int i=1;i<=n;++i)
		w((1ll*a[i]*sum%Mod+Mod-delta[i])%Mod),putchar(' ');
	return 0;
}
