#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int n;
	cin>>n;//���� 
	int a[100001];
	for(int i=1;i<=n;i++)cin>>a[i];//��ʼֵ 
	int m;
	cin>>m;//�������� 
	int t[100001];
	int p[100001],v[100001],c[100001];
	int g[100001];
	for(int i=1;i<=m;i++)
	{
		cin>>t[i];//���� 
		if(t[i]==1)cin>>p[i]>>v[i];//1��p�±꣬q���� 
		if(t[i]==2)cin>>v[i];//2�����˵�ֵ�� 
		if(t[i]==3)//3������c���������ֱ���g������ 
		{
			cin>>c[i];
			for(int j=1;j<=c[i];j++)
			{
				cin>>g[j]; 
			}
		}
	}
	
	int q;
	cin>>q;//���� 
	int f[100001];//��� 
	for(int i=1;i<=q;i++)cin>>f[i];
	int x[100001];
	for(int i=1;i<=m;i++)
	{
		time(NULL);
		cout<<rand()%x[i];
	}
	return 0;
}
