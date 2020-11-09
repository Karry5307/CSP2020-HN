#include<bits/stdc++.h>
using namespace std;
const int N=1000005;
bool use[N];
unsigned long long all=0,ans,a[N],p,q,c;
unsigned long long read(){
	char ch=getchar();
	while(ch<'0'||ch>'9')
		ch=getchar();
	unsigned long long res=0;
	while(ch>='0'&&ch<='9'){
		res=res*10+ch-'0';
		ch=getchar();
	}
	return res;
}
int main(){
	int i,j,k,l,n,m;
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read(),m=read(),c=read(),k=read();
	for(i=1;i<=n;i++){
		a[i]=read();
		all=all|a[i];
	}
	for(i=1;i<=m;i++){
		p=read(),q=read();
		if((!(all&(1ull<<p)))&&(!use[p])){
			k--;
			use[p]=1;
		}
	}
	ans=(1ull<<k)-n;
	printf("%lld",ans);
	return 0;
}
