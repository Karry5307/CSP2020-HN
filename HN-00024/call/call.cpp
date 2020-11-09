#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int n,m,q,id[100010][2],cnt[4],p[100010],rd[100010];
ll a[100010],add[100010],che[100010];
bool zrw1,zrw2;
vector<int> g[100010];
inline void jia(int wz,int add){
	a[wz]=(a[wz]+add)%mod;
	return ;
}
inline void cheng(int che){
	for(int i=1;i<=n;i++)
		a[i]=(a[i]*che)%mod;
	return ;
}
inline ll read(){
	ll s=0;char ch=','; bool f=0;
	while(ch<'0'||ch>'9'){f|=(ch=='-');ch=getchar();}
	while(ch>='0'&&ch<='9'){s=(s<<3)+(s<<1)+(ch^48);ch=getchar();}
	return f?-s:s;
}
inline void dfs(int now){
	if(id[now][0]==1){
		jia(p[id[now][1]],add[id[now][1]]);
		return ;
	}
	if(id[now][0]==2){
		cheng(che[id[now][1]]);
		return ;
	}
	for(int i=0;i<g[id[now][1]].size();i++) dfs(g[id[now][1]][i]);
	return ;
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(int i=1;i<=n;i++) a[i]=read()%mod;
	m=read();
	zrw1=zrw2=1;
	for(int i=1;i<=m;i++){
		int typ;
		typ=read();
		if(typ==1){
			zrw1=0;
			p[++cnt[1]]=read(),add[cnt[1]]=read()%mod;
		}
		else if(typ==2){
			zrw1=0;
			che[++cnt[2]]=read()%mod;
		}
		else{
			cnt[3]++;
			int c=read(),qaq;
			while(c--){
				qaq=read();
				g[cnt[3]].push_back(qaq);
				rd[qaq]++;
			}
		}
		id[i][0]=typ,id[i][1]=cnt[typ];
	}
	bool qwqwq=0;
	for(int i=1;i<=n;i++){
		if(rd[i]>1||(rd[i]==0&&qwqwq)) zrw2=0;
		if(rd[i]==0) qwqwq=1;
	}
	q=read();
	while(q--){
		int f=read();
		if(zrw1) continue;
		dfs(f);
	}
	if(zrw1){
		for(int i=1;i<=n;i++)
			printf("%lld ",a[i]);
		return 0;
	}
	for(int i=1;i<=n;i++) printf("%lld ",a[i]);
	return 0;
}
