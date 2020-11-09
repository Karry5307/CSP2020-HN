#include<bits/stdc++.h>
#define ll long long
using namespace std;
inline ll read(){
	ll x=0;char c=getchar();
	while(c<'0' || c>'9') c=getchar();
	while(c>='0' && c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
	return x;
}
inline void write(ll x){
	if(x<0) x=-x,putchar('-');
	if(x>9) write(x/10);
	putchar(x%10^48);
}

ll s,y,m,d;
ll mm[2][13]={{-1,31,28,31,30,31,30,31,31,30,31,30,31},{-1,31,29,31,30,31,30,31,31,30,31,30,31}};

inline void get_date(){
	for(register ll i=1;i<=12;++i){
		if(s<=mm[y%4==0?1:0][i]){m=i,d=s;return;}
		else{
			s-=mm[y%4==0?1:0][i];
			if(s==0){m=i,d=mm[y%4==0?1:0][i];return;}
		}
	}
}

inline int ck(){
	if(y%400==0) return 0;
	if(y%4==0) return 1;
	return 0;
}

inline void date(){
	for(register ll i=1;i<=12;++i){
		if(s<=mm[ck()][i]){m=i,d=s;return;}
		else{
			s-=mm[ck()][i];
			if(s==0){m=i,d=mm[ck()][i];return;}
		}
	}
}

inline void solve(){
	ll a1;
	if(s<=2299161){
		a1=s/1461;
		s%=1461,y+=a1*4;
		if(s>=366) ++y,s-=366;
		else{get_date();return;}
		while(s>=(y%4==0?366:365)) s-=(y%4==0?366:365),++y;
		if(s==0){m=12,d=31,--y;return;}
		get_date();return;
	}
	else{
		s-=2299161;
		y=1582,m=10,d=14;
		if(s<=17){d+=s;return;}
		else m=11,d=1,s-=17;
		if(s<=30){d=s;return;}
		else m=12,s-=30;
		if(s<=31){d=s;return;}
		else y=1583,m=1,d=1,s-=31;
		if(s<=2305448){
			a1=s/1461;
			s%=1461,y+=a1*4;
			while(s>=(y%4==0?366:365)) s-=(y%4==0?366:365),++y;
			if(s==0){m=12,d=31,--y;return;}
			date();return;
		}
		s-=2305448,y=1600,m=1,d=1;
		a1=s/146099;
		s%=146099,y+=a1*400;
		a1=s/1461;
		s%=1461,y+=a1*4;
		while(s>=(ck()?366:365)) s-=(ck()?366:365),++y;
		if(s==0){m=12,d=31,--y;return;}
		date();return;
	}
}

signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	long long T=read();
	while(T--){
		s=read()+1;
		y=-4712,m=1,d=1;
		solve();
		if(y<1) --y;
		write(d),putchar(' '),write(m),putchar(' ');
		if(y<0) write(-y),puts(" BC");
		else write(y),putchar('\n');
	}
	return 0;
}
