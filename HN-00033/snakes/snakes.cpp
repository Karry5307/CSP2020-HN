#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2050;
int n,T,a[maxn];
signed main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>T;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(a[3]>a[1]+a[2]){
		cout<<1<<endl;
	}else cout<<3<<endl;
	T--;
	while(T--){
		int k,x,y;
		cin>>k;
		for(int i=1;i<=k;i++){
			cin>>x>>y;
			a[x]=y;
		}
		if(a[3]>a[1]+a[2])cout<<1<<endl;
		else cout<<3<<endl;
	}
	return 0;
}
