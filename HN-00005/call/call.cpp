#include<iostream>
#include<cstdio>
using namespace std;
int a[10001],T[10001],p[10001],v[10001];
int g[10001],f[10001],V[10001],c[10001];
/* a[]���ݳ�ʼֵ��T[],p[]ִ�мӷ���Ԫ���±�,v[]���ӵ�ֵ,
f[]��i��ִ�к����ı��,
*/
T1 (int a,int p,int v)
{
	cin>>p>>v;
	a=a+v;
}
T2 (int T,int V,int n){
	if(T==2)
	  {
		cin>>V;
		int num=1;
		for(int i=1;i<=n;i++)
		{
			num*=a[i];
		}
		for(int i=1;i<=n;i++)
		{
			a[i]=V/(num/a[i]);
		}
	  }
}
int main()
{
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];// �±�Ϊi�����ݵĳ�ʼֵΪa[i]
	}
	cin>>m;
	for(int j=4;j<=m+3;j++)
	{
	cin>>T[j];
	if(T[j]==1)
	  { 
		T1(a[p[j]],p[j],v[j]);
	  }
	if(T[j]==2)
	  {
		T2(T[j],V[j],n);
	  }
	if(T[j]==3)
	  {
	  	cin>>c[j];
	  	for(int i=2;i<=c[j];i++)
	  	  {
	  		cin>>g[i];
	  		if (g[i]==1) T1(a[p[j]],p[j],v[j]);
	  		if (g[i]==2) T2(T[j],V[j],n);
		  }
	  }
	}
	cout<<endl;
	int Q;cin>>Q;//����ĺ����������г��� 
	for(int i=1;i<=Q;i++)
	{
		cin>>f[i];//��i��ִ�еĺ������ 
	}
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	return 0;
}
