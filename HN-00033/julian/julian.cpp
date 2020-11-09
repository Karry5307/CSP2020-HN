#include <bits/stdc++.h>
#define int long long
using namespace std;
int mo[2][13]={0,31,28,31,30,31,30,31,31,30,31,30,31,0,31,29,31,30,31,30,31,31,30,31,30,31};
int R,d,m,y;
bool pd(int x){
	if(x%4==0){
		if(x%100==0&&x%400!=0)return 0;
		return 1;
	}
	return 0;
}
bool pd1(int x){
	if(x<0)return abs(x+1)%4==0;
	else return x%4==0;
}
void get(int &d,int &m,int &y,int fl){
/*	if(y>1582||(y==1582&&m>10)||(y==1582&&m==10&&d>4)){
		if(fl==1&&y%100==0&&y%400!=0)fl=0;
	}*/
	if(d>mo[fl][m]){
		m++;
		d=1;
	}
	if(m>12){
		m=1;
		y++;
	}
	if(y==0)y=1;
}
/*void get1(int &d,int &m,int &y,int fl){
	if(y>1582||(y==1582&&m>10)||(y==1582&&m==10&&d>4)){
		if(fl==1&&y%100
	}
	if(d==0){
		m--;
		d=mo[fl][m];
	}
	if(m==0){
		m=12;
		d=mo[fl][m];
		y--;
	}
	if(y==0)y--;
}*/
int Q;
signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int s1=1,s2=1,s3=-4713,tot=0;
/*	for(;;){
		s1++;
		get(s1,s2,s3,pd1(s3));tot++;
		if(s1==5&&s2==10&&s3==1582)break;
	}
	cout<<tot<<endl;*/
	cin>>Q;
	while(Q--){
		int x;scanf("%lld",&x);
		d=1;m=1;y=-4713;
			if(x<=2299160){
				int tmp=x/(365*3+366)*4;
				y+=tmp;
				if(y>=0)y++;
				x%=(365*3+366);
				for(int i=1;i<=x;i++)
					d++,get(d,m,y,pd1(y));
			}else{
				x-=2299160;
				d=4;m=10;y=1582;
				int tmp=0;
				for(;;){
					if(x==0)break;
					x--;
					d++;
					get(d,m,y,pd(y));
					if(pd(y)==1)break;
				}
//				cout<<d<<' '<<m<<' '<<y<<endl;
				tmp=x/(365*303+366*97)*400;
				x%=(365*303+366*97);
				y+=tmp;
//				cout<<"***** "<<y<<endl;
				int p2=x/(366*25+365*75);
				y+=p2*100;
				x%=(366*25+365*75);
//				cout<<"****** "<<y<<endl;
				for(int i=1;i<=x+10;i++)
					d++,get(d,m,y,pd(y));
			}
		if(y<0)printf("%lld %lld %lld BC\n",d,m,-y);
		else printf("%lld %lld %lld\n",d,m,y);
	}
	return 0;
}
