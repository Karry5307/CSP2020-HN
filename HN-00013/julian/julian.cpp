#include<bits/stdc++.h>
using namespace std;
#define FILE(x) freopen(#x".in","r",stdin);\
				freopen(#x".out","w",stdout)
#define int long long
int r;
int d,m,y;int nowmonthdays=30,nowyeardays;
bool isren,isjulian=0;
void ifisren()
{
	nowyeardays=365;
	if(isjulian)
	{
		if((y<0&&((-(y+1))%4==0))||(y>0&&y%4==0))
			isren=1,nowyeardays=366;
	}
	else if(((y>0)&&(y%400==0))||((y>0)&&(y%100!=0)&&(y%4==0)))
		isren=1,nowyeardays=366;
}
void ifisxiao()
{
	switch(m)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			nowmonthdays=31;
			break;
		case 2:
			if(isren)
				nowmonthdays=29;
			else nowmonthdays=28;
			break;
		default:
			nowmonthdays=30;
	}
}
void init()
{
	isren=0;
	ifisren();
	ifisxiao();
}
void changeyear()
{
	if(y==0) y=1;
	if(isren&&r>366)
	{
		r-=366;
		y++;
	}
	else if((!isren)&&r>365)
	{
		r-=365;
		y++;
	}
}
void changemonth()
{
	if(m>12) m-=12,y++;
	if(r>nowmonthdays)
	{
		r-=nowmonthdays;
		m++;
	}
}
void print()
{
	if(y>0) printf("%lld %lld %lld\n",r,m,y);
	else printf("%lld %lld %lld BC\n",r,m,-y);
}
int q;
signed main()
{
	FILE(julian);
	cin>>q;
	while(q--)
	{
		r=0;
		isren=isjulian=0;
		m=1,y=-4713;
		scanf("%lld",&r);
		if(r<=2299161)
			isjulian=1,r++;
		else 
		{
			m=10,y=1582;
			isjulian=0;
			r-=2299147;
			r+=r/2299161;
		}
		
		while(r>nowyeardays)
		{
			init();
			changeyear();
		}
		while(r>nowmonthdays)
		{
			init();
			changemonth();
		}
		if(r==0) m--,init(),r=nowmonthdays;
		print();
	}
	return 0;
}
