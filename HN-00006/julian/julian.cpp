#include <bits/stdc++.h>
using namespace std;
template <typename T> inline void read(T &a){
	T w = 1; a=0;
	char ch=getchar();
	for(;!isdigit(ch);ch=getchar()) if(ch == '-') w=-1;
	for(;isdigit(ch);ch=getchar()) a=(a<<3)+(a<<1)+(ch^48);
	a*=w;
}
#define int long long
int a[20] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int b[20] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
//31 28 31 30 31 30 31 31 30 31 30 31
inline void workyear1(long long x,long long year,long long pos){
	if(x <= a[1]-1) printf("%lld 1 %lld ",1+x,year);
	else if(x <= a[2]-1) printf("%lld 2 %lld ",x-a[1]+1,year);
	else if(x <= a[3]-1) printf("%lld 3 %lld ",x-a[2]+1,year);
	else if(x <= a[4]-1) printf("%lld 4 %lld ",x-a[3]+1,year);
	else if(x <= a[5]-1) printf("%lld 5 %lld ",x-a[4]+1,year);
	else if(x <= a[6]-1) printf("%lld 6 %lld ",x-a[5]+1,year);
	else if(x <= a[7]-1) printf("%lld 7 %lld ",x-a[6]+1,year);
	else if(x <= a[8]-1) printf("%lld 8 %lld ",x-a[7]+1,year);
	else if(x <= a[9]-1) printf("%lld 9 %lld ",x-a[8]+1,year);
	else if(x <= a[10]-1) printf("%lld 10 %lld ",x-a[9]+1,year);
	else if(x <= a[11]-1) printf("%lld 11 %lld ",x-a[10]+1,year);
	else if(x <= a[12]-1) printf("%lld 12 %lld ",x-a[11]+1,year);
	else printf("1 1 %lld ",year+pos);
}//ping
inline void workyear2(long long x,long long year,long long pos){
	if(x <= b[1]-1) printf("%lld 1 %lld ",1+x,year);
	else if(x <= b[2]-1) printf("%lld 2 %lld ",x-b[1]+1,year);
	else if(x <= b[3]-1) printf("%lld 3 %lld ",x-b[2]+1,year);
	else if(x <= b[4]-1) printf("%lld 4 %lld ",x-b[3]+1,year);
	else if(x <= b[5]-1) printf("%lld 5 %lld ",x-b[4]+1,year);
	else if(x <= b[6]-1) printf("%lld 6 %lld ",x-b[5]+1,year);
	else if(x <= b[7]-1) printf("%lld 7 %lld ",x-b[6]+1,year);
	else if(x <= b[8]-1) printf("%lld 8 %lld ",x-b[7]+1,year);
	else if(x <= b[9]-1) printf("%lld 9 %lld ",x-b[8]+1,year);
	else if(x <= b[10]-1) printf("%lld 10 %lld ",x-b[9]+1,year);
	else if(x <= b[11]-1) printf("%lld 11 %lld ",x-b[10]+1,year);
	else if(x <= b[12]-1) printf("%lld 12 %lld ",x-b[11]+1,year);
	else printf("1 1 %lld ",year+pos);
}//ping
void workruler(long long x,long long pos){
	if(x <= 365ll){
		workyear1(x,4713ll,pos);
		return ;
	}
	x -= 365ll;
	long long xx = x / (1461ll);
	long long year = 4712ll; year -= 4ll * xx;
	x -= (1461ll)*xx;
	if(x <= 366ll){
		workyear2(x,year,pos);
		return ;
	}
	x-= 366ll; year--;
	while(1){
		if(x <= 365ll){
			workyear1(x,year,pos);
			return ;
		}
		x -= 365ll; year--;
	}
}
void workruler1(long long x){
	if(x <= 365ll){
		workyear1(x,1,1);
		return ;
	}
	x -= 365ll;
	long long xx = x / (1461ll);
	long long year = 2; year += 4ll * xx;
	x -= (1461ll)*xx;
	if(x <= 366ll){
		workyear2(x,year,1);
		return ;
	}
	x-= 366ll; year++;
	while(1){
		if(x <= 365ll){
			workyear1(x,year,1);
			return ;
		}
		x -= 365ll; year++;
	}
}
//36524 100year
bool isrun(int x){
	if(!(x % 400) || ((x%4==0) && !(x%100))) return 1; return 0;
}
int ANs;
void work(long long x){
	long long xx = (x) / (36524ll);
	long long up = ((xx)/(4ll));
	long long year = 1583; year += 100ll * xx;
	x -= (36524ll)*xx;
	x -= up;
	int yy =isrun(year+1) ?366:365;
	while(1){
		if(yy >= x){
			(yy-= (isrun(year+1) ? 366:365));
			x-=yy;
			if(isrun(year)){workyear2(x,year,1);}
			else{workyear1(x,year,1);}
			return ;
		}
		year++;
		yy+=365;
		if(isrun(year+1)) yy++;
	}
}
signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q; read(q);
	for(int i = 2; i <= 12; ++i) a[i] += a[i-1],b[i]+=b[i-1];
	while(q--){
		long long dd;
		long long x; read(x); dd=x;
		if(x < (long long){1721423}){
			workruler(x,-1);puts("BC");continue;
		}
		else {
			x -= 1721423ll;
			if(x <= 577737ll){
				workruler1(x);	puts("");continue;
			}
			x+=10;
			if(dd < 2299239ll){
				workruler1(x); continue;
			}
			dd -= 2299239ll;
//			dd+=0;
			work(dd);
		}
	}
	
}
