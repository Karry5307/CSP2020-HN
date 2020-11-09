#include <bits/stdc++.h>
using namespace std;
long long q;
long long t;
long long m[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long long y=0;
long long a[2000005][3];
inline void f1(){
	long long j=0;
	while(t>=146100){
		j++;
		t-=146100;
	}
	long long k=1;
	for(;;k++){
		if(k%4==0)
			if(t>=366)
				t-=366;
			else break;
		else if(t>=365)
			t-=365;
		else break;
	}
	k--;
	y=400*j+k+1;
	long long l;
	for(l=1;l<=12;l++)
		if(t>m[l]){
			t-=m[l];
			if(l==2&&k%4==0)
				t--;
		}
		else break;
	if(t==0){
		t=0;l=1,y++;
	}
	printf("%lld %lld %lld\n",t+1,l,y);
}
inline void f2(){
	long long l;
	if(t-577736<=17){
		t=t-577736+14;
		l=10;
	}
	else{
		t=t-577736-17;
		if(t>30){
			t-=30;
			l=12;
		}
		else l=11;
	}
	printf("%lld %lld %lld\n",t+1,l,1582);
}
inline void f3(){
	long long i=0;
	while(t>=14609700){
		i++;
		t-=14609700;
	}
	long long j=0;
	while(t>=146097){
		j++;
		t-=146097;
	}
	long long k=1583;
	for(;;k++){
		if(k%4==0&&k%100!=0||k%400==0)
			if(t>=366)
				t-=366;
			else break;
		else if(t>=365)
			t-=365;
		else break;
	}
	y=40000*i+400*j+k;
	long long l;
	for(l=1;l<=12;l++)
		if(t>=m[l]){
			t-=m[l];
			if(l==2&&(k%4==0&&k%100!=0||k%400==0))
				t--;
		}
		else break;
	if(t==0){
		t=0;
		if(l==13){
			l=1;y++;
		}
	}
	printf("%lld %lld %lld\n",t+2,l,y);
}
inline void gh(){
	if(t<=577736)
		f1();
	else if(t<=577824)
		f2();
	else{
		t-=577825;
		t+=10;
		f3();
	}
}
inline void init(){
	int y=4713,l=1,d=1;
	for(int i=1;i<=1721423;i++){
		d++;
		if(y%4==1)m[2]=29;
		else m[2]=28;
		if(d==m[l]+1){
			d=1;
			l++;
			if(l==13){
				l=1;
				y--;
			}
		}
		a[i][0]=y;a[i][1]=l;a[i][2]=d;
	}
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	init();
	scanf("%d",&q);
	while(q--){
		scanf("%lld",&t);
		if(t>=1721424){
			t-=1721424;
			gh();
		}
		else
			printf("%lld %lld %lld BC\n",a[t][2],a[t][1],a[t][0]);
	}
	return 0;
}
