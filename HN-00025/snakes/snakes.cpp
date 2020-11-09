#include<bits/stdc++.h>
using namespace std;
int T,TT,n,m,a[1000010];
long long read(){
	long long sum=0,f=1;char st=getchar();
	while(st<'0'||'9'<st){
		if(st=='-')f=-1;
		st=getchar();
	}
	while('0'<=st&&st<='9'){
		sum=(sum<<3)+(sum<<1)+st-'0';
		st=getchar();
	}
	return sum*f;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>T;
	TT=T;
	while(T--){
		n=read();
		if(TT==T+1)m=n;
		for(int i=1;i<=n;i++){
			if(TT==T+1){
				a[i]=read();
			}
			else{
				int x=read(),y=read();
				a[x]=y;
			}
			
		}
		if(m==3){
			if(a[3]>=a[2]+a[1]){
				puts("1");
			}
			else puts("3");
		}
	}
	return 0;
}
