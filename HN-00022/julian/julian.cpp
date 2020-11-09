#include <bits/stdc++.h>
using namespace std;
template<typename tp>inline void r(tp &n){
	n=0;char c=getchar();int f=1;
	while(!isdigit(c)&&c!='-') c=getchar();
	if(c=='-') c=getchar(),f=-1;
	while( isdigit(c)) n=n*10+c-48,c=getchar();
	n*=f;
}
template<typename tp>inline void w(tp  n){
	if(n<0) n=-n,putchar('-');
	if(n/10) w(n/10);
	putchar(n%10+48);
}
const int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
struct Date{
	int y,m,d;
	Date(int y=-4713,int m=1,int d=1):
		y(y),m(m),d(d) {}
	void Print(){
		printf("%d %d %d",d,m,abs(y));
		if(y<0) puts(" BC");
		else puts("");
	}
};
bool Is(int y){
	if(y>0) 
		if(y<=1582) return y%4==0;
		else return y%400==0||(y%4==0&&y%100!=0);
	else 
		return abs(y+1)%4==0;
}
void solve(long long x){
	Date s;
	if(x>=2999409)
		s.y=3500,s.m=1,s.d=1,x-=2999409;
	else if(x>=2299161){
		s.y=1582,s.m=10,s.d=15,x-=2299161;
		if(x>=78) x-=78,++s.y,s.d=1,s.m=1;
		else{
			while(true){
				int day=month[s.m];
				if(Is(s.y)&&s.m==2) day=29;
				if(s.y==1582&&s.m==10) day=21; 
				if(x<day) break;
				x-=day;++s.m;
			}
			s.d+=x;
			if(s.y==1582&&s.m==10&&s.d>=5) 
				s.d+=10;
			s.Print();
			return;
		}  
	}
	else if(x>=1721424)
		s.y=1,s.d=1,s.m=1,x-=1721424,s.y+=(x/1461)*4,x%=1461;
	else
		s.y+=(x/1461)*4,x%=1461;
	
	while(true){
		if(s.y==0) {++s.y;continue;}
		int day=(Is(s.y)?366:365)-(s.y==1582?10:0);
		if(x>=day) x-=day,++s.y;
		else break;
	}
	if(x==0) {s.Print();return;}
	while(true){
		int day=month[s.m];
		if(Is(s.y)&&s.m==2) day=29;
		if(s.y==1582&&s.m==10) day=21; 
		if(x<day) break;
		x-=day;++s.m; 
	}
	s.d+=x;
	if(s.y==1582&&s.m==10&&s.d>=5) 
		s.d+=10;
	s.Print();
}
int main(){
	
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	
	int Q;r(Q);
	long long x;
	while(Q--)
		r(x),solve(x);
	return 0;
}
