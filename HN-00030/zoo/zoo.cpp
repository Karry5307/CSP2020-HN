#include<bits/stdc++.h>
#define ll long long
const int N=1e6+10,M=70;
int n,m,c,k,t,vis[M];
ll a[N],ans=1;
using namespace std;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	while(m--){
		int p,q;
		scanf("%d%d",&p,&q);
		vis[p]=1;
	}
	sort(a+1,a+n+1);
	ll num=0;
	for(int i=0;i<k;i++){
		if(!num)
			num=1;
		else num*=2;
		if(!vis[i]){
			t++;
			continue;
		}	
		int note=1;
		for(int j=n;j>=1;j--){
			if(a[j]<num)
				break;
			if(a[j]&num){
				note=0;
				break;
			}
		}
		t+=note;
	}
//	cout<<t<<endl;
	while(t--)
		ans*=2;
	ans-=n;
	printf("%lld",ans);
	return 0;
}
