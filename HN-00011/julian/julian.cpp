#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q;
	cin>>q;
	long long r[100001];
	int m[100001],d[100001],y[100001];
	for(int i=1;i<=q;i++)
	{
		cin>>r[i];
	}
	for(int i=1;i<=q;i++)
	{
		if(r[i]<=365)
		{
			if(r[i]>30)
			{
				if(r[i]-31>28)
				{
					if(r[i]-31-29>30)
					{
					    int x=r[i]-31-29;
					    d[i]=(int)(x%61);
					    if(d[i]>30)cout<<d[i]-31+1<<" "<<3+(int)(x/61)*2+1<<" "<<"4713"<<" "<<"BC"<<endl;
					    if(d[i]<=30)cout<<d[i]+1<<" "<<3+(int)(x/61)*2<<" "<<"4713"<<" "<<"BC"<<endl;
					}
					else
						cout<<r[i]-31-29+1<<" "<<"3"<<" "<<"4713"<<" "<<"BC"<<endl;
				}
				else
					cout<<r[i]-31+1<<" "<<"2"<<" "<<"4713"<<" "<<"BC"<<endl;
			}
			else
				cout<<r[i]+1<<" "<<"1"<<" "<<"4713"<<" "<<"BC"<<endl;
		}
	}
	return 0;
}
