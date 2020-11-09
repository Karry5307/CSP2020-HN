#include <bits/stdc++.h>
using namespace std;
const int maxn=22;
int n,K,m,c;
vector<int>vec[maxn];
int st,w[1<<maxn],bj[1<<maxn],a[maxn];
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&K);
	for(int i=1;i<=n;i++){
		int x;scanf("%d",&x);
		bj[x]=1;
		a[i]=x;
	}
	for(int i=1;i<=m;i++){
		int x,y;scanf("%d%d",&x,&y);
		vec[x].push_back(y);
	}
	for(int i=0;i<(1<<K);i++){
		for(int j=0;j<K;j++){
			if(i&(1<<j)){
				for(int k=0;k<vec[j].size();k++){
					int t=vec[j][k];
					w[i]|=(1<<t);
				} 
			}
		}
	}
	for(int i=1;i<=n;i++)st|=w[a[i]];
	int ans=0;
	for(int i=0;i<(1<<K);i++){
		if(bj[i]==1)continue;
		if((st&w[i])==w[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
