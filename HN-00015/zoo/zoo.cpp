#include<bits/stdc++.h>
using namespace std;
int n,m,c,k,a[1000005],p[1000005],q[1000005],b[70],num[70],pp[1000005],ans,x,y,z;
long long sum,s[70];
vector<int>l,ll;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("xoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<=m;i++)
	{
	scanf("%d%d",&p[i],&q[i]);	
	b[p[i]]=1;
	}
	sum=1;
	for(int i=1;i<=k;i++)
	{
	sum*=2;
	s[i]=sum/2;
	}
	for(int i=0;i<=k;i++)
	{
		if(b[k]==1)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[j]&s[i+1]==s[i+1])
				b[i]=2;
			}
		}
	}
	for(int i=0;i<=k;i++)
	{
		if(b[i]==1)
		for(int j=1;j<=sum;j++)
		{
			if((j&s[i+1]==s[i+1])&&(pp[j]==0))
			{
			ans++;
			pp[j]=1;
			}
		}
	}
	ans++;
	cout<<ans;
	return 0;
}
