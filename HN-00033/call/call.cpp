#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+50,mod=998244353;
int n,m,Q,a[maxn];
struct ha{
	int id,x,y;
	vector<int>vec;
}q[maxn];
struct node{
	int l,r,tag;
	#define l(x) tree[x].l
	#define r(x) tree[x].r
	#define tag(x) tree[x].tag
}tree[maxn*4];
void build(int x,int l,int r){
	l(x)=l;r(x)=r;
	tag(x)=1;
	if(l==r){scanf("%lld",&a[l]);return;}
	int mid=(l+r)/2;
	build(x<<1,l,mid);
	build(x<<1|1,mid+1,r);
}
void spread(int x){
	if(tag(x)!=1){
		tag(x<<1)=tag(x<<1)*tag(x)%mod;
		tag(x<<1|1)=tag(x<<1|1)*tag(x)%mod;
		tag(x)=1;
	}
}
void modify_p(int x,int pos,int va){
	if(l(x)>pos||r(x)<pos)return;
	if(l(x)==r(x)&&pos==l(x)){
		a[pos]=a[pos]*tag(x)%mod;
		a[pos]=(a[pos]+va)%mod;
		tag(x)=1;
		return;
	}
	spread(x);
	int mid=(l(x)+r(x))/2;
	modify_p(x<<1,pos,va);
	modify_p(x<<1|1,pos,va);
}
void solve(int x){
	if(l(x)==r(x)){
		printf("%lld ",a[l(x)]*tag(x)%mod);
		return;
	}
	spread(x);
	solve(x<<1);solve(x<<1|1);
}
void use(int x){
	if(q[x].id==1)modify_p(1,q[x].x,q[x].y);
	if(q[x].id==2)tag(1)=tag(1)*q[x].x%mod;
	if(q[x].id==3){
		for(int i=0;i<q[x].vec.size();i++){
			int j=q[x].vec[i];
			use(j);
		}
	}
}
signed main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%lld",&n);
	build(1,1,n);
	scanf("%lld",&m);
	for(int i=1;i<=m;i++){
		scanf("%lld",&q[i].id);
		if(q[i].id==1){
			scanf("%lld%lld",&q[i].x,&q[i].y);
		}else if(q[i].id==2){
			scanf("%lld",&q[i].x);
		}else{
			int T;scanf("%lld",&T);
			while(T--){
				int x;scanf("%lld",&x);
				q[i].vec.push_back(x);
			}
		}
	}
	scanf("%lld",&Q);
	while(Q--){
		int x;scanf("%lld",&x);
		use(x);
	}
	solve(1);
	return 0;
}
