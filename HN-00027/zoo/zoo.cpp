#include<bits/stdc++.h>
#define int long long
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
int n,m,c,k;
int a[1000001];
int o;
bool M[1000001];
int ans;
signed main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read(),m=read(),c=read(),k=read();
	for(register int i=1;i<=n;++i)
	{
		a[i]=read();
		o|=(a[i]);
		ans=(1<<k);
	}
	for(register int i=1;i<=m;++i)
	{
		int p=read(),q=read();
		M[p]=true;
	}
	for(register int s=0;s<=k-1;++s)
	{
		if(!(o&1))
		{
			if(M[s])
			{
				ans>>=1;
			}
		}
		o>>=1;
	}
	cout<<ans-n<<endl;
	return 0;
}
