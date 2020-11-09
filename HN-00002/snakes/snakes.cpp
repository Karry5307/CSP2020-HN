#include<bits/stdc++.h>
using namespace std;
#define N 1000005
int t,n;
int a[N],b[N],c[N],flag[N];
int x,y;
inline void solve(){
	int lun=1,tail=n,where=0,tmp,minn=997895623;
	while(lun<=n){
		while((c[n]-c[n-1]>=c[lun]||(n-lun+1)<=2)&&!flag[lun])
			c[n]-=c[lun],++lun;
		if(flag[lun]&&(c[n]-c[n-1]>=c[lun]||(n-lun+1)<=2)){
			if((n-lun+1)==2)
				printf("%d\n",n-min(flag[lun],minn)+1);
			else
				printf("%d\n",n-min(flag[lun],minn+1)+1);
			return;
		}
		if(flag[lun])
			minn=min(minn,flag[lun]);
		c[n]-=c[lun],++lun;
		where=n;
		for(;where>lun;--where)
			if(c[n]>=c[where-1])
				break;
		tmp=c[n];
		for(register int i=n;i>where;--i)
			c[i]=c[i-1],flag[i]=flag[i-1];
		c[where]=tmp,flag[where]=lun-1;
	}
	printf("1\n");
	return;
}
signed main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&t);
	--t;
	scanf("%d",&n);
	for(register int i=1;i<=n;++i)
		scanf("%d",&a[i]),c[i]=a[i];
	solve();
	while(t--){
		for(register int i=1;i<=n;++i)
			flag[i]=0;
		for(register int i=1;i<=n;++i)
			c[i]=a[i];
		scanf("%d",&n);
		for(register int i=1;i<=n;++i){
			scanf("%d%d",&x,&y);
			a[x]=c[x]=y;
		}
		solve();
	}
	return 0;
}

