//Day month year (BC)
#include<cstdio>
#define ll long long
const ll months[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool is2(ll year){//geligao
	return (year%4==0&&year%100!=0)||(year%400==0);
}
bool is1(ll year){//geligao
	return (year%4==0);
}
inline int how(ll dday){
	return is1(dday)?366:365;
}
inline int how1(ll dday){
	return is2(dday)?366:365;
}
//ll year = -4713,month = 1,day = 1;
ll Q,D;
ll BC_day=1721424,to_1582=577737;//1582.10.4
ll zhouq = 146097,zq_4_2=1461;
inline void solve2(ll ye,ll d,bool ok){
	int t;
	for(register int i=1;i<=12;++i){
		if(i==2)	
			if(is1(ye))
				t=29;
			else t=28;
		else t=months[i];
		if(d<=t){
			printf("%lld %d %lld BC\n",d,i,ok?ye:(-ye+1));
			return;
		}
		d-=t;
	}
}
inline void solve(ll d){
	ll t,yy;
	if(d<=BC_day){
		yy = d/zq_4_2*4-4713+1;
		d%=zq_4_2;
		for(register int i=yy;i<=0;++i){
			t=how(i);
			if(d<=t){
				solve2(i,d,0);
				return;
			}
			else d-=t;
		}
	}else{
		d-=BC_day;
		if(d<=to_1582){
			yy = d/zq_4_2*4+1;
			d%=zq_4_2;
			for(register int i=yy;i<=1582;++i){
				t=how(i);
				if(d<=t){
					solve2(i,d,1);
					return;
				}
				else d-=t;
			}
		}
		else{
			d-=to_1582;
			if(d<=78)//88: 10.5--10.14 no
				solve2(1582,d,1);
			else d-=78;
			
			//1583.1.1
			for(register int i=1583;i<=1600;++i){
				t=how1(i);
				if(d<=t){
					for(register int j=1;j<=12;++j){
						if(j==2)	
							if(is2(i))
								t=29;
							else t=28;
						else t=months[j];
						if(d<=t){
							printf("%lld %d %d\n",d,j,i);
							return;
						}
						d-=t;
					}
					return;
				}
				else d-=t;
			}
			
			yy = d/zhouq*400+1600+1;
			d%=zhouq;
			for(register int i=yy;i;++i){
				t=how1(i);
				if(d<=t){
					for(register int j=1;j<=12;++j){
						if(j==2)	
							if(is2(i))
								t=29;
							else t=28;
						else t=months[j];
						if(d<=t){
							printf("%lld %d %d\n",d,j,i);
							return;
						}
						d-=t;
					}
					return;
				}
				else d-=t;
			}
		}
	}
}
signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%lld",&Q);
	while(Q--){
		scanf("%lld",&D);++D;
		solve(D);
	}
	return 0;
}

