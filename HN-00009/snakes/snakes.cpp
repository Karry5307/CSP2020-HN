#include <bits/stdc++.h>
using namespace std;

const int N=1e6+10;

struct snake{
	int val,num;
}s[N];

int a[N];
int T,n,k,x,y;
int ans=0;

bool cmp(snake x,snake y){
	return x.val!=y.val?x.val>y.val:x.num>y.num;
}

int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&T);
	for(int t=1;t<=T;t++){
		if(t==1){
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
				scanf("%d",&a[i]);
		}
		else{
			scanf("%d",&k);
			for(int i=1;i<=k;i++){
				scanf("%d%d",&x,&y);
				a[x]=y;
			}
		}
		ans=n;
		for(int i=1;i<=n;i++){
			s[i].num=i;s[i].val=a[i];
		}
		sort(s+1,s+n+1,cmp);
		while(s[1].val>=s[2].val&&ans>0)
			s[1].val-=s[ans--].val;
		printf("%d\n",ans+1);
	}
	return 0;
}
		
