#include<bits/stdc++.h>
using namespace std;
const int Last=-4714;
const long long line1=1721424,line2=577737,fourh=146097;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int Q,m,d,p;
long long x,y;
long long get_year(long long num){
	long long cnt=0,now;
	if(num<=line1){
		cnt=floor(num/1461)*4;
		num=num%1461;
//		cout<<num<<endl;
		if(!num){
			y=Last+cnt;
			return 365;
		}
		if(num<=366){
			y=Last+cnt+1;
//			cout<<"  ??"<<endl;
			return num;
		}
		cnt++,num-=366;
		cnt+=floor(num/365);
		num=num%365;
		y=Last+cnt+1;
		if(!num){
			num=365,y--;
		}	
		return num;
	}
	num-=line1;
	now=1;
	if(num<=line2){
//		cout<<"??"<<endl;
		if(num<=365){
//			cout<<"??"<<num<<endl;
			y=1;
			return num;
		}
		cnt=floor(num/1461)*4;
//		cout<<cnt<<endl;
		num=num%1461;
		if(!num){
//			cout<<"!!"<<endl;
			y=now+cnt;
			return 366;
		}
		cnt+=floor(num/365);
//		cout<<cnt<<endl;
		num=num%365;
		y=now+cnt;
		if(!num){
			num=365;
//			cout<<"!!"<<endl;
		}
//		cout<<num<<endl;
		return num;
	}
	num-=line2;
	now=1581;
	num+=287;
	cnt+=floor(num/fourh)*400;
	num%=fourh;
//	cout<<cnt<<" "<<num<<endl;
	if(!num){
		y=now+cnt;
		return 366;
	}
	cnt+=floor(num/1461)*4;
	num-=floor((floor(num/1461)*4)/100);
	int q=(floor(num/1461)*4);
	q%=100;
	num%=1461;
	if(!num){
		if(!q){
			y=now+cnt;
			return 365;
		}	
		else{
			y=now+cnt;	
			return 366;
		}
	}
	cnt+=floor(num/365);
	num=num%365;
	y=now+cnt+1;
	if(!num)
		num=365,y--;
	return num;
}
void get_date(long long x,int note){
//	cout<<note<<endl;
	m=1;
	if(!x){
		m=12,d=31;
		return;
	}
	if(note)
		month[2]=29;
	else month[2]=28;
	while(x>0){
		if(x>month[m]){
			x-=month[m];
			m++;
		}
		else{
			d=x;
			break;
		}
	}
	return;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&Q);
	while(Q--){
		scanf("%lld",&x);
		x++;
		long long rest=get_year(x);
		if(y<0){
			if(!((-y-1)%4))
				p=1;
			else p=0;
		}
		else{
			if(y<=1582){
				if(!(y%4))
					p=1;
				else p=0;
			}
			else{
				if((!(y%4) && y%100) || !(y%400))
					p=1;
				else p=0;
			}
		}
		get_date(rest,p);
		if(y<0){
			printf("%d %d %lld BC\n",d,m,-y);
		}
		else printf("%d %d %lld\n",d,m,y);
	}
	return 0;
}
/*
1
2299161
*/
