#include <bits/stdc++.h>
using namespace std;

int Mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long long day,mon=1,year=-4713;
int q;

inline bool jr(){
	return year<=1582&&(year%4==0);
}

inline bool gr(){
	return year>1582&&((year%400==0)||((year%4==0)&&(year%100!=0)));
}

int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	while (q--){
		scanf("%lld",&day);
		mon=1;year=-4713;
		long long y=day/365,d=day%365;
		if (y/4<d){
			day=d-y/4;
			year+=y;
		}
		else
			for(long long i=1;i<=y;i++)
				if((y-i)/4<=d+i*365){
					day=d+i*365-(y-i)/4;
					year+=(y-i);
					break;
				}
		if (year>=0)
			year++;
		if (year>1582){
			day+=(year/100-582/100)-(year/400-1582/400);
			while(day>365)
				if (gr()&&day>366){
					day-=366;
					year++;
				}
				else if(gr())
					break;
				else if (day>365){
					day-=365;
					year++;
				}
		}
		while(day>Mon[mon]){
			if (mon==2&&(jr()||gr()))
				if (day>29){
					day-=29;
					mon++;
				}
				else
					break;
			else{
				day-=Mon[mon];
				mon++;
			}
			if(mon>12){
				mon-=12;
				year++;
			}
		}
		if (year==-4713&&mon==1)
			day++;
		if (year>0)
			printf("%lld %lld %lld\n",day,mon,year);
		else
			printf("%lld %lld %lld BC\n",day,mon,-year);
	}
	return 0;
}
