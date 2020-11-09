#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n,m,q,c[N],t[N],add[N];
long long mul=1,a[N];
vector<int>b[N];
void change(int x){
	if(t[x]==1){
		add[b[x][0]]+=b[x][1];
	}
	if(t[x]==2){
		mul*=b[x][0];
		for(int i=1;i<=n;i++)
			add[i]*=b[x][0];
	}
	if(t[x]==3){
		for(int i=0;i<c[x];i++){
			change(b[x][i]);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&t[i]);
		if(t[i]==1){
			int x,y;
			scanf("%d%d",&x,&y);
			b[i].push_back(x);
			b[i].push_back(y);
		}
		if(t[i]==2){
			int x;
			scanf("%d",&x);
			b[i].push_back(x);
		}
		if(t[i]==3){
			scanf("%d",&c[i]);
			for(int j=1;j<=c[i];j++){
				int x;
				scanf("%d",&x);
				b[i].push_back(x);
			}
		}
	}
	scanf("%d",&q);
	while(q--){
		int x;
		scanf("%d",&x);
		change(x);
	}
	for(int i=1;i<=n;i++){
		long long x=a[i]*mul+add[i];
		printf("%lld ",x);
	}
	return 0;
}
