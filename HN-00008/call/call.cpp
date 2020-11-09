#include<bits/stdc++.h>
using namespace std;
int n,m,inf=998244353,chi[1005][1005];
long long a[100005];
struct as{
	int pos,data,chen,id,num;
}t[100005];
int read(){
	char ch=getchar();
	while(ch<'0'||ch>'9')
		ch=getchar();
	int res=0;
	while(ch>='0'&&ch<='9'){
		res=res*10+ch-'0';
		ch=getchar();
	}
	return res;
}
inline void add(int p,int data){
	a[p]+=data;
	a[p]%=inf;
}
inline void mel(int data){
	for(int i=1;i<=n;i++)
		a[i]=a[i]*data%inf;
}
void work(int p){
	for(int i=1;i<=t[p].num;i++){
		int k=chi[p][i];
		if(t[k].id==1)
			add(t[k].pos,t[k].data);
		else if(t[k].id==2)
			mel(t[k].chen);
		else
			work(k);
	}
}
int main(){
	int i,j,k,l,q;
	bool flag1=0,flag2=0;
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(i=1;i<=n;i++)
	a[i]=read();
	m=read();
	if(n<=1000){
		for(i=1;i<=m;i++){
			t[i].id=read();
			if(t[i].id==1){
				t[i].pos=read();
				t[i].data=read();
				flag1=1;
			}
			else if(t[i].id==2)
				t[i].chen=read(),flag2=1;
			else{
				t[i].num=read();
				for(j=1;j<=t[i].num;j++)
					chi[i][j]=read();
			}
		}
		q=read();
		for(i=1;i<=q;i++){
			k=read();
			if(t[k].id==1)
				add(t[k].pos,t[k].data);
			else if(t[k].id==2)
				mel(t[k].chen);
			else
				work(k);
		}
		for(i=1;i<=n;i++)
		printf("%lld ",a[i]);
		return 0;
	}
/*	if(flag1==0){
		for(i=1;i<=q;i++){
			k=read();
			if(t[k].id==2)
				cc*=t[k].chen;
			else
				
		}
		return 0;
	}
	if(flag2==0){
		for(i=1;i<=n;i++){
		}
		return 0;
	}*/
}
