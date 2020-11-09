#include<bits/stdc++.h>
using namespace std;
int head[2000006],num,san;
bool flag[70],flag_[70],b[2000006];
map<int,int>ma;
struct lulu{
	int to;
	int ne;
}e[2000006];
void dfs_(int x){
int i;
	for(i=head[x];i;i=e[i].ne){
		flag[e[i].to]=1;
	}
}
void dfs(int x){
	int i;
	for(i=head[x];i;i=e[i].ne){
		if(!b[e[i].to]){
			dfs_(e[i].to);
			b[e[i].to]=1;
		}
	}
}
void lian(int from,int to){
	num++;
	e[num].to=to;
	e[num].ne=head[from];
	head[from]=num;
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k,i,j,p,q;
	long long t,sum=1;
	scanf("%d%d%d%d",&n,&m,&c,&k);
	san=k;
	for(i=1;i<=n;i++){
		scanf("%lld",&t);
		j=0;
		while(t){
			if(t&1)flag[j]=1;
			j++;
			t>>=1;
		}
	}
	for(i=1;i<=m;i++){
		scanf("%d%d",&p,&q);
		if(ma[q]==0)ma[q]=++san;
		flag_[p]=1;
		lian(p,ma[q]);
		lian(ma[q],p);
	}
	for(i=0;i<k;i++){
		if(flag[i]&&flag_[i]){
			dfs(i);
		}
	}
	for(i=0;i<k;i++){
		if(flag[i]||!flag_[i])sum*=2;
		//cout<<flag[i]<<" "<<flag_[i];
	}
	printf("%lld",sum-n);
	return 0;
}
