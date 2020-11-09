#include<bits/stdc++.h>
using namespace std;
#define FILE(x) freopen(#x".in","r",stdin);\
				freopen(#x".out","w",stdout)
int n,m,c,k,a[100],p[100],q[100];
bool cl[100],in[100];
void buildclqd(int x)
{
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(x&(1<<p[i]))	cl[q[i]]=1;
}
bool check(int nn)
{
	if(in[nn]) return 0;
	for(int i=1;i<=m;i++)
	{
		bool x=nn&(1<<p[i]);
		if(x==1&&(!cl[q[i]]))
			return 0;
	} 
}
int sum=0;
int main()
{
	FILE(zoo);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i],in[a[i]]=1;
	for(int i=1;i<=m;i++)
		cin>>p[i]>>q[i];
	for(int i=1;i<=n;i++)
		buildclqd(a[i]);
	for(int i=0;i<=pow(2,k)-1;i++)
		if(check(i)) sum++;
	cout<<sum;
	return 0;
}

