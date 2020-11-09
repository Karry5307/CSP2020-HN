#include <bits/stdc++.h>
#define M 998244353
#define N 100005
using namespace std;
long long n,a[N],m,c[N],q;
bool vis[N];
vector<int>p[N],b[N];
vector<long long>v[N];
void hb(int x){
	vis[x]=1;
	for(int i=0;i<b[x].size();i++){
		int to=b[x][i];
		if(!vis[to])hb(to);	
		c[x]=(c[x]*c[to])%M;
		for(int j=0;j<v[x].size();j++)
			v[x][j]=(v[x][j]*c[to])%M;

		for(int j=0;j<p[to].size();j++)
		p[x].push_back(p[to][j]),v[x].push_back(v[to][j]);	
	}
		
}
int main(){
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
	scanf("%lld",&m);
	for(int i=0;i<=n;i++)c[i]=1;
	for(int i=1,t,J,C,num;i<=m;i++){
		scanf("%d",&t);
		if(t==1){
			scanf("%d%d",&num,&J);
			p[i].push_back(num);
			v[i].push_back(J);
		}
		if(t==2){
			scanf("%d",&C);
			c[i]=C;
		}
		if(t==3){
			scanf("%d",&num);
			for(int j=1,o;j<=num;j++){
				scanf("%d",&o);
				b[i].push_back(o);
			}
		}
	}
	scanf("%lld",&q);
	for(int i=1,o;i<=q;i++){
		scanf("%d",&o);
		b[0].push_back(o);
	}
	hb(0);
	for(int i=1;i<=n;i++)a[i]=(a[i]*c[0])%M;
	for(int i=0;i<p[0].size();i++)
	a[p[0][i]]=(a[p[0][i]]+v[0][i])%M;
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	return 0;
}
