#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int n,m,c,k;
ull a[1000010],ans;
bool emm[65],cx[65];
inline ull read(){
	ull s=0;char ch=','; bool f=0;
	while(ch<'0'||ch>'9'){f|=(ch=='-');ch=getchar();}
	while(ch>='0'&&ch<='9'){s=(s<<3)+(s<<1)+(ch^48);ch=getchar();}
	return f?-s:s;
}
inline void qwq(ull x){
	int now=0;
	while(x){
		if(x&1) emm[now]=1;
		x>>=1;
		now++;
	}
	return ;
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read(),m=read(),c=read(),k=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
		qwq(a[i]);
	}
	for(int i=1;i<=m;i++){
		int p,q;
		p=read(),q=read();
		cx[p]=1;
	}
	ans=1;
	for(int i=0;i<k;i++){
		if(emm[i]||!cx[i]) ans*=2;
	}
	cout<<ans-n<<endl;
	return 0;
}
