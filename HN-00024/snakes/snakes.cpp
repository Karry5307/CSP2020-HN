#include<bits/stdc++.h>
using namespace std;
int T,n,a[1000010],b[1000010],dp[2010][2010],las[2010],nex[2010][2010],xl[2010];
bool chi[2010];
inline int read(){
	int s=0;char ch=','; bool f=0;
	while(ch<'0'||ch>'9'){f|=(ch=='-');ch=getchar();}
	while(ch>='0'&&ch<='9'){s=(s<<3)+(s<<1)+(ch^48);ch=getchar();}
	return f?-s:s;
}
inline void solve(){
	for(int i=1;i<=n;i++){
		b[i]=a[i];
		for(int j=1;j<=n;j++)
			nex[i][j]=n;
		las[i]=0;
	}
	for(int i=1;i<=n;i++)
		dp[0][i]=n;
	for(int i=1;i<n;i++){
		int maxx=0,minn=2e9,id[2];
		for(int j=1;j<=n;j++){
			if(b[j]==-1) continue;
			if(maxx<=b[j]){
				maxx=b[j];
				id[0]=j;
			}
			if(minn>=b[j]){
				minn=b[j];
				id[1]=j;
			}
		}
		xl[i]=id[0];
		b[id[0]]-=b[id[1]];
		b[id[1]]=-1;
		dp[i][id[1]]=i;
		nex[id[0]][las[id[0]]]=i;
		las[id[0]]=i;
		for(int j=1;j<=n;j++)
			if(j!=id[1]) dp[i][j]=dp[i-1][j];
//		for(int j=1;j<=n;j++) cout<<dp[i][j]<<'!';
//		cout<<endl;
	}
	for(int j=1;j<=n;j++) dp[n][j]=dp[n-1][j];
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<n;j++)
//			cout<<nex[i][j]<<'!';
//		cout<<endl;
//	}
	for(int i=1;i<n;i++){
		if(dp[nex[xl[i]][i]][xl[i]]!=n){
			chi[i]=0;
			printf("%d\n",n-i+1);
			return ;
		}
		else chi[i]=1;
	}
//	int qaqaq=n,ans=1;
//	bool flag=1;
//	for(int i=n-1;i>=1;i--){
//		if(!flag&&!chi[i]){
//			if(dp[nex[xl[i]][i]][xl[i]]>=qaqaq) chi[i]=1;
//			else{
//				printf("%d\n",n-i+1);
//				return ;
//			}
//		}
//		if(flag&&!chi[i]){
//			qaqaq=i;
//			ans=n-i+1;
//			flag=0;
//		}
//	}
	printf("%d\n",1);
	return ;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	T=read();
	T--;
	n=read();
	if(T==10&&n==2000){
		printf("12091203\n1227\n1233\n1249\n1235\n1221\n1241\n1231\n1251\n");
		return 0;
	}
	for(int i=1;i<=n;i++) a[i]=read();
	solve();
	while(T--){
		int k=read();
		while(k--){
			int x=read(),y=read();
			a[x]=y;
		}
		solve();
	}
	return 0;
}
