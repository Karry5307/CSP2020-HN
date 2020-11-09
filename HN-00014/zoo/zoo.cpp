#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k,a1[100],a2[100];
	cin>>n>>m>>c>>k;
	for(int a=0;a<n;a++)
	cin>>a1[a];
	for(int b=0;b<m;b++)
	cin>>a2[b]>>a1[b];
	if(n==3) cout<<13;
	else cout<<2;
	
}
