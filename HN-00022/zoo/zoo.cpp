#include <bits/stdc++.h>
using namespace std;
template<typename tp>inline void r(tp &n){
	n=0;char c=getchar();
	while(!isdigit(c)) c=getchar();
	while( isdigit(c)) n=n*10+c-48,c=getchar();
}
template<typename tp>inline void w(tp  n){
	if(n<0) n=-n,putchar('-');
	if(n/10) w(n/10);
	putchar(n%10+48);
}
const int N=1e6+5;
unsigned long long n,m,c,k;
bool used[N],need[N];
int main(){
	
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	
	r(n),r(m),r(c),r(k);
	if(n==0&&m==0&&k==64){puts("18446744073709551616");return 0;}
	for(unsigned long long i=1,x;i<=n;++i){ 
		r(x);
		for(unsigned long long i=0;i<=k-1;++i)
			if((x>>i)&1) used[i]=1;
	}
	for(unsigned long long i=1,p,q;i<=m;++i)
		r(p),r(q),need[p]=1;
	unsigned long long ans=1;
	for(unsigned long long i=0;i<=k-1;++i)
		if(!need[i]||used[i]) ans=2ll*ans;
	w(ans-n);
	return 0;
}
