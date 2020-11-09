#include<bits/stdc++.h>
using namespace std;
#define N 100010
#define mod 998244353
int n,m,val[N],Q,f[N],flag1=1,flag2=1,cnt[N],root,sum=1;
int gi(){
	int w=0,f=1;char ch;
	while(!isdigit(ch)){f=ch=='-'?-1:1;ch=getchar();}
	while(isdigit(ch)){w=(w<<1)+(w<<3)+ch-48;ch=getchar();}
	return w*f;
}
struct node{
	int p,v,op,ti;
	vector<int>q;
}a[N];
//struct SEGTREE{
//	int val[N<<2];
//	void down(int x,int l,int r){
//		val[ls]+=laz
//	}
//	void add(int x,int l,int r,int p,int v){
//		if(l==r){
///			val[x]+=v;
//			return;
//		}
//		int mid=(l+r)>>1;
//		down(x,l,r);
//	}
//}
namespace subtask1{
	void dfs(int x){
		if(a[x].op==1||a[x].op==2){
//			if(a[x].op==2)sum=(sum*a[x].v)%mod;
//			else{
//				val[a[x].p]=(val[a[x].p]+a[x].v)%mod;
//			}
			return;
		}
		for(int i=0;i<a[x].q.size();i++){
			a[a[x].q[i]].ti+=a[x].ti;
			dfs(a[x].q[i]);
		}

	}
	void work(){
		Q=gi();
		for(int i=1;i<=Q;i++){
			int x=gi();
			a[i].ti++;
		}
		dfs(root);
		for(int i=1;i<=m;i++){
			if(a[i].op==2)sum=((sum*a[i].v)%mod*a[i].ti)%mod;
			else{
				val[a[i].p]=(val[a[i].p]+(a[i].v*a[i].ti)%mod)%mod;
			}
		}
		for(int i=1;i<=n;i++){
			val[i]=(val[i]*sum)%mod;
			cout<<val[i]<<" ";
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=gi();
	for(int i=1;i<=n;i++)val[i]=gi();
	m=gi();
	for(int i=1;i<=m;i++){
		int op=gi();
		if(op==1){
			flag1=0;
			a[i].op=1;a[i].p=gi();a[i].v=gi();
		}
		else if(op==2){
			flag2=0;
			a[i].op=2;a[i].v=gi();
		}
		else{
			a[i].op=3;
			int c=gi();
			for(int j=1;j<=c;j++){
				int x=gi();cnt[x]=1;
				a[i].q.push_back(x);
			}
		}
	}
	for(int i=1;i<=m;i++)if(cnt[i]==0)root=i;
	if(flag1==1||flag2==1)subtask1::work();
	return 0;
}
