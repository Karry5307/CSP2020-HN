#include<bits/stdc++.h>
using namespace std;
int Day[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int T,a;
int year=-4713,month=1,day=1;
void shuchu()
{
	printf("%d %d ",day,month);
	if(year<0)
	{
		printf("%d BC",-year);
	}
	else
	{
		printf("%d",year);
	}
	printf("\n");
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&T);
	while(T--)
	{
		year=-4713,month=1,day=1;
		scanf("%d",&a);
		day+=a%365;
		while(day>Day[month])
		{
			day-=Day[month];
			month++;
		}
		year+=a/365;
		if(year>=0)
		{
			year++;
		}
		int num=0;
		if(year<=1582)
		{
			if(year<0)
			{
				num+=(year+4713+4)/4;
				if(-year%4==1&&month<3)
				{
					num--;
				}
			}
			else
			{
				num=1179+year/4;
				if(year%4==0&&month<3)
				{
					num--;
				}
			}
		}
		else
		{
			num=1179+393;
			num=num+year/4+year/400-year/100-381;
		}
		day-=num;
		while(day<0)
		{
			day+=Day[month];
			month--;
			if(month==0)
			{
				month=12;
				year--;
			}
			if(year==0)
			{
				year--;
			}
			if(month==2)
			{
				if(year<0)
				{
					if(-year%4==1)
					{
						day++;
					}
				}
				else if(year<=1582)
				{
					if(year%4==0)
					{
						day++;
					}
				}
				else
				{
					if((year%4==0&&year%100!=0)||year%400==0)
					{
						day++;
					}
				}
			}
			if(day==0)
			{
				day=1;
			}
		}
		shuchu();
	}
	return 0;
}

