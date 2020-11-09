#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
struct S{
	int l,num;
}b[N];
int T,n,k,a[N];
int cmp(S x,S y){
	if(x.l==y.l)
		return x.num<y.num;
	return x.l<y.l;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&T);
	int note=1;
	while(T--){
		if(note){
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
				scanf("%d",&a[i]);
			note=0;
		}
		else{
			scanf("%d",&k);
			for(int i=1;i<=k;i++){
//				cout<<i<<endl;
				int x,y;
				scanf("%d%d",&x,&y);
//				cout<<x<<" "<<y<<endl;
				a[x]=y;
			}	
		}
		for(int i=1;i<=n;i++)
			b[i].l=a[i],b[i].num=i;
		sort(b+1,b+n+1,cmp);
		int l=1,cnt=n;
		while(l<n){
			if(b[n].l-b[l].l>b[n-1].l || b[n].l-b[l].l==b[n-1].l && b[n].num>b[n-1].num){
				b[l].l=0;
				cnt--;
			}
			else break;
			l++;
		}
		printf("%d\n",cnt);
		
	}
	
	return 0;
}
