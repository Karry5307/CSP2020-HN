#include <bits/stdc++.h>
using namespace std;
unsigned long long a,n,m,c,k,cl,an,p,q,ok,sum=1;
bool u[70];
int main(){
	scanf("%lld%lld%lld%lld",&n,&m,&c,&k);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a);
		an|=a;
	}
	for(int i=1;i<=m;i++){
		scanf("%lld%lld",&p,&q);
		u[p]=1;
	}
	for(int i=0;i<k;i++)
		if((an>>i)&1||!(u[i]))sum*=2;
	cout<<sum-n;
	return 0;
}
