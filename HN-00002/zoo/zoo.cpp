#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,c,k;
ll p,q;
ll x,all,si,ans=1;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%lld%lld%lld%lld",&n,&m,&c,&k);
	for(register int i=1;i<=n;++i){
		scanf("%lld",&x);
		all|=x;
	}
	for(register int i=1;i<=m;++i){
		scanf("%lld%lld",&p,&q);
		if(((all>>p)&1)!=1)
			si|=(1<<(p));
	}
	for(register int i=1;i<=k;++i){
		si>>=1;
		if((si&1)==0)
			ans*=2;
	}
	printf("%lld\n",ans-n);
	return 0;
}
