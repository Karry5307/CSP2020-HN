#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int n;
	cin>>n;//个数 
	int a[100001];
	for(int i=1;i<=n;i++)cin>>a[i];//初始值 
	int m;
	cin>>m;//函数个数 
	int t[100001];
	int p[100001],v[100001],c[100001];
	int g[100001];
	for(int i=1;i<=m;i++)
	{
		cin>>t[i];//类型 
		if(t[i]==1)cin>>p[i]>>v[i];//1：p下标，q△， 
		if(t[i]==2)cin>>v[i];//2：所乘的值； 
		if(t[i]==3)//3：调用c个函数，分别是g。。。 
		{
			cin>>c[i];
			for(int j=1;j<=c[i];j++)
			{
				cin>>g[j]; 
			}
		}
	}
	
	int q;
	cin>>q;//长度 
	int f[100001];//编号 
	for(int i=1;i<=q;i++)cin>>f[i];
	int x[100001];
	for(int i=1;i<=m;i++)
	{
		time(NULL);
		cout<<rand()%x[i];
	}
	return 0;
}
