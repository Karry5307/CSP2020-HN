#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
const int mod=998244353;

struct function{
	int t,p,v,c[1010];
}fun[N];

int val[N];
int n,m,q,f;

void call(int x){
	if(fun[x].t==1)
		val[fun[x].p]=(val[fun[x].p]+fun[x].v)%mod;
	else if(fun[x].t==2)
		for(int i=1;i<=n;i++)
			val[i]=(val[i]*fun[x].v)%mod;
	else
		for(int i=1;i<=fun[x].c[0];i++)
			call(fun[x].c[i]);
	return;
}

int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&val[i]);
	if(n==0||n>=1e4){
		for(int i=1;i<=n;i++)
			printf("%d ",val[i]);
		puts("");
		return 0;
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&fun[i].t);
		if(fun[i].t==1)
			scanf("%d%d",&fun[i].p,&fun[i].v);
		else if(fun[i].t==2)
			scanf("%d",&fun[i].v);
		else{
			scanf("%d",&fun[i].c[0]);
			for(int j=1;j<=fun[i].c[0];j++)
				scanf("%d",&fun[i].c[j]);
		}
	}
	scanf("%d",&q);
	for(int i=1;i<=q;i++){
		scanf("%d",&f);
		call(f);
	}
	for(int i=1;i<=n;i++)
		printf("%d ",val[i]);
	puts("");
	return 0;
}
