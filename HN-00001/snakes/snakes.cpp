#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int n,m,a[4],i,j,k,x,y,sum[4];
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			scanf("%d",&m);
			for(j=1;j<=m;j++)
			{
				scanf("%d",&a[j]);
			}
		}
		else
		{
			scanf("%d",&k);
			for(j=1;j<=k;j++)
			{
				scanf("%d%d",&x,&y);
				a[x]=y;
			}
			//printf("%d %d %d\n",a[1],a[2],a[3]);
		}
		if(a[1]-a[2]<a[3]&&a[2]-a[3]<=a[1]&&a[1]-a[3]<a[2]&&a[2]-a[1]<a[3]&&a[3]-a[2]<=a[1]&&a[3]-a[1]<=a[2])
		{
			sum[i]=3;
		}
		else
		{
			sum[i]=1;
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",sum[i]);
	}
	return 0;
}
