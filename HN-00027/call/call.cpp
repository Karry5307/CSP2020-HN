#include<bits/stdc++.h>
#define mod 998244353
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
int n,m,q;
int a[100001];
int f[100001];
int y[100001][2],e[100001],s[100001][101];
inline void w1(int x)
{
	a[y[x][0]]+=y[x][1];
	a[y[x][0]]%=mod;
}
inline void w2(int x)
{
	for(register int i=1;i<=n;++i)
	{
		a[i]*=e[x];
		a[i]%=mod;
	}
}
inline void w3(int x)
{
	for(register int i=1;i<=s[x][0];++i)
	{
		switch(f[s[x][i]])
		{
			case 1:
				{
					w1(s[x][i]);
					break;
				}
			case 2:
				{
					w2(s[x][i]);
					break;
				}
			case 3:
				{
					w3(s[x][i]);
					break;
				}
		}
	}
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(register int i=1;i<=n;++i)
	{
		a[i]=read();
	}
	m=read();
	for(register int i=1;i<=m;++i)
	{
		f[i]=read();
		switch(f[i])
		{
			case 1:
				{
					y[i][0]=read(),y[i][1]=read();
					break;
				}
			case 2:
				{
					e[i]=read();
					break;
				}
			case 3:
				{
					s[i][0]=read();
					for(register int j=1;j<=s[i][0];++j)
					{
						s[i][j]=read();
					}
					break;
				}
		}
	}
	q=read();
	for(register int i=1;i<=q;++i)
	{
		int x=read();
		switch(f[x])
		{
			case 1:
				{
					w1(x);
					break;
				}
			case 2:
				{
					w2(x);
					break;
				}
			case 3:
				{
					w3(x);
					break;
				}
		}
	}
	for(register int i=1;i<=n;++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
