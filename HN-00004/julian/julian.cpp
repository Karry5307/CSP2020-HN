#include<bits/stdc++.h>
using namespace std;
int month[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int rumonth[20]={0,31,29,31,30,31,30,31,31,30,31,30,31};
long long py,pm,pd;
void rundeal(int r){
	int i;
	for(i=1;i<=12;i++){
		if(r<rumonth[i]){
			pm=i-1;
			pd=r;
			return;
		}
		r-=rumonth[i];
	}
	return;
}
void deal(int r){
	int i;
	for(i=1;i<=12;i++){
		if(r<month[i]){
			pm=i-1;
			pd=r;
			return;
		}
		r-=month[i];
	}
	return;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	long long gq=1721424,r,year=365,oy,om,od,gq_=577768;
	long long run=1461,runy;
	int Q,i;
	scanf("%d",&Q);
	for(i=1;i<=Q;i++){
		scanf("%lld",&r);
		if(r<gq){
			oy=4713,om=1,od=1;
			runy=r/run;
			py=runy*4;
			r%=run;
			if(r<=365*3){
				while(r>365)r-=365,py++;
				deal(r);
			}
			else {
				r-=365*3;py+=3;rundeal(r);
			}
			printf("%lld %lld %lld BC\n",od+pd,om+pm,oy-py);
		}
		else if(r>=gq){
			r-=gq;oy=1;om=1;od=1;
			if(r<gq_){
				runy=r/run;
				py=runy*4;
				r%=run;
				if(r<=365){
					rundeal(r);
				}
				else {
					r-=366;py++;
					while(r>365)r-=365,py++;
					deal(r);
				}
				printf("%lld %lld %lld\n",od+pd,om+pm,oy+py);
			}
		}
		
	}
}
