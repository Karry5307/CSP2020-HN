#include<bits/stdc++.h>
using namespace std;
long long a[100005],tree[400005],mod=998244353;
long long lazy[400005];
int num,n,T[100005],k[100005],p[100005],v[100005];
int s[1003][1003];
void dfs(int x){
	int i,j;
	if(T[x]==1){
		a[p[x]]+=v[x];
	}
	else if(T[x]==2){
		for(j=1;j<=n;j++)a[j]=(a[j]*v[x])%mod;
	}
	else {
		for(i=1;i<=k[x];i++)dfs(s[x][i]);
	}
	
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int i,j,m,Q,to,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		scanf("%d",&T[i]);
		if(T[i]==1)
			scanf("%d%d",&p[i],&v[i]);
		else if(T[i]==2)scanf("%d",&v[i]);
		else {
			scanf("%d",&k[i]);
			for(j=1;j<=k[i];j++){
				scanf("%d",&s[i][j]);
			}
		}
	}
	scanf("%d",&Q);
	for(i=1;i<=Q;i++){
		scanf("%d",&x);
		if(T[x]==1){
			a[p[x]]+=v[x];
		}
		else if(T[x]==2){
			for(j=1;j<=n;j++)a[j]=(a[j]*v[x])%mod;
		}
		else {
			dfs(x);
		}
	}
	for(i=1;i<=n;i++){
		printf("%lld ",a[i]%mod);
	}
	return 0;
}
