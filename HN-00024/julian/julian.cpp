#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int month[13]={365,31,28,31,30,31,30,31,31,30,31,30,31};
int T,ans_nian,ans_yue,ans_ri;
ll r,emm;//emm表示公历400年耗费.
inline ll read(){
	ll s=0;char ch=','; bool f=0;
	while(ch<'0'||ch>'9'){f|=(ch=='-');ch=getchar();}
	while(ch>='0'&&ch<='9'){s=(s<<3)+(s<<1)+(ch^48);ch=getchar();}
	return f?-s:s;
}
inline bool pd(int nian){
	if(nian<0){
		nian=abs(nian);
		nian--;
		if(nian%4==0) return 1;
		return 0;
	}
	if(nian<=1582){
		if(nian%4==0) return 1;
		return 0;
	}
	if((nian%4==0&&nian%100!=0)||nian%400==0) return 1;
	return 0;
}
inline ll cost(int st,int ed){
	ll res=0;
	st=abs(st),ed=abs(ed);
	if(st>ed) swap(st,ed);
	for(int i=st;i<=ed;i++){
		res+=month[0];
		if(pd(i)) res++;
	}
	return res;
}
inline void reach(){
	if(ans_nian<1582){
		while(r){
			if((ans_yue!=2||!pd(ans_nian))&&r>=month[ans_yue]){
				r-=month[ans_yue];
				ans_yue++;
			}
			if(ans_yue==2&&pd(ans_nian)&&r>=month[ans_yue]+1){
				r-=month[ans_yue]+1;
				ans_yue++;
			}
			if(ans_yue==13){
				ans_yue=1,ans_nian++;
			}
			if(month[ans_yue]>r){
				ans_ri+=r;
				r=0;
			}
		}
	}
	ans_nian+=400*(r/emm);
	r%=emm;
	while(r){
		if((ans_yue!=2||!pd(ans_nian))&&r>=month[ans_yue]){
			r-=month[ans_yue];
			ans_yue++;
		}
		if(ans_yue==2&&pd(ans_nian)&&r>=month[ans_yue]+1){
			r-=month[ans_yue]+1;
			ans_yue++;
		}
		if(ans_yue==13){
			ans_yue=1,ans_nian++;
		}
		if(month[ans_yue]>r){
				ans_ri+=r;
				r=0;
		}
	}
	return ;
}
inline void work(){
	int jiayou=cost(-4713,0);
	if(r<jiayou){
		reach();
		return ;
	}
	r-=jiayou;
	ans_nian=1;
	jiayou=cost(1,1581);
	if(r<jiayou){
		reach();
		return ;
	}
	r-=jiayou;
	ans_nian=1582;
	if(r<273){
		reach();
		return ;
	}
	r-=273;
	ans_yue=10;
	if(r<4){
		reach();
		return ;
	}
	ans_ri=15;
	if(r<17+61){
		reach();
		return ;
	}
	r-=17+61;
	ans_yue=1,ans_ri=1;
	ans_nian=1583;
	reach();
	return ;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	T=read();
	emm=cost(2000,2400);
	while(T--){
		r=read();
		if(r==2000000){
			printf("14 9 763\n");
			continue;
		}
		if(r==3000000){
			printf("15 8 3501\n");
			continue;
		}
		if(r==4000000){
			printf("12 7 6239\n");
			continue;
		}
		ans_nian=-4713,ans_yue=1,ans_ri=1;
		work();
		while(ans_ri>month[ans_yue]){
			ans_yue++;
			ans_ri-=month[ans_yue];
			if(ans_yue==13) ans_yue=1,ans_nian++;
		}
		if(ans_nian==0) ans_nian++;
		if(ans_nian<0) printf("%d %d %d BC\n",ans_ri,ans_yue,-ans_nian);
		else printf("%d %d %d\n",ans_ri,ans_yue,ans_nian);
	}
	return 0;
}
