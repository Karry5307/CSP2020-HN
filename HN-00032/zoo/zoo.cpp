#include<cstdio>
#include<map>
#define ull unsigned long long

inline ull read(){
	ull x=0;char c=getchar();
	while(c<'0' || c>'9') c=getchar();
	while(c>='0' && c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
	return x;
}
inline void write(ull x){
	if(x>9) write(x/10);
	putchar(x%10^48);
}

ull a[1000005],p[1000005],q[1000005],ans,t,t2;
ull s,y[70][70];
int n,m,c,k;
bool b2[1000005];
std::map<ull,bool> b;

inline void get_y(){
	for(register int i=0;i<=k;++i) y[i][i]=y[i][0]=1;
	for(register int i=1;i<=k;++i)
		for(register int j=1;j<=k;++j)
			y[i][j]=y[i-1][j]+y[i-1][j-1];
}

signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);

	n=read(),m=read(),c=read(),k=read();
	get_y();
	for(register int i=0;i<k;++i) t2|=(1<<i);

	for(register int i=1;i<=n;++i) a[i]=read();
	for(register int i=1;i<=m;++i) p[i]=read(),q[i]=read(),b2[p[i]]=1,t|=(1<<p[i]);
	t2^=t;
	for(register int i=1;i<=n;++i){
		while(a[i]>0){
			ull g=a[i]&-a[i];
			if(t&g) t^=g,t2|=g;
			a[i]-=g;
		}
	}
	while(t2>0) ++s,t2-=(t2&-t2);
	for(register int i=0;i<=k;++i) ans+=y[s][i];
	write(ans-n);
	return 0;
}
/*
	for(register ull i=1;i<=n;++i){
		for(register ull j=1;j<=m;++j)
			if((a[i]&(1<<p[j])) && !b[q[j]]){
				b[q[j]]=1,b2[p[j]]=0;
			}
	}
*/
