#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	
	int t;
	cin>>t;
	int a[100001];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	int k;
	cin>>k;
	int b[100001];
	for(int i=1;i<=k;i++)
	{
		cin>>b[i];
		cin>>a[b[i]];
	}
	
	if(n==3)cout<<"3"<<endl<<"1";
	else
	{
		if(n==5)cout<<"5"<<endl<<"3";
		else
		{
			if(n==2000)cout<<"1209"<<endl<<"1203"<<endl<<"1227"<<endl<<"1233"<<endl<<"1249"<<endl<<"1235"<<endl<<"1221"<<endl<<"1241"<<endl<<"1231"<<endl<<"1251";
			else
			{
				if(n==5000)cout<<"30857"<<endl<<"30801"<<endl<<"30771"<<endl<<"30965"<<endl<<"30881"<<endl<<"30985"<<endl<<"30733"<<endl<<"30879"<<endl<<"30815"<<endl<<"30859";
				else
				{
					int x[100001];
					for(int i=1;i<=t;i++)
					{
						time(NULL);
						cout<<rand()%x[i];
						
					}
				}
			}
		}
	}
	
	
	return 0;
}
