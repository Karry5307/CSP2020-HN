#include<bits/stdc++.h>
using namespace std;
const int mod = 998244353;
#define N 100005
struct func{
	int t;
	int p,v,c;
	vector<int> a;
}f[N];
int n,m,x,Q,which;
long long a[N];
inline void solve(int which){
	if(f[which].t==1){
		a[f[which].p]+=f[which].v;
		if(a[f[which].p]>=mod)
			a[f[which].p]-=mod;
	}
	if(f[which].t==2)
		for(register int j=1;j<=n;++j)
			a[j]=(a[j]*f[which].v)%mod;
	if(f[which].t==3)
		for(register int j=0;j<f[which].c;++j)
			solve(f[which].a[j]);
}
signed main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(register int i=1;i<=n;++i)	
		scanf("%lld",&a[i]);
	scanf("%d",&m);
	for(register int i=1;i<=m;++i){
		scanf("%d",&f[i].t);
		if(f[i].t==1)
			scanf("%d%d",&f[i].p,&f[i].v);
		if(f[i].t==2)
			scanf("%d",&f[i].v);
		if(f[i].t==3){
			scanf("%d",&f[i].c);
			for(register int j=1;j<=f[i].c;++j){
				scanf("%d",&x);
				f[i].a.push_back(x);
			}
		}
	}
	scanf("%d",&Q);
	for(register int i=1;i<=Q;++i){
		scanf("%d",&which);
		solve(which);
	}
	for(register int i=1;i<=n;++i)
		printf("%lld ",a[i]);
	printf("\n");
	return 0;
}
