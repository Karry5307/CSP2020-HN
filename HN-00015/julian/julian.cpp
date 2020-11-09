#include<bits/stdc++.h>
using namespace std;
int q,r[100005],y,m,d,x,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},b[13],b2[13],s,la;
int const year=4713,z=1461;
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	for(int i=1;i<=12;i++)
	{
	b[i]=b[i-1]+a[i];
	b2[i]=b2[i-1]+a[i];
	if(i==2)
	b2[2]++;	
	}
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	scanf("%d",&r[i]);
	for(int i=1;i<=q;i++)
	{
		x=r[i];
		y=x/z;
		d=x-y*z+1;
		y=y*4-year;
		if(y>=0)
		{
			y++;
			if(y>1600)
			{
				y=y-1600;
				s=y/100-y/400;
				la=s;
				d=d+s;
				y=y+1600;
			}
		}
		if(y>1582||(y==1582&&d>276))
		d=d+10;
		s=d/z;
		y=y+s*4;
		d=d-s*z;
		if(y>1600)
			{
				y=y-1600;
				s=y/100-y/400;
				d=d+s-la;
				y=y+1600;
			}
		if(d>366)
		{
		d=d-366;
		y++;
		s=d/365;
		y=y+s;
		d=d-s*365;
		for(int i=1;i<=12;i++)
		{
			if(d<=b[i])
			{
			m=i;
			d=d-b[i-1];
			break;	
			}
		}
		}
		else
		{
			for(int i=1;i<=12;i++)
			{
			if(d<=b2[i])
			{
			m=i;
			d=d-b2[i-1];
			break;	
			}
			}
		}
		if(y<0)
		cout<<d<<" "<<m<<" "<<-y<<" "<<"BC"<<endl;
		if(y>0)
		cout<<d<<" "<<m<<" "<<y<<" "<<endl;
	}
	return 0;
}
