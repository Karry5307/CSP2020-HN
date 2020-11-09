#include<bits/stdc++.h>
using namespace std;
long long read(){
	char ch=getchar();
	while(ch<'0'||ch>'9')
		ch=getchar();
	long long res=0;
	while(ch>='0'&&ch<='9'){
		res=res*10+ch-'0';
		ch=getchar();
	}
	return res;
}
long long inf=1721424,inf2=577736,year4=1461,year3=1095,year400=146097,year100=36524,extra=285,y,m,d,id;
int main(){
	int i,n,j;
	long long k,l;
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	n=read();
	for(i=1;i<=n;i++){
		k=read();
		if(k<inf){
			y=4713;
			y-=4*(k/year4);
			k%=year4;
			if(k>=366){
				y--;
				k-=366;
				y-=(k/365);
				k%=365;
			}
			id=28;
			if((y-1)%4==0)
				id++;
			if(k<31) m=1;
			else if(k<31+id) m=2,k-=31;
			else if(k<62+id) m=3,k-=31+id;
			else if(k<92+id) m=4,k-=62+id;
			else if(k<123+id) m=5,k-=92+id;
			else if(k<153+id) m=6,k-=123+id;
			else if(k<184+id) m=7,k-=153+id;
			else if(k<215+id) m=8,k-=184+id;
			else if(k<245+id) m=9,k-=215+id;
			else if(k<276+id) m=10,k-=245+id;
			else if(k<306+id) m=11,k-=276+id;
			else m=12,k-=306+id;
			d=k+1;
			printf("%lld %lld %lld BC\n",d,m,y);
		}
		else if(k<inf+inf2){
			k-=inf;
			y=1;
			y+=4*(k/year4);
			k%=year4;
			if(k<year3){
				y+=(k/365);
				k%=365;
			}
			else{
				k-=year3;
				y+=3;
			}
			id=28;
			if(y%4==0)
			id++;
			if(k<31) m=1;
			else if(k<31+id) m=2,k-=31;
			else if(k<62+id) m=3,k-=31+id;
			else if(k<92+id) m=4,k-=62+id;
			else if(k<123+id) m=5,k-=92+id;
			else if(k<153+id) m=6,k-=123+id;
			else if(k<184+id) m=7,k-=153+id;
			else if(k<215+id) m=8,k-=184+id;
			else if(k<245+id) m=9,k-=215+id;
			else if(k<276+id) m=10,k-=245+id;
			else if(k<306+id) m=11,k-=276+id;
			else m=12,k-=306+id;
			d=k+1;
			printf("%lld %lld %lld\n",d,m,y);
		}
		else{
			k-=(inf+inf2);
			k+=extra;
			y=1582;
			y+=400*(k/year400);
			k%=year400;
			y+=100*(k/year100);
			k%=year100;
			y+=4*(k/year4);
			k%=year4;
			if(k<year3){
				y+=(k/365);
				k%=365;
			}
			else{
				k-=year3;
				y+=3;
			}
			id=28;
			if((y%100!=0&&y%4==0)||y%400==0)
				id++;
			if(k<31) m=1;
			else if(k<31+id) m=2,k-=31;
			else if(k<62+id) m=3,k-=31+id;
			else if(k<92+id) m=4,k-=62+id;
			else if(k<123+id) m=5,k-=92+id;
			else if(k<153+id) m=6,k-=123+id;
			else if(k<184+id) m=7,k-=153+id;
			else if(k<215+id) m=8,k-=184+id;
			else if(k<245+id) m=9,k-=215+id;
			else if(k<276+id) m=10,k-=245+id;
			else if(k<306+id) m=11,k-=276+id;
			else m=12,k-=306+id;
			d=k+1;
			printf("%lld %lld %lld\n",d,m,y);
		}
	}
	return 0;
}
