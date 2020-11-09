#include<bits/stdc++.h>
using namespace std;
#define FILE(x) freopen(#x".in","r",stdin);\
				freopen(#x".out","w",stdout)
int n,a[100005],k,x,y;
int main()
{
	FILE(snakes);
	int t,tt;
	cin>>t;
	tt=t;
	t++;
	while(t-->1)
	{
		if(t==tt)
		{
			cin>>n;
			for(int i=1;i<=n;i++)
				cin>>a[i];
		}
		else
		{
			cin>>k;
			for(int i=1;i<=k;i++)
			{
				cin>>x>>y;
				a[x]=y;
			}
		}
		if(a[n]-a[1]<a[n-1]) 
		{
			cout<<n<<endl;
			continue;
		}
		int qq=a[n],i=1,ans=n;
		while(qq-a[i]>a[n-1])
			ans--,i++,qq-=a[i];
		
		cout<<ans<<endl;
	}
	return 0;
}

