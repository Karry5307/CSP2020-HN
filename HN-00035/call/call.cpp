#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
int n;
int a[100005];
int m;
int p[100005];
int v[100005];
int c[100005];
vector<int > nbr[1000005];
int q;
void change(int tot)
{
	for(int k=0;k<nbr[tot].size();k++)
	{
		int uy=nbr[tot][k];
		if(p[uy]!=0)
		{
			a[p[uy]]+=v[uy];
		}
		else if(c[uy]!=0)
		{
			for(int j=1;j<=n;j++)
			{
				a[j]*=c[uy];
			}
		}
		else
		{
			change(uy);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		int tmp;
		cin>>tmp;
		if(tmp==1)
		{
			cin>>p[i]>>v[i];
		}
		if(tmp==2)
		{
			cin>>c[i];
		}
		if(tmp==3)
		{
			int tot;
			cin>>tot;
			for(int j=1;j<=tot;j++)
			{
				int fx;
				cin>>fx;
				nbr[i].push_back(fx);
			}
		}
	}
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		int fx;
		cin>>fx;
		if(p[fx]!=0)
		{
			a[p[fx]]+=v[fx];
		}
		else if(c[fx]!=0)
		{
			for(int j=1;j<=n;j++)
			{
				a[j]*=c[fx];
			}
		}
		else
		{
			change(fx);
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}

