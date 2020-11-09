#include<bits/stdc++.h>
using namespace std;
#define int long long
int q,a[20]={29,31,28,31,30,31,30,31,31,30,31,30,31},Y,M,D;
int gi(){
	int w=0,f=1;char ch;
	while(!isdigit(ch)){f=ch=='-'?-1:1;ch=getchar();}
	while(isdigit(ch)){w=(w<<1)+(w<<3)+ch-48;ch=getchar();}
	return w*f;
}
bool check(int x){
	if(x%400==0)return 1;
	if(x%4==0&&x%100!=0)return 1;
	return 0;
}
void query(int x,int ty){
	int sum=x,month=0;
	for(int i=1;i<=12;i++){
		int tmp;
		if(i==2&&ty)tmp=a[0];
		else tmp=a[i];
		if(sum<tmp)break;
		else sum-=tmp;
		month=i;
	}
	M=month;D=sum;
}
signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	q=gi();
	for(int i=1;i<=q;i++){
		int x=gi(),prex=x;
		if(x<=2298883){
			int a=x/1461;prex-=a;
		}
		else{
			int tmpx=x-2298883;
			int a=tmpx/1461;
			prex-=a;prex-=1573;
		}
		int year=prex/365;//1573
		if(year<=4712){
			int tmp=year==0?0:(year-1)/4+1;
			x-=tmp*366;
			x-=(year-tmp)*365;
			while(x<0){
				if((year-1)%4==0)x+=366;
				else x+=365;
				year--;
			}
			Y=4713-year;
			query(x,year%4==0?1:0);
			cout<<D+1<<" "<<M+1<<" "<<Y<<" BC\n";
		}
		else{
			int preyear=year;
			year-=4712;
			if(year<=1581){
				int tmp=(preyear-1)/4+1;
				x-=tmp*366;
				x-=(preyear-tmp)*365;
				while(x<0){
					if((year-1)%4==0)x+=366;
					else x+=365;
					year--;
				}
//				cout<<x<<"\n";
				Y=year;
				query(x,check(year));
				cout<<D+1<<" "<<M+1<<" "<<Y<<"\n";
			}
			else if(year==1582){
				x-=2298883;x-=(year)/4;
				if(x<=277){
					Y=year;
					query(x,0);
					cout<<D+1<<" "<<M+1<<" "<<Y<<"\n";
				}
				else{
					x+=10;
					Y=year;
					query(x,0);
					cout<<D+1<<" "<<M+1<<" "<<Y<<"\n";
				}
			}
			else{
				x-=2298883;
				int run=(year)/4;
				run-=year/100;
				run+=year/400;
				x-=run*366;x-=(year-run)*365;
				x+=10;
				Y=year;
				query(x,check(year));
				cout<<D+1<<" "<<M+1<<" "<<Y<<"\n";
			}
		}
	}
	return 0;
}
