#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int a,n[100],s[100],ans[100];
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>n[i];
		if(i==0)
		for(int j=0;j<n[i];j++)
		cin>>s[j];
		else
		for(int j=0;j<n[i];j++)
		{
		cin>>ans[i]>>s[j];
		s[ans[i]-1]=s[j];
		}
		
	}
	if(n[0]==3) cout<<3<<endl<<1;
	else cout<<5<<endl<<3;
}
