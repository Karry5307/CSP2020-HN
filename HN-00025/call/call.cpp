#include<bits/stdc++.h>
using namespace std;
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
struct qqq{
	int y,next;
}a[1100010],a2[1100010];
int mod=998244353;
int n,q,m,K,K2,h2[100010],h[100010],rd[100010],rd2[100010];
long long b[100010],c[100010][3],d[100010],dis[100010];
queue<int> p;
void add(int x,int y){
	K++;
	a[K].y=y,a[K].next=h[x],h[x]=K;
}
void add2(int x,int y){
	K2++;
	a2[K2].y=y,a2[K2].next=h2[x],h2[x]=K2;
}
void chuli1(){
	for(int i=0;i<=m;i++){
		if(rd[i]==0)p.push(i);
	}
	while(p.size()){
		int x=p.front();p.pop();
		for(int i=h[x];i;i=a[i].next){
			int y=a[i].y;
			d[y]=(d[y]*d[x])%mod;
			rd[y]--;
			if(!rd[y])p.push(y);
		}
	}
}
void chuli2(){
	long long bs=1;
	for(int i=h2[0];i;i=a2[i].next){
		int y=a2[i].y;
		dis[y]=(dis[y]*bs)%mod;
//		cout<<y<<" "<<dis[y]<<"!!"<<endl;
		bs=(bs*d[y])%mod;
	}
	for(int i=0;i<=m;i++){
		if(rd[i]==0)p.push(i);
	}
	while(p.size()){
		int x=p.front();p.pop();
//		cout<<x<<endl;
		for(int i=h2[x];i;i=a2[i].next){
			int y=a2[i].y;
			bs=dis[y];
//			cout<<y<<" ! "<<h2[y]<<endl;
			for(int j=h2[y];j;j=a2[j].next){
				int yy=a2[j].y;
				dis[yy]=(dis[yy]*bs)%mod;
//		cout<<bs<<" "<<yy<<" "<<dis[yy]<<"!!"<<endl;
				bs=(bs*d[yy])%mod;
			}
			
			
//			dis[y]+=dis[x];
//			bs=bs*d[y];
//			d[y]=(d[y]*d[x])%mod;
			rd2[y]--;
			if(!rd2[y])p.push(y);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)b[i]=read();
	m=read();
	d[0]=1;
	for(int i=1;i<=m;i++){
		d[i]=1;
		c[i][0]=read();
		if(c[i][0]==1){
			c[i][1]=read(),c[i][2]=read();
		}
		if(c[i][0]==2){
			c[i][1]=read();
			d[i]=c[i][1];
		}
		if(c[i][0]==3){
			int x=read();
			for(int j=1;j<=x;j++){
				int y=read();
				add(y,i);
				add2(i,y);
//				cout<<i<<" "<<y<<"!!!!"<<endl;
				rd[i]++;
//				cout<<"!"<<i<<endl;
				rd2[y]++;
			}
		}
	}
	q=read();
	
	for(int i=1;i<=q;i++){
		int x=read();
		add(x,0);
		add2(0,x);
		rd[0]++;
//		cout<<"!0"<<endl;
		rd2[x]++;
	}
	chuli1();
	for(int i=1;i<=m;i++){
		dis[i]=1;
//		dis[i]=d[i];
//		cout<<d[i]<<" ";
	}
//	cout<<endl;
	for(int i=1;i<=n;i++){
		b[i]=(b[i]*d[0])%mod;
	}
	chuli2();
	for(int i=1;i<=m;i++){
//		cout<<dis[i]<<" ";
		if(c[i][0]==1){
			b[c[i][1]]=(b[c[i][1]]+c[i][2]*dis[i])%mod;
		}
	}
	for(int i=1;i<=n;i++){
		printf("%lld ",b[i]);
	}
	return 0;
}
