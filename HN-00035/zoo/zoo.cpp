#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m,c,k;
int a[1000005];
int p[1000005];
int q[1000005];
bool vis[1000005];
int ans=0;
int cnt=0;
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>p[i]>>q[i];
		vis[p[i]]=1;
	}
	for(int i=1;i<=n;i++)
	{
		int tot=a[i];
		int cnt1=0;
		while(tot)
		{
			if(tot%2==1&&vis[cnt1])
			{
				vis[cnt1]=false;
			}
			tot/=2;
			cnt1++;
		}
	}
	for(int i=0;i<=k-1;i++)
	{
		if(!vis[i])
		{
			cnt++;
		}
	}
	cout<<(1<<cnt)-n;
	return 0;
}

