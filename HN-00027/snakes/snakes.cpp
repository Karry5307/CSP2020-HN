#include<bits/stdc++.h>
using namespace std;
inline int read()
{
	char c=getchar();
	int f=0;
	while(!isdigit(c))
	{
		f|=(c=='-');
		c=getchar();
	}
	int x=0;
	while(isdigit(c))
	{
		x=(x<<3)+(x<<1)+(c^48);
		c=getchar();
	}
	return f?-x:x;
}
int T;
int n;
int a[1000001];
int v[1000001];
inline void work()
{
	for(register int i=1;i<=n;++i)
	{
		v[i]=a[i];
	}
	int s=0;
	while(s<n)
	{
		if(v[n]-v[s+1]<v[s+2])
		{
			break;
		}
		else
		{
			v[s+1]=v[n]-v[s+1];
			v[n]=0;
			++s;
			sort(v+1,v+n+1);
		}
	}
	if(s==n-2)
	{
		++s;
	}
	cout<<n-s<<endl;
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	T=read();
	n=read();
	for(register int i=1;i<=n;++i)
	{
		a[i]=read();
	}
	work();
	for(register int i=1;i<=T-1;++i)
	{
		int k=read();
		for(register int j=1;j<=k;++j)
		{
			int x=read(),y=read();
			a[x]=y;
		}
		work();
	}
	return 0;
}
