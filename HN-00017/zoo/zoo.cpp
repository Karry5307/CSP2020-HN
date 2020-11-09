#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
int n,m,c,k,sum=0,b[110],tot=0,ans=1;
bool a[110];
int gi(){
	int w=0,f=1;char ch;
	while(!isdigit(ch)){f=ch=='-'?-1:1;ch=getchar();}
	while(isdigit(ch)){w=(w<<1)+(w<<3)+ch-48;ch=getchar();}
	return w*f;
}
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	n=gi();m=gi();c=gi();k=gi();
	for(int i=1;i<=n;i++){
		int x=gi();
		sum|=x;
	}
	for(int i=1;i<=m;i++){
		int x=gi()+1,y=gi();
		a[x]=1;
	}
	while(sum){
		b[++tot]=sum&1;
		sum>>=1;
	}
	for(int i=1;i<=k;i++){
		if(b[i]!=0||a[i]!=1)ans*=2;
	}
	if(ans==0){
		ans+=(1ull<<63);
		ans-=n;
		ans+=(1ull<<63);
	}
	else ans-=n;
	if(ans==0)cout<<"18446744073709551616"<<"\n";
	else cout<<ans<<"\n";
	return 0;
}
