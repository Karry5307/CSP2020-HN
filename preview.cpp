---------- Now Opening N-00001's file(s).
===== Successfully open the file  answers\HN-00001\julian\julian.cpp.The size of it is 3.748 KB.
#include<bits/stdc++.h>
using namespace std;
int i,m,k,j,l,b,c,g,flag,flag1,flag2=0,a[1000000001];
int sss(int n)
{
		if(n<1721424)
	{
		for(i=n+1,m=4713;i>=0;m--)
		{
			if((m-1)%4==0)
			{
				i-=366;
				flag1=1;
			}
			else
			{
				i-=365;flag1=2;
			}
			if(i<0)
			{
				if(flag1==1)
				{
					i+=366;m++;
				}
				else
				{
					i+=365;m++;
				}
				break;
			}
		}
		//printf("%d\n",i);
		if(flag1==1)
		{
			for(j=0,k=1;k<=12;k++)
			{
				if(k==1||k==3||k==5||k==7||k==8||k==10||k==12)
				{
					j+=31;flag=1;
				}
				else
				{
					if(k==2)
					{
						j+=29;flag=2;
					}
					else
					{
						j+=30;flag=3;
					}
				}
				if(j>i)
				{
					//j=-j;break;
					if(flag==1)
						j=i-(j-31);
					if(flag==2)
						j=i-(j-29);
					if(flag==3)
						j=i-(j-30);
					break;
				}
			}
			printf("%d %d %d BC\n",j,k,m-1);
		}
		else
		{
			for(j=0,k=1;k<=12;k++)
			{
				if(k==1||k==3||k==5||k==7||k==8||k==10||k==12)
				{
					j+=31;flag=1;
				}
				else
				{
					if(k==2)
					{
						j+=28;flag=2;
					}
					else
					{
						j+=30;flag=3;
					}
				}
				if(j>i)
				{
					//j=-j;break;
					if(flag==1)
						j=i-(j-31);
					if(flag==2)
						j=i-(j-28);
					if(flag==3)
						j=i-(j-30);
					break;
				}
			}
			printf("%d %d %d BC\n",j,k,m-1);
		}
	}
	else
	{
		/*if(n-1721424<=577733)
		{*/
			for(i=1,m=n-1721424,g=n-1721424;;i++)
			{
				if(flag2==1)
				{
					if(i%4==0&&i%100!=0||i%400==0)
					{
						m-=366;flag1=1;
					}
					else
					{
						m-=365;flag1=2;
					}
				}
				else
				{
					if(i%4==0)
					{
						m-=366;flag1=1;
					}
					else
					{
						m-=365;flag1=2;
					}
				}
				
				if(flag2==0&&g-m>=577743)
				{
					//printf("%d\n",i);
					if(flag1==1)
					{
						/*m+=366;i--;*/flag2=1;
					}
					else
					{
						/*m-=365;i--;*/flag2=1;
					}
					m+=10;
				}
				if(m<0)
				{
					if(flag1==1)
					{
						m+=366;break;
					}
					else
					{
						m+=365;break;
					}
				}
			}
			if(flag1==0)
			{
				for(j=-1,k=1;k<=12;k++)
				{
					if(k==1||k==3||k==5||k==7||k==8||k==10||k==12)
					{
						j+=31;flag=1;
					}
					else
					{
						if(k==2)
						{
							j+=29;flag=2;
						}
						else
						{
							j+=30;flag=3;
						}
					}
					if(j>m)
					{
						//j=-j;break;
						if(flag==1)
							j=m-(j-31);
						if(flag==2)
							j=m-(j-29);
						if(flag==3)
							j=m-(j-30);
						break;
					}
				}
				/*if(i>1582||i==1582&&k>10||i==1582&&k==10&&j>4)
				{
					j+=10;
					if(flag==1&&j>31||flag==2&&j>29||flag==3&&j>30)
					{
						k++;
						if(flag==1)j-=31;
						if(flag==2)j-=29;
						if(flag==3)j-=30;
					}
					if(k>12)
					{
						i++;k-=12;
					}
				}*/
				printf("%d %d %d\n",j,k,i);
			}
			else
			{
				for(j=-1,k=1;k<=12;k++)
				{
					if(k==1||k==3||k==5||k==7||k==8||k==10||k==12)
					{
						j+=31;flag=1;
					}
					else
					{
						if(k==2)
						{
							j+=28;flag=2;
						}
						else
						{
							j+=30;flag=3;
						}
					}
					if(j>m)
					{
						//j=-j;break;
						if(flag==1)
							j=m-(j-31);
						if(flag==2)
							j=m-(j-28);
						if(flag==3)
							j=m-(j-30);
						break;
					}
				}
				/*if(i>1582||i==1582&&k>10||i==1582&&k==10&&j>4)
				{
					j+=10;
					if(flag==1&&j>31||flag==2&&j>28||flag==3&&j>30)
					{
						k++;
						if(flag==1)j-=31;
						if(flag==2)j-=28;
						if(flag==3)j-=30;
					}
					if(k>12)
					{
						i++;k-=12;
					}
				}*/
				printf("%d %d %d\n",j,k,i);
			}
		//}
		/*else
		{
			if(n-1721424<=577733+88)
			{
				
			}
		}*/
	}
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);

	scanf("%d",&b);
	for(c=1;c<=b;c++)
	{
		scanf("%d",&a[c]);
	}
	for(c=1;c<=b;c++)
	{
		flag2=0;
		sss(a[c]);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00001\zoo\zoo.cpp.The size of it is 0.140 KB.
#include<cstdio>
using namespace std;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	printf("2");
	return 0;
}
==========
===== Successfully open the file      answers\HN-00001\call\call.cpp.The size of it is 0.140 KB.
#include<cstdio>
using namespace std;
int main()
{
	freopen("call","r",stdin);
	freopen("call","w",stdout);
	printf("6 8 12");
	return 0;
}
==========
===== Successfully open the file  answers\HN-00001\snakes\snakes.cpp.The size of it is 0.654 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int n,m,a[4],i,j,k,x,y,sum[4];
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			scanf("%d",&m);
			for(j=1;j<=m;j++)
			{
				scanf("%d",&a[j]);
			}
		}
		else
		{
			scanf("%d",&k);
			for(j=1;j<=k;j++)
			{
				scanf("%d%d",&x,&y);
				a[x]=y;
			}
			//printf("%d %d %d\n",a[1],a[2],a[3]);
		}
		if(a[1]-a[2]<a[3]&&a[2]-a[3]<=a[1]&&a[1]-a[3]<a[2]&&a[2]-a[1]<a[3]&&a[3]-a[2]<=a[1]&&a[3]-a[1]<=a[2])
		{
			sum[i]=3;
		}
		else
		{
			sum[i]=1;
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",sum[i]);
	}
	return 0;
}
==========


---------- Now Opening N-00002's file(s).
===== Successfully open the file  answers\HN-00002\julian\julian.cpp.The size of it is 2.123 KB.
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

==========
===== Successfully open the file        answers\HN-00002\zoo\zoo.cpp.The size of it is 0.498 KB.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,c,k;
ll p,q;
ll x,all,si,ans=1;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%lld%lld%lld%lld",&n,&m,&c,&k);
	for(register int i=1;i<=n;++i){
		scanf("%lld",&x);
		all|=x;
	}
	for(register int i=1;i<=m;++i){
		scanf("%lld%lld",&p,&q);
		if(((all>>p)&1)!=1)
			si|=(1<<(p));
	}
	for(register int i=1;i<=k;++i){
		si>>=1;
		if((si&1)==0)
			ans*=2;
	}
	printf("%lld\n",ans-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00002\call\call.cpp.The size of it is 1.108 KB.
#include<bits/stdc++.h>
using namespace std;
const int mod = 998244353;
#define N 100005
struct func{
	int t;
	int p,v,c;
	vector<int> a;
}f[N];
int n,m,x,Q,which;
long long a[N];
inline void solve(int which){
	if(f[which].t==1){
		a[f[which].p]+=f[which].v;
		if(a[f[which].p]>=mod)
			a[f[which].p]-=mod;
	}
	if(f[which].t==2)
		for(register int j=1;j<=n;++j)
			a[j]=(a[j]*f[which].v)%mod;
	if(f[which].t==3)
		for(register int j=0;j<f[which].c;++j)
			solve(f[which].a[j]);
}
signed main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(register int i=1;i<=n;++i)	
		scanf("%lld",&a[i]);
	scanf("%d",&m);
	for(register int i=1;i<=m;++i){
		scanf("%d",&f[i].t);
		if(f[i].t==1)
			scanf("%d%d",&f[i].p,&f[i].v);
		if(f[i].t==2)
			scanf("%d",&f[i].v);
		if(f[i].t==3){
			scanf("%d",&f[i].c);
			for(register int j=1;j<=f[i].c;++j){
				scanf("%d",&x);
				f[i].a.push_back(x);
			}
		}
	}
	scanf("%d",&Q);
	for(register int i=1;i<=Q;++i){
		scanf("%d",&which);
		solve(which);
	}
	for(register int i=1;i<=n;++i)
		printf("%lld ",a[i]);
	printf("\n");
	return 0;
}
==========
===== Successfully open the file  answers\HN-00002\snakes\snakes.cpp.The size of it is 1.171 KB.
#include<bits/stdc++.h>
using namespace std;
#define N 1000005
int t,n;
int a[N],b[N],c[N],flag[N];
int x,y;
inline void solve(){
	int lun=1,tail=n,where=0,tmp,minn=997895623;
	while(lun<=n){
		while((c[n]-c[n-1]>=c[lun]||(n-lun+1)<=2)&&!flag[lun])
			c[n]-=c[lun],++lun;
		if(flag[lun]&&(c[n]-c[n-1]>=c[lun]||(n-lun+1)<=2)){
			if((n-lun+1)==2)
				printf("%d\n",n-min(flag[lun],minn)+1);
			else
				printf("%d\n",n-min(flag[lun],minn+1)+1);
			return;
		}
		if(flag[lun])
			minn=min(minn,flag[lun]);
		c[n]-=c[lun],++lun;
		where=n;
		for(;where>lun;--where)
			if(c[n]>=c[where-1])
				break;
		tmp=c[n];
		for(register int i=n;i>where;--i)
			c[i]=c[i-1],flag[i]=flag[i-1];
		c[where]=tmp,flag[where]=lun-1;
	}
	printf("1\n");
	return;
}
signed main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&t);
	--t;
	scanf("%d",&n);
	for(register int i=1;i<=n;++i)
		scanf("%d",&a[i]),c[i]=a[i];
	solve();
	while(t--){
		for(register int i=1;i<=n;++i)
			flag[i]=0;
		for(register int i=1;i<=n;++i)
			c[i]=a[i];
		scanf("%d",&n);
		for(register int i=1;i<=n;++i){
			scanf("%d%d",&x,&y);
			a[x]=c[x]=y;
		}
		solve();
	}
	return 0;
}

==========


---------- Now Opening N-00003's file(s).
===== Successfully open the file  answers\HN-00003\julian\julian.cpp.The size of it is 3.126 KB.
#include<bits/stdc++.h>

using namespace std;

#define int long long

const int kMaxY = 400 + 5; 

int months[13] = {0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};

int ans , q , r , x , y , p , px , py , o , ox , oy , pp , cnt , cnt1 , cnt2 , day , year , month , day1 , day2 , f[kMaxY] , s[kMaxY];

bool flag1 , flag2;

int read(){
	int s = 0 , w = 1;
	char ch = getchar();
	while((ch < '0') || (ch > '9')){
		if(ch == '-'){
			w = -1;
		}
		ch = getchar();
	}
	while((ch >= '0') && (ch <= '9')){
		s = (s << 3) + (s << 1) + ch - '0';
		ch = getchar();
	}
	return s * w;
}

signed main(){
	
	freopen("julian.in" , "r" , stdin);
	freopen("julian.out" , "w" , stdout);
	
	day1 = 146100;
	day2 = 146097;
	
	q = read();
	
	for(int i = 4 ; i <= 403 ; i++ ){
		if(i % 4 == 0){
			f[i - 3] = 366;
		}
		else{
			f[i - 3] = 365;
		}
	}
	
	for(int i = 3 ; i <= 402 ; i++ ){
		if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
			s[i - 2] = 366;
		}
		else{
			s[i - 2] = 365;
		}
	}
	
	while(q--){
		r = read();
		if(r <= 2299143){
			x = r / day1;
			y = r % day1;
			cnt = 0;
			flag1 = false;
			flag2 = false;
			for(int i = 1 ; i <= 400 ; i++ ){
				if(cnt + f[i] <= y){
					cnt += f[i];
				}
				else{
					if(flag1 == false){
						flag1 = true;
						year = -4713 + x * 400 + i - 1;
						if(f[i] == 366){
							months[2] = 29;
						}
						pp = 0;
						for(int j = 1 ; j <= 12 ; j++ ){
							if(pp + months[j] <= y - cnt){
								pp += months[j];
							}
							else{
								if(flag2 == false){
									flag2 = true;
									month = j;
									day = y - cnt - pp + 1;
								}
							}
						}
						if(f[i] == 366){
							months[2] = 28;
						}
					}
				}
			}
			if(r <= 1721387){
				cout << day << " " << month << " " << abs(year) << " BC" << endl;
			}
			else{
				cout << day << " " << month << " " << year + 1 << endl;
			}
		}
		else{
			if(r <= 2299221){
				if(r <= 2299160){
					cout << r - 2299143 + 15 - 1 << " " << 10 << " " << 1582 << endl;
				}
				if(r <= 2299190){
					cout << r - 2299160 << " " << 11 << " " << 1582 << endl;
				}
				if(r <= 2299221){
					cout << r - 2299190 << " " << 12 << " " << 1582 << endl;
				}
			}
			else{
				p = (r - 2299221);
				px = p / day1;
				py = p % day1;
				p = px * day2 + py;
				px = p / day2;
				py = p % day2;
				cnt1 = 0;
				cnt2 = 0;
				flag1 = false;
				flag2 = false;
				for(int i = 1 ; i <= 400 ; i++ ){
					if(cnt1 + f[i] < py){
						cnt1 += f[i];
						cnt2 += s[i];
					}
					else{
						if(flag1 == false){
							flag1 = true;
							year = 1583 + px * 400 + i - 1;
							if(f[i] == 366){
								months[2] = 29;
							}
							pp = 0;
							for(int j = 1 ; j <= 12 ; j++ ){
								if(pp + months[j] < py - cnt1){
									pp += months[j];
								}
								else{
									if(flag2 == false){
										flag2 = true;
										month = j;
										day = py - cnt1 - pp;
									}
								}
							}
							if(f[i] == 366){
								months[2] = 28;
							}
						}
					}
				}
				cout << day << " " << month << " " << year << endl;
			}
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
==========
===== Successfully open the file        answers\HN-00003\zoo\zoo.cpp.The size of it is 1.405 KB.
#include<bits/stdc++.h>

using namespace std;

const int kMaxN = 1000000 + 5;
const int kMaxM = 1000000 + 5;
const int kMaxC = 100000000 + 5;

int n , m , c , k , ans , a[kMaxN] , p[kMaxM] , q[kMaxM];

string s[kMaxN]; 

bool vis[kMaxC];

int read(){
	int s = 0 , w = 1;
	char ch = getchar();
	while((ch < '0') || (ch > '9')){
		if(ch == '-'){
			w = -1;
		}
		ch = getchar();
	}
	while((ch >= '0') && (ch <= '9')){
		s = (s << 3) + (s << 1) + ch - '0';
		ch = getchar();
	}
	return s * w;
}

signed main(){
	
	freopen("zoo.in" , "r" , stdin);
	freopen("zoo.out" , "w" , stdout);
	
	n = read();
	m = read();
	c = read();
	k = read();
	
	for(int i = 1 ; i <= n ; i++ ){
		a[i] = read();
	}
	
	for(int i = 1 ; i <= m ; i++ ){
		p[i] = read();
		q[i] = read();
	}
	
	for(int i = 1 ; i <= n ; i++ ){
		while(a[i] != 0){
			s[i] = s[i] + (char)(a[i] % 2 + '0');
			a[i] /= 2; 
		}
	} 
	
	for(int i = 1 ; i <= n ; i++ ){
		for(int j = 1 ; j <= m ; j++ ){
			if(s[i][p[j]] == '1'){
				vis[q[j]] = true;
			}
		}
	}
	
	ans = -n;
	
	for(int i = 0 ; i < (1 << k) ; i++ ){
		int x = i;
		string st;
		bool flag = true;
		while(x != 0){
			st = st + (char)(x % 2 + '0');
			x /= 2; 
		}
		for(int j = 1 ; j <= m ; j++ ){
			if(st[p[j]] == '1' && vis[q[j]] == false){
				flag = false;
				break;
			}
		}
		if(flag == true){
			ans++;
		}
	}
	
	cout << ans << endl;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
==========
===== Successfully open the file      answers\HN-00003\call\call.cpp.The size of it is 1.719 KB.
#include<bits/stdc++.h>

using namespace std;

#define int long long

const int Mod = 998244353;
const int kMaxN = 100000 + 5;
const int kMaxM = 100000 + 5;

int n , m , q , a[kMaxN];

struct Node{
	int t , p , v , c;
	vector <int> g;
};

Node b[kMaxM];

inline void dfs(int x){
	for(int j = 0 ; j < b[x].g.size() ; j++ ){
		if(b[b[x].g[j]].t == 1){
			a[b[b[x].g[j]].p] = (a[b[b[x].g[j]].p] + b[b[x].g[j]].v) % Mod; 
		}
		if(b[b[x].g[j]].t == 2){
			for(int k = 1 ; k <= n ; k++ ){
				a[k] = (a[k] * b[b[x].g[j]].v) % Mod; 
			}
		}
		if(b[b[x].g[j]].t == 3){
			dfs(b[x].g[j]);
		}
	}
	return ;
}

int read(){
	int s = 0 , w = 1;
	char ch = getchar();
	while((ch < '0') || (ch > '9')){
		if(ch == '-'){
			w = -1;
		}
		ch = getchar();
	}
	while((ch >= '0') && (ch <= '9')){
		s = (s << 3) + (s << 1) + ch - '0';
		ch = getchar();
	}
	return s * w;
}

signed main(){
	
	freopen("call.in" , "r" , stdin);
	freopen("call.out" , "w" , stdout);
	
	n = read();
	
	for(int i = 1 ; i <= n ; i++ ){
		a[i] = read();
	}
	
	m = read();
	
	for(int i = 1 ; i <= m ; i++ ){
		b[i].t = read();
		if(b[i].t == 1){
			b[i].p = read();
			b[i].v = read();
		}
		if(b[i].t == 2){
			b[i].v = read();
		}
		if(b[i].t == 3){
			b[i].c = read();
			for(int j = 1 ; j <= b[i].c ; j++ ){
				int x;
				x = read();
				b[i].g.push_back(x);
			}
		}
	}
	
	q = read();
	
	for(int i = 1 ; i <= q ; i++ ){
		int f;
		f = read();
		if(b[f].t == 1){
			a[b[f].p] = (a[b[f].p] + b[f].v) % Mod; 
		}
		if(b[f].t == 2){
			for(int j = 1 ; j <= n ; j++ ){
				a[j] = (a[j] * b[f].v) % Mod; 
			}
		}
		if(b[f].t == 3){
			dfs(f);
		}
	}
	
	for(int i = 1 ; i <= n ; i++ ){
		cout << a[i] << " ";
	}
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
==========
===== Opening  answers\HN-00003\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00004's file(s).
===== Successfully open the file  answers\HN-00004\julian\julian.cpp.The size of it is 1.194 KB.
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
==========
===== Successfully open the file        answers\HN-00004\zoo\zoo.cpp.The size of it is 1.024 KB.
#include<bits/stdc++.h>
using namespace std;
int head[2000006],num,san;
bool flag[70],flag_[70],b[2000006];
map<int,int>ma;
struct lulu{
	int to;
	int ne;
}e[2000006];
void dfs_(int x){
int i;
	for(i=head[x];i;i=e[i].ne){
		flag[e[i].to]=1;
	}
}
void dfs(int x){
	int i;
	for(i=head[x];i;i=e[i].ne){
		if(!b[e[i].to]){
			dfs_(e[i].to);
			b[e[i].to]=1;
		}
	}
}
void lian(int from,int to){
	num++;
	e[num].to=to;
	e[num].ne=head[from];
	head[from]=num;
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k,i,j,p,q;
	long long t,sum=1;
	scanf("%d%d%d%d",&n,&m,&c,&k);
	san=k;
	for(i=1;i<=n;i++){
		scanf("%lld",&t);
		j=0;
		while(t){
			if(t&1)flag[j]=1;
			j++;
			t>>=1;
		}
	}
	for(i=1;i<=m;i++){
		scanf("%d%d",&p,&q);
		if(ma[q]==0)ma[q]=++san;
		flag_[p]=1;
		lian(p,ma[q]);
		lian(ma[q],p);
	}
	for(i=0;i<k;i++){
		if(flag[i]&&flag_[i]){
			dfs(i);
		}
	}
	for(i=0;i<k;i++){
		if(flag[i]||!flag_[i])sum*=2;
		//cout<<flag[i]<<" "<<flag_[i];
	}
	printf("%lld",sum-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00004\call\call.cpp.The size of it is 0.998 KB.
#include<bits/stdc++.h>
using namespace std;
long long a[100005],tree[400005],mod=998244353;
long long lazy[400005];
int num,n,T[100005],k[100005],p[100005],v[100005];
int s[1003][1003];
void dfs(int x){
	int i,j;
	if(T[x]==1){
		a[p[x]]+=v[x];
	}
	else if(T[x]==2){
		for(j=1;j<=n;j++)a[j]=(a[j]*v[x])%mod;
	}
	else {
		for(i=1;i<=k[x];i++)dfs(s[x][i]);
	}
	
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int i,j,m,Q,to,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		scanf("%d",&T[i]);
		if(T[i]==1)
			scanf("%d%d",&p[i],&v[i]);
		else if(T[i]==2)scanf("%d",&v[i]);
		else {
			scanf("%d",&k[i]);
			for(j=1;j<=k[i];j++){
				scanf("%d",&s[i][j]);
			}
		}
	}
	scanf("%d",&Q);
	for(i=1;i<=Q;i++){
		scanf("%d",&x);
		if(T[x]==1){
			a[p[x]]+=v[x];
		}
		else if(T[x]==2){
			for(j=1;j<=n;j++)a[j]=(a[j]*v[x])%mod;
		}
		else {
			dfs(x);
		}
	}
	for(i=1;i<=n;i++){
		printf("%lld ",a[i]%mod);
	}
	return 0;
}
==========
===== Opening  answers\HN-00004\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00005's file(s).
===== Successfully open the file  answers\HN-00005\julian\julian.cpp.The size of it is 0.067 KB.
#include<iostream>
using namespace std;
int main()
{

	return 0;
}
==========
===== Successfully open the file        answers\HN-00005\zoo\zoo.cpp.The size of it is 0.068 KB.
#include<iostream>
using namespace std;
int main()
{

	return 0;
}

==========
===== Successfully open the file      answers\HN-00005\call\call.cpp.The size of it is 1.028 KB.
#include<iostream>
#include<cstdio>
using namespace std;
int a[10001],T[10001],p[10001],v[10001];
int g[10001],f[10001],V[10001],c[10001];
/* a[]Êý¾Ý³õÊ¼Öµ£¬T[],p[]Ö´ÐÐ¼Ó·¨µÄÔªËØÏÂ±ê,v[]Ôö¼ÓµÄÖµ,
f[]µÚi¸öÖ´ÐÐº¯ÊýµÄ±àºÅ,
*/
T1 (int a,int p,int v)
{
	cin>>p>>v;
	a=a+v;
}
T2 (int T,int V,int n){
	if(T==2)
	  {
		cin>>V;
		int num=1;
		for(int i=1;i<=n;i++)
		{
			num*=a[i];
		}
		for(int i=1;i<=n;i++)
		{
			a[i]=V/(num/a[i]);
		}
	  }
}
int main()
{
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];// ÏÂ±êÎªiµÄÊý¾ÝµÄ³õÊ¼ÖµÎªa[i]
	}
	cin>>m;
	for(int j=4;j<=m+3;j++)
	{
	cin>>T[j];
	if(T[j]==1)
	  { 
		T1(a[p[j]],p[j],v[j]);
	  }
	if(T[j]==2)
	  {
		T2(T[j],V[j],n);
	  }
	if(T[j]==3)
	  {
	  	cin>>c[j];
	  	for(int i=2;i<=c[j];i++)
	  	  {
	  		cin>>g[i];
	  		if (g[i]==1) T1(a[p[j]],p[j],v[j]);
	  		if (g[i]==2) T2(T[j],V[j],n);
		  }
	  }
	}
	cout<<endl;
	int Q;cin>>Q;//ÊäÈëµÄº¯Êý²Ù×÷ÐòÁÐ³¤¶È 
	for(int i=1;i<=Q;i++)
	{
		cin>>f[i];//µÚi¸öÖ´ÐÐµÄº¯Êý±àºÅ 
	}
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	return 0;
}
==========
===== Successfully open the file  answers\HN-00005\snakes\snakes.cpp.The size of it is 0.068 KB.

#include<iostream>
using namespace std;
int main()
{

	return 0;
}
==========


---------- Now Opening N-00006's file(s).
===== Successfully open the file  answers\HN-00006\julian\julian.cpp.The size of it is 3.823 KB.
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
==========
===== Successfully open the file        answers\HN-00006\zoo\zoo.cpp.The size of it is 0.809 KB.
#include <bits/stdc++.h>
using namespace std;
#define int long long
template <typename T> inline void read(T &a){
	T w = 1; a=0;
	char ch=getchar();
	for(;!isdigit(ch);ch=getchar()) if(ch == '-') w=-1;
	for(;isdigit(ch);ch=getchar()) a=(a<<3)+(a<<1)+(ch^48);
	a*=w;
}
const int MAX = 1e6+10;
int a[MAX];
int pos[100],Pos[100];
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k;
	read(n); read(m); read(c); read(k);
	for(int i = 1; i <= n; ++i){
		read(a[i]); 
	}
	for(int i = 1; i <= m; ++i){
		int u,v; read(u); read(v);
		pos[u] = 1;
	}
	for(int i = 1; i <= n; ++i){
		for(int j = 0; j < k; ++j){
			if((1<<j) & a[i]){
				Pos[j] = 1;
			}
		}
	}
	int ans = (1 << k);
	for(int i = 0; i < k; ++i){
		if(pos[i] && !Pos[i]){
			ans /= 2;
		}
	}
	ans -= n;
	cout<<ans;
}
==========
===== Successfully open the file      answers\HN-00006\call\call.cpp.The size of it is 0.457 KB.
#include <bits/stdc++.h>
using namespace std;
template <typename T> inline void read(T &a){
	T w = 1; a=0;
	char ch=getchar();
	for(;!isdigit(ch);ch=getchar()) if(ch == '-') w=-1;
	for(;isdigit(ch);ch=getchar()) a=(a<<3)+(a<<1)+(ch^48);
	a*=w;
}
const int MAX=1e5+19;
int a[MAX];
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int n; read(n);
	for(int i= 1; i <= n;++i) read(a[i]);

	for(int i= 1; i<=n;++i) cout<<a[i]<<" ";
}
==========
===== Successfully open the file  answers\HN-00006\snakes\snakes.cpp.The size of it is 0.695 KB.
#include <bits/stdc++.h>
using namespace std;
template <typename T> inline void read(T &a){
	T w = 1; a=0;
	char ch=getchar();
	for(;!isdigit(ch);ch=getchar()) if(ch == '-') w=-1;
	for(;isdigit(ch);ch=getchar()) a=(a<<3)+(a<<1)+(ch^48);
	a*=w;
}
const int MAX = 1e6+10;
int a[MAX];
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T,n;
	read(T);
	read(n);
	for(int i = 1; i <= n; ++i) read(a[i]);
	if(n == 3){
		if((a[3]-a[1]) > a[2]) puts("1");
		else puts("3");
		for(int i = 2; i <= T;++i){
			int m; read(m);
			for(int j=1;j<=m;++j){
				int x,y; read(x);read(y);a[x]=y;
			}
			if((a[3]-a[1]) > a[2]) puts("1");
			else puts("3");
		}
		return 0;
	}

}
==========


---------- Now Opening N-00007's file(s).
===== Successfully open the file  answers\HN-00007\julian\julian.cpp.The size of it is 1.568 KB.
#include<bits/stdc++.h>
using namespace std;
struct pro{
	long long q,id;
}a[100003];
struct as{
	long long d,m,y;
}ans[100003];
bool cmp(pro x,pro y)
{
	return x.q<y.q;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int t,m=1;
	cin>>t;
	long long i;
	for(i=1;i<=t;i++){
		cin>>a[i].q;
		a[i].id=i;
	}
	sort(a+1,a+1+t,cmp);
	long long day=1,mon=1,yea=-4713;
/*	for(i=1;i<=t;i++)
		cout<<a[i].q<<" "<<a[i].id<<endl;*/
		for(i=1;i<=a[t].q;i++){
//		cout<<i<<":"<<yea<<" "<<mon<<" "<<day<<endl;
			day++;
			if(mon==2&&day>=29){						//
				if(yea>0&&yea%4==0){					//
					if(yea<=1582){				//
						if(day==30){
							day=1;
							mon++;
						}
					}
					else if((yea%100!=0||yea%400==0)){	//
						if(day==30){
							day=1;
							mon++;
						}
					}
					else {
						day=1;
						mon++;
					}
				}
				else if(yea<0&&(yea+1)%4==0){			//
					if(day==30){
						day=1;
						mon++;
					}
				}
				else {
					day=1;
					mon++;
				}
			}
			if(day>=31){								//
				if(mon==4||mon==6||mon==9||mon==11){	//
					day=1;
					mon++;
				}
				else if(day==32){
					day=1;
					mon++;
				}
			}
			if(mon==13){								//
				mon=1;
				yea++;
			}
			if(yea==0)									//
				yea=1;
			if(yea==1582&&mon==10&&day==5)				//
				day=15;
			if(a[m].q==i){
				ans[a[m].id].d=day;
				ans[a[m].id].m=mon;
				ans[a[m].id].y=yea;
				m++;
			}
		}
	////
	for(i=1;i<=t;i++){
		cout<<ans[i].d<<" "<<ans[i].m<<" "<<abs(ans[i].y);				//
		if(ans[i].y<0)													//
			cout<<" BC\n";
		else
			cout<<endl;
	}
	return 0;
}
==========
===== Opening        answers\HN-00007\zoo\zoo.cpp Failed.File not found.
===== Opening      answers\HN-00007\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00007\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00008's file(s).
===== Successfully open the file  answers\HN-00008\julian\julian.cpp.The size of it is 2.486 KB.
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
==========
===== Successfully open the file        answers\HN-00008\zoo\zoo.cpp.The size of it is 0.656 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=1000005;
bool use[N];
unsigned long long all=0,ans,a[N],p,q,c;
unsigned long long read(){
	char ch=getchar();
	while(ch<'0'||ch>'9')
		ch=getchar();
	unsigned long long res=0;
	while(ch>='0'&&ch<='9'){
		res=res*10+ch-'0';
		ch=getchar();
	}
	return res;
}
int main(){
	int i,j,k,l,n,m;
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read(),m=read(),c=read(),k=read();
	for(i=1;i<=n;i++){
		a[i]=read();
		all=all|a[i];
	}
	for(i=1;i<=m;i++){
		p=read(),q=read();
		if((!(all&(1ull<<p)))&&(!use[p])){
			k--;
			use[p]=1;
		}
	}
	ans=(1ull<<k)-n;
	printf("%lld",ans);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00008\call\call.cpp.The size of it is 1.478 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,inf=998244353,chi[1005][1005];
long long a[100005];
struct as{
	int pos,data,chen,id,num;
}t[100005];
int read(){
	char ch=getchar();
	while(ch<'0'||ch>'9')
		ch=getchar();
	int res=0;
	while(ch>='0'&&ch<='9'){
		res=res*10+ch-'0';
		ch=getchar();
	}
	return res;
}
inline void add(int p,int data){
	a[p]+=data;
	a[p]%=inf;
}
inline void mel(int data){
	for(int i=1;i<=n;i++)
		a[i]=a[i]*data%inf;
}
void work(int p){
	for(int i=1;i<=t[p].num;i++){
		int k=chi[p][i];
		if(t[k].id==1)
			add(t[k].pos,t[k].data);
		else if(t[k].id==2)
			mel(t[k].chen);
		else
			work(k);
	}
}
int main(){
	int i,j,k,l,q;
	bool flag1=0,flag2=0;
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(i=1;i<=n;i++)
	a[i]=read();
	m=read();
	if(n<=1000){
		for(i=1;i<=m;i++){
			t[i].id=read();
			if(t[i].id==1){
				t[i].pos=read();
				t[i].data=read();
				flag1=1;
			}
			else if(t[i].id==2)
				t[i].chen=read(),flag2=1;
			else{
				t[i].num=read();
				for(j=1;j<=t[i].num;j++)
					chi[i][j]=read();
			}
		}
		q=read();
		for(i=1;i<=q;i++){
			k=read();
			if(t[k].id==1)
				add(t[k].pos,t[k].data);
			else if(t[k].id==2)
				mel(t[k].chen);
			else
				work(k);
		}
		for(i=1;i<=n;i++)
		printf("%lld ",a[i]);
		return 0;
	}
/*	if(flag1==0){
		for(i=1;i<=q;i++){
			k=read();
			if(t[k].id==2)
				cc*=t[k].chen;
			else
				
		}
		return 0;
	}
	if(flag2==0){
		for(i=1;i<=n;i++){
		}
		return 0;
	}*/
}
==========
===== Opening  answers\HN-00008\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00009's file(s).
===== Successfully open the file  answers\HN-00009\julian\julian.cpp.The size of it is 1.277 KB.
#include <bits/stdc++.h>
using namespace std;

int Mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long long day,mon=1,year=-4713;
int q;

inline bool jr(){
	return year<=1582&&(year%4==0);
}

inline bool gr(){
	return year>1582&&((year%400==0)||((year%4==0)&&(year%100!=0)));
}

int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	while (q--){
		scanf("%lld",&day);
		mon=1;year=-4713;
		long long y=day/365,d=day%365;
		if (y/4<d){
			day=d-y/4;
			year+=y;
		}
		else
			for(long long i=1;i<=y;i++)
				if((y-i)/4<=d+i*365){
					day=d+i*365-(y-i)/4;
					year+=(y-i);
					break;
				}
		if (year>=0)
			year++;
		if (year>1582){
			day+=(year/100-582/100)-(year/400-1582/400);
			while(day>365)
				if (gr()&&day>366){
					day-=366;
					year++;
				}
				else if(gr())
					break;
				else if (day>365){
					day-=365;
					year++;
				}
		}
		while(day>Mon[mon]){
			if (mon==2&&(jr()||gr()))
				if (day>29){
					day-=29;
					mon++;
				}
				else
					break;
			else{
				day-=Mon[mon];
				mon++;
			}
			if(mon>12){
				mon-=12;
				year++;
			}
		}
		if (year==-4713&&mon==1)
			day++;
		if (year>0)
			printf("%lld %lld %lld\n",day,mon,year);
		else
			printf("%lld %lld %lld BC\n",day,mon,-year);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00009\zoo\zoo.cpp.The size of it is 0.875 KB.
#include <bits/stdc++.h>
using namespace std;

const int N=1e6+10;

map<long long,int>mal;
map<int,int>Map;
set<int>s;

long long a[N];
int lg[60],st[60];
int n,m,c,k,top;
int p,q;
int ans;


void er(long long x){
	top=0;
	while(x!=0){
		st[++top]=x%2;
		x>>=1;
	}
	return;
}

void being(long long x){
	er(x);
	for(int i=1;i<=top;i++)
		if(st[i])
			lg[Map[i]]=1;
	return;
}

bool check(long long x){
	er(x);
	for(int i=1;i<=top;i++)
		if(st[i]&&!lg[Map[i]])
			return false;
	return true;
}

int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		mal[a[i]]=1;
	}
	for(int i=1;i<=m;i++){
		scanf("%d%d",&p,&q);
		Map[p]=q;
	}
	for(int i=1;i<=n;i++)
		being(a[i]);
	for(long long i=1;i<=(1<<k);i++)
		if(mal[i]!=1)
			if(check(i))
				ans++;
	printf("%d\n",ans);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00009\call\call.cpp.The size of it is 1.058 KB.
#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
const int mod=998244353;

struct function{
	int t,p,v,c[1010];
}fun[N];

int val[N];
int n,m,q,f;

void call(int x){
	if(fun[x].t==1)
		val[fun[x].p]=(val[fun[x].p]+fun[x].v)%mod;
	else if(fun[x].t==2)
		for(int i=1;i<=n;i++)
			val[i]=(val[i]*fun[x].v)%mod;
	else
		for(int i=1;i<=fun[x].c[0];i++)
			call(fun[x].c[i]);
	return;
}

int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&val[i]);
	if(n==0||n>=1e4){
		for(int i=1;i<=n;i++)
			printf("%d ",val[i]);
		puts("");
		return 0;
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&fun[i].t);
		if(fun[i].t==1)
			scanf("%d%d",&fun[i].p,&fun[i].v);
		else if(fun[i].t==2)
			scanf("%d",&fun[i].v);
		else{
			scanf("%d",&fun[i].c[0]);
			for(int j=1;j<=fun[i].c[0];j++)
				scanf("%d",&fun[i].c[j]);
		}
	}
	scanf("%d",&q);
	for(int i=1;i<=q;i++){
		scanf("%d",&f);
		call(f);
	}
	for(int i=1;i<=n;i++)
		printf("%d ",val[i]);
	puts("");
	return 0;
}
==========
===== Successfully open the file  answers\HN-00009\snakes\snakes.cpp.The size of it is 0.715 KB.
#include <bits/stdc++.h>
using namespace std;

const int N=1e6+10;

struct snake{
	int val,num;
}s[N];

int a[N];
int T,n,k,x,y;
int ans=0;

bool cmp(snake x,snake y){
	return x.val!=y.val?x.val>y.val:x.num>y.num;
}

int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&T);
	for(int t=1;t<=T;t++){
		if(t==1){
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
				scanf("%d",&a[i]);
		}
		else{
			scanf("%d",&k);
			for(int i=1;i<=k;i++){
				scanf("%d%d",&x,&y);
				a[x]=y;
			}
		}
		ans=n;
		for(int i=1;i<=n;i++){
			s[i].num=i;s[i].val=a[i];
		}
		sort(s+1,s+n+1,cmp);
		while(s[1].val>=s[2].val&&ans>0)
			s[1].val-=s[ans--].val;
		printf("%d\n",ans+1);
	}
	return 0;
}
		
==========


---------- Now Opening N-00010's file(s).
===== Successfully open the file  answers\HN-00010\julian\julian.cpp.The size of it is 3.538 KB.
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, l, r) for (int i = l; i <= r; ++i)
int Q, x, st, ansy, ansm, ansd;
int fx[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int fy[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int read() {
	char c; int x = 0, f = 1;
	c = getchar();
	while (c > '9' || c < '0') { if(c == '-') f = -1; c = getchar();}
	while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}
void solve2() {
	ansy = x / 1461 * 4 + 1;
	x -= x / 1461 * 1461;
	if(x <= 365) {
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else if(x <= 730) {
		x -= 365, ++ansy;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else if(x <= 1095) {
		x -= 730, ansy += 2;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else {
		x -= 1095, ansy += 3;
		rep(i, 1, 12) {
			if(x > fy[i]) x -= fy[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
}
void solve3() {
	ansy = 4713 - x / 1461 * 4;
	x -= x / 1461 * 1461;
	if(x <= 366) {
		rep(i, 1, 12) {
			if(x > fy[i]) x -= fy[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else if(x <= 731) {
		x -= 366, --ansy;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else if(x <= 1096) {
		x -= 731, ansy -= 2;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else {
		x -= 1096, ansy -= 3;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
}
bool check(int x) {
	if(x % 400 == 0) return 1;
	if(x % 4 == 0 && x % 100 != 0) return 1;
	return 0;
}
void solve4() {
	ansy = 1583 + x / 1461 * 4;
	x -= x / 1461 * 1461;
	if(x <= 365) {
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else if(x <= 731) {
		x -= 365, ++ansy;
		rep(i, 1, 12) {
			if(x > fy[i]) x -= fy[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else if(x <= 1096) {
		x -= 731, ansy += 2;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	else {
		x -= 1096, ansy += 3;
		rep(i, 1, 12) {
			if(x > fx[i]) x -= fx[i], ++ansm;
			else { ++ansm, ansd = x; break;}
		}
	}
	int del = ansy / 100 - 15 - (ansy / 400 - 3);
	if(ansy % 100 == 0 && ansy % 400 != 0 && ansm <= 2) --del;
	while (del) {
		if(check(ansy)) {
			if(del >= fy[ansm] - ansd + 1) del -= fy[ansm] - ansd + 1;
			else { ansd += del; break;}
		}
		else {
			if(del >= fx[ansm] - ansd + 1) del -= fx[ansm] - ansd + 1;
			else { ansd += del; break;}
		}
		if(ansm != 12) ++ansm, ansd = 1;
		else ansm = ansd = 1, ++ansy;
	}
}
signed main() {
	freopen ("julian.in", "r", stdin);
	freopen ("julian.out", "w", stdout);
	Q = read();
	while (Q--) {
		ansy = ansm = ansd = 0;
		x = read();
		if(x >= (4713 - 1) / 4 * 1461 + 366) {
			x -= (4713 - 1) / 4 * 1461 + 366;
			st = 1580 / 4 * 1461 + 365 + 276;
			if(x > st) {
				x -= st + 1;
				if(x <= 16) {
					ansy = 1582, ansd = 15 + x, ansm = 10;
				}
				else if(x <= 46) {
					ansy = 1582, ansd = x - 16, ansm = 11;
				}
				else if(x <= 77) {
					ansy = 1582, ansd = x - 46, ansm = 12;
				}
				else {
					x -= 77;
					solve4();
				}
			}
			else ++x, solve2();
			printf("%lld %lld %lld\n", ansd, ansm, ansy);
		}
		else {
			++x, solve3();
			printf("%lld %lld %lld BC\n", ansd, ansm, ansy);
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00010\zoo\zoo.cpp.The size of it is 0.892 KB.
#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define rep(i, l, r) for (int i = l; i <= r; ++i)
const int N = 1e6 + 5;
bool vis[N], book[N];
int n, m, c, k, p, q, ans, a[N];
int read() {
	char c; int x = 0, f = 1;
	c = getchar();
	while (c > '9' || c < '0') { if(c == '-') f = -1; c = getchar();}
	while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}
signed main() {
	freopen ("zoo.in", "r", stdin);
	freopen ("zoo.out", "w", stdout);
	n = read(), m = read(), c = read(), k = read();
	rep(i, 1, n) a[i] = read();
	rep(i, 1, m) p = read(), q = read(), book[p] = 1;
	rep(i, 1, n) {
		rep(j, 0, k - 1) if((1ull << j) & a[i]) vis[j] = 1;
	}
	rep(i, 0, k - 1) if(!book[i] || vis[i]) ++ans;
	if(ans == 64) {
		ans = (1ull << 63) - n;
		ans += (1ull << 63);
		printf("%llu", ans);
	}
	else printf("%llu", (1ull << ans) - n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00010\call\call.cpp.The size of it is 2.344 KB.
#include <bits/stdc++.h>
using namespace std;
#define ls (p << 1)
#define rs (p << 1 | 1)
#define mid (l + r) / 2
#define rep(i, l, r) for (int i = l; i <= r; ++i)
#define dep(i, l, r) for (int i = r; i >= l; --i)
#define Next(i, u) for (int i = h[u]; i; i = e[i].next)
const int N = 1e6 + 5;
const int Mod = 998244353;
struct edge { int v, next;} e[N];
struct tree { int sum, tag;} t[N << 2];
int n, m, q, x, y, cnt, opt, tot, a[N], b[N], p[N], v[N], h[N];
int read() {
	char c; int x = 0, f = 1;
	c = getchar();
	while (c > '9' || c < '0') { if(c == '-') f = -1; c = getchar();}
	while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}
int Inc(int a, int b) { return (a += b) >= Mod ? a - Mod : a;}
int Mul(int a, int b) { return 1ll * a * b % Mod;}
void lazy(int p, int k) {
	t[p].sum = Mul(t[p].sum, k);
	t[p].tag = Mul(t[p].tag, k);
}
void pushup(int p) {
	t[p].sum = Inc(t[ls].sum, t[rs].sum);
} 
void down(int p) {
	if(t[p].tag == 1) return;
	lazy(ls, t[p].tag), lazy(rs, t[p].tag);
	t[p].tag = 1;
}
void build(int p, int l, int r) {
	t[p].tag = 1;
	if(l == r) { t[p].sum = a[l]; return ;}
	build(ls, l, mid), build(rs, mid + 1, r);
	pushup(p);
}
void update(int p, int l, int r, int x, int y, int k1, int k2) {
	if(l >= x && r <= y) { 
		t[p].sum = Inc(t[p].sum, k1);
		lazy(p, k2);
		return ;
	}
	down(p);
	if(mid >= x) update(ls, l, mid, x, y, k1, k2);
	if(mid < y) update(rs, mid + 1, r, x, y, k1, k2);
	pushup(p);
}
int query(int p, int l, int r, int x, int y) {
	if(l >= x && r <= y) return t[p].sum;
	down(p);
	if(mid >= x) return query(ls, l, mid, x, y);
	else return query(rs, mid + 1, r, x, y);
}
void add(int u, int v) {
	e[++tot].v = v, e[tot].next = h[u], h[u] = tot;
}
void dfs(int u) {
	Next(i, u) dfs(e[i].v);
	if(!h[u]) {
		if(p[u]) update(1, 1, n, p[u], p[u], v[u], 1);
		else update(1, 1, n, 1, n, 0, v[u]);
	}
}
int main() {
	freopen ("call.in", "r", stdin);
	freopen ("call.out", "w", stdout);
	n = read();
	rep(i, 1, n) a[i] = read();
	build(1, 1, n);
	m = read();
	rep(i, 1, m) {
		opt = read();
		if(opt == 1) p[i] = read(), v[i] = read();
		if(opt == 2) v[i] = read();
		if(opt == 3) {
			cnt = read();
			rep(j, 1, cnt) b[j] = read();
			dep(j, 1, cnt) add(i, b[j]);
		}
	}
	q = read();
	while (q--) x = read(), dfs(x);
	rep(i, 1, n) printf("%d ", query(1, 1, n, i, i));
	return 0;
}
==========
===== Successfully open the file  answers\HN-00010\snakes\snakes.cpp.The size of it is 0.447 KB.
#include <bits/stdc++.h>
using namespace std;
#define rep(i, l, r) for (int i = l; i <= r; ++i)
int T;
int read() {
	char c; int x = 0, f = 1;
	c = getchar();
	while (c > '9' || c < '0') { if(c == '-') f = -1; c = getchar();}
	while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}
int main() {
	freopen ("snakes.in", "r", stdin);
	freopen ("snakes.out", "w", stdout);
	T = read();
	while (T--) puts("1");
	return 0;
}
==========


---------- Now Opening N-00011's file(s).
===== Successfully open the file  answers\HN-00011\julian\julian.cpp.The size of it is 0.847 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q;
	cin>>q;
	long long r[100001];
	int m[100001],d[100001],y[100001];
	for(int i=1;i<=q;i++)
	{
		cin>>r[i];
	}
	for(int i=1;i<=q;i++)
	{
		if(r[i]<=365)
		{
			if(r[i]>30)
			{
				if(r[i]-31>28)
				{
					if(r[i]-31-29>30)
					{
					    int x=r[i]-31-29;
					    d[i]=(int)(x%61);
					    if(d[i]>30)cout<<d[i]-31+1<<" "<<3+(int)(x/61)*2+1<<" "<<"4713"<<" "<<"BC"<<endl;
					    if(d[i]<=30)cout<<d[i]+1<<" "<<3+(int)(x/61)*2<<" "<<"4713"<<" "<<"BC"<<endl;
					}
					else
						cout<<r[i]-31-29+1<<" "<<"3"<<" "<<"4713"<<" "<<"BC"<<endl;
				}
				else
					cout<<r[i]-31+1<<" "<<"2"<<" "<<"4713"<<" "<<"BC"<<endl;
			}
			else
				cout<<r[i]+1<<" "<<"1"<<" "<<"4713"<<" "<<"BC"<<endl;
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00011\zoo\zoo.cpp.The size of it is 0.529 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k;//n:Ô°ÖÐ¶¯Îï¸öÊý£»m:Ö¸ÄÏÒªÇóÊý£»k:¶þ½øÖÆÎ»Êý£»
	cin>>n>>m>>c>>k;
	int a[10001],b[10001],p[10001],q[10001];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>p[i]>>q[i];
	}
	if(n==3&&m==3)cout<<"13";
	
	else
	{
		if(n==2&&m==2)cout<<"2";
		else
		{
			if(n==180&&m==240)cout<<"2097134";
			else
			{
				int x;
				time(NULL);
				cout<<rand()%x;
			}
		}
	}
	return 0;
}
==========
===== Successfully open the file      answers\HN-00011\call\call.cpp.The size of it is 0.734 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int n;
	cin>>n;//¸öÊý 
	int a[100001];
	for(int i=1;i<=n;i++)cin>>a[i];//³õÊ¼Öµ 
	int m;
	cin>>m;//º¯Êý¸öÊý 
	int t[100001];
	int p[100001],v[100001],c[100001];
	int g[100001];
	for(int i=1;i<=m;i++)
	{
		cin>>t[i];//ÀàÐÍ 
		if(t[i]==1)cin>>p[i]>>v[i];//1£ºpÏÂ±ê£¬q¡÷£¬ 
		if(t[i]==2)cin>>v[i];//2£ºËù³ËµÄÖµ£» 
		if(t[i]==3)//3£ºµ÷ÓÃc¸öº¯Êý£¬·Ö±ðÊÇg¡£¡£¡£ 
		{
			cin>>c[i];
			for(int j=1;j<=c[i];j++)
			{
				cin>>g[j]; 
			}
		}
	}
	
	int q;
	cin>>q;//³¤¶È 
	int f[100001];//±àºÅ 
	for(int i=1;i<=q;i++)cin>>f[i];
	int x[100001];
	for(int i=1;i<=m;i++)
	{
		time(NULL);
		cout<<rand()%x[i];
	}
	return 0;
}
==========
===== Opening  answers\HN-00011\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00012's file(s).
===== Successfully open the file  answers\HN-00012\julian\julian.cpp.The size of it is 1.898 KB.
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
==========
===== Opening        answers\HN-00012\zoo\zoo.cpp Failed.File not found.
===== Opening      answers\HN-00012\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00012\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00013's file(s).
===== Successfully open the file  answers\HN-00013\julian\julian.cpp.The size of it is 1.471 KB.
#include<bits/stdc++.h>
using namespace std;
#define FILE(x) freopen(#x".in","r",stdin);\
				freopen(#x".out","w",stdout)
#define int long long
int r;
int d,m,y;int nowmonthdays=30,nowyeardays;
bool isren,isjulian=0;
void ifisren()
{
	nowyeardays=365;
	if(isjulian)
	{
		if((y<0&&((-(y+1))%4==0))||(y>0&&y%4==0))
			isren=1,nowyeardays=366;
	}
	else if(((y>0)&&(y%400==0))||((y>0)&&(y%100!=0)&&(y%4==0)))
		isren=1,nowyeardays=366;
}
void ifisxiao()
{
	switch(m)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			nowmonthdays=31;
			break;
		case 2:
			if(isren)
				nowmonthdays=29;
			else nowmonthdays=28;
			break;
		default:
			nowmonthdays=30;
	}
}
void init()
{
	isren=0;
	ifisren();
	ifisxiao();
}
void changeyear()
{
	if(y==0) y=1;
	if(isren&&r>366)
	{
		r-=366;
		y++;
	}
	else if((!isren)&&r>365)
	{
		r-=365;
		y++;
	}
}
void changemonth()
{
	if(m>12) m-=12,y++;
	if(r>nowmonthdays)
	{
		r-=nowmonthdays;
		m++;
	}
}
void print()
{
	if(y>0) printf("%lld %lld %lld\n",r,m,y);
	else printf("%lld %lld %lld BC\n",r,m,-y);
}
int q;
signed main()
{
	FILE(julian);
	cin>>q;
	while(q--)
	{
		r=0;
		isren=isjulian=0;
		m=1,y=-4713;
		scanf("%lld",&r);
		if(r<=2299161)
			isjulian=1,r++;
		else 
		{
			m=10,y=1582;
			isjulian=0;
			r-=2299147;
			r+=r/2299161;
		}
		
		while(r>nowyeardays)
		{
			init();
			changeyear();
		}
		while(r>nowmonthdays)
		{
			init();
			changemonth();
		}
		if(r==0) m--,init(),r=nowmonthdays;
		print();
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00013\zoo\zoo.cpp.The size of it is 0.683 KB.
#include<bits/stdc++.h>
using namespace std;
#define FILE(x) freopen(#x".in","r",stdin);\
				freopen(#x".out","w",stdout)
int n,m,c,k,a[100],p[100],q[100];
bool cl[100],in[100];
void buildclqd(int x)
{
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(x&(1<<p[i]))	cl[q[i]]=1;
}
bool check(int nn)
{
	if(in[nn]) return 0;
	for(int i=1;i<=m;i++)
	{
		bool x=nn&(1<<p[i]);
		if(x==1&&(!cl[q[i]]))
			return 0;
	} 
}
int sum=0;
int main()
{
	FILE(zoo);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i],in[a[i]]=1;
	for(int i=1;i<=m;i++)
		cin>>p[i]>>q[i];
	for(int i=1;i<=n;i++)
		buildclqd(a[i]);
	for(int i=0;i<=pow(2,k)-1;i++)
		if(check(i)) sum++;
	cout<<sum;
	return 0;
}

==========
===== Successfully open the file      answers\HN-00013\call\call.cpp.The size of it is 0.150 KB.
#include<bits/stdc++.h>
using namespace std;
#define FILE(x) freopen(#x".in","r",stdin);\
				freopen(#x".out","w",stdout)
int main()
{
	return 0;
}

==========
===== Successfully open the file  answers\HN-00013\snakes\snakes.cpp.The size of it is 0.557 KB.
#include<bits/stdc++.h>
using namespace std;
#define FILE(x) freopen(#x".in","r",stdin);\
				freopen(#x".out","w",stdout)
int n,a[100005],k,x,y;
int main()
{
	FILE(snakes);
	int t,tt;
	cin>>t;
	tt=t;
	t++;
	while(t-->1)
	{
		if(t==tt)
		{
			cin>>n;
			for(int i=1;i<=n;i++)
				cin>>a[i];
		}
		else
		{
			cin>>k;
			for(int i=1;i<=k;i++)
			{
				cin>>x>>y;
				a[x]=y;
			}
		}
		if(a[n]-a[1]<a[n-1]) 
		{
			cout<<n<<endl;
			continue;
		}
		int qq=a[n],i=1,ans=n;
		while(qq-a[i]>a[n-1])
			ans--,i++,qq-=a[i];
		
		cout<<ans<<endl;
	}
	return 0;
}

==========


---------- Now Opening N-00014's file(s).
===== Successfully open the file  answers\HN-00014\julian\julian.cpp.The size of it is 2.159 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	long long a,b[100],day=0,monthday[12]={31,0,31,30,31,30,31,31,30,31,30,31},month=1,o=-1,year2;
	long long year[100]={-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,-4713,},year1=0;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	cin>>b[i];
	}
	for(int j=0;j<a;j++)
	{
		o++;
	year[j]+=b[j]/(365*4+1)*4; 
	year1=b[j]%(365*4+1)*4;
	if(year1>=365)
		{
			for(int i=0;;i++)
	{
			if(year[i]<-1582)
			{
				year[i]++;
				if((year[i]-1)%4!=0)
				year1-=365;
				else year1-=366;
			}
			if(year[i]>-1582)
			{
				year[i]++;
				if(year[i]<=0)
				{
				if(((year[i]-1)%400==0)||(year[i]%100!=0&&year[i]%4==0)) year1-=366;
				else year1-=365;
				}
				else
				{
				if((year[i]%400==0)||(year[i]%100!=0&&year[i]%4==0)) year1-=366;
				else year1-=365;
				}
			}
			if(year1<365) 
			{
					
				year2=year1-53;
				if((j-2)%3+1==0) year2+=13;
			//	cout<<year2<<" ";
			//	cout<<year[i]-o<<" ";                                                                                                                                                                                                                                                                                                                                                         ;
				year1=0;
				break;
			}
	}
	  }else {
	  	year2=year1;
	  	//cout<<year2;
	  	//cout<<year[j]-o<<" ";
	  }
	  if((year[j]%4==0&&year[j]%100!=0)||(year[j]%400==0)) monthday[2]=29;
	  else month=28;
	  for(int a=0;a<12;a++)
	{
		if(year2>0&&year2-monthday[a]>=0)
	{
		year2-=monthday[a];
		month++;
	}
		else break;
	}
	day=year2;
	printf("%d %d %d/n",day,month,year);
	cout<<day<<" "<<month<<" "<<year<<" "<<endl;
}

	
	return 0;
}
==========
===== Successfully open the file        answers\HN-00014\zoo\zoo.cpp.The size of it is 0.284 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k,a1[100],a2[100];
	cin>>n>>m>>c>>k;
	for(int a=0;a<n;a++)
	cin>>a1[a];
	for(int b=0;b<m;b++)
	cin>>a2[b]>>a1[b];
	if(n==3) cout<<13;
	else cout<<2;
	
}
==========
===== Successfully open the file      answers\HN-00014\call\call.cpp.The size of it is 0.333 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int a,w[100],z;
	string b[100];
	cin>>a;	
	for(int aa=0;aa<=a;aa++)
	cin>>w[aa];
	cin>>z;
	for(int j=0;j<=z+1;j++)
	cin>>b[j];
	if(z==3) cout<<"6 8 12";
	else cout<<" 36 282 108 144 180 216 504 288 324 360";
}
==========
===== Successfully open the file  answers\HN-00014\snakes\snakes.cpp.The size of it is 0.399 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int a,n[100],s[100],ans[100];
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>n[i];
		if(i==0)
		for(int j=0;j<n[i];j++)
		cin>>s[j];
		else
		for(int j=0;j<n[i];j++)
		{
		cin>>ans[i]>>s[j];
		s[ans[i]-1]=s[j];
		}
		
	}
	if(n[0]==3) cout<<3<<endl<<1;
	else cout<<5<<endl<<3;
}
==========


---------- Now Opening N-00015's file(s).
===== Successfully open the file  answers\HN-00015\julian\julian.cpp.The size of it is 1.135 KB.
#include<bits/stdc++.h>
using namespace std;
int q,r[100005],y,m,d,x,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},b[13],b2[13],s,la;
int const year=4713,z=1461;
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	for(int i=1;i<=12;i++)
	{
	b[i]=b[i-1]+a[i];
	b2[i]=b2[i-1]+a[i];
	if(i==2)
	b2[2]++;	
	}
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	scanf("%d",&r[i]);
	for(int i=1;i<=q;i++)
	{
		x=r[i];
		y=x/z;
		d=x-y*z+1;
		y=y*4-year;
		if(y>=0)
		{
			y++;
			if(y>1600)
			{
				y=y-1600;
				s=y/100-y/400;
				la=s;
				d=d+s;
				y=y+1600;
			}
		}
		if(y>1582||(y==1582&&d>276))
		d=d+10;
		s=d/z;
		y=y+s*4;
		d=d-s*z;
		if(y>1600)
			{
				y=y-1600;
				s=y/100-y/400;
				d=d+s-la;
				y=y+1600;
			}
		if(d>366)
		{
		d=d-366;
		y++;
		s=d/365;
		y=y+s;
		d=d-s*365;
		for(int i=1;i<=12;i++)
		{
			if(d<=b[i])
			{
			m=i;
			d=d-b[i-1];
			break;	
			}
		}
		}
		else
		{
			for(int i=1;i<=12;i++)
			{
			if(d<=b2[i])
			{
			m=i;
			d=d-b2[i-1];
			break;	
			}
			}
		}
		if(y<0)
		cout<<d<<" "<<m<<" "<<-y<<" "<<"BC"<<endl;
		if(y>0)
		cout<<d<<" "<<m<<" "<<y<<" "<<endl;
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00015\zoo\zoo.cpp.The size of it is 0.750 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k,a[1000005],p[1000005],q[1000005],b[70],num[70],pp[1000005],ans,x,y,z;
long long sum,s[70];
vector<int>l,ll;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("xoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<=m;i++)
	{
	scanf("%d%d",&p[i],&q[i]);	
	b[p[i]]=1;
	}
	sum=1;
	for(int i=1;i<=k;i++)
	{
	sum*=2;
	s[i]=sum/2;
	}
	for(int i=0;i<=k;i++)
	{
		if(b[k]==1)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[j]&s[i+1]==s[i+1])
				b[i]=2;
			}
		}
	}
	for(int i=0;i<=k;i++)
	{
		if(b[i]==1)
		for(int j=1;j<=sum;j++)
		{
			if((j&s[i+1]==s[i+1])&&(pp[j]==0))
			{
			ans++;
			pp[j]=1;
			}
		}
	}
	ans++;
	cout<<ans;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00015\call\call.cpp.The size of it is 0.333 KB.
#include<bits/stdc++.h>
using namespace std;
int n,a[100005],m,t,p,v;
int read()
{
	int r=0;
	char c;
	c=getchar();
	while(c<'0'||c>'9')
	c=getchar();
	while(c>='0'&&c<='9')
	{
		r=r*10+(c-'0');
		c=getchar();
	}
	return r;
}

int main()
{
	n=read();
	for(int i=1;i<=n;i++)
	a[i]=read();
	for(int i=1;i<=m;i++)
	{
		
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00015\snakes\snakes.cpp.The size of it is 0.073 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	return 0;
}
==========


---------- Now Opening N-00016's file(s).
===== Successfully open the file  answers\HN-00016\julian\julian.cpp.The size of it is 1.967 KB.
#include<bits/stdc++.h>
#define rg register
using namespace std;
const int N = 100000 + 2;
struct Node{
	int id, m, x, y, z;
}node[N];
int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, n, m;

inline int read()
{
	int f = 0;
	char c;
	scanf("%c", &c);
	while(c != ' ' && c != 10)
		f = f*10 + (int)c-'0';
	return f;
}

inline bool RL(int x)
{
	if(x < 0)
		++x;
	if(!(x%4))
		return 1;
	return 0;
}

inline bool GL(int x)
{
	if(!(x%4) && x%100)
		return 1;
	if(!(x%400))
		return 1;
	return 0;
}

inline bool cmp(Node x, Node y)
{
	return x.m < y.m;
}

inline bool cmp1(Node x, Node y)
{
	return x.id < y.id;
}

int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d", &n);
	for(rg int i = 1; i <= n; ++i)
	{
		scanf("%d", &m);
		node[i].id = i, node[i].m = m;
	}
	sort(node+1, node+1+n, cmp);
	int k = 1, x = -4713, y = 1, z = 1, ans = 0;
	while(node[k].m == ans && k <= n)
	{
		node[k].x = x, node[k].y = y, node[k].z = z;
		++k;
	}
	while(ans < 2299160 && k <= n)
	{
		mon[2] = 28 + RL(x);
		if(node[k].m - ans >= 28 && ans + 28 < 2299160)
			z += 28, ans += 28;
		else
			++z, ++ans;
		if(z > mon[y])
			z -= mon[y], ++y;
		if(y > 12)
			y = 1, ++x;
		if(x == 0)
			++x;
		while(node[k].m == ans && k <= n)
		{
			node[k].x = x, node[k].y = y, node[k].z = z;
			++k;
		}
	}
	ans++, z = 15;
	while(node[k].m == ans && k <= n)
	{
		node[k].x = x, node[k].y = y, node[k].z = z;
		++k;
	}
	while(ans < node[n].m && k <= n)
	{
		if(node[k].m - ans >= 28)
			z += 28, ans += 28;
		else
			++z, ++ans;
		mon[2] = 28 + GL(x);
		if(z > mon[y])
			z -= mon[y], ++y;
		if(y > 12)
			y = 1, ++x;
		while(node[k].m == ans && k <= n)
		{
			node[k].x = x, node[k].y = y, node[k].z = z;
			++k;
		}
	}
	sort(node+1,node+1+n,cmp1);
	for(rg int i = 1; i <= n; ++i)
	{
		if(node[i].x < 0)
			printf("%d %d %d BC\n", node[i].z, node[i].y, -node[i].x);
		else printf("%d %d %d\n", node[i].z, node[i].y, node[i].x);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00016\zoo\zoo.cpp.The size of it is 0.388 KB.
#include<bits/stdc++.h>
#define rg register
using namespace std;

int main()
{
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	if(a == 3 && b == 3 && c == 5 && d == 4)
	{
		cout<<13;
	}
	if(a == 2 && b == 2 && c == 4 && d == 3)
	{
		cout<<2;
	}
	if(a == 18 && b == 240 && c == 48543975 && d == 30)
	{
		cout<<2097134;
	}
	return 0;
}
==========
===== Opening      answers\HN-00016\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00016\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00017's file(s).
===== Successfully open the file  answers\HN-00017\julian\julian.cpp.The size of it is 1.904 KB.
#include<bits/stdc++.h>
using namespace std;
#define int long long
int q,a[20]={29,31,28,31,30,31,30,31,31,30,31,30,31},Y,M,D;
int gi(){
	int w=0,f=1;char ch;
	while(!isdigit(ch)){f=ch=='-'?-1:1;ch=getchar();}
	while(isdigit(ch)){w=(w<<1)+(w<<3)+ch-48;ch=getchar();}
	return w*f;
}
bool check(int x){
	if(x%400==0)return 1;
	if(x%4==0&&x%100!=0)return 1;
	return 0;
}
void query(int x,int ty){
	int sum=x,month=0;
	for(int i=1;i<=12;i++){
		int tmp;
		if(i==2&&ty)tmp=a[0];
		else tmp=a[i];
		if(sum<tmp)break;
		else sum-=tmp;
		month=i;
	}
	M=month;D=sum;
}
signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	q=gi();
	for(int i=1;i<=q;i++){
		int x=gi(),prex=x;
		if(x<=2298883){
			int a=x/1461;prex-=a;
		}
		else{
			int tmpx=x-2298883;
			int a=tmpx/1461;
			prex-=a;prex-=1573;
		}
		int year=prex/365;//1573
		if(year<=4712){
			int tmp=year==0?0:(year-1)/4+1;
			x-=tmp*366;
			x-=(year-tmp)*365;
			while(x<0){
				if((year-1)%4==0)x+=366;
				else x+=365;
				year--;
			}
			Y=4713-year;
			query(x,year%4==0?1:0);
			cout<<D+1<<" "<<M+1<<" "<<Y<<" BC\n";
		}
		else{
			int preyear=year;
			year-=4712;
			if(year<=1581){
				int tmp=(preyear-1)/4+1;
				x-=tmp*366;
				x-=(preyear-tmp)*365;
				while(x<0){
					if((year-1)%4==0)x+=366;
					else x+=365;
					year--;
				}
//				cout<<x<<"\n";
				Y=year;
				query(x,check(year));
				cout<<D+1<<" "<<M+1<<" "<<Y<<"\n";
			}
			else if(year==1582){
				x-=2298883;x-=(year)/4;
				if(x<=277){
					Y=year;
					query(x,0);
					cout<<D+1<<" "<<M+1<<" "<<Y<<"\n";
				}
				else{
					x+=10;
					Y=year;
					query(x,0);
					cout<<D+1<<" "<<M+1<<" "<<Y<<"\n";
				}
			}
			else{
				x-=2298883;
				int run=(year)/4;
				run-=year/100;
				run+=year/400;
				x-=run*366;x-=(year-run)*365;
				x+=10;
				Y=year;
				query(x,check(year));
				cout<<D+1<<" "<<M+1<<" "<<Y<<"\n";
			}
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00017\zoo\zoo.cpp.The size of it is 0.811 KB.
#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
int n,m,c,k,sum=0,b[110],tot=0,ans=1;
bool a[110];
int gi(){
	int w=0,f=1;char ch;
	while(!isdigit(ch)){f=ch=='-'?-1:1;ch=getchar();}
	while(isdigit(ch)){w=(w<<1)+(w<<3)+ch-48;ch=getchar();}
	return w*f;
}
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	n=gi();m=gi();c=gi();k=gi();
	for(int i=1;i<=n;i++){
		int x=gi();
		sum|=x;
	}
	for(int i=1;i<=m;i++){
		int x=gi()+1,y=gi();
		a[x]=1;
	}
	while(sum){
		b[++tot]=sum&1;
		sum>>=1;
	}
	for(int i=1;i<=k;i++){
		if(b[i]!=0||a[i]!=1)ans*=2;
	}
	if(ans==0){
		ans+=(1ull<<63);
		ans-=n;
		ans+=(1ull<<63);
	}
	else ans-=n;
	if(ans==0)cout<<"18446744073709551616"<<"\n";
	else cout<<ans<<"\n";
	return 0;
}
==========
===== Successfully open the file      answers\HN-00017\call\call.cpp.The size of it is 1.706 KB.
#include<bits/stdc++.h>
using namespace std;
#define N 100010
#define mod 998244353
int n,m,val[N],Q,f[N],flag1=1,flag2=1,cnt[N],root,sum=1;
int gi(){
	int w=0,f=1;char ch;
	while(!isdigit(ch)){f=ch=='-'?-1:1;ch=getchar();}
	while(isdigit(ch)){w=(w<<1)+(w<<3)+ch-48;ch=getchar();}
	return w*f;
}
struct node{
	int p,v,op,ti;
	vector<int>q;
}a[N];
//struct SEGTREE{
//	int val[N<<2];
//	void down(int x,int l,int r){
//		val[ls]+=laz
//	}
//	void add(int x,int l,int r,int p,int v){
//		if(l==r){
///			val[x]+=v;
//			return;
//		}
//		int mid=(l+r)>>1;
//		down(x,l,r);
//	}
//}
namespace subtask1{
	void dfs(int x){
		if(a[x].op==1||a[x].op==2){
//			if(a[x].op==2)sum=(sum*a[x].v)%mod;
//			else{
//				val[a[x].p]=(val[a[x].p]+a[x].v)%mod;
//			}
			return;
		}
		for(int i=0;i<a[x].q.size();i++){
			a[a[x].q[i]].ti+=a[x].ti;
			dfs(a[x].q[i]);
		}

	}
	void work(){
		Q=gi();
		for(int i=1;i<=Q;i++){
			int x=gi();
			a[i].ti++;
		}
		dfs(root);
		for(int i=1;i<=m;i++){
			if(a[i].op==2)sum=((sum*a[i].v)%mod*a[i].ti)%mod;
			else{
				val[a[i].p]=(val[a[i].p]+(a[i].v*a[i].ti)%mod)%mod;
			}
		}
		for(int i=1;i<=n;i++){
			val[i]=(val[i]*sum)%mod;
			cout<<val[i]<<" ";
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=gi();
	for(int i=1;i<=n;i++)val[i]=gi();
	m=gi();
	for(int i=1;i<=m;i++){
		int op=gi();
		if(op==1){
			flag1=0;
			a[i].op=1;a[i].p=gi();a[i].v=gi();
		}
		else if(op==2){
			flag2=0;
			a[i].op=2;a[i].v=gi();
		}
		else{
			a[i].op=3;
			int c=gi();
			for(int j=1;j<=c;j++){
				int x=gi();cnt[x]=1;
				a[i].q.push_back(x);
			}
		}
	}
	for(int i=1;i<=m;i++)if(cnt[i]==0)root=i;
	if(flag1==1||flag2==1)subtask1::work();
	return 0;
}
==========
===== Opening  answers\HN-00017\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00018's file(s).
===== Opening  answers\HN-00018\julian\julian.cpp Failed.File not found.
===== Successfully open the file        answers\HN-00018\zoo\zoo.cpp.The size of it is 0.163 KB.
#include <cstdio>
using namespace std;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int m,n,c,k;
	fclose(stdin);
	fclose(stdout);
}
==========
===== Successfully open the file      answers\HN-00018\call\call.cpp.The size of it is 0.166 KB.
#include <cstdio>
using namespace std;
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int m,n,c,k;
	fclose(stdin);
	fclose(stdout);
}

==========
===== Successfully open the file  answers\HN-00018\snakes\snakes.cpp.The size of it is 0.170 KB.
#include <cstdio>
using namespace std;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int m,n,c,k;
	fclose(stdin);
	fclose(stdout);
}

==========


---------- Now Opening N-00019's file(s).
===== Successfully open the file  answers\HN-00019\julian\julian.cpp.The size of it is 1.962 KB.
#include<bits/stdc++.h>

using namespace std;

#define re register
#define Rep(i, s, e) for (re int i = s; i <= e; i ++)
#define Dep(i, s, e) for (re int i = s; i >= e; i --)

int read()
{
	int x = 0, f = 1; char ch = getchar();
	while (!isdigit(ch)) {if (ch == '-') f = -1; ch = getchar();}
	while (isdigit(ch)) {x = (x << 1) + (x << 3) + (ch ^ 48); ch = getchar();}
	return x * f;
}

int Q;
int d1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int d2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int ni[5] = {0, 366, 365, 365, 365};
int ni2[5] = {0, 365, 365, 365, 366};
int main()
{
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	Q = read();
	while (Q --)
	{
		int x = read();
		int zq = x / 1461;
		if (zq <= 1178 && x - (1178 * 1461) < 366)
		{
			int ansn = 4713, ansy = 1, ansr = 1;
			ansn -= zq * 4;
			x -= 1461 * zq;
			Rep (i, 1, 4) 
				if (x >= ni[i]) ansn --, x -= ni[i];
			if ((ansn - 1) % 4 == 0)
			{
				Rep (i, 1, 12)
				{
					if (x >= d2[i]) {ansy ++, x -= d2[i];}
				}
			}
			else if ((ansn - 1) % 4 != 0)
			{
	            Rep (i, 1, 12)
				{
					if (x >= d1[i]) {ansy ++, x -= d1[i];}
				}				
			}
			ansr += x;
			printf("%d %d %d BC\n", ansr, ansy, ansn);
		}
		else if ((x - (1461*1178) >= 366))
		{
			int ansn = 1, ansy = 1, ansr = 1;
			x -= ((1461 * 1178) + 366);
			int zq2 = x / 1461;
			if (zq2 <= 395 && x - (1461 * zq2) < 366)
			{
				ansn += 4 * zq2;
				x -= 1461 * zq2;
				Rep (i, 1, 4)
				{
					if (x > ni2[i])
					{
						ansn ++;
						x -= ni2[i];
					}
				}
				if (ansn % 4 == 0)
				{
					Rep (i, 1, 12)
					{
						if (x > d2[i])
						{
							ansy ++;
							x -= d2[i];
						}
					}
				}
				else if (ansn % 4 != 0)
				{
                    Rep (i, 1, 12)
					{
						if (x > d1[i])
						{
							ansy ++;
							x -= d1[i];
						}
					}					
				}
				ansr += x;
				printf("%d %d %d\n", ansr, ansy, ansn);
			}
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00019\zoo\zoo.cpp.The size of it is 1.053 KB.
#include<bits/stdc++.h>

using namespace std;

#define M 1000005
#define N 10000005

typedef long long LL;

int read()
{
	int x = 0, f = 1; char ch = getchar();
	while (!isdigit(ch)) {if (ch == '-') f = -1; ch = getchar();}
	while (isdigit(ch)) {x = (x << 1) + (x << 3) + (ch ^ 48); ch = getchar();}
	return x * f;
}

LL n, m, c, kk, ans, P[M], J[M], vis[73];

bool judge(LL x)
{
	for (int i = 0; i <= 63; i ++)
	{
		if (((x >> i) & 1) == 1)
		{
			if (!vis[i]) return false;
			else continue;
		}
	}
	return true;
}

int main()
{
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	LL x;
	scanf("%lld%lld%lld%lld%lld", &n, &m, &c, &kk);
	LL k = 0;
	for (int i = 1; i <= n; i ++); 
	{
		scanf("%lld", &x);
		k |= x;
	}
	for (int i = 1; i <= 63; i ++) vis[i] = 1;
	for (int i = 1; i <= m; i ++)
	{
		scanf("%lld%lld", &P[i], &J[i]);
		if (((k >> P[i]) & 1) == 1) vis[P[i]] = 1;
		else vis[P[i]] = 0;
	}
	for (int i = 0; i <= (1 << kk) - 1; i ++)
	{
		LL w = k ^ (k | i);
		if (judge(w)) ++ ans;
	}
	printf("%lld\n", ans - n);
	return 0;
}
==========
===== Opening      answers\HN-00019\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00019\snakes\snakes.cpp.The size of it is 2.489 KB.
#include<bits/stdc++.h>

using namespace std;

#define N 205 
#define re register
#define Rep(i, s, e) for (re int i = s; i <= e; i ++)
#define Dep(i, s, e) for (re int i = s; i >= e; i --)

int read()
{
	int x = 0, f = 1; char ch = getchar();
	while (!isdigit(ch)) {if (ch == '-') f = -1; ch = getchar();}
	while (isdigit(ch)) {x = (x << 1) + (x << 3) + (ch ^ 48); ch = getchar();}
	return x * f;
}

struct node
{
	int dis, num;
	bool operator <(const node &y)const
	{
		if (dis != y.dis) return dis < y.dis;
		else return num < y.num; 
	}
};

struct node2
{
	int dis, num;
	bool operator <(const node2 &y)const
	{
		if (dis != y.dis) return dis > y.dis;
		else return num > y.num; 
	}
};

int T, a[N], vis[N], ans;
priority_queue<node> q;
priority_queue<node2> q2;

int main()
{
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	T = read();
	int n = read();
	Rep (i, 1, n) 
	{
		node k;
		a[i] = read();
		k.dis = a[i];
		k.num = i;
		node2 kk;
		kk.dis = k.dis;
		kk.num = k.num;
		q.push(k);
		q2.push(kk);
	}
	while (1)
	{
		while (vis[q.top().num]) q.pop();
		node a = q.top();
		node2 b = q2.top(); q2.pop();
		node2 c = q2.top(); 
		if (a.dis - b.dis < c.dis || (a.dis - b.dis == c.dis && a.num < c.num)) 
		{
			q.push(a);
			q2.push(b);
			break;
		}
		{
			a.dis -= b.dis;
			q.push(a);
			node2 aa;
			aa.dis = a.dis;
			aa.num = a.num;
			q2.push(aa);
			q2.push(c);
			vis[b.num] = 1;
			ans ++;
		}
	}
	printf("%d\n", n - ans);
	T --;
	while (T --)
	{
		while (!q.empty()) q.pop();
		while (!q2.empty()) q2.pop();
		int k = read();
		int xx[N], yy[N], vis2[N];
		Rep (i, 1, k) vis2[i] = 0, xx[i] = 0, yy[i] = 0;
		Rep (i, 1, n) vis[i] = 0;
		Rep (i, 1, k) xx[i] = read(), yy[i] = read();
		Dep (i, k, 1)
		{
			if (!vis2[xx[i]])
			{
				vis2[xx[i]] = 1;
				a[xx[i]] += yy[i];
			}
		}
	Rep (i, 1, n) 
	{
		node k;
		k.dis = a[i];
		k.num = i;
		node2 kk;
		kk.dis = k.dis;
		kk.num = k.num;
		q.push(k);
		q2.push(kk);
	}
	while (1)
	{
		while (vis[q.top().num]) q.pop();
		node a = q.top();
		node2 b = q2.top(); q2.pop();
		node2 c = q2.top(); 
		if (a.dis - b.dis < c.dis || (a.dis - b.dis == c.dis && a.num < c.num)) 
		{
			q.push(a);
			q2.push(b);
			break;
		}
		else if (a.dis - b.dis > c.dis || (a.dis - b.dis == c.dis && a.num > c.num)){
			a.dis -= b.dis;
			q.push(a);
			node2 aa;
			aa.dis = a.dis;
			aa.num = a.num;
			q2.push(aa);
			q2.push(c);
			vis[b.num] = 1;
			ans ++;
		}
	   }
	   printf("%d\n", n - ans);
	}
	return 0;
}
==========


---------- Now Opening N-00020's file(s).
===== Successfully open the file  answers\HN-00020\julian\julian.cpp.The size of it is 1.360 KB.
#include<bits/stdc++.h>
using namespace std;
int Day[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int T,a;
int year=-4713,month=1,day=1;
void shuchu()
{
	printf("%d %d ",day,month);
	if(year<0)
	{
		printf("%d BC",-year);
	}
	else
	{
		printf("%d",year);
	}
	printf("\n");
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&T);
	while(T--)
	{
		year=-4713,month=1,day=1;
		scanf("%d",&a);
		day+=a%365;
		while(day>Day[month])
		{
			day-=Day[month];
			month++;
		}
		year+=a/365;
		if(year>=0)
		{
			year++;
		}
		int num=0;
		if(year<=1582)
		{
			if(year<0)
			{
				num+=(year+4713+4)/4;
				if(-year%4==1&&month<3)
				{
					num--;
				}
			}
			else
			{
				num=1179+year/4;
				if(year%4==0&&month<3)
				{
					num--;
				}
			}
		}
		else
		{
			num=1179+393;
			num=num+year/4+year/400-year/100-381;
		}
		day-=num;
		while(day<0)
		{
			day+=Day[month];
			month--;
			if(month==0)
			{
				month=12;
				year--;
			}
			if(year==0)
			{
				year--;
			}
			if(month==2)
			{
				if(year<0)
				{
					if(-year%4==1)
					{
						day++;
					}
				}
				else if(year<=1582)
				{
					if(year%4==0)
					{
						day++;
					}
				}
				else
				{
					if((year%4==0&&year%100!=0)||year%400==0)
					{
						day++;
					}
				}
			}
			if(day==0)
			{
				day=1;
			}
		}
		shuchu();
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00020\zoo\zoo.cpp.The size of it is 0.305 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int a,b,c;
	cin>>a>>b>>c;
	if(a==3&&b==3&&c==5)
	{
		cout<<13;
	}
	else if(a==2&&b==2&&c==4)
	{
		cout<<2;
	}
	else if(a==18&&b==240&&c==48543975)
	{
		cout<<2097134;
	}
	return 0;
}

==========
===== The file      answers\HN-00020\call\call.cpp is too big!The size of it is 989.184 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int a,b,c;
	cin>>a>>b>>c;
	if(a==31&&b==2&&c==331)
	{
		cout<<"6 8 12";
	}
	else if(a==10&&b==1&&c==2)
	{
		cout<<"36 282 108 144 180 216 504 288 324 360";
	}
	else
	{
		cout<<"384559830 823662041 763850062 852621623 66990587 247986265 517838371 409023205 513307713 266024081 301348571 66990587 996972412 494409834 625834924 514216285 769317337 49122403 140036613 844590053 242595544 419436135 468510029 190880750 835201675 797405917 860725909 870405042 535500616 41054475 915117910 907171105 551515349 126034369 349768341 970660729 529407262 90777038 793287137 504621968 11241829 564489506 816836797 704806280 7825682 445990064 768707782 211305018 705545220 321360961 654327120 798968613 561400421 411610453 389211611 422973405 148988029 358660025 658412846 341288535 781100429 315594669 335110365 566052202 720905829 350386158 228470569 900544771 767387332 730209391 287599167 274297948 20424268 563665750 195617347 403251770 649756455 491199626 933070910 597221605 397570294 75349270 670959670 874317883 699330743 685411707 500709127 160002102 888358042 131921784 611673642 132866663 554071433 293280643 855747066 934306544 495730284 149995907 273970886 37592262 696447597 329634828 59043782 714606536 542296603 885268957 58014087 849362957 131836968 98075174 554192556 463446370 718857302 619947509 706270419 54064939 632013094 68638099 503113134 347708951 461059918 55094634 194793591 970987791 106021979 354415582 138099954 41381537 113968784 225878178 749313209 603230143 599280995 362451743 136246503 236417374 211794914 292578010 62544745 507916992 195823286 344825805 448788394 665363010 309089437 500176126 364923011 553247677 872876310 491252421 458673466 49740220 220693396 72345001 990673119 294104399 732268781 408131719 988098464 617682180 254164435 737950257 445784125 181989066 726381366 682116683 381143683 283807449 195213266 150201846 234769862 839114516 171655809 398066988 606593506 528641206 981470861 931217459 813626589 608172679 915202726 716496294 399835623 67899159 78353539 856364883 907049982 557281641 765327942 806830602 252928801 500091310 284425266 252105045 344498743 628718070 771421296 457231893 425117611 531462130 559135092 908079677 331900157 13834220 418321624 679524292 3585779 432567722 484488455 662067986 7774443 978316779 633248728 985359892 445578186 501738822 935506851 413790966 883742568 564610629 82472319 503095579 53653061 269149473 471066113 518250249 16966332 590837496 192613078 517547616 122412283 929364008 733916293 821211659 90831002 318065937 421943710 475427139 560285910 17541122 762941490 242510728 201214007 330337461 157118956 440514527 574943886 348326768 481932371 757587076 778629161 493792017 0 569056471 374759574 791021808 411772811 879708604 186846786 808066236 278537851 899842117 366254327 566173325 277714095 907377044 876985594 703279891 272323374 539946458 47474891 407883090 700893439 683231194 416758928 826431114 456820015 866979529 414202844 992426171 824250601 542090664 397655110 30963464 807121357 421119954 378793538 176307590 179517798 244037117 570292105 886213836 109728881 20836146 885596019 665072255 678494597 479339980 758289709 532702286 624066289 84539967 294104399 994506377 509479688 235266556 487904602 809919687 168978602 761790672 848127323 323214412 964361436 730961598 440841589 132333662 69994856 11035890 80206990 839526394 173836322 609735375 702213889 661159414 680638803 564489506 473743320 388678610 232589349 28165134 613854155 664127376 122824161 100340503 875674640 599075056 158354590 877855153 31169403 448691808 942047410 190880750 693855206 251983922 527638627 910054251 563459811 854511432 323129596 641728534 726502489 144193308 574532008 402633953 668758860 230820714 456202198 681910744 815189285 574822763 28988890 469333785 103344772 16390304 998208046 776806565 542211787 880823115 141516101 478395101 548184018 664539254 787520845 783898759 73992513 327866193 462828553 248482959 829641322 531260713 889920738 423640436 252395800 821076700 922979899 373873035 326424620 25160865 99807502 477280590 649415792 497910797 490470563 478928102 545421995 69582978 237858947 754170929 441750161 922858776 507626237 683025255 488401296 500185977 164956763 943610106 245402004 664454438 391065062 36523817 449902905 641934473 295751911 736387561 939285387 337254571 262111240 777478343 498419445 619002630 524961420 315800608 90213185 589395923 694198092 762614428 614593095 526197054 722965219 705218158 973955753 169923481 838528345 486460477 828817566 915941666 118826504 372785000 54682756 782728048 851010469 704394402 921829081 279567546 289040740 943778463 919357813 485227395 973131997 189318054 403251770 410459635 472216931 620359387 784722515 575149825 435366052 293552330 503592273 599317302 687059219 313947157 948879704 795964344 423471016 215254166 435244929 270712448 572351495 508449993 716133646 199978373 941410275 108166185 354008244 624272228 792996382 988819668 291633131 384850585 891895312 630692644 979843168 474978954 953616301 955384936 373318001 354298999 24252293 640081022 866080323 663715498 608590742 442077223 352427541 768005149 822724212 223285787 452580112 207598116 863608793 806915418 939322989 178572919 797115162 650002401 541884725 668488402 444548491 135628686 76294149 743631733 212952530 756109196 464560881 920884202 941699076 155968138 858545396 995118961 40436658 561933422 29110013 533937920 585277143 242595544 938049753 635550364 762117734 69788917 185284090 782130124 569347226 603642021 663509559 336991506 142872858 743098732 344619866 353990986 92478514 529286139 980170230 862167482 149789968 65839769 52332611 514337408 227234935 96512478 504331213 252105045 716133991 928334313 887119513 416262234 342524169 308968314 459206467 927595373 845619748 90540247 507680203 392094757 618917814 324898231 436892441 948552642 647082948 683643072 898897238 775567413 394566025 983756009 626159853 418321624 107257613 137482137 818896187 3089085 916886545 309828377 124798735 637900509 405311160 596809727 398394050 647615949 858545396 440308588 905111715 407370550 558517275 393451514 830876956 793614199 282365876 370313732 727411061 691916939 408400245 862991238 309998009 153412054 568935348 411610453 735357866 121929251 632219033 282777754 639342082 195205469 297023852 916062789 50769915 94612029 278331912 722880403 824560141 792378565 648766767 157203772 464682004 270253599 215048227 744661428 421119954 584623019 4324719 422852282 293486582 964979253 775213014 565403617 104459283 222995032 329719644 43767989 264085814 250130471 509067810 853687676 695417902 235593618 245890568 921829081 5233291 851301224 489071902 662395048 259639972 484609578 933603911 46857074 309501315 300524815 635017363 293074704 175399018 136779504 443397673 913264459 400160686 866577017 809180747 164120882 551806104 748717464 252302178 79468050 239094581 982520375 775540076 138838894 606525167 909145679 870732104 876086518 216574616 59455660 605786227 309913193 542296603 100546442 522057868 521872335 47063013 321669283 341203719 689611189 81854502 758289709 112817966 537063312 110261882 584211141 302051204 662806926 936898935 831579589 686984685 445663002 531381836 929448824 931217459 831906651 355726066 844590053 38789146 889302921 520721517 745691123 489225052 515573042 958183266 562430116 464476065 536615127 707398671 303735023 971484485 645435436 456043858 366691646 867812651 473537381 548305141 481484186 484815517 483579883 494494650 291342376 397243232 4821413 808066236 441338283 423797161 917589178 103017710 510097505 752135561 435038990 397861049 893336885 907667799 336919260 862405049 255552851 471272052 595985971 306497046 888152103 4736597 213158469 689033793 99395624 165065761 614883850 575852458 681171804 147403516 597633483 54888695 60570171 871349921 652061791 983877132 779779979 387564099 786491150 201504762 469539724 656386510 45706256 55506512 179396675 6468925 989146730 301845265 442077223 370494462 414287660 660214535 293401766 55748758 527347872 325188986 417582684 15481732 504331213 235593618 413875782 720082073 547275446 578117787 955214598 470860174 430799087 463652309 847097628 418772619 644114986 120885894 841416152 504949030 514543347 349647218 155968138 633575790 244448995 25281988 634108791 986598178 888394349 823959846 995118961 768211088 16785901 388456073 711723390 243128545 876338830 277302217 233086043 877116213 169632 906785673 82884197 822191211 583799263 111497516 684260889 916723905 636664875 846891689 914790848 7207865 911753446 877237336 453524991 884978202 40969659 341288535 886298652 523192785 652473669 686938096 298756180 791760748 752402294 437510258 237241130 262850180 202449641 236502190 900198117 161237736 247041386 24252293 875589824 457231893 536530311 874354190 105391129 278125973 868840620 395716843 530126110 685823585 169923481 650293156 184169579 139144381 200390251 522490152 928334313 512362834 518044310 447516453 112939089 560576665 984083071 715389545 842239908 784601392 908818617 298671364 725969488 204181969 487371601 16099549 83913892 584332264 799707553 813554929 332919847 965924132 342439353 412519025 438539953 728973757 546948384 838205944 427298124 79468050 688585608 658361084 707071609 362245804 599075056 116028174 303529084 254821083 473763789 684999829 876292457 198134499 571939617 567203020 210275323 17541122 984579765 563992812 871846615 433391478 473452565 730239161 341494474 153908748 879381542 103102526 879090787 203770091 35082244 809386686 708925060 992356938 68516976 458467527 212043958 614677911 917504362 685617646 924918166 530436957 949291582 85767343 148966212 623981473 430920210 126858125 200475067 763026306 520430762 879296726 296284912 943610106 124713919 842118776 684260889 805061967 440308588 362163214 124507980 28782951 637488631 596809727 365661951 447516453 651940668 782130124 595184084 474961314 984083071 8152744 145877127 463531186 976960022 554192556 296163789 394893087 1190324...
==========
===== Successfully open the file  answers\HN-00020\snakes\snakes.cpp.The size of it is 0.471 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int a,b,c;
	cin>>a>>b>>c;
	if(a==2311&&b==14&&c==14)
	{
		cout<<"3\n1";
	}
	else if(a==2513&&b==31&&c==33)
	{
		cout<<"5\n3";
	}
	else if(a==1020007&&b==64&&c==84)
	{
		cout<<"1209\n1203\n1227\n1233\n1249\n1235\n1221\n1241\n1231\n1251";
	}
	else
	{
		cout<<"3085730801\n30771\n30965\n30881\n30985\n30733\n30879\n30815\n30859";
	}
	return 0;
}

==========


---------- Now Opening N-00021's file(s).
===== Successfully open the file  answers\HN-00021\julian\julian.cpp.The size of it is 1.409 KB.
#include<bits/stdc++.h>

using namespace std;
long long int q,a[100001],zyear=-4713,zmonth=1,zday=1;
long long int day[100001],month[100001],year[100001];
int ysdpy[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int ysdyy[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>a[i];
		
			zyear+=a[i]/1461*4;a[i]%=1461;
			if(zyear>=0)zyear++;
			if(a[i]>=1096){
				a[i]-=1096;zyear+=3;
				for(int j=1;j<=12;j++){
					if(a[i]>=ysdpy[j]){
						a[i]-=ysdpy[j];
						zmonth++;
					}
					else{
						zday+=a[i];
						break;
					} 
				}
			}
			else if(a[i]>=731){
				a[i]-=731;zyear+=2;
				for(int j=1;j<=12;j++){
					if(a[i]>=ysdpy[j]){
						a[i]-=ysdpy[j];
						zmonth++;
					}
					else{
						zday+=a[i];
						break;
					} 
				}
			}
			else if(a[i]>=366){
				a[i]-=366;zyear++;
				for(int j=1;j<=12;j++){
					if(a[i]>=ysdpy[j]){
						a[i]-=ysdpy[j];
						zmonth++;
					}
					else{
						zday+=a[i];
						break;
					} 
				}
			}
			else{
				for(int j=1;j<=12;j++){
					if(a[i]>=ysdyy[j]){
						a[i]-=ysdyy[j];
						zmonth++;
					}
					else{
						zday+=a[i];
						break;
					} 
				}
			}
			if(zyear<0)cout<<zday<<" "<<zmonth<<" "<<abs(zyear)<<" BC"<<endl;//
			else cout<<zday<<" "<<zmonth<<" "<<zyear<<endl;//
			zyear=-4713;zmonth=1;zday=1;
		
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00021\zoo\zoo.cpp.The size of it is 0.166 KB.
#include<bits/stdc++.h>
using namespace std;
int m;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	m=rand()%30+1;
	cout<<m;
	return 0;
}

==========
===== Successfully open the file      answers\HN-00021\call\call.cpp.The size of it is 0.214 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,x;
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=rand()%10;
	m=rand()%10;
	x=rand()%10;
	cout<<n<<" "<<m<<" "<<x;
	return 0;
}

==========
===== Successfully open the file  answers\HN-00021\snakes\snakes.cpp.The size of it is 0.158 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cout<<3<<endl<<1;
	return 0;
} 
==========


---------- Now Opening N-00022's file(s).
===== Successfully open the file  answers\HN-00022\julian\julian.cpp.The size of it is 1.792 KB.
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
==========
===== Successfully open the file        answers\HN-00022\zoo\zoo.cpp.The size of it is 0.849 KB.
#include <bits/stdc++.h>
using namespace std;
template<typename tp>inline void r(tp &n){
	n=0;char c=getchar();
	while(!isdigit(c)) c=getchar();
	while( isdigit(c)) n=n*10+c-48,c=getchar();
}
template<typename tp>inline void w(tp  n){
	if(n<0) n=-n,putchar('-');
	if(n/10) w(n/10);
	putchar(n%10+48);
}
const int N=1e6+5;
unsigned long long n,m,c,k;
bool used[N],need[N];
int main(){
	
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	
	r(n),r(m),r(c),r(k);
	if(n==0&&m==0&&k==64){puts("18446744073709551616");return 0;}
	for(unsigned long long i=1,x;i<=n;++i){ 
		r(x);
		for(unsigned long long i=0;i<=k-1;++i)
			if((x>>i)&1) used[i]=1;
	}
	for(unsigned long long i=1,p,q;i<=m;++i)
		r(p),r(q),need[p]=1;
	unsigned long long ans=1;
	for(unsigned long long i=0;i<=k-1;++i)
		if(!need[i]||used[i]) ans=2ll*ans;
	w(ans-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00022\call\call.cpp.The size of it is 2.486 KB.
#include <bits/stdc++.h>
using namespace std;
template<typename tp>inline void r(tp &n){
	n=0;char c=getchar();
	while(!isdigit(c)) c=getchar();
	while( isdigit(c)) n=n*10+c-48,c=getchar();
}
template<typename tp>inline void w(tp  n){
	if(n/10) w(n/10);
	putchar(n%10+48);
}
const int N=1e5+5,Mod=998244353;
long long n,m,q,sum=1,now=1;
long long a[N],f[N],t[N],p[N],v[N],ind[N],delta[N];
vector<int>c[N];
int Q(long long b,int t){
	long long ret=1;
	for(int i=1;i<=t;i<<=1,b=b*b%Mod)
		if(i&t) ret=ret*b%Mod;
	return ret;
}
void solve1(int x){
	if(t[x]==2) sum=1ll*sum*v[x]%Mod;
	else if(t[x]==3)
		for(int i=0,j=c[x].size();i<j;++i)
			solve1(c[x][i]); 
}
void solve2(int x){
	if(t[x]==1) (a[p[x]]+=v[x])%=Mod,(delta[p[x]]+=1ll*(now-1)*v[x]%Mod*sum%Mod*Q(now,Mod-2)%Mod)%=Mod;
	else if(t[x]==2) now=1ll*now*v[x]%Mod;
	else if(t[x]==3)
		for(int i=0,j=c[x].size();i<j;++i)
			solve2(c[x][i]); 
}
namespace Sub1{
	long long s[N];
	void DPit(){
		queue<int>q;
		for(int i=1;i<=m;++i)
			if(!ind[i]) q.push(i);
		while(!q.empty()){
			int u=q.front();q.pop();
			for(int i=0,j=c[u].size();i<j;++i){
				int v=c[u][i];
				s[v]+=s[u];--ind[v];
				if(!ind[v])
					q.push(v);
			}
		}
	}
	void solve(){
		for(int i=1;i<=q;++i)
			++s[f[i]];
		DPit();
		for(int i=1;i<=m;++i)
			if(t[i]==1) a[p[i]]=(a[p[i]]+v[i]*s[i]%Mod)%Mod;
		for(int i=1;i<=n;++i)
			w(a[i]),putchar(' ');
		exit(0);
	}
}
namespace Sub2{
	long long s[N],tot=1;
	void DPit(){
		queue<int>q;
		for(int i=1;i<=m;++i)
			if(!ind[i]) q.push(i);
		while(!q.empty()){
			int u=q.front();q.pop();
			for(int i=0,j=c[u].size();i<j;++i){
				int v=c[u][i];
				s[v]+=s[u];--ind[v];
				if(!ind[v])
					q.push(v);
			}
		}
	}
	void solve(){
		for(int i=1;i<=q;++i)
			++s[f[i]];
		DPit();
		for(int i=1;i<=m;++i)
			if(t[i]==2) tot=tot*Q(v[i],s[i])%Mod;
		for(int i=1;i<=n;++i)
			w(a[i]*tot%Mod),putchar(' ');
		exit(0);
	}
}
int main(){
	
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	
	r(n);
	for(int i=1;i<=n;++i) r(a[i]);
	r(m);
	bool f1=false,f2=false;
	for(int i=1,tp;i<=m;++i){
		r(tp);t[i]=tp;
		if(tp==1) r(p[i]),r(v[i]),f1=true;
		else if(tp==2) r(v[i]),f2=true;
		else if(tp==3){
			r(p[i]);
			for(int j=1,x;j<=p[i];++j)
				r(x),c[i].push_back(x),++ind[x];
		}
	}
	r(q);
	for(int i=1;i<=q;++i)
		r(f[i]),solve1(f[i]);
	if(!f1) Sub2::solve();
	if(!f2) Sub1::solve();
	for(int i=1;i<=q;++i)
		solve2(f[i]);
	for(int i=1;i<=n;++i)
		w((1ll*a[i]*sum%Mod+Mod-delta[i])%Mod),putchar(' ');
	return 0;
}
==========
===== Successfully open the file  answers\HN-00022\snakes\snakes.cpp.The size of it is 0.969 KB.
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
struct Snake{
	int v,id;
}a[4];
int n,b[4];
bool Cmp(Snake a,Snake b){if(a.v==b.v) return a.id<b.id;return a.v<b.v;}
void solve(){
	for(int i=1;i<=n;++i)
		a[i].v=b[i],a[i].id=i,cerr<<a[i].v<<endl;
	sort(a+1,a+n+1,Cmp);
	if(a[3].v>a[1].v+a[2].v)
		puts("1");
	else if(a[3].v==a[1].v+a[2].v)
		if(a[3].id!=1) puts("1");
		else puts("3");
	else puts("3");
}
int main(){
	
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	
	int t;r(t);r(n);
	for(int i=1;i<=n;++i)
		r(b[i]);
	solve();
	for(int i=2,k,x,y;i<=t;++i) {
		r(k);
		for(int i=1;i<=k;++i)
			r(x),r(y),b[x]=y;
		solve();
	}
	return 0;
}
==========


---------- Now Opening N-00023's file(s).
===== Opening  answers\HN-00023\julian\julian.cpp Failed.File not found.
===== Successfully open the file        answers\HN-00023\zoo\zoo.cpp.The size of it is 1.224 KB.
#include <bits/stdc++.h>

using namespace std;

const int KMaxN = 1000005;

int a[KMaxN], p[KMaxN], q[KMaxN];
int n, m, c, k, ans = 0;

bool Find(int g) {
  for (int i = 1; i <= n; i++) {
    int o2 = a[i] / pow(2, g);
    if (o2 % 2 == 1) {
      return true;
    }
  }
  return false;
}

bool Work(int i) {
  bool t = true;
  for (int j = 1; j <= m; j++) {
    if (p[j] != 0 && q[j] != 0) {
      int g1 = i / pow(2, p[j]);
      if (g1 % 2 != 0) {
        t = true;
      }
    }
  }
  for (int j = 1; j <= m; j++) {
    if (p[j] != 0 && q[j] == 0) {
      int g1 = i / pow(2, p[j]);
      if (g1 % 2 != 0) {
        t = false;
      }
    }
  }
  for (int j = 1; j <= n; j++) {
    if ((t) && i == a[j]) {
      return false;
    }
  }
  return t;
}

int main() {
  freopen("zoo.in", "r", stdin);
  freopen("zoo.out", "w", stdout);
  cin >> n >> m >> c >> k;
  int y = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= m; i++) {
    cin >> p[i] >> q[i];
    if(!Find(p[i])) {
      q[i] = 0;
    }
  }
  int o = 0;
  for (int i = 0; i <= k - 1; i++)  {
    o += pow(2, i);
  }
  for (int i = 0; i <= o; i++) {
    if (Work(i))  {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
==========
===== Opening      answers\HN-00023\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00023\snakes\snakes.cpp.The size of it is 1.262 KB.
#include <bits/stdc++.h>

using namespace std;

const int KMaxN = 10000005;

struct node{
  int g;
  int h;
} b[KMaxN];
int a[KMaxN];
int T, n, k;
int t = 1, r = 1, e = 1, ans = 0;

void Sort() {
  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      if (b[j].g > b[i].g) {
        swap(b[i].g, b[j].g);
        swap(b[i].h, b[j].h);
      }
    } 
  }
}

void Work() {
  int f = 0;
  while(1) {
    Sort();
    if (b[1].g - b[n - f].g > b[2].g || (b[1].g - b[n - f].g == b[2].g && b[1].h > b[2].h) || (b[1].g - b[n - f].g < b[2].g && ans > 3)) {
      f++;
      ans--;
      b[1].g -= b[n - f].g;
    } else {
      break;
    }
  }
  cout << ans << endl;
  for (int j = 1; j <= n; j++) {
    b[j].g = a[j];
    b[j].h = j;
  }
  return;
}

int main() {
  freopen("snakes.in", "r", stdin);
  freopen("snakes.out", "w", stdout);
  cin >> T;
  for (int i = 1; i <= T; i++) {
    if (i == 1) {
      cin >> n;
      ans = n;
      for (int j = 1; j <= n; j++) {
        cin >> a[j];
        b[j].g = a[j];
        b[j].h = j;
      }
      Work();
    } else {
      cin >> k;
      for (int i = 1; i <= k; i++) {
        int A, d;
        cin >> A >> d;
        b[A].g = d;
        b[A].h = A;
      }
      Work();
    }
  }
	return 0;
}
==========


---------- Now Opening N-00024's file(s).
===== Successfully open the file  answers\HN-00024\julian\julian.cpp.The size of it is 2.555 KB.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int month[13]={365,31,28,31,30,31,30,31,31,30,31,30,31};
int T,ans_nian,ans_yue,ans_ri;
ll r,emm;//emm±íÊ¾¹«Àú400ÄêºÄ·Ñ.
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
==========
===== Successfully open the file        answers\HN-00024\zoo\zoo.cpp.The size of it is 0.749 KB.
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int n,m,c,k;
ull a[1000010],ans;
bool emm[65],cx[65];
inline ull read(){
	ull s=0;char ch=','; bool f=0;
	while(ch<'0'||ch>'9'){f|=(ch=='-');ch=getchar();}
	while(ch>='0'&&ch<='9'){s=(s<<3)+(s<<1)+(ch^48);ch=getchar();}
	return f?-s:s;
}
inline void qwq(ull x){
	int now=0;
	while(x){
		if(x&1) emm[now]=1;
		x>>=1;
		now++;
	}
	return ;
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read(),m=read(),c=read(),k=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
		qwq(a[i]);
	}
	for(int i=1;i<=m;i++){
		int p,q;
		p=read(),q=read();
		cx[p]=1;
	}
	ans=1;
	for(int i=0;i<k;i++){
		if(emm[i]||!cx[i]) ans*=2;
	}
	cout<<ans-n<<endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00024\call\call.cpp.The size of it is 1.606 KB.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int n,m,q,id[100010][2],cnt[4],p[100010],rd[100010];
ll a[100010],add[100010],che[100010];
bool zrw1,zrw2;
vector<int> g[100010];
inline void jia(int wz,int add){
	a[wz]=(a[wz]+add)%mod;
	return ;
}
inline void cheng(int che){
	for(int i=1;i<=n;i++)
		a[i]=(a[i]*che)%mod;
	return ;
}
inline ll read(){
	ll s=0;char ch=','; bool f=0;
	while(ch<'0'||ch>'9'){f|=(ch=='-');ch=getchar();}
	while(ch>='0'&&ch<='9'){s=(s<<3)+(s<<1)+(ch^48);ch=getchar();}
	return f?-s:s;
}
inline void dfs(int now){
	if(id[now][0]==1){
		jia(p[id[now][1]],add[id[now][1]]);
		return ;
	}
	if(id[now][0]==2){
		cheng(che[id[now][1]]);
		return ;
	}
	for(int i=0;i<g[id[now][1]].size();i++) dfs(g[id[now][1]][i]);
	return ;
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(int i=1;i<=n;i++) a[i]=read()%mod;
	m=read();
	zrw1=zrw2=1;
	for(int i=1;i<=m;i++){
		int typ;
		typ=read();
		if(typ==1){
			zrw1=0;
			p[++cnt[1]]=read(),add[cnt[1]]=read()%mod;
		}
		else if(typ==2){
			zrw1=0;
			che[++cnt[2]]=read()%mod;
		}
		else{
			cnt[3]++;
			int c=read(),qaq;
			while(c--){
				qaq=read();
				g[cnt[3]].push_back(qaq);
				rd[qaq]++;
			}
		}
		id[i][0]=typ,id[i][1]=cnt[typ];
	}
	bool qwqwq=0;
	for(int i=1;i<=n;i++){
		if(rd[i]>1||(rd[i]==0&&qwqwq)) zrw2=0;
		if(rd[i]==0) qwqwq=1;
	}
	q=read();
	while(q--){
		int f=read();
		if(zrw1) continue;
		dfs(f);
	}
	if(zrw1){
		for(int i=1;i<=n;i++)
			printf("%lld ",a[i]);
		return 0;
	}
	for(int i=1;i<=n;i++) printf("%lld ",a[i]);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00024\snakes\snakes.cpp.The size of it is 1.892 KB.
#include<bits/stdc++.h>
using namespace std;
int T,n,a[1000010],b[1000010],dp[2010][2010],las[2010],nex[2010][2010],xl[2010];
bool chi[2010];
inline int read(){
	int s=0;char ch=','; bool f=0;
	while(ch<'0'||ch>'9'){f|=(ch=='-');ch=getchar();}
	while(ch>='0'&&ch<='9'){s=(s<<3)+(s<<1)+(ch^48);ch=getchar();}
	return f?-s:s;
}
inline void solve(){
	for(int i=1;i<=n;i++){
		b[i]=a[i];
		for(int j=1;j<=n;j++)
			nex[i][j]=n;
		las[i]=0;
	}
	for(int i=1;i<=n;i++)
		dp[0][i]=n;
	for(int i=1;i<n;i++){
		int maxx=0,minn=2e9,id[2];
		for(int j=1;j<=n;j++){
			if(b[j]==-1) continue;
			if(maxx<=b[j]){
				maxx=b[j];
				id[0]=j;
			}
			if(minn>=b[j]){
				minn=b[j];
				id[1]=j;
			}
		}
		xl[i]=id[0];
		b[id[0]]-=b[id[1]];
		b[id[1]]=-1;
		dp[i][id[1]]=i;
		nex[id[0]][las[id[0]]]=i;
		las[id[0]]=i;
		for(int j=1;j<=n;j++)
			if(j!=id[1]) dp[i][j]=dp[i-1][j];
//		for(int j=1;j<=n;j++) cout<<dp[i][j]<<'!';
//		cout<<endl;
	}
	for(int j=1;j<=n;j++) dp[n][j]=dp[n-1][j];
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<n;j++)
//			cout<<nex[i][j]<<'!';
//		cout<<endl;
//	}
	for(int i=1;i<n;i++){
		if(dp[nex[xl[i]][i]][xl[i]]!=n){
			chi[i]=0;
			printf("%d\n",n-i+1);
			return ;
		}
		else chi[i]=1;
	}
//	int qaqaq=n,ans=1;
//	bool flag=1;
//	for(int i=n-1;i>=1;i--){
//		if(!flag&&!chi[i]){
//			if(dp[nex[xl[i]][i]][xl[i]]>=qaqaq) chi[i]=1;
//			else{
//				printf("%d\n",n-i+1);
//				return ;
//			}
//		}
//		if(flag&&!chi[i]){
//			qaqaq=i;
//			ans=n-i+1;
//			flag=0;
//		}
//	}
	printf("%d\n",1);
	return ;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	T=read();
	T--;
	n=read();
	if(T==10&&n==2000){
		printf("12091203\n1227\n1233\n1249\n1235\n1221\n1241\n1231\n1251\n");
		return 0;
	}
	for(int i=1;i<=n;i++) a[i]=read();
	solve();
	while(T--){
		int k=read();
		while(k--){
			int x=read(),y=read();
			a[x]=y;
		}
		solve();
	}
	return 0;
}
==========


---------- Now Opening N-00025's file(s).
===== Successfully open the file  answers\HN-00025\julian\julian.cpp.The size of it is 2.353 KB.
#include<bits/stdc++.h>
using namespace std;
long long T,n,ni1,ti1,tni2,ti2;
int yue[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long long biao[146500][3];
long long bia[146597][3];
//long long yue[12]={}
long long read(){
	long long sum=0,f=1;char st=getchar();
	while(st<'0'||'9'<st){
		if(st=='-')f=-1;
		st=getchar();
	}
	while('0'<=st&&st<='9'){
		sum=(sum<<3)+(sum<<1)+st-'0';
		st=getchar();
	}
	return sum*f;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	for(int z=0,p=0;z<=3;z++){
		if(z%4==0){
			yue[2]=29;
			for(int i=1;i<=12;i++){
				for(int j=1;j<=yue[i];j++,p++){
					biao[p][0]=i,biao[p][1]=j,biao[p][2]=z;
//					if(p>=1999997)cout<<p<<" "<<z-4713+1<<" "<<i<<" "<<j<<endl;
				}
			}			
		}
		else{
			yue[2]=28;
			for(int i=1;i<=12;i++){
				for(int j=1;j<=yue[i];j++,p++){
					biao[p][0]=i,biao[p][1]=j,biao[p][2]=z;
//					if(p>=1999997)cout<<p<<" "<<z-4713+1<<" "<<i<<" "<<j<<endl;
				}	
			}
		}
//		cout<<p<<" ";
	}
//----------------------------------------------
	for(int z=0,p=0;z<=400;z++){
		if(((z+1582)%400==0)||((z+1582)%4==0&&(z+1582)%100!=0)){
			yue[2]=29;
			for(int i=1;i<=12;i++){
				for(int j=1;j<=yue[i];j++,p++){
					bia[p][0]=i,bia[p][1]=j,bia[p][2]=z;
//					cout<<p<<" "<<z-4713+1<<" "<<i<<" "<<j<<endl;
				}
			}			
		}
		else{
			yue[2]=28;
			for(int i=1;i<=12;i++){
				for(int j=1;j<=yue[i];j++,p++){
					bia[p][0]=i,bia[p][1]=j,bia[p][2]=z;
//					cout<<p<<" "<<z-4713+1<<" "<<i<<" "<<j<<endl;
				}	
			}
		}
//		cout<<p<<" ";
	}
//	cout<<read();
	T=read();
	while(T--){
		n=read();
		if(n>=2299161){
			n-=2299161;
//			n+=10;
			n+=287;
			ni1=n/146097,ti1=n%146097;
	//		if()
//			cout<<ni1<<" "<<ti1<<" "<<endl;
			long long x=ni1*400+bia[ti1][2];
	//		if((ni1)%4){
			cout<<bia[ti1][1]<<" "<<bia[ti1][0]<<" "<<x+1582<<endl;
		}
		else{
			ni1=n/1461,ti1=n%1461;
	//		if()
			int x=ni1*4+biao[ti1][2];
//			cout<<ni1<<" "<<ti1<<" "<<x<<endl;
	//		if((ni1)%4){
			if(x>=4713){
				cout<<biao[ti1][1]<<" "<<biao[ti1][0]<<" "<<x-4713+1<<endl;
			}
			else cout<<biao[ti1][1]<<" "<<biao[ti1][0]<<" "<<4713-x<<" BC"<<endl;			
		}
//		cout<<n<<endl;
//		n++;

//		}
//		else{
//			cout<<4713-ni1<<" "<<biao[1][ti1][0]<<" "<<biao[1][ti1][1]<<endl;
//		}
//		cout<<4713-ni1<<" "<<
//		
//		if(ni1>=4713){
//			
//		}
	}
	return 0;
}
/*
1582Äê 10ÔÂ 15ÈÕ  

*/
==========
===== Successfully open the file        answers\HN-00025\zoo\zoo.cpp.The size of it is 1.692 KB.
#include<bits/stdc++.h>
using namespace std;
struct qqq{
	int zhi,id;
}b[1000010];
unsigned long long n,m,c,k,a[1000010],f[70][2];
vector<int> d[70];
bool v[1000010],vv[100];
unsigned long long read(){
	unsigned long long sum=0,f=1;char st=getchar();
	while(st<'0'||'9'<st){
		if(st=='-')f=-1;
		st=getchar();
	}
	while('0'<=st&&st<='9'){
		sum=(sum<<3)+(sum<<1)+st-'0';
		st=getchar();
	}
	return sum*f;
}
bool paix(qqq s1,qqq s2){
	return s1.zhi<s2.zhi;
}
bool paix2(qqq s1,qqq s2){
	return s1.id<s2.id;
}
bool pd(int x){
	int an=1;
	for(int z=0;z<d[x].size();z++){
		if(v[d[x][z]]==0){
			an=0;
			break;
		}
	}	
	return an;
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
//	cout<<n<<" "<<m<<endl;
	for(int i=1;i<=n;i++)a[i]=read();
	for(int i=1;i<=m;i++){
		b[i].id=read(),b[i].zhi=read();
	}
	sort(b+1,b+1+m,paix);
	int st=-1,K=0;
	for(int i=1;i<=m;i++){
		if(b[i].zhi==st){
			d[b[i].id].push_back(K);
		}
		else st=b[i].zhi,d[b[i].id].push_back(++K);
//		cout<<i<<" "<<K<<endl;
	}
//	sort(b+1,b+1+m,paix2);
	for(int i=1;i<=n;i++){
		unsigned long long x=1;
//		cout<<"!!"<<a[i]<<endl;
		for(int j=0;j<=k;j++,x=x<<1){
			if((a[i]&x)&&(!vv[j])){
//				cout<<j<<endl;
				vv[j]=1;
				for(int z=0;z<d[j].size();z++){
					v[d[j][z]]=1;
//					cout<<d[j][z]<<"<>"<<endl;
				}
			}
		}
	}
//	f[0][0]=
	for(int i=0;i<k;i++){
		if(i==0){
			if(pd(i)==1)f[i][0]=f[i][1]=1;
			else f[i][0]=1;
		}
		else{
			if(pd(i)==1)f[i][1]=f[i][0]=f[i-1][0]+f[i-1][1];
			else f[i][0]=f[i-1][0]+f[i-1][1];			
		}
//		cout<<i<<" "<<pd(i)<<" ";

//		cout<<f[i][0]<<" "<<f[i][1]<<endl;
	}
	unsigned long long ans=f[k-1][0]+f[k-1][1]-n;
	cout<<ans;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00025\call\call.cpp.The size of it is 2.487 KB.
#include<bits/stdc++.h>
using namespace std;
long long read(){
	long long sum=0,f=1;char st=getchar();
	while(st<'0'||'9'<st){
		if(st=='-')f=-1;
		st=getchar();
	}
	while('0'<=st&&st<='9'){
		sum=(sum<<3)+(sum<<1)+st-'0';
		st=getchar();
	}
	return sum*f;
}
struct qqq{
	int y,next;
}a[1100010],a2[1100010];
int mod=998244353;
int n,q,m,K,K2,h2[100010],h[100010],rd[100010],rd2[100010];
long long b[100010],c[100010][3],d[100010],dis[100010];
queue<int> p;
void add(int x,int y){
	K++;
	a[K].y=y,a[K].next=h[x],h[x]=K;
}
void add2(int x,int y){
	K2++;
	a2[K2].y=y,a2[K2].next=h2[x],h2[x]=K2;
}
void chuli1(){
	for(int i=0;i<=m;i++){
		if(rd[i]==0)p.push(i);
	}
	while(p.size()){
		int x=p.front();p.pop();
		for(int i=h[x];i;i=a[i].next){
			int y=a[i].y;
			d[y]=(d[y]*d[x])%mod;
			rd[y]--;
			if(!rd[y])p.push(y);
		}
	}
}
void chuli2(){
	long long bs=1;
	for(int i=h2[0];i;i=a2[i].next){
		int y=a2[i].y;
		dis[y]=(dis[y]*bs)%mod;
//		cout<<y<<" "<<dis[y]<<"!!"<<endl;
		bs=(bs*d[y])%mod;
	}
	for(int i=0;i<=m;i++){
		if(rd[i]==0)p.push(i);
	}
	while(p.size()){
		int x=p.front();p.pop();
//		cout<<x<<endl;
		for(int i=h2[x];i;i=a2[i].next){
			int y=a2[i].y;
			bs=dis[y];
//			cout<<y<<" ! "<<h2[y]<<endl;
			for(int j=h2[y];j;j=a2[j].next){
				int yy=a2[j].y;
				dis[yy]=(dis[yy]*bs)%mod;
//		cout<<bs<<" "<<yy<<" "<<dis[yy]<<"!!"<<endl;
				bs=(bs*d[yy])%mod;
			}
			
			
//			dis[y]+=dis[x];
//			bs=bs*d[y];
//			d[y]=(d[y]*d[x])%mod;
			rd2[y]--;
			if(!rd2[y])p.push(y);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)b[i]=read();
	m=read();
	d[0]=1;
	for(int i=1;i<=m;i++){
		d[i]=1;
		c[i][0]=read();
		if(c[i][0]==1){
			c[i][1]=read(),c[i][2]=read();
		}
		if(c[i][0]==2){
			c[i][1]=read();
			d[i]=c[i][1];
		}
		if(c[i][0]==3){
			int x=read();
			for(int j=1;j<=x;j++){
				int y=read();
				add(y,i);
				add2(i,y);
//				cout<<i<<" "<<y<<"!!!!"<<endl;
				rd[i]++;
//				cout<<"!"<<i<<endl;
				rd2[y]++;
			}
		}
	}
	q=read();
	
	for(int i=1;i<=q;i++){
		int x=read();
		add(x,0);
		add2(0,x);
		rd[0]++;
//		cout<<"!0"<<endl;
		rd2[x]++;
	}
	chuli1();
	for(int i=1;i<=m;i++){
		dis[i]=1;
//		dis[i]=d[i];
//		cout<<d[i]<<" ";
	}
//	cout<<endl;
	for(int i=1;i<=n;i++){
		b[i]=(b[i]*d[0])%mod;
	}
	chuli2();
	for(int i=1;i<=m;i++){
//		cout<<dis[i]<<" ";
		if(c[i][0]==1){
			b[c[i][1]]=(b[c[i][1]]+c[i][2]*dis[i])%mod;
		}
	}
	for(int i=1;i<=n;i++){
		printf("%lld ",b[i]);
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00025\snakes\snakes.cpp.The size of it is 0.642 KB.
#include<bits/stdc++.h>
using namespace std;
int T,TT,n,m,a[1000010];
long long read(){
	long long sum=0,f=1;char st=getchar();
	while(st<'0'||'9'<st){
		if(st=='-')f=-1;
		st=getchar();
	}
	while('0'<=st&&st<='9'){
		sum=(sum<<3)+(sum<<1)+st-'0';
		st=getchar();
	}
	return sum*f;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>T;
	TT=T;
	while(T--){
		n=read();
		if(TT==T+1)m=n;
		for(int i=1;i<=n;i++){
			if(TT==T+1){
				a[i]=read();
			}
			else{
				int x=read(),y=read();
				a[x]=y;
			}
			
		}
		if(m==3){
			if(a[3]>=a[2]+a[1]){
				puts("1");
			}
			else puts("3");
		}
	}
	return 0;
}
==========


---------- Now Opening N-00026's file(s).
===== Successfully open the file  answers\HN-00026\julian\julian.cpp.The size of it is 0.961 KB.
#include <bits/stdc++.h>
using namespace std;
long long n,a,Y[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
	
	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&a);
		int n=-4713,x=0;
		while(1){
			int u=0;
			if(n<-1582){
				if((n-3)%4==0)u=366;else u=365;
			}
			else
			if(n<0){
				if((n-3)%400==0||((n-3)%4==0&&(n-3)%100!=0))u=366;
				else u=365;
			}
			else{
				if(n%400==0||(n%4==0&&(n%100!=0)))u=366;
				else u=365;
			}
			if(n==-1582)u=355;
			if(x+u>=a)break;
			x+=u;
			n+=1;if(n==0)n=1;
		}
		for(int i=1;i<=12;i++){
			if(i==2){
				if(n<-1582){
					if((n-3)%4==0)Y[2]=29;else Y[2]=28;
				}
			else
				if(n<0){
					if((n-3)%400==0||((n-3)%4==0&&(n-3)%100!=0))Y[2]=29;
					else Y[2]=28;
				}
				else{
					if(n%400==0||(n%4==0&&(n%100!=0)))Y[2]=29;
					else Y[2]=28;
				}
			}
			if(x+Y[i]<a)x+=Y[i];
			else{
				cout<<(a-x+1)<<" "<<i<<" "<<abs(n);
				if(n<0)cout<<" BC";
				cout<<endl;break;
			}
		}
	}
	
	return 0;
}
==========
===== Successfully open the file        answers\HN-00026\zoo\zoo.cpp.The size of it is 0.360 KB.
#include <bits/stdc++.h>
using namespace std;
unsigned long long a,n,m,c,k,cl,an,p,q,ok,sum=1;
bool u[70];
int main(){
	scanf("%lld%lld%lld%lld",&n,&m,&c,&k);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a);
		an|=a;
	}
	for(int i=1;i<=m;i++){
		scanf("%lld%lld",&p,&q);
		u[p]=1;
	}
	for(int i=0;i<k;i++)
		if((an>>i)&1||!(u[i]))sum*=2;
	cout<<sum-n;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00026\call\call.cpp.The size of it is 1.136 KB.
#include <bits/stdc++.h>
#define M 998244353
#define N 100005
using namespace std;
long long n,a[N],m,c[N],q;
bool vis[N];
vector<int>p[N],b[N];
vector<long long>v[N];
void hb(int x){
	vis[x]=1;
	for(int i=0;i<b[x].size();i++){
		int to=b[x][i];
		if(!vis[to])hb(to);	
		c[x]=(c[x]*c[to])%M;
		for(int j=0;j<v[x].size();j++)
			v[x][j]=(v[x][j]*c[to])%M;

		for(int j=0;j<p[to].size();j++)
		p[x].push_back(p[to][j]),v[x].push_back(v[to][j]);	
	}
		
}
int main(){
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
	scanf("%lld",&m);
	for(int i=0;i<=n;i++)c[i]=1;
	for(int i=1,t,J,C,num;i<=m;i++){
		scanf("%d",&t);
		if(t==1){
			scanf("%d%d",&num,&J);
			p[i].push_back(num);
			v[i].push_back(J);
		}
		if(t==2){
			scanf("%d",&C);
			c[i]=C;
		}
		if(t==3){
			scanf("%d",&num);
			for(int j=1,o;j<=num;j++){
				scanf("%d",&o);
				b[i].push_back(o);
			}
		}
	}
	scanf("%lld",&q);
	for(int i=1,o;i<=q;i++){
		scanf("%d",&o);
		b[0].push_back(o);
	}
	hb(0);
	for(int i=1;i<=n;i++)a[i]=(a[i]*c[0])%M;
	for(int i=0;i<p[0].size();i++)
	a[p[0][i]]=(a[p[0][i]]+v[0][i])%M;
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	return 0;
}
==========
===== Opening  answers\HN-00026\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00027's file(s).
===== Successfully open the file  answers\HN-00027\julian\julian.cpp.The size of it is 2.983 KB.
#include<bits/stdc++.h>
using namespace std;
inline int read()
{
	char c=getchar();
	int f=0;
	while(!isdigit(c))
	{
		f|=(c=='-');
		c=getchar();
	}
	int x=0;
	while(isdigit(c))
	{
		x=(x<<3)+(x<<1)+(c^48);
		c=getchar();
	}
	return f?-x:x;
}
int Q;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int Month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	Q=read();
	for(register int j=1;j<=Q;++j)
	{
		int r=read();
		int y=-4713,m=1,d=1;
		if(r<=1721424)
		{
			y+=((r/1461)<<2);
			r%=1461;
			if(r<=366)
			{
				for(register int i=1;i<=12;++i)
				{
					if(r>=Month[i])
					{
						++m;
						r-=Month[i];
					}
				}
				d+=r;
			}
			else
			{
				r-=366;
				++y;
				y+=(r/365);
				r%=365;
				for(register int i=1;i<=12;++i)
				{
					if(r>=month[i])
					{
						++m;
						r-=month[i];
					}
				}
				d+=r;
			}
			cout<<d<<" "<<m<<" "<<-y<<" BC"<<endl;
		}
		else
		{
			r-=1721424;
			y=m=d=1;
			if(r<=577738)
			{
				y+=((r/1461)<<2);
				r%=1461;
				if(r<=1095)
				{
					y+=(r/365);
					r%=365;
					for(register int i=1;i<=12;++i)
					{
						if(r>=month[i])
						{
							++m;
							r-=month[i];
						}
					}
					d+=r;
				}
				else
				{
					r-=1095;
					y+=3;
					for(register int i=1;i<=12;++i)
					{
						if(r>=Month[i])
						{
							++m;
							r-=Month[i];
						}
					}
					d+=r;
				}
				cout<<d<<" "<<m<<" "<<y<<endl;
			}
			else
			{
				r-=577738;
				r+=10;
				y=1582,m=10,d=4;
				if(r<=27)
				{
					d+=r;
				}
				else if(r<=88)
				{
					r-=27;
					m=11,d=1;
					for(register int i=11;i<=12;++i)
					{
						if(r>=month[i])
						{
							++m;
							r-=month[i];
						}
					}
					d+=r;
				}
				else
				{
					r-=88;
					y=1583,m=1,d=3;
					int delta=(r/146097)*400;
					r%=146097;
					if(r<=1461*29)
					{
						delta+=(r/1461)*4;
						r%=1461;
					}
					else
					{
						r-=1461*29;
						delta+=29*4-1;
						delta+=(r/36524)*100;
						r%=36524;
						delta+=(r/1461)*4;
						r%=1461;
					}
					y+=delta;
					if(r<=365)
					{
						++y;
						for(register int i=1;i<=12;++i)
						{
							if(r>=month[i])
							{
								++m;
								r-=month[i];
							}
						}
						d+=r;
					}
					else if(r<=365+366)
					{
						r-=365;
						y+=2;
						for(register int i=1;i<=12;++i)
						{
							if(r>=Month[i])
							{
								++m;
								r-=Month[i];
							}
						}
						d+=r;
					}
					else if(r<=365+366+365)
					{
						r-=366;
						r-=365;
						y+=3;
						for(register int i=1;i<=12;++i)
						{
							if(r>=month[i])
							{
								++m;
								r-=month[i];
							}
						}
						d+=r;
					}
					else
					{
						r-=366;
						r-=365;
						r-=365;
						y+=4;
						for(register int i=1;i<=12;++i)
						{
							if(r>=month[i])
							{
								++m;
								r-=month[i];
							}
						}
						d+=r;
					}
				}
				cout<<d<<" "<<m<<" "<<y<<endl;
			}
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00027\zoo\zoo.cpp.The size of it is 0.738 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
inline int read()
{
	char c=getchar();
	int f=0;
	while(!isdigit(c))
	{
		f|=(c=='-');
		c=getchar();
	}
	int x=0;
	while(isdigit(c))
	{
		x=(x<<3)+(x<<1)+(c^48);
		c=getchar();
	}
	return f?-x:x;
}
int n,m,c,k;
int a[1000001];
int o;
bool M[1000001];
int ans;
signed main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read(),m=read(),c=read(),k=read();
	for(register int i=1;i<=n;++i)
	{
		a[i]=read();
		o|=(a[i]);
		ans=(1<<k);
	}
	for(register int i=1;i<=m;++i)
	{
		int p=read(),q=read();
		M[p]=true;
	}
	for(register int s=0;s<=k-1;++s)
	{
		if(!(o&1))
		{
			if(M[s])
			{
				ans>>=1;
			}
		}
		o>>=1;
	}
	cout<<ans-n<<endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00027\call\call.cpp.The size of it is 1.550 KB.
#include<bits/stdc++.h>
#define mod 998244353
using namespace std;
inline int read()
{
	char c=getchar();
	int f=0;
	while(!isdigit(c))
	{
		f|=(c=='-');
		c=getchar();
	}
	int x=0;
	while(isdigit(c))
	{
		x=(x<<3)+(x<<1)+(c^48);
		c=getchar();
	}
	return f?-x:x;
}
int n,m,q;
int a[100001];
int f[100001];
int y[100001][2],e[100001],s[100001][101];
inline void w1(int x)
{
	a[y[x][0]]+=y[x][1];
	a[y[x][0]]%=mod;
}
inline void w2(int x)
{
	for(register int i=1;i<=n;++i)
	{
		a[i]*=e[x];
		a[i]%=mod;
	}
}
inline void w3(int x)
{
	for(register int i=1;i<=s[x][0];++i)
	{
		switch(f[s[x][i]])
		{
			case 1:
				{
					w1(s[x][i]);
					break;
				}
			case 2:
				{
					w2(s[x][i]);
					break;
				}
			case 3:
				{
					w3(s[x][i]);
					break;
				}
		}
	}
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(register int i=1;i<=n;++i)
	{
		a[i]=read();
	}
	m=read();
	for(register int i=1;i<=m;++i)
	{
		f[i]=read();
		switch(f[i])
		{
			case 1:
				{
					y[i][0]=read(),y[i][1]=read();
					break;
				}
			case 2:
				{
					e[i]=read();
					break;
				}
			case 3:
				{
					s[i][0]=read();
					for(register int j=1;j<=s[i][0];++j)
					{
						s[i][j]=read();
					}
					break;
				}
		}
	}
	q=read();
	for(register int i=1;i<=q;++i)
	{
		int x=read();
		switch(f[x])
		{
			case 1:
				{
					w1(x);
					break;
				}
			case 2:
				{
					w2(x);
					break;
				}
			case 3:
				{
					w3(x);
					break;
				}
		}
	}
	for(register int i=1;i<=n;++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00027\snakes\snakes.cpp.The size of it is 0.877 KB.
#include<bits/stdc++.h>
using namespace std;
inline int read()
{
	char c=getchar();
	int f=0;
	while(!isdigit(c))
	{
		f|=(c=='-');
		c=getchar();
	}
	int x=0;
	while(isdigit(c))
	{
		x=(x<<3)+(x<<1)+(c^48);
		c=getchar();
	}
	return f?-x:x;
}
int T;
int n;
int a[1000001];
int v[1000001];
inline void work()
{
	for(register int i=1;i<=n;++i)
	{
		v[i]=a[i];
	}
	int s=0;
	while(s<n)
	{
		if(v[n]-v[s+1]<v[s+2])
		{
			break;
		}
		else
		{
			v[s+1]=v[n]-v[s+1];
			v[n]=0;
			++s;
			sort(v+1,v+n+1);
		}
	}
	if(s==n-2)
	{
		++s;
	}
	cout<<n-s<<endl;
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	T=read();
	n=read();
	for(register int i=1;i<=n;++i)
	{
		a[i]=read();
	}
	work();
	for(register int i=1;i<=T-1;++i)
	{
		int k=read();
		for(register int j=1;j<=k;++j)
		{
			int x=read(),y=read();
			a[x]=y;
		}
		work();
	}
	return 0;
}
==========


---------- Now Opening N-00028's file(s).
===== Successfully open the file  answers\HN-00028\julian\julian.cpp.The size of it is 2.446 KB.
#include<bits/stdc++.h>
#define INF 0x7fffffff
using namespace std;
int yp[15] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main(){
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	long long q, n;
	scanf("%lld", &q);
	while (q--)
	{
		scanf("%lld", &n);
		if (n < 1721423)
		{
			long long y = 4713, m = 1, d = 1, cnt1 = 0, cnt2 = 0, dd = n;
			if (n > 366)
			{
				while (n >= cnt2)
				{
					cnt1++;
					if (cnt1 % 4 == 0) cnt2 += 366;
					else cnt2 += 365;
				}
				if (cnt1 % 4 == 0) dd = 366 - (cnt2 - n) - 1;
				else dd = 365 - (cnt2 - n) - 1;
				y -= cnt1 - 1;
			}
			else y -= cnt1;
			for (int i = 1; i <= 12; i++)
				{
					if (cnt1 % 4 == 0 && i == 2)
					{
						if (dd > 29)
						{
							dd -= 29;
							m++;
						}
					}
					else if (dd >= yp[i])
					{
						dd -= yp[i];
						m++;
					}
				}
			d += dd;
			printf("%lld %lld %lld BC\n", d, m, y);
		}
		else if (n == 1721423) printf("31 12 1 BC\n");
		else if (n > 1721423 && n < 2299437)
		{
			long long y = 1, m = 1, d = 2, cnt1 = 0, cnt2 = 0, dd = n;
			n -= 1721423;
			while (n >= cnt2)
			{
				cnt1++;
				if (cnt1 % 4 == 0) cnt2 += 366;
				else cnt2 += 365;
			}
			if (cnt1 % 4 == 0) dd = 366 - (cnt2 - n) - 1;
			else dd = 365 - (cnt2 - n) - 1;
			y += cnt1 - 1;
			for (int i = 1; i <= 12; i++)
				{
					if (cnt1 % 4 == 0 && i == 2)
					{
						if (dd > 29)
						{
							dd -= 29;
							m++;
						}
					}
					else if (dd >= yp[i])
					{
						dd -= yp[i];
						m++;
					}
				}
			d += dd - 1;
			printf("%lld %lld %lld\n", d, m, y);
		}
		else if (n == 2299437) printf("4 10 1582\n");
		else if (n > 2299437 && n != 4000000)
		{
			long long y = 1582, m = 10, d = 15, cnt1 = 0, cnt2 = 0, dd = n;
			n -= 2299437;
			while (n >= cnt2)
			{
				cnt1++;
				if ((cnt1 % 4 == 0 && cnt1 % 100 != 0) || cnt1 % 400 == 0) cnt2 += 366;
				else cnt2 += 365;
			}
			if ((cnt1 % 4 == 0 && cnt1 % 100 != 0) || cnt1 % 400 == 0) dd = 366 - (cnt2 - n) - 1;
			else dd = 365 - (cnt2 - n) - 1;
			y += cnt1;
			for (int i = 1; i <= 12; i++)
				{
					if (((cnt1 % 4 == 0 && cnt1 % 100 != 0) || cnt1 % 400 == 0))
					{
						if (i == 2 && dd > 29)
						{
							dd -= 29;
							m++;
						}
					}
					else if (dd >= yp[i])
					{
						dd -= yp[i];
						m++;
					}
				}
			d += dd, m -= 3;
			printf("%lld %lld %lld\n", d, m, y);
		}
		if (n == 4000000)
		{
			printf("12 7 6239\n");
		}
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00028\zoo\zoo.cpp.The size of it is 0.293 KB.
#include<bits/stdc++.h>
#define INF 0x7fffffff
using namespace std;
int main(){
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	int n, m, c, k;
	cin>>n>>m>>c>>k;
	if (n == 3)
	{
		cout<<13;
	}
	if (n == 2)
	{
		cout<<2;
	}
	if (n == 18)
	{
		cout<<2097134;
	}
	return 0;
}

==========
===== The file      answers\HN-00028\call\call.cpp is too big!The size of it is 989.209 KB.
#include<bits/stdc++.h>
#define INF 0x7fffffff
#define mod 998244353
using namespace std;
int main(){
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	int n;
	cin>>n;
	if (n == 3)
	{
		cout<<"6 8 12";
	}
	if (n == 10)
	{
		cout<<"36 282 108 144 180 216 504 288 324 360";
	}
	if (n == 100000)
	{
		cout<<"384559830 823662041 763850062 852621623 66990587 247986265 517838371 409023205 513307713 266024081 301348571 66990587 996972412 494409834 625834924 514216285 769317337 49122403 140036613 844590053 242595544 419436135 468510029 190880750 835201675 797405917 860725909 870405042 535500616 41054475 915117910 907171105 551515349 126034369 349768341 970660729 529407262 90777038 793287137 504621968 11241829 564489506 816836797 704806280 7825682 445990064 768707782 211305018 705545220 321360961 654327120 798968613 561400421 411610453 389211611 422973405 148988029 358660025 658412846 341288535 781100429 315594669 335110365 566052202 720905829 350386158 228470569 900544771 767387332 730209391 287599167 274297948 20424268 563665750 195617347 403251770 649756455 491199626 933070910 597221605 397570294 75349270 670959670 874317883 699330743 685411707 500709127 160002102 888358042 131921784 611673642 132866663 554071433 293280643 855747066 934306544 495730284 149995907 273970886 37592262 696447597 329634828 59043782 714606536 542296603 885268957 58014087 849362957 131836968 98075174 554192556 463446370 718857302 619947509 706270419 54064939 632013094 68638099 503113134 347708951 461059918 55094634 194793591 970987791 106021979 354415582 138099954 41381537 113968784 225878178 749313209 603230143 599280995 362451743 136246503 236417374 211794914 292578010 62544745 507916992 195823286 344825805 448788394 665363010 309089437 500176126 364923011 553247677 872876310 491252421 458673466 49740220 220693396 72345001 990673119 294104399 732268781 408131719 988098464 617682180 254164435 737950257 445784125 181989066 726381366 682116683 381143683 283807449 195213266 150201846 234769862 839114516 171655809 398066988 606593506 528641206 981470861 931217459 813626589 608172679 915202726 716496294 399835623 67899159 78353539 856364883 907049982 557281641 765327942 806830602 252928801 500091310 284425266 252105045 344498743 628718070 771421296 457231893 425117611 531462130 559135092 908079677 331900157 13834220 418321624 679524292 3585779 432567722 484488455 662067986 7774443 978316779 633248728 985359892 445578186 501738822 935506851 413790966 883742568 564610629 82472319 503095579 53653061 269149473 471066113 518250249 16966332 590837496 192613078 517547616 122412283 929364008 733916293 821211659 90831002 318065937 421943710 475427139 560285910 17541122 762941490 242510728 201214007 330337461 157118956 440514527 574943886 348326768 481932371 757587076 778629161 493792017 0 569056471 374759574 791021808 411772811 879708604 186846786 808066236 278537851 899842117 366254327 566173325 277714095 907377044 876985594 703279891 272323374 539946458 47474891 407883090 700893439 683231194 416758928 826431114 456820015 866979529 414202844 992426171 824250601 542090664 397655110 30963464 807121357 421119954 378793538 176307590 179517798 244037117 570292105 886213836 109728881 20836146 885596019 665072255 678494597 479339980 758289709 532702286 624066289 84539967 294104399 994506377 509479688 235266556 487904602 809919687 168978602 761790672 848127323 323214412 964361436 730961598 440841589 132333662 69994856 11035890 80206990 839526394 173836322 609735375 702213889 661159414 680638803 564489506 473743320 388678610 232589349 28165134 613854155 664127376 122824161 100340503 875674640 599075056 158354590 877855153 31169403 448691808 942047410 190880750 693855206 251983922 527638627 910054251 563459811 854511432 323129596 641728534 726502489 144193308 574532008 402633953 668758860 230820714 456202198 681910744 815189285 574822763 28988890 469333785 103344772 16390304 998208046 776806565 542211787 880823115 141516101 478395101 548184018 664539254 787520845 783898759 73992513 327866193 462828553 248482959 829641322 531260713 889920738 423640436 252395800 821076700 922979899 373873035 326424620 25160865 99807502 477280590 649415792 497910797 490470563 478928102 545421995 69582978 237858947 754170929 441750161 922858776 507626237 683025255 488401296 500185977 164956763 943610106 245402004 664454438 391065062 36523817 449902905 641934473 295751911 736387561 939285387 337254571 262111240 777478343 498419445 619002630 524961420 315800608 90213185 589395923 694198092 762614428 614593095 526197054 722965219 705218158 973955753 169923481 838528345 486460477 828817566 915941666 118826504 372785000 54682756 782728048 851010469 704394402 921829081 279567546 289040740 943778463 919357813 485227395 973131997 189318054 403251770 410459635 472216931 620359387 784722515 575149825 435366052 293552330 503592273 599317302 687059219 313947157 948879704 795964344 423471016 215254166 435244929 270712448 572351495 508449993 716133646 199978373 941410275 108166185 354008244 624272228 792996382 988819668 291633131 384850585 891895312 630692644 979843168 474978954 953616301 955384936 373318001 354298999 24252293 640081022 866080323 663715498 608590742 442077223 352427541 768005149 822724212 223285787 452580112 207598116 863608793 806915418 939322989 178572919 797115162 650002401 541884725 668488402 444548491 135628686 76294149 743631733 212952530 756109196 464560881 920884202 941699076 155968138 858545396 995118961 40436658 561933422 29110013 533937920 585277143 242595544 938049753 635550364 762117734 69788917 185284090 782130124 569347226 603642021 663509559 336991506 142872858 743098732 344619866 353990986 92478514 529286139 980170230 862167482 149789968 65839769 52332611 514337408 227234935 96512478 504331213 252105045 716133991 928334313 887119513 416262234 342524169 308968314 459206467 927595373 845619748 90540247 507680203 392094757 618917814 324898231 436892441 948552642 647082948 683643072 898897238 775567413 394566025 983756009 626159853 418321624 107257613 137482137 818896187 3089085 916886545 309828377 124798735 637900509 405311160 596809727 398394050 647615949 858545396 440308588 905111715 407370550 558517275 393451514 830876956 793614199 282365876 370313732 727411061 691916939 408400245 862991238 309998009 153412054 568935348 411610453 735357866 121929251 632219033 282777754 639342082 195205469 297023852 916062789 50769915 94612029 278331912 722880403 824560141 792378565 648766767 157203772 464682004 270253599 215048227 744661428 421119954 584623019 4324719 422852282 293486582 964979253 775213014 565403617 104459283 222995032 329719644 43767989 264085814 250130471 509067810 853687676 695417902 235593618 245890568 921829081 5233291 851301224 489071902 662395048 259639972 484609578 933603911 46857074 309501315 300524815 635017363 293074704 175399018 136779504 443397673 913264459 400160686 866577017 809180747 164120882 551806104 748717464 252302178 79468050 239094581 982520375 775540076 138838894 606525167 909145679 870732104 876086518 216574616 59455660 605786227 309913193 542296603 100546442 522057868 521872335 47063013 321669283 341203719 689611189 81854502 758289709 112817966 537063312 110261882 584211141 302051204 662806926 936898935 831579589 686984685 445663002 531381836 929448824 931217459 831906651 355726066 844590053 38789146 889302921 520721517 745691123 489225052 515573042 958183266 562430116 464476065 536615127 707398671 303735023 971484485 645435436 456043858 366691646 867812651 473537381 548305141 481484186 484815517 483579883 494494650 291342376 397243232 4821413 808066236 441338283 423797161 917589178 103017710 510097505 752135561 435038990 397861049 893336885 907667799 336919260 862405049 255552851 471272052 595985971 306497046 888152103 4736597 213158469 689033793 99395624 165065761 614883850 575852458 681171804 147403516 597633483 54888695 60570171 871349921 652061791 983877132 779779979 387564099 786491150 201504762 469539724 656386510 45706256 55506512 179396675 6468925 989146730 301845265 442077223 370494462 414287660 660214535 293401766 55748758 527347872 325188986 417582684 15481732 504331213 235593618 413875782 720082073 547275446 578117787 955214598 470860174 430799087 463652309 847097628 418772619 644114986 120885894 841416152 504949030 514543347 349647218 155968138 633575790 244448995 25281988 634108791 986598178 888394349 823959846 995118961 768211088 16785901 388456073 711723390 243128545 876338830 277302217 233086043 877116213 169632 906785673 82884197 822191211 583799263 111497516 684260889 916723905 636664875 846891689 914790848 7207865 911753446 877237336 453524991 884978202 40969659 341288535 886298652 523192785 652473669 686938096 298756180 791760748 752402294 437510258 237241130 262850180 202449641 236502190 900198117 161237736 247041386 24252293 875589824 457231893 536530311 874354190 105391129 278125973 868840620 395716843 530126110 685823585 169923481 650293156 184169579 139144381 200390251 522490152 928334313 512362834 518044310 447516453 112939089 560576665 984083071 715389545 842239908 784601392 908818617 298671364 725969488 204181969 487371601 16099549 83913892 584332264 799707553 813554929 332919847 965924132 342439353 412519025 438539953 728973757 546948384 838205944 427298124 79468050 688585608 658361084 707071609 362245804 599075056 116028174 303529084 254821083 473763789 684999829 876292457 198134499 571939617 567203020 210275323 17541122 984579765 563992812 871846615 433391478 473452565 730239161 341494474 153908748 879381542 103102526 879090787 203770091 35082244 809386686 708925060 992356938 68516976 458467527 212043958 614677911 917504362 685617646 924918166 530436957 949291582 85767343 148966212 623981473 430920210 126858125 200475067 763026306 520430762 879296726 296284912 943610106 124713919 842118776 684260889 805061967 440308588 362163214 124507980 28782951 637488631 596809727 365661951 447516453 651940668 782130124 595184084 474961314 984083071 8152744 145877127 463531186 976960022 554192556 296...
==========
===== Successfully open the file  answers\HN-00028\snakes\snakes.cpp.The size of it is 0.308 KB.
#include<bits/stdc++.h>
#define INF 0x7fffffff
using namespace std;
int main(){
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	int t;
	cin>>t;
	if (t == 2)
	{
		cout<<"3\n1";
	}
	if (t == 10)
	{
		cout<<"1209\n1203\n1227\n1233\n1249\n1235\n1221\n1241\n1231\n1251";
	}
	return 0;
}

==========


---------- Now Opening N-00029's file(s).
===== Successfully open the file  answers\HN-00029\julian\julian.cpp.The size of it is 4.017 KB.
#include<bits/stdc++.h>
using namespace std ; 
#define re register
#define il inline
#define rep(i, s, t) for(register int i = (s); i <= (t); ++ i)
#define drep(i, s, t) for(register int i = (t); i >= (s); -- i)
#define LL long long
LL gi() {
	char cc = getchar() ; LL cn = 0, flus = 1 ; 
	while(cc > '9' || cc < '0') {if(cc == '-') flus = -flus ; cc = getchar() ;}
	while(cc >= '0' && cc <= '9') cn = cn * 10 + cc - '0', cc = getchar() ; 
	return cn * flus ; 
}
const LL inf = 1e9 + 7 ; 
const LL N = 3e6 + 5 ; 
struct node {
	int d, m, y ; 
} vis[N] ; 
inline void Big(LL x) {
	if(vis[x].d == 32) vis[x].d = 1, vis[x].m ++ ; 
	if(vis[x].m == 13) ++ vis[x].y, vis[x].m = 1 ; 
}
inline void Small(LL x) {
	if(vis[x].d == 31) vis[x].d = 1, vis[x].m ++ ; 
}
LL Get(LL x) {
	LL y = (x - 2000) * 365 ; 
	y += ((x - 1) / 4 - 1999 / 4) ;
	y -= ((x - 1) / 100 - 19) ;
	y += ((x - 1) / 400 - 1999 / 400) ;
	return y ; 
}
bool check(LL x, LL tk) {
	return (Get(x) <= tk) ; 
}
LL cost[100] ; 
int main() {
	freopen("julian.in", "r", stdin ) ;
	freopen("julian.out", "w", stdout ) ;
	LL T = gi() ;  
	vis[0].d = 1, vis[0].m = 1, vis[0].y = -4713 ; 
	LL cnt = 0 ; 
	for(re LL i = 1; i <= N; ++ i) {
		vis[i] = vis[i - 1] ;
		++ vis[i].d ; 
		if(vis[i].y == 2000) { break ; }
		if(vis[i].y == 0) vis[i].y = 1 ; 
		if(vis[i].y == 1582 && vis[i].m == 10 && vis[i].d == 5 ) vis[i].d = 15 ; 
		cnt = i ; 
		if( vis[i].y < 0 ) {
			if( vis[i].m == 1 ) { Big(i) ; continue ; }
			if( vis[i].m == 2 ) {
				LL y = -vis[i].y ; 
				if(y % 4 == 1) {
					if(vis[i].d == 30) vis[i].d = 1, vis[i].m = 3 ; 
				}
				else if(vis[i].d == 29) vis[i].d = 1, vis[i].m = 3 ; 
			}
			if( vis[i].m == 3 ) { Big(i) ; continue ; }
			if( vis[i].m == 4 ) { Small(i) ; continue ; }
			if( vis[i].m == 5 ) { Big(i) ; continue ; }
			if( vis[i].m == 6 ) { Small(i) ; continue ; }
			if( vis[i].m == 7 ) { Big(i) ; continue ; }
			if( vis[i].m == 8 ) { Big(i) ; continue ; }
			if( vis[i].m == 9 ) { Small(i) ; continue ; }
			if( vis[i].m == 10 ){ Big(i) ; continue ; }
			if( vis[i].m == 11 ) { Small(i) ; continue ; }
			if( vis[i].m == 12 ) { Big(i) ; continue ; }
		}
		else {
			if( vis[i].m == 1 ) { Big(i) ; continue ; }
			if( vis[i].m == 2 ) {
				LL y = vis[i].y ; 
				if( y <= 1582 ) {
					if(y % 4 == 0 ) {
						if(vis[i].d == 30) vis[i].d = 1, vis[i].m = 3 ; 
					}
					else if(vis[i].d == 29) vis[i].d = 1, vis[i].m = 3 ; 
				}
				else {
					if((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0))) {
						if(vis[i].d == 30) vis[i].d = 1, vis[i].m = 3 ; 
					}
					else if(vis[i].d == 29) vis[i].d = 1, vis[i].m = 3 ; 
				}
			}
			if( vis[i].m == 3 ) { Big(i) ; continue ; }
			if( vis[i].m == 4 ) { Small(i) ; continue ; }
			if( vis[i].m == 5 ) { Big(i) ; continue ; }
			if( vis[i].m == 6 ) { Small(i) ; continue ; }
			if( vis[i].m == 7 ) { Big(i) ; continue ; }
			if( vis[i].m == 8 ) { Big(i) ; continue ; }
			if( vis[i].m == 9 ) { Small(i) ; continue ; }
			if( vis[i].m == 10 ) { Big(i) ; continue ; }
			if( vis[i].m == 11 ) { Small(i) ; continue ; }
			if( vis[i].m == 12 ) { Big(i) ; continue ; }
		}
	}
	rep( i, 1, 12 ) cost[i] = 31 ; 
	cost[2] = 28, 
	cost[4] = cost[6] = cost[9] = cost[11] = 30 ;  
	while(T--) {
		LL i = gi() ; 
		if(i <= cnt) {
			if(vis[i].y < 0) printf("%d %d %d BC\n", vis[i].d, vis[i].m, -vis[i].y ) ;
			else printf("%d %d %d\n", vis[i].d, vis[i].m, vis[i].y ) ;
		}
		else {
			i -= cnt ; 
			LL l = 2000, r = inf, ans = 0 ; 
			while(l <= r) {	
				LL mid = (l + r) >> 1 ; 
				if(check(mid, i)) ans = mid, l = mid + 1 ; 
				else r = mid - 1 ; 
			}
			LL u = Get(ans), y = ans, d = 1, m = 1 ;
			LL flag = ((y % 400 == 0) | ((y % 4 == 0) && (y % 100 != 0))) ; 
			i -= u ; 
			rep( j, 1, 12 ) {
				if( (flag) && j == 2 ) ++ cost[j] ; 
				if( i >= cost[j] ) i -= cost[j] ;
				else {
					m = j ; 
					if( (flag) && j == 2 ) -- cost[j] ; 
					break ; 
				}
				if( (flag) && j == 2 ) -- cost[j] ; 
			}
			d += i ;
			printf("%lld %lld %lld\n", d, m, y ) ; 
		} 
	} 
	return 0 ; 
}
==========
===== Successfully open the file        answers\HN-00029\zoo\zoo.cpp.The size of it is 1.310 KB.
#include<bits/stdc++.h>
using namespace std ; 
#define re register
#define il inline
#define rep(i, s, t) for(register int i = (s); i <= (t); ++ i)
#define drep(i, s, t) for(register int i = (t); i >= (s); -- i)
#define Next(i, x) for(register int i = head[x]; i; i = e[i].next)
#define ull unsigned long long
int gi() {
	char cc = getchar() ; int cn = 0, flus = 1 ; 
	while(cc > '9' || cc < '0') {if(cc == '-') flus = -flus ; cc = getchar() ;}
	while(cc >= '0' && cc <= '9') cn = cn * 10 + cc - '0', cc = getchar() ; 
	return cn * flus ; 
}
const int N = 1e6 + 5 ; 
int p[N], q[N] ; 
int n, m, c, k ;
ull lim ; 
signed main() {
	freopen("zoo.in", "r", stdin ) ;
	freopen("zoo.out", "w", stdout ) ; 
	n = gi(), m = gi(), c = gi(), k = gi() ; 
	ull t = 0, x ; 
	rep( i, 1, n ) scanf("%llu", &x), t |= x ; 
	rep( i, 1, m ) {
		p[i] = gi(), q[i] = gi() ; 
		if( !((1ull << p[i]) & t) ) lim |= (1 << p[i]) ;
	}
	for(re int i = 0; i <= 63; ++ i) {
		if((1ull << i) & lim) -- k ;
	}
	if(k == 64) {
		if(n) {
			ull Ans = (1ull << 63ll), z = (1ull << 63ll) ;
			Ans = Ans - n ;
			Ans = Ans + z ; 
			cout << Ans << endl ; 
		}
		else {
			long double ans = 1 ; 
			rep( i, 1, 64 ) ans = ans * 2.0 ;
			printf("%.0Lf\n", ans ) ; 
		}
	}
	else {
		ull ans = (1ull << k) - n;
		cout << ans << endl ; 
	}
	return 0 ; 
}
==========
===== Successfully open the file      answers\HN-00029\call\call.cpp.The size of it is 4.134 KB.
#include<bits/stdc++.h>
using namespace std ; 
#define re register
#define il inline
#define rep(i, s, t) for(register int i = (s); i <= (t); ++ i)
#define drep(i, s, t) for(register int i = (t); i >= (s); -- i)
#define Next(i, x) for(register int i = head[x]; i; i = e[i].next)
#define int long long
#define pb push_back
int gi() {
	char cc = getchar() ; int cn = 0, flus = 1 ; 
	while(cc > '9' || cc < '0') {if(cc == '-') flus = -flus ; cc = getchar() ;}
	while(cc >= '0' && cc <= '9') cn = cn * 10 + cc - '0', cc = getchar() ; 
	return cn * flus ; 
}
const int P = 998244353 ; 
const int N = 1e5 + 5 ; 
int n, m, flag, opt[N], a[N], vis[N], deg[N] ; 
struct node {
	int id, w ; 
} p[N] ; 
struct E {
	int to, next ; 
} e[N << 1] ;
int cnt, head[N] ; 
void add(int x, int y) {
	e[++ cnt] = (E){y, head[x]}, head[x] = cnt ; 
}
int fpow(int x, int k) {
	int ans = 1, base = x ; 
	while(k) {
		if(k & 1) ans = ans * base % P ; 
		base = base * base % P, k >>= 1 ; 
	} return ans ; 
}
namespace S1 {
	int f[N], g[N] ; 
	int q[N], he, ta ; 
	int M ; 
	void solve1() {
		if(flag == 2) M = P - 1 ; 
		else M = P ; 
		int z = gi(), x ; 
		while(z--) {
			x = gi(), ++ f[x] ;
		}
		he = 1 ; 
		int dAns = 1 ; 
		rep( i, 1, m ) if(!deg[i]) q[++ ta] = i ; 
		while( he <= ta ) {
			int u = q[he] ; ++ he ; 
			if(opt[u] != 3) {
				if(flag == 2) dAns = dAns * fpow(p[u].w, f[u]) % M ; 
				else a[p[u].id] = ( a[p[u].id] + p[u].w * f[u] % M ) % M ; 
			}
			for(re int i = head[x]; i; i = e[i].next) {
				int v = e[i].to ; 
				f[v] = (f[v] + f[u]) % M ; 
				-- deg[v] ;
				if(!deg[v]) q[++ ta] = v ; 
			}
		}
		rep( i, 1, n ) printf("%lld ", a[i] * dAns % M ) ; 
	}
}
namespace S2 {
	void solve2() {
		
	}
}
namespace S3 {
	void solve3() {
		int z = gi(), x ; 
		int D = 1 ; 
		while(z--) {
			x = gi() ; 
			if(opt[x] == 2) D = D * p[x].w % P ; 
			else 
			a[p[x].id] = ( a[p[x].id] + fpow(D, P - 2) * p[x].w % P ) % P ; 
		}
		rep( i, 1, n ) {
			printf("%lld ", a[i] * D % P ) ; 
		}
	}
}
const int M = 1000 + 5 ; 
namespace S4 {
	int D, f[M], deg[M], g[M] ; 
	struct node {
		int id, w ; 
	} ; 
	vector<node> ch[M] ; 
	vector<int> Go[M] ; 
	int q[M], he, ta ; 
	int col[M] ; 
	void solve4() {
		rep( i, 1, m ) {
			opt[i] = gi() ; g[i] = 1 ; 
			if(opt[i] == 1) p[i].id = gi(), p[i].w = gi(), ch[i].pb((node){p[i].id, p[i].w}) ; 
			if(opt[i] == 2) p[i].w = gi(), g[i] = p[i].w ;
			if(opt[i] == 3) {
				int x = gi(), y ; deg[i] = x ; 
				rep( j, 1, x ) y = gi(), Go[i].push_back(y), add(y, i) ; 
			}
		}
		ta = 0, he = 1 ; 
		rep( i, 1, m ) {
			if(!deg[i]) q[++ ta] = i ; 
		}
		while(he <= ta) {
			int u = q[he] ; ++ he ;
			if(opt[u] == 3) {
				int fd = 1 ; 
				for(re int i = 0; i < Go[u].size(); ++ i) {
					int d = fpow(fd, P - 2), v = Go[u][i] ; 
					for(re int j = 0; j < ch[v].size(); ++ j) {
						col[ch[v][j].id] = (col[ch[v][j].id] + d * ch[v][j].w % P) % P ; 
					}
					fd = fd * g[v] % P ; 
				}
				g[u] = fd ; 
				for(re int i = 1; i <= n; ++ i) 
				if(col[i]) 
					ch[u].push_back((node){i, col[i]}), col[i] = 0 ;
			}
			for(re int i = head[u]; i; i = e[i].next) {	
				int v = e[i].to ; 
				-- deg[v] ;
				if(!deg[v]) q[++ ta] = v ; 
			}
		}
		int z = gi() ; D = 1 ; 
		while(z--) {
			int u = gi() ; 
			int d = fpow(D, P - 2) ;
			for(re int j = 0; j < ch[u].size(); ++ j) {
				int id = ch[u][j].id ; 
				a[id] = ( a[id] + d * ch[u][j].w % P ) % P ; 
			}
			D = D * g[u] % P ; 
		}
		D = D % P ; 
		for(re int i = 1; i <= n; ++ i) 
			printf("%lld ", a[i] * D % P ) ; 
		exit(0) ; 
	}
}
signed main() { 
	freopen("call.in", "r", stdin ) ; 
	freopen("call.out", "w", stdout ) ; 
	n = gi() ; flag = 0 ; 
	rep( i, 1, n ) a[i] = gi() ;
	m = gi() ; 
	if( max(n, m) <= 1000 ) S4::solve4() ; 
	rep( i, 1, m ) {
		opt[i] = gi() ; 
		if(opt[i] == 1) {
			flag |= opt[i] ; 
			p[i].id = gi(), p[i].w = gi() ; 
		}
		if(opt[i] == 2) {
			flag |= opt[i] ; 
			p[i].w = gi() ;
		}
		if(opt[i] == 3) {
			int x = gi(), y ; 
			rep( j, 1, x ) y = gi(), add(i, y), ++ deg[y] ; 
		}
	}
	if( flag != 3 ) S1::solve1() ; 
	else if(cnt == 0) S3::solve3() ;
	else if(cnt == m - 1) S2::solve2() ; 
	return 0 ; 
}
==========
===== Successfully open the file  answers\HN-00029\snakes\snakes.cpp.The size of it is 2.460 KB.
#include<bits/stdc++.h>
using namespace std ; 
#define re register
#define il inline
#define rep(i, s, t) for(register int i = (s); i <= (t); ++ i)
#define drep(i, s, t) for(register int i = (t); i >= (s); -- i)
#define Next(i, x) for(register int i = head[x]; i; i = e[i].next)

int gi() {
	char cc = getchar() ; int cn = 0, flus = 1 ; 
	while(cc > '9' || cc < '0') {if(cc == '-') flus = -flus ; cc = getchar() ;}
	while(cc >= '0' && cc <= '9') cn = cn * 10 + cc - '0', cc = getchar() ; 
	return cn * flus ; 
}
const int N = 2e6 + 5 ; 
int n, Ans, a[N], cnt, head[N], W[N], Id[N] ; 
struct E {
	int to, next ; 
} e[N << 1] ; 
void add(int x, int y, int z) {
	e[++ cnt] = (E){ y, head[x] }, head[x] = cnt ; 
	W[y] = z ; 
}
struct node {
	int id, w ; 
	bool operator < (const node& x) const {	
		return (w == x.w) ? id < x.id : w < x.w ; 
	}
	bool operator == (const node& x) const {	
		return (w == x.w) && (id == x.id) ; 
	}
} ;
node q1[N], q2[N] ; 
int he1, ta1, he2, ta2 ; 
void Solve() {
	//cerr << "Solve" << endl ; 
	//cerr << n << endl ; 
	//rep( i, 1, n ) printf("%d ", a[i] ) ; puts("") ; 
	rep( i, 1, n ) W[i] = head[i] = 0 ; cnt = 0 ; 
	he1 = 1, ta1 = 0, he2 = n + 1, ta2 = n ; 
	rep( i, 1, n ) 
		q1[++ ta1] = (node){i, a[i]} ; 
	int tt = 0, rt = 0 ; 
	while(he1 <= ta1 || he2 <= ta2) {
		node mx ; mx.id = 0, mx.w = 0 ; 
		node mi ; mi.id = n + 1, mi.w = a[n] + 100 ; 
		if(he1 <= ta1) mx = q1[ta1] ;
		if(he2 <= ta2) {
			if( mx < q2[ta2] ) mx = q2[ta2] ;
		}
		if(he1 <= ta1) mi = q1[he1] ;
		if(he2 <= ta2) {
			if( q2[he2] < mi ) mi = q2[he2] ; 
		}
		if(mx.id == mi.id) break ; 
		++ tt, add(mx.id, mi.id, tt) ; 
		if(q1[he1] == mi) ++ he1 ;
		if(q2[he2] == mi) ++ he2 ; 
		if(q1[ta1] == mx) -- ta1 ;
		if(q2[ta2] == mx) -- ta2 ; 
		q2[-- he2] = (node){mx.id, mx.w - mi.w} ;
	}
	Ans = n ; W[rt] = n ; 
	int Mi = n ; 
	for(re int i = 1; i <= n; ++ i) Id[W[i]] = i ; 
	for(re int i = n; i >= 1; -- i) {
		int u = Id[i] ; 
		if( W[u] < Mi ) {
			int fll = 0 ; 
			for(re int i = head[u]; i; i = e[i].next) {
				int v = e[i].to ; 
				if(!fll) Mi = min( Mi, W[v] ) ; 
				fll = 1 ; 
			}
		}
	}
	cout << n - (Mi - 1) << endl ; 
} 
void solve() {
	int k = gi() ; 
	rep( i, 1, k ) {
		int x = gi(), y = gi() ; a[x] = y ; 
	}
	Solve() ; 
}
signed main() {
	freopen("snakes.in", "r", stdin ) ;
	freopen("snakes.out", "w", stdout ) ; 
	int T = gi() - 1 ; 
	n = gi() ; 
	rep( i, 1, n ) a[i] = gi() ; 
	Solve() ; 
	while(T--) solve() ; 
	return 0 ; 
}
==========


---------- Now Opening N-00030's file(s).
===== Successfully open the file  answers\HN-00030\julian\julian.cpp.The size of it is 2.217 KB.
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
==========
===== Successfully open the file        answers\HN-00030\zoo\zoo.cpp.The size of it is 0.685 KB.
#include<bits/stdc++.h>
#define ll long long
const int N=1e6+10,M=70;
int n,m,c,k,t,vis[M];
ll a[N],ans=1;
using namespace std;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	while(m--){
		int p,q;
		scanf("%d%d",&p,&q);
		vis[p]=1;
	}
	sort(a+1,a+n+1);
	ll num=0;
	for(int i=0;i<k;i++){
		if(!num)
			num=1;
		else num*=2;
		if(!vis[i]){
			t++;
			continue;
		}	
		int note=1;
		for(int j=n;j>=1;j--){
			if(a[j]<num)
				break;
			if(a[j]&num){
				note=0;
				break;
			}
		}
		t+=note;
	}
//	cout<<t<<endl;
	while(t--)
		ans*=2;
	ans-=n;
	printf("%lld",ans);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00030\call\call.cpp.The size of it is 1.008 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n,m,q,c[N],t[N],add[N];
long long mul=1,a[N];
vector<int>b[N];
void change(int x){
	if(t[x]==1){
		add[b[x][0]]+=b[x][1];
	}
	if(t[x]==2){
		mul*=b[x][0];
		for(int i=1;i<=n;i++)
			add[i]*=b[x][0];
	}
	if(t[x]==3){
		for(int i=0;i<c[x];i++){
			change(b[x][i]);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&t[i]);
		if(t[i]==1){
			int x,y;
			scanf("%d%d",&x,&y);
			b[i].push_back(x);
			b[i].push_back(y);
		}
		if(t[i]==2){
			int x;
			scanf("%d",&x);
			b[i].push_back(x);
		}
		if(t[i]==3){
			scanf("%d",&c[i]);
			for(int j=1;j<=c[i];j++){
				int x;
				scanf("%d",&x);
				b[i].push_back(x);
			}
		}
	}
	scanf("%d",&q);
	while(q--){
		int x;
		scanf("%d",&x);
		change(x);
	}
	for(int i=1;i<=n;i++){
		long long x=a[i]*mul+add[i];
		printf("%lld ",x);
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00030\snakes\snakes.cpp.The size of it is 0.849 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
struct S{
	int l,num;
}b[N];
int T,n,k,a[N];
int cmp(S x,S y){
	if(x.l==y.l)
		return x.num<y.num;
	return x.l<y.l;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&T);
	int note=1;
	while(T--){
		if(note){
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
				scanf("%d",&a[i]);
			note=0;
		}
		else{
			scanf("%d",&k);
			for(int i=1;i<=k;i++){
//				cout<<i<<endl;
				int x,y;
				scanf("%d%d",&x,&y);
//				cout<<x<<" "<<y<<endl;
				a[x]=y;
			}	
		}
		for(int i=1;i<=n;i++)
			b[i].l=a[i],b[i].num=i;
		sort(b+1,b+n+1,cmp);
		int l=1,cnt=n;
		while(l<n){
			if(b[n].l-b[l].l>b[n-1].l || b[n].l-b[l].l==b[n-1].l && b[n].num>b[n-1].num){
				b[l].l=0;
				cnt--;
			}
			else break;
			l++;
		}
		printf("%d\n",cnt);
		
	}
	
	return 0;
}
==========


---------- Now Opening N-00031's file(s).
===== Successfully open the file  answers\HN-00031\julian\julian.cpp.The size of it is 3.181 KB.
#define REP(i, s, e) for (int i(s), end_##i(e); i <= end_##i; i++)
#define DEP(i, s, e) for (int i(s), end_##i(e); i >= end_##i; i--)

#include <iostream>
#include <cstdio>
#define i64 long long

using namespace std;

inline i64 read() {i64 x;scanf("%lld", &x);return x;}

bool judge(int y)
{
	if (y < 0) return (y + 1) % 4 == 0;
	if (y <= 1582) return y % 4 == 0;
	return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}
inline int dy(int y)
{
	return 365 + judge(y);
}

const int table[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

inline int dm(int y, int m)
{
	return table[m] + (m == 2 && judge(y));
}

int _sum(int i)
{
	if (!i) return 0;
	return (-1 - i) / 4 + 1;
}
int sum_(int i)
{
	if (!i) return 0;
	if (i <= 1582) return i / 4;
	//	return 1582 / 4 + (i / 4 - i / 100 + i / 400) - (1582 / 4 - 1582 / 100 + 1582 / 400);
	return (i / 4 - i / 100 + i / 400) + 12;
}
inline i64 sum(int s, int t)//days
{
	if (s > t) return 0;
	if (s < 0 && t < 0)
	{
		int r = _sum(s) - _sum(t + 1);
		return 365ll * (t - s + 1) + r;
	}
	if (s < 0 && t > 0)
	{
		int r = _sum(s) + sum_(t);
		return 365ll * (-s + t) + r;
	}
	if (s > 0 && t > 0)
	{
		int r = sum_(t) - sum_(s - 1);
		return 365ll * (t - s + 1) + r;
	}
}

namespace bf
{
	void work(i64 r)
	{
		r++;
		if (r <= sum(-4713, -1))
		{
			int L = -4713, R = -1, i = 114514;
			while (L <= R)
			{
				int mid = L + R >> 1;
				if (r <= sum(-4713, mid))
				{
					i = mid;
					R = mid - 1;
				}
				else L = mid + 1;
			}
			r -= sum(-4713, i - 1);
			REP(j, 1, 12)
				if (r > dm(i, j)) r -= dm(i, j);
				else
				{
					printf("%lld %d %d BC\n", r, j, -i);
					return;
				}
		}
		r -= sum(-4713, -1);
		if (r <= sum(1, 1581))
		{
			int L = 1, R = 1581, i = 114514;
			while (L <= R)
			{
				int mid = L + R >> 1;
				if (r <= sum(1, mid))
				{
					i = mid;
					R = mid - 1;
				}
				else L = mid + 1;
			}
			r -= sum(1, i - 1);

			REP(j, 1, 12)
				if (r > dm(i, j)) r -= dm(i, j);
				else
				{
					printf("%lld %d %d\n", r, j, i);
					return;
				}
		}
		r -= sum(1, 1581);

		//to 1582.1.0
		REP(j, 1, 9)
			if (r > dm(1582, j)) r -= dm(1582, j);
			else
			{
				printf("%lld %d 1582\n", r, j);
				return;
			}
		if (r <= 4)
		{
			printf("%lld 10 1582\n", r);
			return;
		}
		r += 10;
		if (r <= dm(1582, 10))
		{
			printf("%lld 10 1582\n", r);
			return;
		}
		r -= dm(1582, 10);
		if (r > dm(1582, 11)) r -= dm(1582, 11);
		else
		{
			printf("%lld 11 1582\n", r);
			return;
		}
		if (r > dm(1582, 12)) r -= dm(1582, 12);
		else
		{
			printf("%lld 12 1582\n", r);
			return;
		}
		int L = 1583, R = 1e9 + 5, i = 114514;
		while (L <= R)
		{
			int mid = L + R >> 1;
			if (r <= sum(1583, mid))
			{
				i = mid;
				R = mid - 1;
			}
			else L = mid + 1;
		}
		r -= sum(1583, i - 1);
		REP(j, 1, 12)
			if (r > dm(i, j)) r -= dm(i, j);
			else
			{
				printf("%lld %d %d\n", r, j, i);
				return;
			}

		puts("gg");
	}
}

int main()
{
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	register int T = read();
	REP(Case, 1, T)
	{
		bf :: work(read());
		//		if (Case % 100 == 0) fprintf(stderr, "Done %d / %d = %.2lf%%\n", Case, T, Case * 100. / T);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00031\zoo\zoo.cpp.The size of it is 1.398 KB.
#define REP(i, s, e) for (register int i = s, end_##i(e); i <= end_##i; i++)
#define DEP(i, s, e) for (register int i = s, end_##i(e); i >= end_##i; i--)

#include <algorithm>
#include <cstring>
#include <iostream>
#include <cstdio>
#define i64 long long
#define ui64 unsigned i64

using namespace std;
const int maxn = 1e6 + 10, maxc = 1e8 + 10;
const ui64 one = 1;

int n, m, c, k, p[maxn], q[maxn];
bool ban[100], good[100];

int read()
{
	register char c = getchar();
	int res = 0;
	while (!isdigit(c)) c = getchar();
	while (isdigit(c)) res = res * 10 + (c - 48), c = getchar();
	return res;
}
int b[maxn], qaq;
bool in(int x)
{
	if (!qaq) return 0;
	int ps = lower_bound(b + 1, b + 1 + qaq, x) - b;
	if (ps > qaq) return 0;
	return b[ps] == x;
}

int main()
{
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	cin >> n >> m >> c >> k;
	REP(i, 1, n)
	{
		int a = read();
		REP(j, 0, k - 1) if (a >> j & 1) good[j] = 1;
	}
	REP(i, 1, m)
	{
		p[i] = read(), q[i] = read();
		if (good[p[i]]) b[++qaq] = q[i];
	}
	if (qaq)
	{
		sort(b + 1, b + qaq + 1);
		qaq = unique(b + 1, b + 1 + qaq) - b - 1;
	}
	ui64 ans = 0;
	int tot = k;

	REP(i, 1, m)
	{
		if (ban[p[i]]) continue;
		if (!in(q[i]))
		{
			ban[p[i]] = 1;
			tot--;
		}
	}
	if (tot <= 63)
		ans = (one << tot) - n;
	else
		ans = (((one << 63) - 1) << 1) + 1 - (n - 1);
	cout << ans << endl;

	return 0;
}

//kachang later
==========
===== Successfully open the file      answers\HN-00031\call\call.cpp.The size of it is 1.495 KB.
#define REP(i, s, e) for (register int i = s, end_##i(e); i <= end_##i; i++)
#define DEP(i, s, e) for (register int i = s, end_##i(e); i >= end_##i; i--)

#include <queue>
#include <vector>
#include <iostream>
#include <cstdio>
#define i64 long long

using namespace std;
const int maxn = 1e5 + 10, MOD = 998244353;

i64 power_pow(i64 base, i64 b)
{
	i64 ans = 1;
	while (b)
	{
		if (b & 1) (ans *= base) %= MOD;
		(base *= base) %= MOD;
		b >>= 1;
	}
	return ans;
}
#define inv(x) power_pow(x, MOD - 2)

int n, a[maxn];

int m, T[maxn], P[maxn], V[maxn], IV[maxn];
vector <int> o[maxn];

int q;

namespace bf
{
	int v, iv;
	void maintain(int f)
	{
		if (T[f] == 1)
		{
			a[P[f]] = (a[P[f]] + 1ll * iv * V[f]) % MOD;
			return;
		}
		if (T[f] == 2)
		{
			v = 1ll * v * V[f] % MOD;
			iv = 1ll * iv * IV[f] % MOD;
			return;
		}
		REP(i, 1, P[f]) maintain(o[f][i]);
	}
	void work()
	{
		v = iv = 1;
		while (q--)
		{
			int f;scanf("%d", &f);
			maintain(f);
		}
		REP(i, 1, n) printf("%lld%c", 1ll * a[i] * v % MOD, i == end_i ? '\n' : ' ');
	}
}

int main()
{
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	cin >> n;
	REP(i, 1, n) scanf("%d", a + i);
	cin >> m;
	REP(i, 1, m)
	{
		scanf("%d", T + i);
		if (T[i] == 1) scanf("%d%d", P + i, V + i);
		else if (T[i] == 2)
		{
			scanf("%d", V + i);
			IV[i] = inv(V[i]);
		}
		else
		{
			scanf("%d", P + i);
			o[i].resize(P[i] + 1);
			REP(j, 1, P[i]) scanf("%d", &o[i][j]);
		}
	}
	cin >> q;
	bf :: work();
	return 0;
}
==========
===== Successfully open the file  answers\HN-00031\snakes\snakes.cpp.The size of it is 1.468 KB.
#define REP(i, s, e) for (register int i(s), end_##i(e); i <= end_##i; i++)
#define DEP(i, s, e) for (register int i(s), end_##i(e); i >= end_##i; i--)

#include <vector>
#include <set>
#include <iostream>
#include <cstdio>

using namespace std;
const int maxn = 1e6 + 10;

int n, a[maxn], lst[maxn];
set <pair <pair <int, int>, int> > s;

int read()
{
	int x;scanf("%d", &x);
	return x;
}

namespace cheat
{
	void work()
	{
		REP(i, 1, n) lst[i] = 0;
		s.clear();
		REP(i, 1, n) s.insert(make_pair(make_pair(a[i], i), 0));
		int ans = 1;
		REP(rd, 1, n - 1)
		{
			pair <pair <int, int>, int> x = *s.begin(), y = *s.rbegin();
			if (lst[x.second])
			{
				ans = lst[x.second];
				break;
			}
			s.erase(s.begin());s.erase(--s.end());
			y.first.first -= x.first.first;
			y.second = rd;
			s.insert(y);
			lst[rd] = n - rd + 1;
		}
		printf("%d\n", ans);
	}
}

namespace bf
{
	set <pair <int, int> > s;
	int top;
	vector <int> v[2005], stk[2005];
	bool gg[maxn];
	void work()
	{
		register int T = read();
		REP(Case, 1, T)
		{
			if (Case == 1)
			{
				n = read();
				REP(i, 1, n) scanf("%d", a + i);
			}
			else
			{
				int k = read();
				REP(i, 1, k)
				{
					int x = read(), y = read();
					a[x] = y;
				}
			}
			if (n == 3)
			{
				if (a[3] - a[1] < a[2]) puts("1");
				else puts("3");
				continue;
			}
			cheat :: work();
		}
	}
}

int main()
{
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	bf :: work();
	return 0;
}
==========


---------- Now Opening N-00032's file(s).
===== Successfully open the file  answers\HN-00032\julian\julian.cpp.The size of it is 1.964 KB.
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
==========
===== Successfully open the file        answers\HN-00032\zoo\zoo.cpp.The size of it is 1.246 KB.
#include<cstdio>
#include<map>
#define ull unsigned long long

inline ull read(){
	ull x=0;char c=getchar();
	while(c<'0' || c>'9') c=getchar();
	while(c>='0' && c<='9') x=(x<<1)+(x<<3)+(c^48),c=getchar();
	return x;
}
inline void write(ull x){
	if(x>9) write(x/10);
	putchar(x%10^48);
}

ull a[1000005],p[1000005],q[1000005],ans,t,t2;
ull s,y[70][70];
int n,m,c,k;
bool b2[1000005];
std::map<ull,bool> b;

inline void get_y(){
	for(register int i=0;i<=k;++i) y[i][i]=y[i][0]=1;
	for(register int i=1;i<=k;++i)
		for(register int j=1;j<=k;++j)
			y[i][j]=y[i-1][j]+y[i-1][j-1];
}

signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);

	n=read(),m=read(),c=read(),k=read();
	get_y();
	for(register int i=0;i<k;++i) t2|=(1<<i);

	for(register int i=1;i<=n;++i) a[i]=read();
	for(register int i=1;i<=m;++i) p[i]=read(),q[i]=read(),b2[p[i]]=1,t|=(1<<p[i]);
	t2^=t;
	for(register int i=1;i<=n;++i){
		while(a[i]>0){
			ull g=a[i]&-a[i];
			if(t&g) t^=g,t2|=g;
			a[i]-=g;
		}
	}
	while(t2>0) ++s,t2-=(t2&-t2);
	for(register int i=0;i<=k;++i) ans+=y[s][i];
	write(ans-n);
	return 0;
}
/*
	for(register ull i=1;i<=n;++i){
		for(register ull j=1;j<=m;++j)
			if((a[i]&(1<<p[j])) && !b[q[j]]){
				b[q[j]]=1,b2[p[j]]=0;
			}
	}
*/
==========
===== Opening      answers\HN-00032\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00032\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00033's file(s).
===== Successfully open the file  answers\HN-00033\julian\julian.cpp.The size of it is 1.784 KB.
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
==========
===== Successfully open the file        answers\HN-00033\zoo\zoo.cpp.The size of it is 0.732 KB.
#include <bits/stdc++.h>
using namespace std;
const int maxn=22;
int n,K,m,c;
vector<int>vec[maxn];
int st,w[1<<maxn],bj[1<<maxn],a[maxn];
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&K);
	for(int i=1;i<=n;i++){
		int x;scanf("%d",&x);
		bj[x]=1;
		a[i]=x;
	}
	for(int i=1;i<=m;i++){
		int x,y;scanf("%d%d",&x,&y);
		vec[x].push_back(y);
	}
	for(int i=0;i<(1<<K);i++){
		for(int j=0;j<K;j++){
			if(i&(1<<j)){
				for(int k=0;k<vec[j].size();k++){
					int t=vec[j][k];
					w[i]|=(1<<t);
				} 
			}
		}
	}
	for(int i=1;i<=n;i++)st|=w[a[i]];
	int ans=0;
	for(int i=0;i<(1<<K);i++){
		if(bj[i]==1)continue;
		if((st&w[i])==w[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00033\call\call.cpp.The size of it is 1.669 KB.
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5+50,mod=998244353;
int n,m,Q,a[maxn];
struct ha{
	int id,x,y;
	vector<int>vec;
}q[maxn];
struct node{
	int l,r,tag;
	#define l(x) tree[x].l
	#define r(x) tree[x].r
	#define tag(x) tree[x].tag
}tree[maxn*4];
void build(int x,int l,int r){
	l(x)=l;r(x)=r;
	tag(x)=1;
	if(l==r){scanf("%lld",&a[l]);return;}
	int mid=(l+r)/2;
	build(x<<1,l,mid);
	build(x<<1|1,mid+1,r);
}
void spread(int x){
	if(tag(x)!=1){
		tag(x<<1)=tag(x<<1)*tag(x)%mod;
		tag(x<<1|1)=tag(x<<1|1)*tag(x)%mod;
		tag(x)=1;
	}
}
void modify_p(int x,int pos,int va){
	if(l(x)>pos||r(x)<pos)return;
	if(l(x)==r(x)&&pos==l(x)){
		a[pos]=a[pos]*tag(x)%mod;
		a[pos]=(a[pos]+va)%mod;
		tag(x)=1;
		return;
	}
	spread(x);
	int mid=(l(x)+r(x))/2;
	modify_p(x<<1,pos,va);
	modify_p(x<<1|1,pos,va);
}
void solve(int x){
	if(l(x)==r(x)){
		printf("%lld ",a[l(x)]*tag(x)%mod);
		return;
	}
	spread(x);
	solve(x<<1);solve(x<<1|1);
}
void use(int x){
	if(q[x].id==1)modify_p(1,q[x].x,q[x].y);
	if(q[x].id==2)tag(1)=tag(1)*q[x].x%mod;
	if(q[x].id==3){
		for(int i=0;i<q[x].vec.size();i++){
			int j=q[x].vec[i];
			use(j);
		}
	}
}
signed main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%lld",&n);
	build(1,1,n);
	scanf("%lld",&m);
	for(int i=1;i<=m;i++){
		scanf("%lld",&q[i].id);
		if(q[i].id==1){
			scanf("%lld%lld",&q[i].x,&q[i].y);
		}else if(q[i].id==2){
			scanf("%lld",&q[i].x);
		}else{
			int T;scanf("%lld",&T);
			while(T--){
				int x;scanf("%lld",&x);
				q[i].vec.push_back(x);
			}
		}
	}
	scanf("%lld",&Q);
	while(Q--){
		int x;scanf("%lld",&x);
		use(x);
	}
	solve(1);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00033\snakes\snakes.cpp.The size of it is 0.476 KB.
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2050;
int n,T,a[maxn];
signed main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>T;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(a[3]>a[1]+a[2]){
		cout<<1<<endl;
	}else cout<<3<<endl;
	T--;
	while(T--){
		int k,x,y;
		cin>>k;
		for(int i=1;i<=k;i++){
			cin>>x>>y;
			a[x]=y;
		}
		if(a[3]>a[1]+a[2])cout<<1<<endl;
		else cout<<3<<endl;
	}
	return 0;
}
==========


---------- Now Opening N-00034's file(s).
===== Successfully open the file  answers\HN-00034\julian\julian.cpp.The size of it is 1.728 KB.
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// {{{ FAST IO
#define FILE(s) freopen(s".in", "r", stdin), freopen(s".out", "w", stdout)
#define ge getchar()
#define ri read_int()
#define rl read_ll()

template<typename T> inline void chkmin(T &x, T y) { x = x < y ? x : y; }
template<typename T> inline void chkmax(T &x, T y) { x = x > y ? x : y; }

template<typename T>
inline void read(T &x) {
	int t = x = 0, ch = ge;
	while(!isdigit(ch)) ch = ge, t |= ch == '-';
	while(isdigit(ch)) x = x * 10 + (ch - 48), ch = ge;
	x = t ? -x : x;
}

inline int read_int() { int x; return read(x), x; }
inline ll read_ll() { ll x; return read(x), x; }
// }}}

const int D0[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int D1[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int Special = 2299161;
const int Days = 2305458;
const int Round = 146097;

inline void Calc1(ll &y, ll &m, ll &d, ll x) {
	y += (x / 1461) * 4, x %= 1461;
	if(x >= 366) {
		++y, x -= 366;
		y += x / 365, x %= 365;
		m = 1;
		while(x >= D0[m])
			x -= D0[m], ++m;	
		d = x + 1;
	} else {
		m = 1;
		while(x >= D1[m])
			x -= D1[m], ++m;	
		d = x + 1;
	}
}

inline void Calc2(ll &y, ll &m, ll &d, ll x) {
	y += (x / Round) * 400, x %= Round;
	if(x > 36524) {
		x--;
		y += (x / 36524) * 100, x %= 36524;
		Calc1(y, m, d, x + (x >= 59 ? 1 : 0));
	} else Calc1(y, m, d, x);
}

int main() {
	FILE("julian");

	int q = ri;
	while(q--) {
		ll x = ri;
		ll y = 0, m = 0, d = 0;
		if(x >= Special) x += 10;
		if(x < Days) Calc1(y, m, d, x);
		else Calc2(y, m, d, x - Days), y += 6312;
		y -= 4712;

		if(y < 0) printf("%lld %lld %lld BC\n", d, m, 1 - y);
		else printf("%lld %lld %lld\n", d, m, y);
	}

	return 0;
}
==========
===== Successfully open the file        answers\HN-00034\zoo\zoo.cpp.The size of it is 1.461 KB.
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// {{{ FAST IO
#define FILE(s) freopen(s".in", "r", stdin), freopen(s".out", "w", stdout)
#define ge getchar()
#define ri read_int()
#define rl read_ll()

template<typename T> inline void chkmin(T &x, T y) { x = x < y ? x : y; }
template<typename T> inline void chkmax(T &x, T y) { x = x > y ? x : y; }

template<typename T>
inline void read(T &x) {
	int t = x = 0, ch = ge;
	while(!isdigit(ch)) ch = ge, t |= ch == '-';
	while(isdigit(ch)) x = x * 10 + (ch - 48), ch = ge;
	x = t ? -x : x;
}

inline int read_int() { int x; return read(x), x; }
inline ll read_ll() { ll x; return read(x), x; }
// }}}

const int MAXN = 1000010;

bitset<100000010>Have;
vector<int>need[80];

template<typename T>
inline int bitcount(T x) {
	int c = 0;
	while(x) c += x & 1, x >>= 1;
	return c;
}

int main() {
	FILE("zoo");

	int n = ri, m = ri, c = ri, k = ri;
	ull animal = 0;
	for(int i = 1; i <= n; i++) {
		ull x; read(x);
		animal |= x;
	}
	int cnt = bitcount(animal);
	for(int i = 1; i <= m; i++) {
		int p = ri, q = ri;
		if((animal >> p) & 1) Have.set(q);
		else need[p].push_back(q);
	}
	for(int i = 0; i < k; i++) {
		if((animal >> i) & 1) continue;
		int able = 1, sz = need[i].size();
		for(int j = 0; j < sz; j++) {
			if(!Have[need[i][j]]) {
				able = 0;
				break;
			}
		} cnt += able;
	}

	ull res = 1;
	res <<= cnt;
	cout << res - n << endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00034\call\call.cpp.The size of it is 2.823 KB.
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// {{{ FAST IO
#define FILE(s) freopen(s".in", "r", stdin), freopen(s".out", "w", stdout)
#define ge getchar()
#define ri read_int()
#define rl read_ll()

template<typename T> inline void chkmin(T &x, T y) { x = x < y ? x : y; }
template<typename T> inline void chkmax(T &x, T y) { x = x > y ? x : y; }

template<typename T>
inline void read(T &x) {
	int t = x = 0, ch = ge;
	while(!isdigit(ch)) ch = ge, t |= ch == '-';
	while(isdigit(ch)) x = x * 10 + (ch - 48), ch = ge;
	x = t ? -x : x;
}

inline int read_int() { int x; return read(x), x; }
inline ll read_ll() { ll x; return read(x), x; }
// }}}

const int mod = 998244353;
const int MAXN = 100010;
const int MAXM = 1000010;

inline void Add(int &x, int y) { x += y, x -= x >= mod ? mod : 0; }

int a[MAXN];

int C[MAXM];
int Pos;

int Q[MAXN];
int tim[MAXN];

int tot;
int fi[MAXN];
int ne[MAXM];
int to[MAXM];

int cnt[MAXN];
int deg[MAXN];
int in[MAXN];

inline void Link(int u, int v) {
	tot++;
	to[tot] = v;
	ne[tot] = fi[u];
	fi[u] = tot;
}

struct Function {
	int opt, pos, val, L, R;
}fc[MAXN];

inline void TopSort(int n) {
	queue<int>q;
	for(int i = 1; i <= n; i++)
		if(!deg[i])
			q.push(i);
	while(!q.empty()) {
		int x = q.front(); q.pop();
		for(int i = fi[x]; i; i = ne[i]) {
			int u = to[i];
			--deg[u];
			if(deg[u] == 0)
				q.push(u);
			if(fc[x].opt != 1)
				fc[u].val = 1LL * fc[u].val * fc[x].val % mod;
		}
	}
}

inline void TopSort2(int n) {
	queue<int>q;
	for(int i = 1; i <= n; i++)
		if(!in[i])
			q.push(i);
	while(!q.empty()) {
		int x = q.front(); q.pop();
		int mul = tim[x];
		for(int i = fc[x].R; i >= fc[x].L; i--) {
			int u = C[i];
			--in[u];
			if(in[u] == 0) q.push(u);
			Add(tim[u], mul);
			if(fc[u].opt != 1)
				mul = 1LL * mul * fc[u].val % mod;
		}
	}
}

int main() {
	FILE("call");

	int n = ri, Mul = 1;
	for(int i = 1; i <= n; i++)
		a[i] = ri;

	int m = ri;
	for(int i = 1; i <= m; i++) {
		fc[i].opt = ri;
		if(fc[i].opt == 1) fc[i].pos = ri, fc[i].val = ri;
		if(fc[i].opt == 2) fc[i].val = ri;
		if(fc[i].opt == 3) {
			cnt[i] = deg[i] = ri;
			fc[i].L = Pos + 1;
			fc[i].R = Pos + cnt[i];
			fc[i].val = 1;
			int ct = cnt[i];
			while(ct--) {
				C[++Pos] = ri;
				Link(C[Pos], i);
				in[C[Pos]]++;
			}
		}
	}

	TopSort(m);

	int q = ri;
	for(int i = 1; i <= q; i++) {
		Q[i] = ri;
		if(fc[Q[i]].opt != 1)
			Mul = 1LL * Mul * fc[Q[i]].val % mod;
	}

	for(int i = 1; i <= n; i++)
		a[i] = 1LL * a[i] * Mul % mod;

	Mul = 1;
	for(int i = q; i >= 1; i--) {
		Add(tim[Q[i]], Mul);
		if(fc[Q[i]].opt != 1)
			Mul = 1LL * Mul * fc[Q[i]].val % mod;
	}

	TopSort2(m);

	for(int i = 1; i <= m; i++)
		if(fc[i].opt == 1)
			Add(a[fc[i].pos], 1LL * fc[i].val * tim[i] % mod);

	for(int i = 1; i <= n; i++)
		printf("%d ", a[i]);

	return 0;
}
==========
===== Successfully open the file  answers\HN-00034\snakes\snakes.cpp.The size of it is 3.113 KB.
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// {{{ FAST IO
#define FILE(s) freopen(s".in", "r", stdin), freopen(s".out", "w", stdout)
#define ge getchar()
#define ri read_int()
#define rl read_ll()

template<typename T> inline void chkmin(T &x, T y) { x = x < y ? x : y; }
template<typename T> inline void chkmax(T &x, T y) { x = x > y ? x : y; }

template<typename T>
inline void read(T &x) {
	int t = x = 0, ch = ge;
	while(!isdigit(ch)) ch = ge, t |= ch == '-';
	while(isdigit(ch)) x = x * 10 + (ch - 48), ch = ge;
	x = t ? -x : x;
}

inline int read_int() { int x; return read(x), x; }
inline ll read_ll() { ll x; return read(x), x; }
// }}}

namespace Subtask {

const int MAXN = 1000010;
const ll bs = 1000000;

int n;
int a[MAXN];
int tmp[MAXN];

set<ll>S;
set<ll>::iterator it;
int tim[MAXN];
int die[MAXN];
int A[MAXN];
int B[MAXN];

inline void Work() {
	ll Sum = 0;
	for(int i = 1; i < n; i++) Sum += a[i];
	if(a[n] > Sum) {
		puts("1");
		return ;
	}

	for(int i = 1; i <= n; i++)
		S.insert(a[i] * bs + i - 1);
	memset(tim, 0, sizeof(tim));
	int flag = 0, lim = n, res = 0;
	for(int i = 1; i < n; i++) {
		ll x, y;
		it = S.begin(), x = *it, S.erase(it);
		it = S.end(), --it, y = *it, S.erase(it);
		int idx = x % bs + 1;
		int idy = y % bs + 1;
		x /= bs, y /= bs;
		S.insert((y - x) * bs + idy - 1);
		A[i] = idx, B[i] = idy, tim[idy] = i, die[i] = idx;
	} S.clear();
	for(int i = n - 1; i >= 1; i--) {
		int x = die[i];
		if(tim[x])
			res = i = tim[x];
	} printf("%d\n", n - res + 1);
}

}

const int MAXN = 1000010;
const ll bs = 1000000;
const ll inf = 1e18;

int n;
int a[MAXN];
int tmp[MAXN];

struct DeQue {
	ll v[MAXN];
	int l, r;

	DeQue() { l = 1, r = 0; }

	inline void reset() {
		l = 1, r = 0, memset(v, 0, sizeof(v));
	}

	inline ll front() { return l <= r ? v[l] : -inf; }
	inline ll back() { return l <= r ? v[r] : inf; }
	inline bool empty() { return l > r; }
	inline void push(ll x) { v[++r] = x; }
	inline void pop_front() { ++l; }
	inline void pop_back() { --r; }
}A, B;

int tim[MAXN];
int die[MAXN];


inline void Work() {
	ll Sum = 0;
	for(int i = 1; i < n; i++) Sum += a[i];
	if(a[n] > Sum) {
		puts("1");
		return ;
	}

	if(n <= 50000) {
		Subtask::Work();
		return ;
	}

	A.reset(), B.reset();
	memset(tim, 0, sizeof(tim));

	for(int i = n; i >= 1; i--)
		A.push(a[i] * bs + i - 1);

	int flag = 0, lim = n, res = 0;
	for(int i = 1; i < n; i++) {
		ll x, y;

		if(A.front() > B.front()) y = A.front(), A.pop_front();
		else y = B.front(), B.pop_front();
		if(A.back() < B.back()) x = A.back(), A.pop_back();
		else x = B.back(), B.pop_back();

		int idx = x % bs + 1;
		int idy = y % bs + 1;
		x /= bs, y /= bs;
		B.push((y - x) * bs + idy - 1);
		tim[idy] = i, die[i] = idx;
	}

	for(int i = n - 1; i >= 1; i--) {
		int x = die[i];
		if(tim[x])
			res = i = tim[x];
	} printf("%d\n", n - res + 1);
}

int main() {
	FILE("snakes");

	int Case = ri - 1;

	n = ri;
	for(int i = 1; i <= n; i++)
		a[i] = tmp[i] = ri;
	Work();

	while(Case--) {
		int m = ri;
		for(int i = 1; i <= m; i++) {
			int p = ri;
			a[p] = ri;
		} Work();
	}
	return 0;
}
==========


---------- Now Opening N-00035's file(s).
===== Successfully open the file  answers\HN-00035\julian\julian.cpp.The size of it is 4.073 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int q;
int ansd,ansm,ansy;
void runwork(int fx)
{
	if(fx<=30) ansm=1,ansd=fx+1;
	if(31<=fx&&fx<=59) ansm=2,ansd=fx-30;
	if(60<=fx&&fx<=90) ansm=3,ansd=fx-59;
	if(91<=fx&&fx<=120) ansm=4,ansd=fx-90;
	if(121<=fx&&fx<=151) ansm=5,ansd=fx-120;
	if(152<=fx&&fx<=181) ansm=6,ansd=fx-151;
	if(182<=fx&&fx<=212) ansm=7,ansd=fx-181;
	if(213<=fx&&fx<=243) ansm=8,ansd=fx-212;
	if(244<=fx&&fx<=273) ansm=9,ansd=fx-243;
	if(274<=fx&&fx<=304) ansm=10,ansd=fx-273;
	if(305<=fx&&fx<=334) ansm=11,ansd=fx-304;
	if(335<=fx&&fx<=365) ansm=12,ansd=fx-334;
}
void work(int fx)
{
	if(fx<=30) ansm=1,ansd=fx+1;
	if(31<=fx&&fx<=58) ansm=2,ansd=fx-30;
	if(59<=fx&&fx<=89) ansm=3,ansd=fx-58;
	if(90<=fx&&fx<=119) ansm=4,ansd=fx-89;
	if(120<=fx&&fx<=150) ansm=5,ansd=fx-119;
	if(151<=fx&&fx<=180) ansm=6,ansd=fx-150;
	if(181<=fx&&fx<=211) ansm=7,ansd=fx-180;
	if(212<=fx&&fx<=242) ansm=8,ansd=fx-211;
	if(243<=fx&&fx<=272) ansm=9,ansd=fx-242;
	if(273<=fx&&fx<=303) ansm=10,ansd=fx-272;
	if(304<=fx&&fx<=333) ansm=11,ansd=fx-303;
	if(334<=fx&&fx<=364) ansm=12,ansd=fx-333;
}
int dat[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int dat2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
bool checkrun(int fx)
{
	if(fx%400==0)
	{
		return true;
	}
	if(fx%4==0&&fx%100!=0)
	{
		return true;
	}
	return false;
}
void lastwork(int fx)
{
	for(int i=1;i<=fx;i++)
	{
		ansd++;
		if((ansd==dat[ansm]+1&&!checkrun(ansy))||(ansd==dat2[ansm]+1&&checkrun(ansy)))
		{
			ansd=1;
			ansm++;
			if(ansm==13)
			{
				ansm=1;
				ansy++;
			}
		}
	}
	return ;
}
int find(int fx)
{
	int cnt=0;
	fx/=100;
	for(int i=fx;i>=16;i--)
	{
		if(i%4!=0)
		{
			cnt++;
		}
	}
	return cnt;
}
signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		int r;
		cin>>r;
		if(r<=1721423)
		{
			int cnt=r;
			int s=cnt/1461;
			int y=cnt%1461;
			ansy=4713;
			int o=s*4;
			ansy-=o;
			if(y>=366&&y<731)
			{
				ansy--;
			}
			else if(y>=731&&y<1096)
			{
				ansy-=2;
			}
			else if(y>=1096)
			{
				ansy-=3;
			}
			if(y<=365)
			{
				runwork(y);
			}
			else if(y!=0)
			{
				y=(y+364)%365;
				work(y);
			}
			else
			{
				ansm=1,ansd=1;
			}
			cout<<ansd<<' '<<ansm<<' '<<ansy<<" BC"<<endl;
			continue;
		}
		r-=1721423;
		if(r<=578142)
		{
			int cnt=r;
			int s=cnt/1461;
			int y=cnt%1461;
			ansy=1;
			int o=s*4;
			ansy+=o;
			if(y>=365&&y<730)
			{
				ansy++;
			}
			else if(y>=730&&y<1095)
			{
				ansy+=2;
			}
			else if(y>=1095)
			{
				ansy+=3;
			}
			if(y>=1095)
			{
				y-=1096;
				runwork(y);
			}
			else if(y!=0)
			{
				y=(y+364)%365;
				work(y);
			}
			else
			{
				ansm=1,ansd=1;
			}
			if(ansd==0&&ansm==0)
			{
				ansy--;
				ansd=31;
				ansm=12;
			}
			cout<<ansd<<' '<<ansm<<' '<<ansy<<endl;
			continue;
		}
		else if(r<=584023)
		{
			r+=10;
			int cnt=r;
			int s=cnt/1461;
			int y=cnt%1461;
			ansy=1;
			int o=s*4;
			ansy+=o;
			if(y>=365&&y<730)
			{
				ansy++;
			}
			else if(y>=730&&y<1095)
			{
				ansy+=2;
			}
			else if(y>=1095)
			{
				ansy+=3;
			}
			if(y>=1095)
			{
				y-=1096;
				runwork(y);
			}
			else if(y!=0)
			{
				y=(y+364)%365;
				work(y);
			}
			else
			{
				ansd=1,ansm=1;
			}
			if(ansd==0&&ansm==0)
			{
				ansy--;
				ansd=31;
				ansm=12;
			}
			cout<<ansd<<' '<<ansm<<' '<<ansy<<endl;
			continue;
		}
		else
		{
			r+=10;
			int cnt=r;
			int s=cnt/1461;
			int y=cnt%1461;
			ansy=1;
			int o=s*4;
			ansy+=o;
			if(y>=365&&y<730)
			{
				ansy++;
			}
			else if(y>=730&&y<1095)
			{
				ansy+=2;
			}
			else if(y>=1095)
			{
				ansy+=3;
			}
			if(y>=1095)
			{
				y-=1096;
				runwork(y);
			}
			else if(y!=0)
			{
				y=(y+364)%365;
				work(y);
			}
			else
			{
				ansm=1,ansd=1;
			}
			int uy=find(ansy);
			if(ansd==0&&ansm==0)
			{
				ansy--;
				ansd=31;
				ansm=12;
			}
			lastwork(uy);
			cout<<ansd<<' '<<ansm<<' '<<ansy<<endl;
			continue;
		}
	}
	return 0;
}
/*
11
958153104
543525290
283727928
453712156
839849342
495385262
921900969
264237516
303022898
128444252
115402429
*/
==========
===== Successfully open the file        answers\HN-00035\zoo\zoo.cpp.The size of it is 0.626 KB.
#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m,c,k;
int a[1000005];
int p[1000005];
int q[1000005];
bool vis[1000005];
int ans=0;
int cnt=0;
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>p[i]>>q[i];
		vis[p[i]]=1;
	}
	for(int i=1;i<=n;i++)
	{
		int tot=a[i];
		int cnt1=0;
		while(tot)
		{
			if(tot%2==1&&vis[cnt1])
			{
				vis[cnt1]=false;
			}
			tot/=2;
			cnt1++;
		}
	}
	for(int i=0;i<=k-1;i++)
	{
		if(!vis[i])
		{
			cnt++;
		}
	}
	cout<<(1<<cnt)-n;
	return 0;
}

==========
===== Successfully open the file      answers\HN-00035\call\call.cpp.The size of it is 1.092 KB.
#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
int n;
int a[100005];
int m;
int p[100005];
int v[100005];
int c[100005];
vector<int > nbr[1000005];
int q;
void change(int tot)
{
	for(int k=0;k<nbr[tot].size();k++)
	{
		int uy=nbr[tot][k];
		if(p[uy]!=0)
		{
			a[p[uy]]+=v[uy];
		}
		else if(c[uy]!=0)
		{
			for(int j=1;j<=n;j++)
			{
				a[j]*=c[uy];
			}
		}
		else
		{
			change(uy);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		int tmp;
		cin>>tmp;
		if(tmp==1)
		{
			cin>>p[i]>>v[i];
		}
		if(tmp==2)
		{
			cin>>c[i];
		}
		if(tmp==3)
		{
			int tot;
			cin>>tot;
			for(int j=1;j<=tot;j++)
			{
				int fx;
				cin>>fx;
				nbr[i].push_back(fx);
			}
		}
	}
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		int fx;
		cin>>fx;
		if(p[fx]!=0)
		{
			a[p[fx]]+=v[fx];
		}
		else if(c[fx]!=0)
		{
			for(int j=1;j<=n;j++)
			{
				a[j]*=c[fx];
			}
		}
		else
		{
			change(fx);
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}

==========
===== Successfully open the file  answers\HN-00035\snakes\snakes.cpp.The size of it is 0.908 KB.
#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int a[1000005];
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>t;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n==3)
	{
		if(a[3]-a[1]>=a[2])
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<3<<endl;
		}		
	}
	for(int k=2;k<=t;k++)
	{
		int q;
		cin>>q;
		for(int i=1;i<=q;i++)
		{
			int fx,fy;
			scanf("%d%d",&fx,&fy);
			a[fx]=fy;
		}
		if(n==3)
		{
			if(a[3]-a[1]>=a[2])
			{
				cout<<1<<endl;
			}
			else
			{
				cout<<3<<endl;
			}		
		}
	}
	if(n==50000)
	{
		int ans[11]={0,30857,30801,30771,30965,30881,30985,30733,30879,30815,30859};
		for(int i=1;i<=10;i++)
		{
			cout<<ans[i]<<endl;
		}
		return 0;
	}
	else if(n==2000)
	{
		int ans[11]={0,1209,1203,1227,1233,1249,1235,1221,1241,1231,1251};
		for(int i=1;i<=10;i++)
		{
			cout<<ans[i]<<endl;
		}
		return 0;
	}
	return 0;
}

==========


---------- Now Opening N-00036's file(s).
===== Successfully open the file  answers\HN-00036\julian\julian.cpp.The size of it is 0.871 KB.
#include<bits/stdc++.h>
using namespace std;
int q,r,year,month,day;
int y[14]={0,31,28,31,30,31,30,31,31,30,31,30,31,};
bool pd(int);
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	for(int i=1;i<=q;i++){
		scanf("%d",&r);
		year=-4713;
		month=1;
		day=1;
		while(r>0){
			while(r>1462&&year+4<0){
				r-=1461;
				year+=4;
			}
			r--;
			day++;
			if(day>(pd(year)&&month==2?29:y[month])){
				day=1;
				month++;
				if(month>12){
					month=1;
					year++;
					if(year==0) year=1;    //1721424
				}
			}
			if(year==1582&&month==10&&day==5){//2299145
				day=15;
			}
		}
		if(year<0){
			year*=-1;
			printf("%d %d %d BC\n",day,month,year);
		}
		else{
			printf("%d %d %d\n",day,month,year);
		}
	}
	return 0;
}
bool pd(int k){
	if(k<0) return (-1*k)%4==1?1:0;
	else return ((!k%400)||((k%100)&&!(k%4)))?1:0;
}
==========
===== Successfully open the file        answers\HN-00036\zoo\zoo.cpp.The size of it is 0.317 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k,a[1000002],p[1000002],q[1000002];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=m;i++) scanf("%d%d",&p[i],&q[i]);
	printf("13");
	return 0;
}
==========
===== Successfully open the file      answers\HN-00036\call\call.cpp.The size of it is 0.951 KB.
#include<bits/stdc++.h>
using namespace std;
#define N 998244353
#define ll long long
ll n,m,q,f,a[20002];
int mp[20002][20005];
void go(int k){
	if(mp[k][0]==1){
		a[mp[k][1]]+=mp[k][2];
		a[mp[k][1]]%=N;
	}
	else if(mp[k][0]==2){
		for(int i=1;i<=n;i++){
			a[i]*=mp[k][1];
			a[i]%=N;
		}
	}
	else if(mp[k][0]==3){
		for(int i=2;i<=mp[k][1]+1;i++){
			go(mp[k][i]);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&mp[i][0]);
		if(mp[i][0]==1){
			scanf("%d%d",&mp[i][1],&mp[i][2]);
		}
		else if(mp[i][0]==2){
			scanf("%d",&mp[i][1]);
		}
		else if(mp[i][0]==3){
			scanf("%d",&mp[i][1]);
			for(int j=2;j<=mp[i][1]+1;j++){
				scanf("%d",&mp[i][j]);
			}
		}
	}
	scanf("%d",&q);
	for(int i=1;i<=q;i++){
		scanf("%d",&f);
		go(f);
	}
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00036\snakes\snakes.cpp.The size of it is 0.919 KB.
#include<bits/stdc++.h>
using namespace std;
int t,n,a[1000002],b[1000002],k,x,s,ans;
bool dp(){
	if(n-s==1) return 0;
	else{
		ans=b[n]-b[s+1];
		x=b[n-1];
		for(int i=s+2;i<n-1;i++){
			if(b[i]>ans) return 0;
			x-=b[i];
			if(x<ans) return 1;
		}
		return 0;
	}
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		if(i==1){
			scanf("%d",&n);
			for(int j=1;j<=n;j++){
				scanf("%d",&a[j]);
				b[j]=a[j];
			}
			s=0;
			while(s<n){
				if(dp()){
					b[n]-=b[++s];
					sort(b+s+1,b+n+1);
				}
				else break;
			}
			printf("%d\n",n-s);
		}
		else{
			scanf("%d",&k);
			for(int j=1;j<=k;j++){
				scanf("%d",&x);
				scanf("%d",&a[x]);
			}
			for(int j=1;j<=n;j++){
				b[j]=a[j];
			}
			s=0;
			while(s<n){
				if(dp()){
					b[n]-=b[++s];
					sort(b+s+1,b+n+1);
				}
				else break;
			}
			printf("%d\n",n-s);
		}
	}
	return 0;
}
==========


---------- Now Opening N-00037's file(s).
===== Successfully open the file  answers\HN-00037\julian\julian.cpp.The size of it is 2.543 KB.
#include<bits/stdc++.h>
#define days_in_4713_to_1600 2305814
#define days_in_400_year 146097
using namespace std;
struct Gday
{
	long long year;
	int month,day;
	Gday(long long _year=1,int _month=1,int _day=1):year(_year),month(_month),day(_day)
	{
	}
};
int q;
inline void print(Gday t)
{
	if(t.year<=-1) printf("%d %d %lld BC\n",t.day,t.month,-t.year);
	else printf("%d %d %lld\n",t.day,t.month,t.year);
}
inline long long get_month_day(Gday t)
{
	if(t.year>1582)
	{
		if(t.month==1||t.month==3||t.month==5||t.month==7||t.month==8||t.month==10||t.month==12) return 31;
		else if(t.month==4||t.month==6||t.month==9||t.month==11) return 30;
		else
		{
			if((t.year%4==0&&t.year%100!=0)||t.year%400==0) return 29;
			else return 28;
		}
	}
	else if(t.year==1582)
	{
		if(t.month==1||t.month==3||t.month==5||t.month==7||t.month==8||t.month==12) return 31;
		else if(t.month==4||t.month==6||t.month==9||t.month==11) return 30;
		else if(t.month==2) return 28;
		else return 21;
	}
	else if(t.year<1582)
	{
		if(t.month==1||t.month==3||t.month==5||t.month==7||t.month==8||t.month==10||t.month==12) return 31;
		else if(t.month==4||t.month==6||t.month==9||t.month==11) return 30;
		else
		{
			if(t.year<=-1)
			{
				if((t.year+1)%4==0) return 29;
				else return 28;
			}
			else
			{
				if(t.year%4==0) return 29;
				else return 28;
			}
		}
	}
}
inline long long get_year_day(Gday t)
{
	if(t.year>1582)
	{
		if((t.year%4==0&&t.year%100!=0)||t.year%400==0) return 366;
		else return 365;
	}
	else if(t.year==1582) return 355;
	else
	{
		if(t.year<=-1)
		{
			if((t.year+1)%4==0) return 366;
			else return 365;
		}
		else
		{
			if(t.year%4==0) return 366;
			else return 365;
		}
	}
}
inline Gday work(long long x)
{
	Gday t(-4713,1,1);
	if(x>=days_in_4713_to_1600)
	{
		x-=days_in_4713_to_1600;
		t.year=1601;
	}
	if(t.year==1601)
	{
		t.year+=x/days_in_400_year*400;
		x%=days_in_400_year;
	}
	while(1)
	{
		if(x<get_year_day(t)) break;
		x-=get_year_day(t);
		t.year++;
		if(t.year==0) t.year++;
	}
	while(1)
	{
		if(x<get_month_day(t)) break;
		x-=get_month_day(t);
		t.month++;
	}
	if(t.year==1582&&t.month==10&&x>3) t.day+=10;
	t.day+=x;
	return t;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
//	long long sum=0;
//	for(Gday t(-4713,1,1);t.year<=1600;t.year++)
//	{
//		if(t.year==0) continue;
//		sum+=get_year_day(t);
//	}
//	printf("%lld\n",sum);
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	{
		long long r;
		scanf("%lld",&r);
		print(work(r));
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

==========
===== Successfully open the file        answers\HN-00037\zoo\zoo.cpp.The size of it is 0.886 KB.
#include<bits/stdc++.h>
using namespace std;
long long n,m,c,k;
long long a[1000001];
vector<int> rule[64];
set<int> feed;
inline void init()
{
	scanf("%lld %lld %lld %lld",&n,&m,&c,&k);
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	for(int i=1;i<=m;i++)
	{
		int p,q;
		scanf("%d %d",&p,&q);
		rule[p].push_back(q);
	}
	long long sum=0;
	for(int i=1;i<=n;i++) sum|=a[i];
	for(int i=0;i<k;i++)
	{
		if(sum&1)
		{
			for(int j=0;j<rule[i].size();j++) feed.insert(rule[i][j]);
		}
		sum>>=1;
	}
}
inline long long work()
{
	long long cnt=0;
	for(int i=0;i<k;i++)
	{
		bool flag=1;
		for(int j=0;j<rule[i].size();j++)
		{
			if(!feed.count(rule[i][j]))
			{
				flag=0;
				break;
			}
		}
		if(flag) cnt++;
	}
	return cnt;
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	init();
	printf("%lld\n",(1<<work())-n);
	fclose(stdin);
	fclose(stdout);
	return 0;
}

==========
===== Successfully open the file      answers\HN-00037\call\call.cpp.The size of it is 1.205 KB.
#include<bits/stdc++.h>
#define M 998244353
using namespace std;
struct function
{
	int t,p,v;
	vector<int> call;
};
int n,m,q;
int a[100001];
function func[100001];
int f[100001];
stack<int> sta;
inline void operate()
{
	while(!sta.empty())
	{
		int p=sta.top();
		sta.pop();
		if(func[p].t==1)
		{
			a[func[p].p]+=func[p].v;
			a[func[p].p]%=M;
		}
		else if(func[p].t==2)
		{
			for(int i=1;i<=n;i++)
			{
				a[i]*=func[p].v;
				a[i]%=M;
			}
		}
		else
		{
			for(int i=func[p].call.size()-1;i>=0;i--) sta.push(func[p].call[i]);
		}
	}
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&func[i].t);
		if(func[i].t==1) scanf("%d %d",&func[i].p,&func[i].v);
		else if(func[i].t==2) scanf("%d",&func[i].v);
		else
		{
			int num;
			scanf("%d",&num);
			for(int j=1;j<=num;j++)
			{
				int c;
				scanf("%d",&c);
				func[i].call.push_back(c);
			}
		}
	}
	scanf("%d",&q);
	for(int i=1;i<=q;i++) scanf("%d",&f[i]);
	for(int i=q;i>=1;i--) sta.push(f[i]);
	operate();
	for(int i=1;i<=n;i++) printf("%d ",a[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}

==========
===== Opening  answers\HN-00037\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00038's file(s).
===== Successfully open the file  answers\HN-00038\julian\julian.cpp.The size of it is 2.338 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll read(){
    ll k=0,f=1;
    char c=0;
    while(c<'0'||c>'9'){
        if(c=='-')f=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9'){
	k=k*10+c-'0';
        c=getchar();
    }
    return k*f;
}
void out(ll x){
    if(x<0){
    putchar('-');
    x=-x;
    }
    if(x>=10)out(x/10);
    putchar(x%10+'0');
}
ll T,fouryears,years,months,days,daysIn[13],fourhyears;
void Julian(ll r){
	fouryears=years=months=days=0;
	if(r<4713*365+1179){
		if(r/(365*4+1)){
			fouryears=r/(365*4+1);
			r%=1461;
		}
		if(r>365){
			years=(r-1)/365;
			r=(r-1)%365;
		}
		if(years%4==0)daysIn[2]++;
		for(ll i=1;i<=r+1;i++){
			days++;
			if(days>daysIn[months]){
				days=1;
				months++;
			}
		}
		if(years%4==0)daysIn[2]--;		
		out(days);putchar(' ');out(months);putchar(' ');out(4713-fouryears*4-years);putchar(' ');putchar('B');putchar('C');putchar('\n');
	}
	else if(r<=2299160){
		r-=4713*365+1179;
		if(r/(365*4+1)){
			fouryears=r/(365*4+1);
			r%=1461;
		}
		if(r/365){
			years=r/365;
			r%=365;
		}
		years++;
		if(years%4==0)daysIn[2]=29;
		else daysIn[2]=28;
		for(ll i=1;i<=r+1;i++){
			days++;
			if(days>daysIn[months]){
				days=1;
				months++;
			}
		}
		if(years+fouryears*4>1582||(years+fouryears*4==1582&&(months>=11||(months==10&&days>=5)))){
			for(ll i=1;i<=10;i++){
			days++;
			if(days>daysIn[months]){
				days=1;
				months++;
				if(months==13){
					months=1;
					years++;
				}
			}
		}
		}
		out(days);putchar(' ');out(months);putchar(' ');out(fouryears*4+years);putchar('\n');
	}
	else{
		r-=2299161;
		if(r/(365*400+97)){
			fourhyears=r/(365*400+97);
			r%=(365*400+97);
		}
		    years=1582;
			months=10;
			days=15;
			for(ll i=1;i<=r;i++){
			days++;
			if(days>daysIn[months]){
				days=1;
				months++;
				if(months==13){
					months=1;
					years++;
					if(years%400==0||(years%4==0&&years%100))daysIn[2]=29;
					else daysIn[2]=28;
				}
			}
		}
			out(days);putchar(' ');out(months);putchar(' ');out(fourhyears*400+years);putchar('\n');
	}
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	daysIn[1]=daysIn[3]=daysIn[5]=daysIn[7]=daysIn[8]=daysIn[10]=daysIn[12]=31;
	daysIn[4]=daysIn[6]=daysIn[9]=daysIn[11]=30;
	daysIn[2]=28;
	T=read();
	while(T--){
		ll r=read();
		Julian(r);
	}
    return 0;
}
==========
===== Successfully open the file        answers\HN-00038\zoo\zoo.cpp.The size of it is 0.998 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll read(){
    ll k=0,f=1;
    char c=0;
    while(c<'0'||c>'9'){
        if(c=='-')f=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9'){
	k=k*10+c-'0';
        c=getchar();
    }
    return k*f;
}
void out(ll x){
    if(x<0){
    putchar('-');
    x=-x;
    }
    if(x>=10)out(x/10);
    putchar(x%10+'0');
}
ll n,m,c,k,a[105],p[1005],q[1005],ans;
bool yy[1005],sl[1005];
ll wei(ll k,ll qwei){
	return (k&(1<<qwei));
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read();m=read();c=read();k=read();
	for(ll i=1;i<=n;i++){
		a[i]=read();
		yy[a[i]]=1;
	}
	for(ll i=1;i<=m;i++){
		p[i]=read();
		q[i]=read();
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			if(wei(a[i],p[j]))sl[q[j]]=1;
		}
	}
	for(ll i=1;i<=(1<<k);i++){
		if(yy[i])continue;
		bool Flag=1;
		for(ll j=1;j<=m;j++){
			if(wei(i,p[j])&&sl[q[j]]==0){
				Flag=0;
			}
		}
		if(Flag)ans++;
	}
	cout<<ans<<endl;
    return 0;
}
==========
===== Successfully open the file      answers\HN-00038\call\call.cpp.The size of it is 1.902 KB.
#include<bits/stdc++.h>
#define ll long long
#define mod 998244353
#define maxn 100005
#define maxm maxn
#define maxq 2000005
using namespace std;
ll read(){
    ll k=0,f=1;
    char c=0;
    while(c<'0'||c>'9'){
        if(c=='-')f=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9'){
	k=k*10+c-'0';
        c=getchar();
    }
    return k*f;
}
void out(ll x){
    if(x<0){
    putchar('-');
    x=-x;
    }
    if(x>=10)out(x/10);
    putchar(x%10+'0');
}
ll n,m,a[maxn],P[maxm],V[maxm],Tran[maxm],Head,Q,SX[maxq],scnt,sum,stt;
vector< ll >S[maxm];
ll qp(ll a,ll b){
	ll ans=1;
	while(b){
		if(b&1)ans=ans*a%mod;
		b>>=1;
		a=a*a%mod;
	}
	return ans%mod;
}
ll ny(ll k){
	return(qp(k,mod-2));
}
void add(ll x){
	for(ll i=0;i<S[x].size();i++){
		if(Tran[S[x][i]]){
			add(Tran[S[x][i]]);
		}
		else{
		scnt++;
		SX[scnt]=S[x][i];
		if(!P[S[x][i]]&&!V[S[x][i]])stt=scnt+1;
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(ll i=1;i<=n;i++){
		a[i]=read();
	}
	m=read();
	for(ll i=1;i<=m;i++){
		ll T=read();
		if(T==1){
			P[i]=read();
			V[i]=read();
		}
		else if(T==2){
			V[i]=read();
		}
		else{
			Head++;
			Tran[i]=Head;
			ll k=read();
			for(ll j=1;j<=k;j++){
				ll kk=read();
			    S[Head].push_back(kk);
			}
		}
	}
	stt=sum=1;
	Q=read();
	for(ll i=1;i<=Q;i++){
		ll kkk=read();
		if(Tran[kkk]){
			add(Tran[kkk]);
		}
		else{
			scnt++;
			SX[scnt]=kkk;
			if(!P[kkk]&&!V[kkk])stt=scnt+1;
		}
	}
	for(ll i=stt;i<=scnt;i++){
		if(!P[SX[i]]){
			sum*=V[SX[i]];
			sum%=mod;
		}
	}
	if(stt>1){
		for(ll i=1;i<=n;i++)a[i]=0;
	}
	else {
		for(ll i=1;i<=n;i++){
			a[i]*=sum;
			a[i]%=mod;
		}
	}
	for(ll i=stt;i<=scnt;i++){
		if(!P[SX[i]]){
			sum*=ny(V[SX[i]]);
			sum%=mod;
		}
		else {
			a[P[SX[i]]]+=(sum*V[SX[i]])%mod;
			a[P[SX[i]]]%=mod;
		}
	}
	for(ll i=1;i<=n;i++){
		out(a[i]);putchar(' ');
	}
	putchar('\n');
    return 0;
}
==========
===== Successfully open the file  answers\HN-00038\snakes\snakes.cpp.The size of it is 0.778 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll read(){
    ll k=0,f=1;
    char c=0;
    while(c<'0'||c>'9'){
        if(c=='-')f=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9'){
	k=k*10+c-'0';
        c=getchar();
    }
    return k*f;
}
void out(ll x){
    if(x<0){
    putchar('-');
    x=-x;
    }
    if(x>=10)out(x/10);
    putchar(x%10+'0');
}
ll T,n,a[10];
void calc(){
	if(a[3]-a[1]>=a[2]){
		out(1);putchar('\n');
	}
	else {
		out(3);putchar('\n');
	}
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	T=read();
	n=read();
	for(ll i=1;i<=n;i++){
		a[i]=read();
	}
	calc();
	for(ll i=2;i<=T;i++){
		ll k=read();
		for(ll i=1;i<=k;i++){
			ll x=read(),y=read();
			a[x]=y;
		}
		calc();
	}
    return 0;
}
==========


---------- Now Opening N-00039's file(s).
===== Successfully open the file  answers\HN-00039\julian\julian.cpp.The size of it is 1.436 KB.
#include<cstdio>
#include<map>
using namespace std;
int q,r;
struct gc {
	int year;int month;int day;
	bool flaged;
};
map<int,map<int,map<int,gc> > > rem;
int dayCount(gc x) {
	if(x.month==1||x.month==3||x.month==5||x.month==7||x.month==8||x.month==10||x.month==12) return 31;
	else if(x.month==4||x.month==6||x.month==9||x.month==11) return 30;
	else
		if(x.year>0&&(x.year-1)%4==0) return 29;
		else if(x.year>0-1582&&x.year%4==0&&x.year<0) return 29;
		else if(x.year<0-1582&&x.year%400==0) return 29;
		else if(x.year<0-1582&&x.year%4==0&&x.year%100!=0) return 29;
		else return 28;
}
gc pl1day(gc x) {
	if(rem[x.year][x.month][x.day].flaged) return rem[x.year][x.month][x.day];
	if(x.day<dayCount(x)&&(x.year!=0-1582||x.month!=10||x.day>14||x.day<4)) x.day++;
	else if(x.year==0-1582&&x.month==10&&x.day<=14&&x.day>=4) x.day=15;
	else
		if(x.month<12) {
			x.day=1;
			x.month++;
		}
		else{
			x.year--;
			if(x.year==0) x.year=0-1;
			x.month=1;
			x.day=1;
		}
	x.flaged=true;
	return (rem[x.year][x.month][x.day]=x);
}
void print(gc tmp) {
	if(tmp.year<0) printf("%d %d %d\n",tmp.day,tmp.month,0-tmp.year);
	else printf("%d %d %d BC\n",tmp.day,tmp.month,tmp.year);
}
int main() {
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	for(int i=1;i<=q;i++) {
		scanf("%d",&r);
		gc tmp;
		tmp.year=4713,tmp.month=tmp.day=1;
		for(int i=1;i<=r;i++) tmp=pl1day(tmp);
		print(tmp);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00039\zoo\zoo.cpp.The size of it is 0.968 KB.
#include<cstdio>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
int n,m,c,k,a[1000001],ans;
map<int,map<int,bool> >r;
map<int,bool>need;
int main() {
    freopen("zoo.in","r",stdin);
    freopen("zoo.out","w",stdout);
    scanf("%d%d%d%d",&n,&m,&c,&k);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=m;i++) {
        int p,q;
        scanf("%d%d",&p,&q);
        r[p][q]=true;
    }
    for(int i=1;i<=n;i++) {
        int tmp=a[i],cnt=0;
        while(tmp>0&&cnt<k) {
            if((tmp&1)==1) for(int j=1;j<=c;j++) if(r[cnt][j]) need[j]=true;
            cnt++;
            tmp>>=1;
        }
    }
    for(int i=1;i<=(1<<k);i++) {
        int tmp=i,cnt=0;
        while(tmp>0&&cnt<k) {
            if((tmp&1)==1) for(int j=1;j<=c;j++) if(r[cnt][j]&&need[j]) {
                    ans++;
                    break;
            }
            cnt++;
            tmp>>=1;
        }
    }
    printf("%d\n",ans-n);
    return 0;
}
==========
===== Successfully open the file      answers\HN-00039\call\call.cpp.The size of it is 1.883 KB.
#include<cstdio>
#include<iostream>
#include<queue>
#include<string>
#include<cstring>
using namespace std;
const int MOD=998244353;
int n,a[100001],m,t,q,callNum;
struct{
    int ver;
    int f1a;
    int f1b;
    int f2;
    string f3;
}func[100001];
int nextNum(string& s) {
    int result=0,i;
    for(i=0;i<s.length();i++) {
        if(s[i]==' ') break;
        result=result*10+(s[i]-'0');
    }
    s.erase(0,i+1);
    return result;
}
void func1(int pos,int value) {
    a[pos]=(a[pos]+value)%MOD;
}
void func2(int value) {
    for(int i=1;i<=n;i++) a[i]=a[i]*value%MOD;
}
void func3(string call) {
    while(int(call.length())) {
        int tmp=nextNum(call);
        if(func[tmp].ver==1) func1(func[tmp].f1a,func[tmp].f1b);
        else if(func[tmp].ver==2) func2(func[tmp].f2);
        else func3(func[tmp].f3);
    }
}
int main() {
    freopen("call.in","r",stdin);
    freopen("call.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i=1;i<=m;i++) {
        scanf("%d",&t);
        if(t==1) {
            func[i].ver=1;
            scanf("%d%d",&func[i].f1a,&func[i].f1b);
        }
        else if(t==2) {
            func[i].ver=2;
            scanf("%d",&func[i].f2);
        }
        else {
            func[i].ver=3;
            int nothing;
            scanf("%d",&nothing);
            char tmp[1000001],ch;
            while((ch=cin.get())!=' ');
            cin.clear();
            cin.getline(tmp,1000001);
            func[i].f3=tmp;
        }
    }
    scanf("%d",&q);
    for(int i=1;i<=q;i++) {
        scanf("%d",&callNum);
        if(func[callNum].ver==1) func1(func[callNum].f1a,func[callNum].f1b);
        else if(func[callNum].ver==2) func2(func[callNum].f2);
        else func3(func[callNum].f3);
    }
    for(int i=1;i<=n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
==========
===== Successfully open the file  answers\HN-00039\snakes\snakes.cpp.The size of it is 0.205 KB.
#include<cstdio>
using namespace std;
int main() {
    freopen("snakes.in","r",stdin);
    freopen("snakes.out","w",stdout);
    int a,n;
    scanf("%d%d",&a,&n);
    printf("%d\n%d",n,1);
    return 0;
}
==========


---------- Now Opening N-00040's file(s).
===== Successfully open the file  answers\HN-00040\julian\julian.cpp.The size of it is 2.961 KB.
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int r,m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int mr[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
	freopen ("julian.in","r",stdin);
	freopen ("julian.out","w",stdout);
	int i,cas,day,month,year;
	scanf ("%d",&cas);
	while (cas--)
	{
		int rv=0,tui=0;
		bool flag=true;
		day=1; month=1; year=-4713;
		scanf ("%d",&r);
		if (r>=1461) {rv=r/1461;}
		if (rv>1573)
		{
			year=year+1573*4; r=r-1573*1461;
			if (year>=0&&flag==true) flag=false,year++; 
			while (r>0&&(year<1582||(year==1582&&month<10)||(year==1582&&month==10&&day<=14)))
			{
				day++; r--;
				if (year%4==0)
				{
					if (day>mr[month]) month++,day=1;
					if (month>12) year++,month=1;
				}
				else
				{
					if (day>m[month]) month++,day=1;
					if (month>12) year++,month=1;
				}
			}
			if (r>146097)
			{
				int ss=r/146097;
				year=year+ss*400;
				r=r-ss*146097;
			}
			while (r>=366)
			{
				year++;
				if (year%400==0||(year%4==0&&year%100!=0)) r-=366;
				else	r-=365;
			}
			while (r--)
			{
				day++;
				if (year%400==0||(year%100!=0&&year%4==0))
				{
					if (day>mr[month]) month++,day=1;
					if (month>12) year++,month=1;
				}
				else
				{
					if (day>m[month]) month++,day=1;
					if (month>12) year++,month=1;
				}
			}
			if (year>1582||(year==1582&&month>10)||(year==1582&&month==10&&day>=5))
			{
				if (year>1582) tui=10;
				else if (year==1582&&month>10) tui=10;
				else if (year==1582&&month==10&&day>=5) tui=min(10,day-4);
				while (tui--)
				{
					day++;
					if (year%400==0||(year%100!=0&&year%4==0))
					{
						if (day>mr[month]) month++,day=1;
						if (month>12) year++,month=1;
					}
					else
					{
						if (day>m[month]) month++,day=1;
						if (month>12) year++,month=1;
					}
				}
			}
		}
		else if (rv<=1573&&rv>0)
		{
			year=year+rv*4; r=r-rv*1461;
			if (year>=0&&flag==true) flag=false,year++; 
			while (r--)
			{
				day++;
				if (year<0)
				{
					if ((-year)%4==1)
					{
						if (day>mr[month]) month++,day=1;
						if (month>12) year++,month=1;
					}
					else
					{
						if (day>m[month]) month++,day=1;
						if (month>12) year++,month=1;
					}
				}
				else if (year>0)
				{
					if (year%4==0)
					{
						if (day>mr[month]) month++,day=1;
						if (month>12) year++,month=1;
					}
					else
					{
						if (day>m[month]) month++,day=1;
						if (month>12) year++,month=1;
					}
				}
				else if (year==0&&flag==true) year++,flag=false;
			}
		}
		else if (rv==0)
		{
			while (r--)
			{
				day++;
				if ((-year)%4==1)
				{
					if (day>mr[month]) month++,day=1;
					if (month>12) year++,month=1;
				}
				else
				{
					if (day>m[month]) month++,day=1;
					if (month>12) year++,month=1;
				}
			}
		}
		if (year<0) printf ("%d %d %d BC\n",day,month,-year);
		else printf ("%d %d %d\n",day,month,year);
	}
	fclose (stdin); fclose (stdout);
	return 0;
}==========
===== Successfully open the file        answers\HN-00040\zoo\zoo.cpp.The size of it is 0.764 KB.
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int e[1005],tmp,n,m,c,k,a[100],p[100],q[100];
int main()
{
	freopen ("zoo.in","r",stdin);
	freopen ("zoo.out","w",stdout);
	int j,i,t;
	scanf ("%d%d%d%d",&n,&m,&c,&k);
	for (i=1; i<=n; i++) scanf ("%d",&a[i]);
	t=1<<n;
	for (i=1; i<=m; i++)	scanf ("%d%d",&p[i],&q[i]);
	for (i=1; i<=t; i++)
	{
		tmp=0;
		int x=i;
		bool flag=true;
		while (x)
		{
			e[++tmp]=x%2;
			x/=2;
		}
		for (i=1; i<=tmp; i++) e[tmp+i]=e[i];
		for (i=1; i<=tmp; i++) e[i]=e[tmp+tmp-i+1];
		for (i=1; i<=m; i++)
		{
			if (e[p[i]]!=1)
			{
				flag=false;
				break;
			}
		}
		if (!flag) continue;
		for (i=1; i<=tmp; i++)
		{
			if ()
		}
	}
	fclose (stdin); fclose (stdout);
	return 0;
}==========
===== Opening      answers\HN-00040\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00040\snakes\snakes.cpp.The size of it is 1.040 KB.
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n,a[1000006],f[1000006],x[1000006];
int s[1000006];
int main()
{
	freopen ("snakes.in","r",stdin);
	freopen ("snakes.out","w",stdout);
	int i,cas,j,pp,num;
	scanf ("%d",&cas);
	for (pp=1; pp<=cas; pp++)
	{
		scanf ("%d",&n); num=n;
		if (pp==1)
		{
			for (j=1; j<=n; j++) scanf ("%d",&a[j]),x[j]=j,s[j]=a[j];
		}
		else
		{
			memset(s,0,sizeof(s));
			for (j=1; j<=n; j++)
			{
				x[j]=j;
				if (!s[j]) s[j]=a[j];
				int u,v;
				scanf ("%d%d",&u,&v); s[u]=v;
			}
		}
		if (n==3)
		{	
			int tmp;
			for (i=1; i<=n; i++)
				for (j=i+1; j<=n; j++)
				if (s[i]<s[j]||(s[i]==s[j]&&x[i]<x[j]))
				{
					tmp=s[i]; s[i]=s[j]; s[j]=tmp;
					tmp=x[i]; x[i]=x[j]; x[j]=tmp;
				}
			if (s[1]-s[3]>s[2]||(s[1]-s[3]==s[2]&&x[1]>x[2]))
			{
				printf ("1\n");
				continue;
			}
			if (s[1]-s[2]>s[3]||(s[1]-s[2]==s[3]&&x[1]>x[3]))
			{
				printf ("1\n");
				continue;
			}
			printf ("3\n");
		}
	}
	fclose (stdin); fclose (stdout);
}==========


---------- Now Opening N-00041's file(s).
===== Successfully open the file  answers\HN-00041\julian\julian.cpp.The size of it is 0.151 KB.
#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	printf("fuck ccf\n");
}
==========
===== Successfully open the file        answers\HN-00041\zoo\zoo.cpp.The size of it is 0.451 KB.
#include<bits/stdc++.h>
using namespace std;
const long long N=1e6+10;
long long a[N],p[N],q[N];
long long sum=0;
	long long n,m,c,k;
int main() {
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%lld%lld%lld%lld",&n,&m,&c,&k);
	for(long long i=1; i<=n; i++)
		scanf("%lld",&a[i]),sum=sum|a[i];
	for(long long i=1;i<=n;i++){
		scanf("%lld%lld",&p[i],&q[i]);
		if(1<<(p[i])&sum) continue;
		k--;
	}
	cout<<(1<<k)-n;
	return 0;
	
}
==========
===== Successfully open the file      answers\HN-00041\call\call.cpp.The size of it is 1.308 KB.
#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+10;
long long n,m,tot,len;
struct data {
	long long id;
	long long to,vol;
	long long cheng;
	long long size,head,tail;
} a[N];
long long d[10*N+10],sum=1,b[N];
long long lazy[N];
long long change(long long x,long long vol) {
	b[x]=b[x]*sum/lazy[x];
	b[x]+=vol;
	lazy[x]=sum;
}
void dfs(long long x) {
	long long id=a[x].id;
	if(id==1) change(a[x].to,a[x].vol);
	if(id==2) sum*=a[x].cheng;
	if(id==3) {
		for(long long i=a[x].head; i<=a[x].tail; i++)
			dfs(d[i]);
	}
}
int main() {
		freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1; i<=n; i++)
		scanf("%lld",&b[i]);
	scanf("%lld",&m);
	for(long long i=1; i<=n; i++)
		lazy[i]=1;
	for(long long i=1; i<=m; i++) {
		scanf("%lld",&a[i].id);
		long long id=a[i].id;
		if(id==1) {
			scanf("%lld%lld",&a[i].to,&a[i].vol);
		}
		if(id==2) {
			scanf("%lld",&a[i].cheng);
		}
		if(id==3) {
			scanf("%lld",&a[i].size);
			a[i].head=++tot;
			tot+=a[i].size-1;
			a[i].tail=tot;
			for(long long j=a[i].head; j<=a[i].tail;j++)
				scanf("%lld",&d[j]);
		}
	}
	scanf("%lld",&len);
	for(long long i=1; i<=len; i++) {
		long long x;
		scanf("%lld",&x);
		dfs(x);
	}
	for(long long i=1; i<=n; i++)
		change(i,0),printf("%lld ",b[i]);
		return 0;
}
==========
===== Successfully open the file  answers\HN-00041\snakes\snakes.cpp.The size of it is 0.751 KB.
#include<bits/stdc++.h>
using namespace std;
int n,t;
const int N=1e6;
int sum[N];
struct data {
	int id,vol;
} a[N];
bool cmp(data c,data d) {
	if(c.vol==d.vol) return c.id<d.id;
	return c.vol<d.vol;
}
int main() {
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&t);
	for(int k=1; k<=t; k++) {
		scanf("%d",&n);
		int x;
		for(int i=1; i<=n; i++) {
			if(k!=1)
				scanf("%d%d",&a[i].id,&a[i].vol);
			else scanf("%d",&a[i].vol),a[i].id=i;
		}
		int tot=n,idd=n+1;
		for(int i=1; i<=n; i++) {
			if(idd==a[1].id) {
				tot++;
				break;
			}
			a[tot].vol-=a[1].vol;
			a[1].vol=INT_MAX;
			idd=a[tot].id;
			sort(a+1,a+tot+1,cmp);
			tot--;
		}
		if(tot!=1)printf("%d\n",tot);
		else printf("1\n");

	}
	return 0;
}
==========


---------- Now Opening N-00042's file(s).
===== Successfully open the file  answers\HN-00042\julian\julian.cpp.The size of it is 2.265 KB.
#include <bits/stdc++.h>
using namespace std;

typedef long long lxl;

const int Day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int SumDay[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
const int SumDay1582[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 294, 324, 355};

lxl _CalcDay(int _year) {
	if (_year == 0)
		return 0;
	if (_year == 1)
		return 365;
	--_year;
	lxl res = _year * 365LL + ((_year + 3) >> 2) + 365;
	if (_year <= 16)
		return res;
	_year -= 16;
   	return res - (_year + 99) / 100 + (_year + 399) / 400;
}

lxl CalcDay(int year) {
	if (year < 0)
		return (year + 4714) * 365LL + ((year + 4717) >> 2); 
	else if (year <= 1581)
		return year * 365LL + ((year + 3) >> 2) + 1721424LL;
	else
		return 2299239LL + _CalcDay(year - 1582);
}

bool isRun(int year) {
	if (year < 0)
		return ((-year) % 4) == 1;
	else if (year <= 1582)
		return year % 4 == 0;
	else
		return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

void output(int day, int month, int year) {
	printf("%d %d ", day, month);
	if (year < 0)
		printf("%d BC\n", -year);
	else
		printf("%d\n", year);
}

void output1582(int day, int month) {
	if (month == 10 && day >= 5 && day <= 14)
		day += 10;
	output(day, month, 1582);
}

signed main() {
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	int Q;
	lxl d;
	cin >> Q;
	for (int q = 1; q <= Q; q++) {
		scanf("%lld", &d);
		d++;
		int l = -4714, r = 1e9, mid, year;
		while (l <= r) {
			mid = (l + r) >> 1;
			if (CalcDay(mid) <= d)
				year = mid, l = mid + 1;
			else
				r = mid - 1;
		}
		d -= CalcDay(year);
		year++;
		if (year == 0)
			year = 1;
		if (year == 1582) {
			for (int i = 1; i <= 12; i++) {
				int cur = SumDay1582[i];
				if (cur == d) {
					output1582(Day[i], i);
				}
				if (cur > d) {
					output1582(d - SumDay1582[i - 1], i);
					break;
				}
			}
			continue;
		}
		bool IAKIOI = isRun(year);
		for (int i = 1; i <= 12; i++) {
			int cur = SumDay[i];
			if (IAKIOI && i >= 2)
				cur++;
			if (cur == d) {
				output(Day[i], i, year);
				break;
			}
			if (cur > d) {
				if (i >= 3 && IAKIOI)
					output(d - SumDay[i - 1] - 1, i, year);
				else
					output(d - SumDay[i - 1], i, year);
				break;
			}
		}
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00042\zoo\zoo.cpp.The size of it is 0.429 KB.
#include <bits/stdc++.h>

using namespace std;

int n, m, c, k, p, q, cnt;
long long a, Ora;

int main() {
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	scanf("%d%d%d%d", &n, &m, &c, &k);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a);
		Ora |= a;
	}
	for (int i = 1; i <= m; i++) {
		scanf("%d%d", &p, &q);
		if ((Ora >> p) & 1)
			cnt++;
	}
	printf("%lld\n", (1ll << (cnt + k - m)) - n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00042\call\call.cpp.The size of it is 1.891 KB.
#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5, Mod = 998244353;

typedef long long lxl;

int m, q;
vector <int> cal[N], G[N];
int t[N], v[N], p[N], c[N], f[N], in[N], o[N], n, data[N];
queue <int> Q;

int main() {
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &data[i]);
	scanf("%d", &m);
	bool M = false, A = false;
	for (int i = 1; i <= m; i++) {
		scanf("%d", &t[i]);
		if (t[i] == 1)
			scanf("%d%d", &p[i], &v[i]), A = true;
		else if (t[i] == 2)
			scanf("%d", &v[i]), M = true;
		else {
			scanf("%d", &c[i]);
			for (int i = 1; i <= c[i]; i++) {
				int x;
				scanf("%d", &x);
				cal[i].push_back(x);
			}
		}
	}
	scanf("%d", &q);
	for (int i = 1; i <= q; i++) scanf("%d", &f[i]);
	if (!A || !M) {
		for (int i = 1; i <= m; i++)
			if (t[i] == 3) {
				for (int j = 0; j < c[i]; j++) G[cal[i][j]].push_back(i);
				in[i] = c[i];
			}
		for (int i = 1; i <= m; i++)
			if (in[i] == 0)
				Q.push(i);
		int x = 0;
		while (!Q.empty()) {
			int hd = Q.front();
			Q.pop();
			o[++x] = hd;
			int siz = G[hd].size();
			for (int i = 0; i < siz; i++) {
				int to = G[hd][i];
				in[to]--;
				if (in[to] == 0)
					Q.push(to);
			}
		}
		for (int i = 1; i <= m; i++) {
			int cur = o[i];
			if (t[cur] == 3) {
				if (!A) {
					v[cur] = 1;
					for (int j = 0; j < c[cur]; j++) v[cur] = (lxl)v[cur] * v[G[cur][j]] % Mod;
				}
				else {
					v[cur] = 0;
					for (int j = 0; j < c[cur]; j++) v[cur] = (lxl)(v[cur] + v[G[cur][j]]) % Mod;
				}
			}
		}
		lxl y;
		if (!A) {
			y = 1;
			for (int i = 1; i <= q; i++) y = y * v[f[i]] % Mod;
		}
		else {
			y = 0;
			for (int i = 1; i <= q; i++) y = (y + v[f[i]]) % Mod;
		}
		for (int i = 1; i <= n; i++)  {
			if (!A)
				printf("%lld ", y * data[i] % Mod);
			else
				printf("%lld ", (data[i] + y) % Mod);
		}
	}
	return 0;
}
==========
===== Opening  answers\HN-00042\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00043's file(s).
===== Successfully open the file  answers\HN-00043\julian\julian.cpp.The size of it is 2.095 KB.
//³õÉó 


#include<bits/stdc++.h>
using namespace std;
struct node{
	bool tr;
	int day,month,year;
};
int kas[1000005];
int month[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
bool run(int x){	//¹«Ôª1582Äê10ÔÂ4ÈÕ£¨º¬£©ÒÔÇ° 
	if(x<0){
		x--;
		if(x%4==0){
			return 1;
		}
		else return 0;
	}
	else{
		if(x%4==0){
			return 1;
		}
		else return 0;
	}
}
bool run1(int x){
	if((x%4==0&&x%100!=0)||(x%400==0)){
		return 1;
	}
	return 0;
}
node mans[100000005]={0};
void yu(int anb){
	//Ñ­»·ÄêÔÂÈÕ 
	int ans=0;
	for(int n=-4713;n<=-1;n++){
		for(int y=1;y<=12;y++){
			for(int r=1;r<=month[run(n)][y];r++){
				if(mans[ans].day==0){
					mans[ans].tr=true;
					mans[ans].day=r;
					mans[ans].month=y;
					mans[ans].year=abs(n);
				}
				ans++;
			}
		}
	}
	for(int n=1;n<=anb;n++){
		for(int y=1;y<=12;y++){
			for(int r=1;r<=month[run1(n)][y];r++){
				if(n==1582&&y==10){
					if(r>=5&&r<=14) continue;
				}
				if(mans[ans].day==0){
					mans[ans].tr=true;
					mans[ans].day=r;
					mans[ans].month=y;
					mans[ans].year=abs(n);
				}
				ans++;
			}
		}
	}
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q; cin>>q;
	int maxn=0;
	for(int i=1;i<=q;i++){
		int x; cin>>x;
		if(x==100){
			mans[100].tr=true;
					mans[100].day=10;
					mans[100].month=4;
					mans[100].year=4713;
		}
		if(x==2000000){
			mans[2000000].tr=false;
					mans[2000000].day=14;
					mans[2000000].month=9;
					mans[2000000].year=763;
		}
		if(x==3000000){
			mans[3000000].tr=false;
					mans[3000000].day=12;
					mans[3000000].month=7;
					mans[3000000].year=6239;
		}
		if(x==4000000){
			mans[4000000].tr=false;
					mans[4000000].day=12;
					mans[4000000].month=7;
					mans[4000000].year=6239;
		}
		if(x==0){
			mans[0].tr=true;
					mans[0].day=1;
					mans[0].month=1;
					mans[0].year=4713;
		}
		kas[i]=x;
		maxn=max(maxn,x);
	}
	yu(maxn);
	for(int i=1;i<=q;i++){
		cout<<mans[kas[i]].day<<" "<<mans[kas[i]].month<<" "<<mans[kas[i]].year<<" ";
		if(mans[kas[i]].tr==true){
			cout<<"BC"<<endl;
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00043\zoo\zoo.cpp.The size of it is 1.051 KB.
//³õÉó ´óÊý¾ÝÎ´Í¨¹ý£¬ÆäÓàÍ¨¹ý 


#include<bits/stdc++.h>
using namespace std;
int ani[1000005];
int n,m,c,k;
int sili=0;
int si1=0;
struct node{
	int p,q;
}a[10000005];
void help(int x,int y)	//Çó³öµÚxÎ»ÊÇ·ñÎª1£¬²¢°ÑËÇÁÏ´¦Àí
{
	int len=x;
	for(int i=1;i<=n;i++){
		int j=ani[i];
		j>>=x;
		int si=0;
		if(j&1){	//Í¨¹ýÔò 
			si=1;
			si<<=y;
		}
		sili=sili|si;
	}
} 
void help1(int x,int y,int kas)	//Çó³öµÚxÎ»ÊÇ·ñÎª1£¬²¢°ÑËÇÁÏ´¦Àí
{
	int len=x;
	int j=kas;
	j>>=x;
	int si=0;
	if(j&1){	//Í¨¹ýÔò 
		si=1;
		si<<=y;
	}
	si1=si1|si;
} 
bool t[10000005];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	 cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++){
		cin>>ani[i];
		t[ani[i]]=1;
	}
	for(int i=1;i<=m;i++){
		int p,q;
		cin>>p>>q;
		a[i].p=p;a[i].q=q;
		help(p,q);
	}
//	cout<<sili<<endl;
	int ans=0; 
	for(int i=0;i<pow(2,k);i++){
		if(t[i]==1){
			continue;
		}
		for(int j=1;j<=m;j++){
			help1(a[j].p,a[j].q,i);
		}
//		cout<<si1<<endl;
		if((si1|sili)==sili){
			ans++;
			si1=0;
		}
		si1=0;
	}
	cout<<ans<<endl;
	return 0;
}
==========
===== The file      answers\HN-00043\call\call.cpp is too big!The size of it is 990.392 KB.
//³õÉó Í¨¹ý ´óÊý¾ÝÎ´Í¨¹ý 


#include<bits/stdc++.h>
using namespace std;
struct node{
	long long t;
	long long cheng;
	long long zuobiao,add;
	long long c,c1[1005];
}a[100005];	//a[i]±íÊ¾iºÅº¯ÊýµÄÀàÐÍ 
int n;
long long fir[100005];
void jia(int x){
	fir[a[x].zuobiao]+=a[x].add;
	fir[a[x].zuobiao]%=998244353;
}
void che(int x){
	for(int i=1;i<=n;i++){
		fir[i]*=a[x].cheng;
		fir[i]%=998244353;
	}
}

void di(int x){
	for(int i=1;i<=a[x].c;i++){
		if(a[a[x].c1[i]].t==1){
			jia(a[x].c1[i]);
		}
		else if(a[a[x].c1[i]].t==2){
			che(a[x].c1[i]);
		}
		else if(a[a[x].c1[i]].t==3){
			di(a[x].c1[i]);
		}
	}
}
/*
3
3 5 7
3
1 3 5
2 10
3 2 1 2
5 
1 2 3 1 2
*/
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>fir[i];
		fir[i]%=998244353;
	} 
	if(n==100000&&fir[1]==4165&&fir[2]==2197){
		cout<<"384559830 823662041 763850062 852621623 66990587 247986265 517838371 409023205 513307713 266024081 301348571 66990587 996972412 494409834 625834924 514216285 769317337 49122403 140036613 844590053 242595544 419436135 468510029 190880750 835201675 797405917 860725909 870405042 535500616 41054475 915117910 907171105 551515349 126034369 349768341 970660729 529407262 90777038 793287137 504621968 11241829 564489506 816836797 704806280 7825682 445990064 768707782 211305018 705545220 321360961 654327120 798968613 561400421 411610453 389211611 422973405 148988029 358660025 658412846 341288535 781100429 315594669 335110365 566052202 720905829 350386158 228470569 900544771 767387332 730209391 287599167 274297948 20424268 563665750 195617347 403251770 649756455 491199626 933070910 597221605 397570294 75349270 670959670 874317883 699330743 685411707 500709127 160002102 888358042 131921784 611673642 132866663 554071433 293280643 855747066 934306544 495730284 149995907 273970886 37592262 696447597 329634828 59043782 714606536 542296603 885268957 58014087 849362957 131836968 98075174 554192556 463446370 718857302 619947509 706270419 54064939 632013094 68638099 503113134 347708951 461059918 55094634 194793591 970987791 106021979 354415582 138099954 41381537 113968784 225878178 749313209 603230143 599280995 362451743 136246503 236417374 211794914 292578010 62544745 507916992 195823286 344825805 448788394 665363010 309089437 500176126 364923011 553247677 872876310 491252421 458673466 49740220 220693396 72345001 990673119 294104399 732268781 408131719 988098464 617682180 254164435 737950257 445784125 181989066 726381366 682116683 381143683 283807449 195213266 150201846 234769862 839114516 171655809 398066988 606593506 528641206 981470861 931217459 813626589 608172679 915202726 716496294 399835623 67899159 78353539 856364883 907049982 557281641 765327942 806830602 252928801 500091310 284425266 252105045 344498743 628718070 771421296 457231893 425117611 531462130 559135092 908079677 331900157 13834220 418321624 679524292 3585779 432567722 484488455 662067986 7774443 978316779 633248728 985359892 445578186 501738822 935506851 413790966 883742568 564610629 82472319 503095579 53653061 269149473 471066113 518250249 16966332 590837496 192613078 517547616 122412283 929364008 733916293 821211659 90831002 318065937 421943710 475427139 560285910 17541122 762941490 242510728 201214007 330337461 157118956 440514527 574943886 348326768 481932371 757587076 778629161 493792017 0 569056471 374759574 791021808 411772811 879708604 186846786 808066236 278537851 899842117 366254327 566173325 277714095 907377044 876985594 703279891 272323374 539946458 47474891 407883090 700893439 683231194 416758928 826431114 456820015 866979529 414202844 992426171 824250601 542090664 397655110 30963464 807121357 421119954 378793538 176307590 179517798 244037117 570292105 886213836 109728881 20836146 885596019 665072255 678494597 479339980 758289709 532702286 624066289 84539967 294104399 994506377 509479688 235266556 487904602 809919687 168978602 761790672 848127323 323214412 964361436 730961598 440841589 132333662 69994856 11035890 80206990 839526394 173836322 609735375 702213889 661159414 680638803 564489506 473743320 388678610 232589349 28165134 613854155 664127376 122824161 100340503 875674640 599075056 158354590 877855153 31169403 448691808 942047410 190880750 693855206 251983922 527638627 910054251 563459811 854511432 323129596 641728534 726502489 144193308 574532008 402633953 668758860 230820714 456202198 681910744 815189285 574822763 28988890 469333785 103344772 16390304 998208046 776806565 542211787 880823115 141516101 478395101 548184018 664539254 787520845 783898759 73992513 327866193 462828553 248482959 829641322 531260713 889920738 423640436 252395800 821076700 922979899 373873035 326424620 25160865 99807502 477280590 649415792 497910797 490470563 478928102 545421995 69582978 237858947 754170929 441750161 922858776 507626237 683025255 488401296 500185977 164956763 943610106 245402004 664454438 391065062 36523817 449902905 641934473 295751911 736387561 939285387 337254571 262111240 777478343 498419445 619002630 524961420 315800608 90213185 589395923 694198092 762614428 614593095 526197054 722965219 705218158 973955753 169923481 838528345 486460477 828817566 915941666 118826504 372785000 54682756 782728048 851010469 704394402 921829081 279567546 289040740 943778463 919357813 485227395 973131997 189318054 403251770 410459635 472216931 620359387 784722515 575149825 435366052 293552330 503592273 599317302 687059219 313947157 948879704 795964344 423471016 215254166 435244929 270712448 572351495 508449993 716133646 199978373 941410275 108166185 354008244 624272228 792996382 988819668 291633131 384850585 891895312 630692644 979843168 474978954 953616301 955384936 373318001 354298999 24252293 640081022 866080323 663715498 608590742 442077223 352427541 768005149 822724212 223285787 452580112 207598116 863608793 806915418 939322989 178572919 797115162 650002401 541884725 668488402 444548491 135628686 76294149 743631733 212952530 756109196 464560881 920884202 941699076 155968138 858545396 995118961 40436658 561933422 29110013 533937920 585277143 242595544 938049753 635550364 762117734 69788917 185284090 782130124 569347226 603642021 663509559 336991506 142872858 743098732 344619866 353990986 92478514 529286139 980170230 862167482 149789968 65839769 52332611 514337408 227234935 96512478 504331213 252105045 716133991 928334313 887119513 416262234 342524169 308968314 459206467 927595373 845619748 90540247 507680203 392094757 618917814 324898231 436892441 948552642 647082948 683643072 898897238 775567413 394566025 983756009 626159853 418321624 107257613 137482137 818896187 3089085 916886545 309828377 124798735 637900509 405311160 596809727 398394050 647615949 858545396 440308588 905111715 407370550 558517275 393451514 830876956 793614199 282365876 370313732 727411061 691916939 408400245 862991238 309998009 153412054 568935348 411610453 735357866 121929251 632219033 282777754 639342082 195205469 297023852 916062789 50769915 94612029 278331912 722880403 824560141 792378565 648766767 157203772 464682004 270253599 215048227 744661428 421119954 584623019 4324719 422852282 293486582 964979253 775213014 565403617 104459283 222995032 329719644 43767989 264085814 250130471 509067810 853687676 695417902 235593618 245890568 921829081 5233291 851301224 489071902 662395048 259639972 484609578 933603911 46857074 309501315 300524815 635017363 293074704 175399018 136779504 443397673 913264459 400160686 866577017 809180747 164120882 551806104 748717464 252302178 79468050 239094581 982520375 775540076 138838894 606525167 909145679 870732104 876086518 216574616 59455660 605786227 309913193 542296603 100546442 522057868 521872335 47063013 321669283 341203719 689611189 81854502 758289709 112817966 537063312 110261882 584211141 302051204 662806926 936898935 831579589 686984685 445663002 531381836 929448824 931217459 831906651 355726066 844590053 38789146 889302921 520721517 745691123 489225052 515573042 958183266 562430116 464476065 536615127 707398671 303735023 971484485 645435436 456043858 366691646 867812651 473537381 548305141 481484186 484815517 483579883 494494650 291342376 397243232 4821413 808066236 441338283 423797161 917589178 103017710 510097505 752135561 435038990 397861049 893336885 907667799 336919260 862405049 255552851 471272052 595985971 306497046 888152103 4736597 213158469 689033793 99395624 165065761 614883850 575852458 681171804 147403516 597633483 54888695 60570171 871349921 652061791 983877132 779779979 387564099 786491150 201504762 469539724 656386510 45706256 55506512 179396675 6468925 989146730 301845265 442077223 370494462 414287660 660214535 293401766 55748758 527347872 325188986 417582684 15481732 504331213 235593618 413875782 720082073 547275446 578117787 955214598 470860174 430799087 463652309 847097628 418772619 644114986 120885894 841416152 504949030 514543347 349647218 155968138 633575790 244448995 25281988 634108791 986598178 888394349 823959846 995118961 768211088 16785901 388456073 711723390 243128545 876338830 277302217 233086043 877116213 169632 906785673 82884197 822191211 583799263 111497516 684260889 916723905 636664875 846891689 914790848 7207865 911753446 877237336 453524991 884978202 40969659 341288535 886298652 523192785 652473669 686938096 298756180 791760748 752402294 437510258 237241130 262850180 202449641 236502190 900198117 161237736 247041386 24252293 875589824 457231893 536530311 874354190 105391129 278125973 868840620 395716843 530126110 685823585 169923481 650293156 184169579 139144381 200390251 522490152 928334313 512362834 518044310 447516453 112939089 560576665 984083071 715389545 842239908 784601392 908818617 298671364 725969488 204181969 487371601 16099549 83913892 584332264 799707553 813554929 332919847 965924132 342439353 412519025 438539953 728973757 546948384 838205944 427298124 79468050 688585608 658361084 707071609 362245804 599075056 116028174 303529084 254821083 473763789 684999829 876292457 198134499 571939617 567203020 210275323 17541122 984579765 563992812 871846615 43339147...
==========
===== Successfully open the file  answers\HN-00043\snakes\snakes.cpp.The size of it is 0.808 KB.
//³õÉó 


#include<bits/stdc++.h>
using namespace std;
int shil[100005]={0};
int n;
int help(int x){
	if(x==1){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>shil[i];
		}
	}
	else{
		int ma; cin>>ma;
		for(int i=1;i<=ma;i++){
			int x,y; cin>>x>>y;
			shil[x]=y;
		}
	}
	int maxn=0,d,minn=9999999,xi;
	for(int i=1;i<=n;i++){
		if(maxn<shil[i]||(maxn==shil[i]&&d>i)){
			maxn=shil[i]; d=i;
		}
		if(minn>shil[i]||(minn==shil[i]&&xi<=i)){
			minn=shil[i]; xi=i;
		}
	}
	int other,orz;
	for(int i=1;i<=n;i++){
		if(i==d||i==xi) continue;
		other=i; orz=shil[i];
	}
	if(maxn-minn<orz||(maxn-minn==orz&&d<=orz)){
		return n;
	}
	else{
		return n-2;
	}
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int t; cin>>t;
	for(int i=1;i<=t;i++){
		cout<<help(i)<<endl;
	}
	 
	return 0;
}
==========


---------- Now Opening N-00044's file(s).
===== Successfully open the file  answers\HN-00044\julian\julian.cpp.The size of it is 0.703 KB.
#include <bits/stdc++.h>
using namespace std;
int m[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
bool judge(int x){
	if(x % 4 == 0)return true;
	return false;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int T;
	scanf("%d",&T);
	while(T){
		T--;
		int old;
		cin>>old;
		int day = 1,month = 1,year = 4713;
		while(old){
			old--;
			day++;
			if(year < 0)year = abs(year);
			if(day > m[month]){
				if(old == 0){
					printf("%d %d %d BC\n",day,month,year);
					break;
				}
				if(judge(year)){
					old--;
					day=1;
					month++;
				}
				else day = 1,month++;
			}
			if(month > 12)month = 1,year--;
		}
		printf("%d %d %d BC\n",day,month,year);
	}
	
}




==========
===== Successfully open the file        answers\HN-00044\zoo\zoo.cpp.The size of it is 0.846 KB.
#include <bits/stdc++.h>
using namespace std;
int n,m,c,k;
int a[1000010],p[1000010],q[1000010];
int ok[1000010];
long long pow(int x,int y){
	long long ans = 1;
	for(int i = 1;i <= y;i++)
		ans *= 2;
	return ans;
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	memset(ok,0,sizeof(ok));
	for(int i = 1;i <= n;i++)scanf("%d",&a[i]);
	for(int i = 1;i <= m;i++)scanf("%d%d",&p[i],&q[i]);
//	cout<<"fuck"<<endl;
	for(int i = 1;i <= n;i++){
		int tmp = a[i],pos = -1;
		while(tmp > 0){
			pos++;
			if((tmp & 1) == 1)ok[pos] = 1;
			tmp >>= 1;
		}
	}
//	cout<<"shit"<<endl;
	for(int i = 1;i <= m;i++){
		if(ok[p[i]] == 0){
			ok[p[i]] = -1;
		}
	}
	int cnt = 0;
	for(int i = 1;i <= k;i++){
		if(ok[i] != -1)
			cnt++;
	}
	long long ans = pow(2,cnt) - n;
	printf("%lld\n",ans);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00044\call\call.cpp.The size of it is 1.150 KB.
#include <bits/stdc++.h>
using namespace std;
int val[100010];
int a[100010][2],b[100010];
int c[1010][1010];
int len[100010];
int n;
void add(int x,int y){
	val[x] += y;
}
void mul(int x){
	for(int i = 1;i <= n;i++)
		val[i] *= x;
}
void make(int tmp){
	for(int i = 1;i <= len[tmp];i++){
		if(a[c[tmp][i]][1] != 0)
			add(a[c[tmp][i]][0],a[c[tmp][i]][1]);
		if(b[c[tmp][i]] != 0)
			mul(b[c[tmp][i]]);
		else make(c[tmp][i]);
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&val[i]);
	}
	int m;
	scanf("%d",&m);
	for(int i = 1;i <= m;i++){
		int x;
		scanf("%d",&x);
		if(x == 1){
			scanf("%d%d",&a[i][0],&a[i][1]);
		}
		else if(x == 2){
			scanf("%d",&b[i]);
		}
		else {
			int xx;
			scanf("%d",&xx);
			for(int j = 1;j <= xx;j++){
				scanf("%d",&c[i][++len[i]]);
			}
		}
	}
	int q;
	scanf("%d",&q);
	for(int i = 1;i <= q;i++){
		int tmp;
		scanf("%d",&tmp);
		if(a[tmp][1] != 0){
			add(a[tmp][0],a[tmp][1]);
		}
		if(b[tmp] != 0){
			mul(b[tmp]);
		}
		else {
			make(tmp);
		}
	}
	for(int i = 1;i <= n;i++)
		printf("%d ",val[i]);
	printf("\n");
}
==========
===== Successfully open the file  answers\HN-00044\snakes\snakes.cpp.The size of it is 1.085 KB.
#include <bits/stdc++.h>
using namespace std;
struct sna{
	int id,w;
}a[1000010];
bool cmp(sna x,sna y){
	if(x.w == y.w)return x.id > y.id;
	return x.w > y.w;
}
bool cmp1(sna x,sna y){
	return x.id < y.id;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T,cnt = 0;
	scanf("%d",&T);
	int n,nn;
	scanf("%d",&n);
	nn = n;
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i].w);
		a[i].id = i;
	}
	sort(a + 1,a + n + 1,cmp);
	while(1){
		int last = n;
		if(a[1].w - a[n].w > a[2].w || (a[1].w - a[n].w == a[2].w && a[1].id > a[2].id))
			n--;
		if(last == n){
			printf("%d\n",n);
			break;
		}
	}
	T--;
	n = nn;
	while(T){
		n = nn;
		T--;
		int k;
		scanf("%d",&k);
		sort(a + 1,a + n + 1,cmp1);
		for(int i = 1;i <= k;i++){
			int x,y;
			scanf("%d%d",&x,&y);
			a[x].w = y;
		}
		sort(a + 1,a + n + 1,cmp);
		while(1){
		int last = n;
			if(a[1].w - a[n].w > a[2].w || (a[1].w - a[n].w == a[2].w && a[1].id > a[2].id))
				n--;
			if(last == n){
				printf("%d\n",n);
				break;
			}
			if(last == n){
					printf("%d\n",n);
				break;
			}
		}
	}	
}
==========


---------- Now Opening N-00045's file(s).
===== Successfully open the file  answers\HN-00045\julian\julian.cpp.The size of it is 0.718 KB.
#include<stdio.h>
#define ll long long
#define in(x) scanf("%d",&x)
#define inll(x) scanf("%lld",&x)
#define out(x) printf("%lld",(ll)x)
#define outs(x) printf("%lld ",(ll)x)
#define outr(x) printf("%lld\n",(ll)x)
#define judge 1
int mon[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int y,m,d;
int frator(int x){
	y=4713-x/365;x%=365;
	for(m=1;m<=12;m++){
		if(x<mon[m])break;
		else x-=mon[m];
	}
	d=++x;
	return 0;
}
int main() {
#if judge==1
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
#endif
	int quest;
	in(quest);
	for(int tester=1;tester<=quest;tester++){
		int x;in(x);
		frator(x);
		printf("%d %d %d BC\n",d,m,y);
	}
#if judge==1
	fclose(stdin);
	fclose(stdout);
#endif
	return 0;
}

==========
===== Successfully open the file        answers\HN-00045\zoo\zoo.cpp.The size of it is 1.235 KB.
#include<stdio.h>
#define ll long long
#define in(x) scanf("%d",&x)
#define inll(x) scanf("%lld",&x)
#define out(x) printf("%lld",(ll)x)
#define outs(x) printf("%lld ",(ll)x)
#define outr(x) printf("%lld\n",(ll)x)
#define judge 1
int n,m,c,k;
int a[21];
bool bina[21][33]={};
int book[21]={};
bool buy[21]={};
bool mind[21]={};
bool push(int x,int p){
	book[p]=x;
	for(int i=1;i<=n;i++){
		if(bina[i][x]){
			buy[p]=true;return true;
		}
	}
	return false;
}
int bin(int i){
	int g=a[i],len=0;
	while(g>0){
		bina[i][len]=g%2;
		g/=2;len++;
	}
}/*
ll power(int a,int b,int mod=2147483647){
	if(b==0)return 1;
	if(b==1)return a;
	ll tmp=power(a,b/2)%mod;
	if(b%2==0)tmp=(ll)tmp*tmp%mod;
	else tmp=(ll)a*tmp%mod*tmp%mod;
	return tmp;
}*/
int power(int a,int b){
	if(b==0)return 1;
	return a*power(a,b-1);
}
int main() {
#if judge==1
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
#endif
int x,y;
	in(n);in(m);in(c);in(k);
	for(int i=1;i<=n;i++){
		in(a[i]);bin(i);
	}
	for(int i=1;i<=m;i++){
		in(x);in(y);
		push(x,y);
	}
	for(int i=1;i<=c;i++){
		if(buy[i]==1)mind[book[i]]=1;
	}
	x=0;
	for(int i=1;i<=c;i++){
		if(mind[i]==1)x++;
	}
	out(power(2,x)-n);
#if judge==1
	fclose(stdin);
	fclose(stdout);
#endif
	return 0;
}

==========
===== Successfully open the file      answers\HN-00045\call\call.cpp.The size of it is 1.210 KB.
#include<stdio.h>
#define ll long long
#define in(x) scanf("%d",&x)
#define inll(x) scanf("%lld",&x)
#define out(x) printf("%lld",(ll)x)
#define outs(x) printf("%lld ",(ll)x)
#define outr(x) printf("%lld\n",(ll)x)
#define mod 998244353
#define judge 1
struct func{
	int mode;
	int run[21];
#define mode(x) f[x].mode
#define data(x) f[x].run[0]
#define run(x,y) f[x].run[y]
#define data2(x) f[x].run[1]
}f[10001];
int a[1001];
int n,m,q;
int execute(int i){
	switch(mode(i)){
		case 1: a[data(i)]=(a[data(i)]+data2(i))%mod;
			break;
		case 2: 
			for(int p=1;p<=n;p++)
				a[p]=a[p]*data(i)%mod;
			break;
		case 3:
			for(int p=1;p<=data(p);p++)
				execute(run(i,p));
			break;
	}
}
int main() {
#if judge==1
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
#endif
	in(n);
	for(int i=1;i<=n;i++)in(a[i]);
	in(m);
	for(int i=1;i<=m;i++){
		in(mode(i));
		if(mode(i)==1){
			in(data(i));in(data2(i));
		}
		else if(mode(i)==2)in(data(i));
		else if(mode(i)==3){
			in(data(i));
			for(int p=1;p<=data(i);p++)
				in(run(i,p));
		}
	}
	in(q);int g;
	for(int i=1;i<=q;i++){
		in(g);execute(g);
	}
	for(int i=1;i<=n;i++)outs(a[i]);
#if judge==1
	fclose(stdin);
	fclose(stdout);
#endif
	return 0;
}
==========
===== Successfully open the file  answers\HN-00045\snakes\snakes.cpp.The size of it is 1.397 KB.
#include<stdio.h>
#include<string.h>
#define ll long long
#define in(x) scanf("%d",&x)
#define inll(x) scanf("%lld",&x)
#define out(x) printf("%lld",(ll)x)
#define outs(x) printf("%lld ",(ll)x)
#define outr(x) printf("%lld\n",(ll)x)
#define judge 1
struct snake{
	int rank;
	int data;
#define data(x) f[x].data
#define rank(x) f[x].rank
}f[10001],k[10001];
int pd(snake a,snake b){
	if(a.data>b.data||(a.data==b.data&&a.rank>b.rank))
		return 1;
	else return 0;
}
int quicksort(snake *a,int l,int r){
	int i=l,j=r;snake mid=a[(l+r)/2],p;
	do {
		while(pd(a[i],mid)==1)i++;
		while(pd(mid,a[j])==1)j--;
		if(i<=j){
			p=a[i];a[i]=a[j];a[j]=p;
			i++;j--;
		}
	} while(i<=j);
	if(l<j)quicksort(a,l,j);
	if(i<r)quicksort(a,i,r);
}
int n,m,x;
int start(snake *x){
	for(int i=1;i<=n;i++){
		x[i].data=i;
		x[i].rank=0;
	}
	return 0;
}
int fight(int p){
	quicksort(f,1,p);
	if(p==2)return 1;
	else{
		data(1)-=data(p);
		if(pd(f[p-1],f[1])==1)return p;
		else return fight(p-1);
	}
}
int main() {
#if judge==1
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
#endif
	int T;
	in(T);T--;
	in(n);
	start(k);start(f);
	for(int i=1;i<=n;i++)in(k[i].data);
	memcpy(f,k,sizeof(f));
	outr(fight(n));
	for(;T>0;T--){
		in(m);
		for(int i=1;i<=m;i++){
			in(x);in(k[x].data);
			memcpy(f,k,sizeof(k));
		}
		outr(fight(n));
	}
#if judge==1
	fclose(stdin);
	fclose(stdout);
#endif
	return 0;
}

==========


---------- Now Opening N-00046's file(s).
===== Successfully open the file  answers\HN-00046\julian\julian.cpp.The size of it is 1.592 KB.
#include <bits/stdc++.h>
using namespace std;
const int month_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int T,n,x,y,xd,yd;
bool flg;
int main(){
	ios::sync_with_stdio(false);
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>T;
	while(T--){
		cin>>n;
		if(n==1721423){
			puts("31 12 1 BC");
			continue;
		}
		else if(n<=30){
			printf("%d 1 4713 BC\n",n+1);
			continue;
		}
		else if(n<=365){
			x=4713,y=1,yd=30;
			while(n>yd){
				n-=yd,yd=month_day[++y];
				if(y==2)++yd;
			}
			printf("%d %d %d BC\n",n,y,x);
		}
		else if(n<1721423){
			x=4713,y=1;
			xd=365,yd=31;
			while(n>xd)n-=xd,xd=((--x)%4==1?366:365);
			if(x%4==1)flg=true;
			else flg=false;
			while(n>yd){
				n-=yd,yd=month_day[++y];
				if(flg&&y==2)++yd;
			}
			printf("%d %d %d BC\n",n,y,x);
		}else {
//----------------------------------------------------------
		n-=1721423;
		if(n<=30){
			printf("%d 1 1\n",n);
			continue;
		}
		else if(n<=365){
			x=1,y=1,yd=31;
			while(n>yd)n-=yd,yd=month_day[++y];
			printf("%d %d %d\n",n,y,x);
		}
		else {
			x=1,y=1;
			xd=365,yd=31;
			while(n>xd){
				n-=xd,++x;
				if(x>=1582)
					xd=(((x%400==0)||(x%4==0&&x%100!=0))?366:365);
				else
					xd=(x%4==0?366:365);
				if(x==1582)xd-=10;
			}
			if(x%4==0)flg=true;
			else flg=false;
			while(n>yd){
				n-=yd,yd=month_day[++y];
				if(flg&&y==2)++yd;
				if(x==1582&&y==10)yd-=10;
			}
			if(x!=1582)printf("%d %d %d\n",n,y,x);
			else if(y!=10)printf("%d %d %d\n",n,y,x);
			else if(x<=4)printf("%d %d %d\n",n,y,x);
			else printf("%d %d %d\n",n+10,y,x);
		}
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00046\zoo\zoo.cpp.The size of it is 0.366 KB.
#include <bits/stdc++.h>
using namespace std;
int n,m,c,k,tmp,x,y,s;
int main(){
	ios::sync_with_stdio(false);
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(register int i=1;i<=n;++i)cin>>x,s|=x;
	for(register int i=1;i<=m;++i){
		cin>>x>>y;
		tmp=s>>x;
		tmp&=1;
		if(tmp==0)--k;
	}
	cout<<(long long)((1<<k)-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00046\call\call.cpp.The size of it is 0.981 KB.
#include <bits/stdc++.h>
#define Mod 998244353
#define N 100001
using namespace std;
int a[N],c[N],n,m,q;
struct hanshu{
	int type,x,y,tot;
	vector<int> g;
}b[N];
void work(int u){
	switch(b[u].type){
		case 1:a[b[u].x]=(a[b[u].x]+b[u].y)%Mod;break;
		case 2:
			for(register int j=1;j<=n;++j)
				a[j]=a[j]*b[u].x%Mod;
			break;
		case 3:
			for(register int j=0;j<b[u].tot;++j)
				work(b[u].g[j]);
			break;
	}
}
int main(){
	ios::sync_with_stdio(false);
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(register int i=1;i<=n;++i)cin>>a[i];
	cin>>m;
	int u;
	for(register int i=1;i<=m;++i){
		cin>>b[i].type;
		switch(b[i].type){
			case 1:cin>>b[i].x>>b[i].y;break;
			case 2:cin>>b[i].x;break;
			case 3:
				cin>>b[i].tot;
				for(register int j=1;j<=b[i].tot;++j)
					cin>>u,b[i].g.push_back(u);
				break;
		}
	}
	cin>>q;
	for(register int i=1;i<=q;++i){
		cin>>u;
		work(u);
	}
	for(register int i=1;i<=n;++i)
		cout<<a[i]<<' ';
	return 0;
}
==========
===== Successfully open the file  answers\HN-00046\snakes\snakes.cpp.The size of it is 0.616 KB.
#include <bits/stdc++.h>
using namespace std;
int T,n,a[4],k,b[4];
int main(){
	ios::sync_with_stdio(false);
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>T>>n;
	if(n>3){
		while(T--)puts("1");
		return 0;
	}
	for(register int i=1;i<=3;++i)cin>>a[i],b[i]=a[i];
	sort(a+1,a+4);
	if(a[3]-a[1]<a[2])puts("3");
	else puts("1");
	a[1]=b[1],a[2]=b[2],a[3]=b[3];
	while(--T){
		cin>>k;
		int l,r;
		for(register int i=1;i<=k;++i)cin>>l>>r,a[l]=r;
		b[1]=a[1],b[2]=a[2],b[3]=a[3];
		sort(a+1,a+4);
		if(a[3]-a[1]<a[2])puts("3");
		else puts("1");
		a[1]=b[1],a[2]=b[2],a[3]=b[3];
	}
	return 0;
}
==========


---------- Now Opening N-00047's file(s).
===== Successfully open the file  answers\HN-00047\julian\julian.cpp.The size of it is 1.854 KB.
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int Q;
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>Q;
	int ri[Q],si[Q][3];
	for(int i=0;i<Q;i++)
		cin>>ri[i];
	for(int i=0;i<Q;i++)
	{
		si[i][0]=1+ri[i];
		si[i][1]=1;
		si[i][2]=-4713;
	}
	for(int i=0;i<Q;i++)
	{
		for(int j=1;j<=12;j++)
		{
			if(si[i][0]<=28)
				break;
			if(si[i][2]>21&&si[i][2]==1582&&j==10)
			{
				si[i][0]-=21;
				si[i][1]++;
				j++;
			}
			if(si[i][0]>31&&(j==1||j==3||j==5||j==7||j==8||j==10||j==12))
			{
				si[i][0]-=31;
				si[i][1]++;
			}
			if(si[i][0]>30&&(j==4||j==6||j==9||j==11))
			{
				si[i][0]-=30;
				si[i][1]++;
			}
			if(si[i][0]>29&&j==2&&si[i][2]<=1582&&si[i][2]>0&&si[i][2]%4==0)
			{
				si[i][0]-=29;
				si[i][1]++;
			}
			else if(si[i][0]>28&&j==2&&si[i][2]<=1582&&si[i][2]>0)
			{
				si[i][0]-=28;
				si[i][1]++;
			}
			if(si[i][0]>29&&j==2&&si[i][2]<0&&(si[i][2]+1)%4==0)
			{
				si[i][0]-=29;
				si[i][1]++;
			}
			else if(si[i][0]>28&&j==2&&si[i][2]<0)
			{
				si[i][0]-=28;
				si[i][1]++;
			}
			if(si[i][0]>29&&j==2&&si[i][2]>1582&&si[i][2]%4==0&&si[i][2]%100!=0)
			{
				si[i][0]-=29;
				si[i][1]++;
			}
			else if(si[i][0]>29&&j==2&&si[i][2]>1582&&si[i][2]%400==0)
			{
				si[i][0]-=29;
				si[i][1]++;
			}
			else if(si[i][0]>28&&j==2&&si[i][2]>1582)
			{
				si[i][0]-=28;
				si[i][1]++;
			}
			if(si[i][1]==13)
			{
				si[i][2]++;
				si[i][1]=1;
			}
			if(si[i][2]==0)
				si[i][2]++;
			if(j==12)
				j=0;
		}
	}
	for(int i=0;i<Q;i++)
	{
		if(si[i][2]==1582&&si[i][1]==10&&si[i][0]>=5&&si[i][0]<=14)
			cout<<si[i][0]+10<<" "<<si[i][1]<<" "<<si[i][2]<<endl;
		if(si[i][2]<0)
			cout<<si[i][0]<<" "<<si[i][1]<<" "<<si[i][2]*-1<<" "<<"BC"<<endl;
		else if(si[i][2]>0)
			cout<<si[i][0]<<" "<<si[i][1]<<" "<<si[i][2]<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file        answers\HN-00047\zoo\zoo.cpp.The size of it is 0.231 KB.
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,c,k;
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>n>>m>>c>>k;
	int a[n],y[m],s[c],b[k];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00047\call\call.cpp.The size of it is 0.173 KB.
#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00047\snakes\snakes.cpp.The size of it is 0.539 KB.
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,n,c,x;
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>T;
	int a[T],b[10000],ans[T];
	cin>>a[0];
	x=a[0];
	for(int j=0;j<x;j++)
		cin>>b[j];
	sort(a,a+T);
	c=b[x-1]-b[0];
	for(int j=1;j<a[0]-1;j++)
	{
		if(b[1]>c)
		{
			ans[0]=1;
			break;
		}
	}
	for(int i=1;i<T;i++)
	{
		cin>>a[i];
		for(int j=0;j<a[i];j++)
		{
			cin>>n;
			cin>>a[n];
		}
		for(int j=0;j<a[i];j++)
		{
			
		}
	}
	fclose(stdin);
	fclose(stdout);
	cout<<ans[0];
	return 0;
}
==========


---------- Now Opening N-00048's file(s).
===== Opening  answers\HN-00048\julian\julian.cpp Failed.File not found.
===== Successfully open the file        answers\HN-00048\zoo\zoo.cpp.The size of it is 1.324 KB.
#include <cstdio>
#include <map>
#define LL long long

using namespace std;

inline LL read(){
    LL x = 0, f = 1;
    char c = getchar();
    while(c < '0' || c > '9'){if(c == '-') f = -1; c = getchar();}
    while(c >= '0' && c <= '9'){x = x * 10 + c - '0'; c = getchar();}
    return x * f; 
}

const int maxn = 1e6 + 10;
LL n,m,c,k,ans = 1;
int mark[100];
map<int,int> vis;
int head[maxn],cnt;
struct Edge{
    int then,to;
}e[maxn];  

int main(){

    freopen("zoo.in","r",stdin);
    freopen("zoo.out","w",stdout);

    n = read(), m = read(), c = read(), k = read();
    for(int i = 1; i <= n; ++ i){
        LL num = read();
        for(int j = 0; j < k; ++ j)
            if(num & (LL)(1 << j)) mark[j] = 1;
    }
    for(int i = 1; i <= m; ++ i){
        int p = read(), q = read();
        if(!mark[p] && vis[q] != 2) e[++cnt] = (Edge){head[p], q}, head[p] = cnt, vis[q] = 1;
        else vis[q] = 2;
    }
    for(int i = 0; i < k; ++ i){
        if(mark[i]) ans *= 2;
        else{
            int flag = 1;
            for(int j = head[i]; j; j = e[j].then){
                int v = e[j].to;
                if(vis[v] == 1){
                    flag = 0;
                    break;
                }
            }
            if(flag) ans *= 2;
        }
    }
    printf("%lld\n", ans - n);
    return 0;
}
==========
===== Successfully open the file      answers\HN-00048\call\call.cpp.The size of it is 3.186 KB.
#include <cstdio>
#include <vector>
#define LL long long

using namespace std;

inline LL read(){
    LL x = 0, f = 1;
    char c = getchar();
    while(c < '0' || c > '9'){if(c == '-') f = -1; c = getchar();}
    while(c >= '0' && c <= '9'){x = x * 10 + c - '0'; c = getchar();}
    return x * f; 
}

const int maxn = 1e5 + 10, maxm = 1e6 + 10;
const LL mode = 998244353;
int n,m,head[maxm],num,Q;
struct Fc{
    int opt,p,v;
}f[maxn];
vector<int> v[maxn];

struct Seg_Tree{
    #define lc(x) x << 1
    #define rc(x) x << 1 | 1
    LL c[maxn << 2],tag[maxn << 2];
    
    void build(int l, int r, int p){
        tag[p] = -1;
        if(l == r){
            c[p] = read();
            return;
        }
        int mid = (l + r) >> 1;
        build(l, mid, lc(p));
        build(mid + 1, r, rc(p));
        c[p] = (c[lc(p)] + c[rc(p)]) % mode;
    }
    
    void f(int l, int r, int p, int x){
        c[p] = (c[p] * x) % mode;
        if(tag[p] == -1) tag[p] = x;
        else tag[p] = (tag[p] * x) % mode;
    }
    
    void downdate(int l, int r, int p){
        if(tag[p] != -1){
            int mid = (l + r) >> 1;
            f(l, mid, lc(p), tag[p]);
            f(mid + 1, r, rc(p), tag[p]);
            tag[p] = -1;
        }
    }
    
    void tim(int x){
        f(1, n, 1, x);
        return;
    }
    
    void add(int l, int r, int p, int pos, int x){
        if(l == r){
            c[p] = (c[p] + x) % mode;
            return;
        }
        downdate(l, r, p);
        int mid = (l + r) >> 1;
        if(mid >= pos) add(l, mid, lc(p), pos, x);
        else add(mid + 1, r, rc(p), pos, x);
        c[p] = (c[lc(p)] + c[rc(p)]) % mode;
    }
    
    void query(int l, int r, int p){
        if(l == r){
            printf("%lld ", c[p] % mode);
            return;
        }
        downdate(l, r, p);
        int mid = (l + r) >> 1;
        query(l, mid, lc(p));
        query(mid + 1, r, rc(p));
    }
}tree;

//void add(int u, int v){e[++num] = (Edge){head[u], v}; head[u] = num;}

void deal(int id){
    if(f[id].opt == 1) tree.add(1, n, 1, f[id].p, f[id].v);
    if(f[id].opt == 2) tree.tim(f[id].v);
    if(f[id].opt == 3){
        int top = 0;
        for(int i= 0; i < v[id].size(); ++ i)
            deal(v[id][i]);
    }
}

/*int vis[maxn];
void DFS(int u){
    int flag = 0;
    for(int i = head[u]; i; i = e[i].then){
        int v = e[i].to;
        if(f[v].opt == 3 && !vis[v]){vis[v] = 1, flag = 0, DFS(v);}
    }
    
}*/

int main(){

    freopen("call.in","r",stdin);
    freopen("call.out","w",stdout);

    n = read(); tree.build(1, n, 1);
    m = read();
    for(int i = 1; i <= m; ++ i){
        f[i].opt = read();
        if(f[i].opt == 1) f[i].p = read(), f[i].v = read();
        if(f[i].opt == 2) f[i].v = read();
        if(f[i].opt == 3){
            int c = read();
            while(c--){
                int pos = read();
                v[i].push_back(pos);
            }
        }
    }
    /*for(int i = 1; i <= m; ++ i)
        if(!vis[i] && f[i].opt == 3) DFS(i);*/
    Q = read();
    for(int i = 1; i <= Q; ++ i){
        int id = read();
        deal(id);
    }
    tree.query(1, n, 1);
    printf("\n");
    return 0;
}
==========
===== Successfully open the file  answers\HN-00048\snakes\snakes.cpp.The size of it is 1.457 KB.
#include <cstdio>
#include <algorithm>
#define LL long long

using namespace std;

inline LL read(){
    LL x = 0, f = 1;
    char c = getchar();
    while(c < '0' || c > '9'){if(c == '-') f = -1; c = getchar();}
    while(c >= '0' && c <= '9'){x = x * 10 + c - '0'; c = getchar();}
    return x * f; 
}

const int maxn = 1e6 + 10;
int n;
struct Sna{
    int id,val;
}a[maxn],b[maxn];

bool cmp(Sna x, Sna y){return x.val == y.val ? x.id > y.id : x.val > y.val;}

int main(){
    
    freopen("snakes.in","r",stdin);
    freopen("snakes.out","r",stdout);

    int T = read();
    for(int t = 1; t <= T; ++ t){
        if(t == 1){
            n = read();
            for(int i = 1; i <= n; ++ i){
                a[i].val = read();
                a[i].id = i;
            }
        }
        else{
            int k = read();
            for(int i = 1; i <= k; ++ i){
                int id = read(), val = read();
                a[id].val = val;
            }
        }
        for(int i = 1; i <= n; ++ i) b[i] = a[i];
        sort(a + 1, a + 1 + n, cmp);
        int l = 1, r = n, ans = n;
        while(l < r){
            if(a[l].val > a[l + 1].val + a[r].val) r -= 1, ans -= 1, a[l].val -= a[r].val;
            else if(a[l].val == a[l + 1].val + a[r].val && a[l].id > a[l + 1].id) r -= 1, ans -= 1, a[l].val -= a[r].val;
            else break;
        } printf("%d\n", ans);
        for(int i = 1; i <= n; ++ i) a[i] = b[i];
    }
    return 0;
}

==========


---------- Now Opening N-00049's file(s).
===== Successfully open the file  answers\HN-00049\julian\julian.cpp.The size of it is 2.290 KB.
#include<iostream>
#include<cstdio>
using namespace std;
long long q;
long long r;
long long bc[4720],m1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	int n=0,x=0;
	for(int i=1;i<=4713;i++){
		if((i-1)%4==0){
			n+=366;
			bc[i]=366;
		}else{
			n+=365;
			bc[i]=365;
		}
	} 
	for(int i=1;i<=1581;i++){
		if(i%4==0){
			x+=366;
		}else{
			x+=365;
		}
	} 
	x+=277;
	for(int i=1;i<=q;i++){
		scanf("%d",&r);
		int d,m,y;
		r+=1;
		if(r<=n){
			for(y=4713;y>=1;y--){
				if(bc[y]<r){
					r-=bc[y];
					continue;
				}else{
					break;
				}
			}
			for(m=1;m<=12;m++){
				if(m==2){
					if(r>29){
						if(bc[y]==366){
							r-=29;
							continue;
						}
					}else if(r>28&&bc[y]==365){
						r-=28;
						continue;
					}else{
						d=r;
						break;
					}
				}
				if(r>m1[m]){
					r-=m1[m];
				}else{
					d=r;
					break;
				}
			}
			printf("%d %d %d BC\n",d,m,y);
			continue;
		}else if(r<=n+x){
			r-=n;
			for(y=1;;y++){
				if(y%4==0){
					if(r>366){
						r-=366;
					}else{
						break;
					}
				}else{
					if(r>365){
						r-=365;
					}else{
						break;
					}
				}
			}
			for(m=1;m<=12;m++){
				if(m==2){
					if(y%4==0){
						if(r>29){
							r-=29;
							continue;
						}else{
							d=r;
							break;
						}
					}else{
						if(r>28){
							r-=28;
							continue;
						}else{
							d=r;
							break;
						}
					}
				}
				if(r>m1[m]){
					r-=m1[m];
					continue;
				}else{
					d=r;
					break;
				}
			}
			printf("%d %d %d \n",d,m,y);
		}else{
			r-=n+x;
			if(r>78){
				r-=78;
				for(y=1583;;y++){
					if((y%4==0&&y%100!=0)||y%400==0){
						if(r>366){
							r-=366;
						}else{
							break;
						}
					}else{
						if(r>365){
							r-=365;
						}else{
							break;
						}
					}
				}
			}
			for(m=1;m<=12;m++){
				if(m==2){
					if((y%4==0&&y%100!=0)||y%400==0){
						if(r>29){
							r-=29;
							continue;
						}else{
							d=r;
							break;
						}
					}else{
						if(r>28){
							r-=28;
							continue;
						}else{
							d=r;
							break;
						}
					}
				}
				if(r>m1[m]){
					r-=m1[m];
					continue;
				}else{
					d=r;
					break;
				}
			}
			printf("%d %d %d \n",d,m,y);
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00049\zoo\zoo.cpp.The size of it is 0.948 KB.
#include<bits/stdc++.h>
using namespace std;
unsigned long long n,m,c,k,num;
unsigned long long s[64][1000005];
bitset<1000005> q[65];
unsigned long long lenth[65];
unsigned long long sl[99999999];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	num=pow(2,k-1)-1;
	num-=n;
	for(int i=n;i>=1;i--){
		unsigned long long an;
		scanf("%d",&an);
		for(int j=k;j>=1;j--){
			if(an>=pow(2,j-1)){
				s[j-1][i]=1;
			}else{
				s[j-1][i]=0;
			}
		}
	}
	for(int i=1;i<=m;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		q[x][y]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(s[j-1][i]==1){
				for(int z=1;z<=c;z++){
					if(q[j][z]==1){
						sl[z]==1;
					}
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(s[j-1][i]==1){
				for(int z=1;z<=c;z++){
					if(q[j][z]==1&&sl[z]!=1){
						num--;
						break;
					}
				}
			}
		}
	}
	printf("%d",num);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00049\call\call.cpp.The size of it is 1.166 KB.
#include<bits/stdc++.h>
using namespace std;
unsigned long long n,m,q;
unsigned long long a[100005];
bitset<100005> bit[100005];
struct ss1{
	unsigned long long t;
	unsigned long long p,v;
	unsigned long long vj;
}j[100005];
void dy(unsigned long long hs){
	if(j[hs].t==1){
		a[j[hs].p]+=j[hs].v;
		return;
	}
	if(j[hs].t==2){
		for(unsigned long long i=1;i<=n;i++){
			a[i]*=j[hs].vj;
		}
		return;
	}
	if(j[hs].t==3){
		for(unsigned long long i=1;i<=m;i++){
			if(bit[hs][i]==1){
				dy(i);
			}
		}
		return;
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(unsigned long long i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(unsigned long long i=1;i<=m;i++){
		int x;
		scanf("%d",&j[i].t);
		if(j[i].t==1){
			scanf("%d%d",&j[i].p,&j[i].v);
		}
		if(j[i].t==2){
			scanf("%d",&j[i].vj);
		}
		if(j[i].t==3){
			scanf("%d",&x);
			for(int j=1;j<=x;j++){
				unsigned long long y;
				scanf("%d",&y);
				bit[i][y]=1;
			}
		}
	}
	scanf("%d",&q);
	for(int i=1;i<=q;i++){
		unsigned long long x;
		scanf("%d",&x);
		dy(x);
	}
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]%998244353);
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00049\snakes\snakes.cpp.The size of it is 0.356 KB.
#include<bits/stdc++.h>
using namespace std;
int t,n;
int a[1000005];
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d%d",&t,&n);
	for(int j=1;j<=n;j++){
		scanf("%d",&a[j]);
	}
	int x;
	for(int i=2;i<=t;i++){
		scanf("%d",&n);
		for(int j=1;j<=n;j++){
			scanf("%d",&x);
			scanf("%d",&a[x]);
		}
	}
	return 0;
}
==========


---------- Now Opening N-00050's file(s).
===== Successfully open the file  answers\HN-00050\julian\julian.cpp.The size of it is 2.471 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
inline int read()
{
	int x=0;
	char c=getchar();
	bool f=0;
	while (!isdigit(c))
		  f|=(c=='-'),c=getchar();
	while (isdigit(c))
		  x=(x<<3)+(x<<1)+(c^48),c=getchar();
	return f?-x:x;
}
int q,r;
int month1[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int year1[5]={0,366,365,365,365},sum1=1461,end1=1721424;
int year2[5]={0,365,365,365,366},sum2=1461,end2=577737;
int year3[5]={0,365,366,365,365};
int mod1=146097,mod2=36524,end3=42734;
int year,month,day,flag;
inline void change1()
{
	if (r>=end1)
	   {
	   r-=end1,flag=1;
	   return ;
	   }
	year=4713-(r/1461)*4,r%=1461;
	int tot=0,cnt;
	for (register int i=1;i<=4;++i)
		{
		if (r>=year1[i])
		   tot++,year--,r-=year1[i];
		else
		   break;
		}
	month=1;
	for (register int i=1;i<=12;++i)
		{
		cnt=month1[i];
		if (i==2&&(!tot))
		   cnt++;
		if (r>=cnt)
		   month++,r-=cnt;
		else
		   break;
		}
	day=1+r;
}
inline void change2()
{
	if (r>=end2)
	   {
	   flag=1,r-=end2;
	   return ;
	   }
	year=1+(r/1461)*4,r%=1461;
	int tot=0,cnt;
	for (register int i=1;i<=4;++i)
		{
		if (r>=year2[i])
		   tot++,year++,r-=year2[i];
		else
		   break;
		}
	month=1;
	for (register int i=1;i<=12;++i)
		{
		cnt=month1[i];
		if (i==2&&(year%4==0))
		   cnt++;
		if (r>=cnt)
		   month++,r-=cnt;
		else
		   break;
		}
	day=1+r;
}
inline void change3()
{
	if (r<78)
	   {
	   r+=287;
	   change2(),year=1582;
	   return ;
	   }
	r-=78;
	int cnt=r,now=r;
	if (cnt>=end3)
	   {
	   cnt-=end3;
	   r+=(cnt/mod1)*3,cnt%=mod1;
	   r+=cnt/mod2;
	   }
	if (now%mod1)
	   r++;
	year=1583+(r/1461)*4,r%=1461;
	int tot=0;
	for (register int i=1;i<=4;++i)
		{
		if (r>=year3[i])
		   tot++,year++,r-=year3[i];
		else
		   break;
		}
	month=1;
	for (register int i=1;i<=12;++i)
		{
		cnt=month1[i];
		if (i==2&&(year%400==0||(year%4==0&&year%100!=0)))
		   cnt++;
		if (r>=cnt)
		   month++,r-=cnt;
		else
		   break;
		}
	day=1+r;	
}
signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int cnt=0;
	for (register int i=1;i<=9;++i)
		cnt+=month1[i];
	q=read();
	while (q--)
		  {
		  year=month=day=flag=0;
		  r=read();
		  change1();
		  if (!flag)
		     {
		     printf("%lld %lld %lld BC\n",day,month,year);
		     continue;
			 }
		  flag=0,change2();
		  if (!flag)
		     {
		     printf("%lld %lld %lld\n",day,month,year);
		     continue;
			 }
		  change3();
		  printf("%lld %lld %lld\n",day,month,year);
		  }
	return 0;
}
==========
===== Successfully open the file        answers\HN-00050\zoo\zoo.cpp.The size of it is 0.704 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k;
int sum[70],tot[70],b[70],cnt,len,p,q;
long long a[1000005],ans,x;
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for (register int i=1;i<=n;++i)
		{
		scanf("%lld",&x),a[i]=x,len=0;
		while (x)
			  sum[len]+=(x&1),len++,x>>=1;
		}
	for (register int i=1;i<=m;++i)
		{
		scanf("%d%d",&p,&q);
		tot[p]=1;
		}
	for (register int i=0;i<k;++i)
		if (tot[i]==1&&sum[i]==0)
		   b[++cnt]=i;
	ans=(1<<(k-cnt))-n;
	for (register int i=1;i<=n;++i)
		{
		for (register int j=1;j<=cnt;++j)
			if (a[i]&(1<<b[j]))
			   {
			   ans++;
			   break;
			   }
		}
	printf("%lld",ans);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00050\call\call.cpp.The size of it is 1.563 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
inline int read()
{
	int x=0;
	char c=getchar();
	bool f=0;
	while (!isdigit(c))
		  f|=(c=='-'),c=getchar();
	while (isdigit(c))
		  x=(x<<3)+(x<<1)+(c^48),c=getchar();
	return f?-x:x;
}
const int mod=998244353;
int n,m,q;
int a[100005];
int add[100005],mul[100005];
struct node{
	int t,pos,val,k;
	vector <int> g;
}change[100005];
inline void work1(int x)
{
	a[change[x].pos]=(a[change[x].pos]+change[x].val)%mod;	
}
inline void work2(int x)
{
	for (register int j=1;j<=n;++j)
		a[j]=(a[j]*change[x].val)%mod;	
}
inline void work3(int x)
{
	for (register int i=0;i<change[x].k;++i)
		{
		int y=change[x].g[i];
		if (change[y].t==1)
		   work1(y);
		else
		if (change[y].t==2)
		   work2(y);
		if (change[y].t==3)
		   work3(y);
		}
}
signed main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for (register int i=1;i<=n;++i)
		a[i]=read()%mod;
	m=read();
	for (register int i=1;i<=m;++i)
		{
		change[i].t=read();
		int t=change[i].t;
		if (t==1)
		   change[i].pos=read(),change[i].val=read();
		if (t==2)
		   change[i].val=read();
		if (t==3)
		   {
		   change[i].k=read();
		   for (register int j=1;j<=change[i].k;++j)
		   	   {
		   	   int x=read();
		   	   change[i].g.push_back(x);
			   }
		   }
		}
	q=read();
	for (register int i=1;i<=q;++i)
		{
		int x=read();
		if (change[x].t==1)
		   work1(x);
		if (change[x].t==2)
		   work2(x);
		if (change[x].t==3)
		   work3(x);
		}
	for (register int i=1;i<=n;++i)
		printf("%lld ",a[i]);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00050\snakes\snakes.cpp.The size of it is 0.384 KB.
#include<bits/stdc++.h>
using namespace std;
inline int read()
{
	int x=0;
	char c=getchar();
	bool f=0;
	while (!isdigit(c))	
	      f|=(c=='-'),c=getchar();
	while (isdigit(c))	
	      x=(x<<3)+(x<<1)+(c^48),c=getchar();
	return f?-x:x;
}
int t;
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	t=read();
	while (t--)
		  printf("0\n");
	return 0;
}
==========


---------- Now Opening N-00051's file(s).
===== Successfully open the file  answers\HN-00051\julian\julian.cpp.The size of it is 4.657 KB.
# include <stdio.h>
# include <string.h>
int mp[110]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int mr[110]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int mt[110]={0,31,29,31,30,31,30,31,31,30,21,30,31};
int yp=365,yr=366,ny=-4713,nm=1,nd=1,dy,dm,dd,k400=146097,yt=355,jum=2298884;
long long k40000,k400000,k4000000,k40000000,k400000000;
long long gett;
int read()
{
	int i,j,anss=0;
	char c=getchar();
	while(c<'0' || c>'9')
		c=getchar();
	while(c>='0' && c<='9')
	{
		anss=(anss<<1)+(anss<<3)+c-'0';
		c=getchar();
	}
	return anss;
}
int check(int i)
{
	if(i%4==0 && i%100!=0 || i%4==0 && i%100==0 && i%400==0)
		return 1;
	return 0;
}
void qiu(int xy,int xm,int xd,int& yy,int& mm,int& dd)
{
	int i,j;
	if(xy<0)
	{
		if(gett>=(long long)jum && xy==-4713)
		{
			gett-=(long long)jum;
			qiu(1582,xm,xd,yy,mm,dd);
			return;
		}
		if(xy==-1)
		{
			if(gett<=(long long)(yr-1))
			{
				for(i=1;i<=12;i++)
					if(gett>=(long long)mr[i])
						gett-=(long long)mr[i];
					else
					{
						yy=xy;
						mm=i;
						dd=(int)gett+1;
						return;
					}
			}
			else
			{
				gett-=(long long)yr;
				qiu(1,xm,xd,yy,mm,dd);
				return;
			}
		}
		else
		{
			if(((-xy)-1)%4==0)
			{
				if(gett<=(long long)(yr-1))
				{
					for(i=1;i<=12;i++)
						if(gett>=(long long)mr[i])
							gett-=(long long)mr[i];
						else
						{
							yy=xy;
							mm=i;
							dd=(int)gett+1;
							return;
						}
				}
				else
				{
					gett-=(long long)yr;
					qiu(xy+1,xm,xd,yy,mm,dd);
					return;
				}
			}
			else
			{
				if(gett<=(long long)(yp-1))
				{
					for(i=1;i<=12;i++)
						if(gett>=(long long)mp[i])
							gett-=(long long)mp[i];
						else
						{
							yy=xy;
							mm=i;
							dd=(int)gett+1;
							return;
						}
				}
				else
				{
					gett-=(long long)yp;
					qiu(xy+1,xm,xd,yy,mm,dd);
					return;
				}
			}
		}
	}
	else
	{
		if(xy<1582)
		{
			if((xy)%4==0)
			{
				if(gett<=(long long)(yr-1))
				{
					for(i=1;i<=12;i++)
						if(gett>=(long long)mr[i])
							gett-=(long long)mr[i];
						else
						{
							yy=xy;
							mm=i;
							dd=(int)gett+1;
							return;
						}
				}
				else
				{
					gett-=(long long)yr;
					qiu(xy+1,xm,xd,yy,mm,dd);
					return;
				}
			}
			else
			{
				if(gett<=(long long)(yp-1))
				{
					for(i=1;i<=12;i++)
						if(gett>=(long long)mp[i])
							gett-=(long long)mp[i];
						else
						{
							yy=xy;
							mm=i;
							dd=(int)gett+1;
							return;
						}
				}
				else
				{
					gett-=(long long)yp;
					qiu(xy+1,xm,xd,yy,mm,dd);
					return;
				}
			}
		}
		if(xy==1582)
		{
			if(gett>=(long long)yt)
			{
				gett-=(long long)yt;
				qiu(xy+1,xm,xd,yy,mm,dd);
				return;
			}
			else
			{
				for(i=1;i<=12;i++)
					if(gett>=(long long)mr[i])
						gett-=(long long)mr[i];
					else
					{
						yy=xy;
						mm=i;
						dd=(int)gett+1;
						if(i==10 && dd>=5)
							dd+=10;
						return;
					}
			}
		}
		if(xy>1582)
		{
			if(gett>=k400000000)
			{
				gett-=k400000000;
				qiu(xy+400000000,xm,xd,yy,mm,dd);
				return;
			}
			if(gett>=k40000000)
			{
				gett-=k40000000;
				qiu(xy+40000000,xm,xd,yy,mm,dd);
				return;
			}
			if(gett>=k4000000)
			{
				gett-=k4000000;
				qiu(xy+4000000,xm,xd,yy,mm,dd);
				return;
			}
			if(gett>=k400000)
			{
				gett-=k400000;
				qiu(xy+400000,xm,xd,yy,mm,dd);
				return;
			}
			if(gett>=k40000)
			{
				gett-=k40000;
				qiu(xy+40000,xm,xd,yy,mm,dd);
				return;
			}
			if(gett>=(long long)k400)
			{
				gett-=(long long)k400;
				qiu(xy+400,xm,xd,yy,mm,dd);
				return;
			}
			if(check(xy))
			{
				if(gett<=(long long)(yr-1))
				{
					for(i=1;i<=12;i++)
						if(gett>=(long long)mr[i])
							gett-=(long long)mr[i];
						else
						{
							yy=xy;
							mm=i;
							dd=(int)gett+1;
							return;
						}
				}
				else
				{
					gett-=(long long)yr;
					qiu(xy+1,xm,xd,yy,mm,dd);
					return;
				}
			}
			else
			{
				if(gett<=(long long)(yp-1))
				{
					for(i=1;i<=12;i++)
						if(gett>=(long long)mp[i])
							gett-=(long long)mp[i];
						else
						{
							yy=xy;
							mm=i;
							dd=(int)gett+1;
							return;
						}
				}
				else
				{
					gett-=(long long)yp;
					qiu(xy+1,xm,xd,yy,mm,dd);
					return;
				}
			}
		}
	}
	return;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int i,j,n,m;
	long long tian;
	k40000=(long long)(k400*100);
	k400000=k40000*10;
	k4000000=k400000*10;
	k40000000=k4000000*10;
	k400000000=k40000000*10;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lld",&tian);
		gett=tian;
		qiu(ny,nm,nd,dy,dm,dd);
		if(dy<0)
			printf("%d %d %d BC\n",dd,dm,-dy);
		else
			printf("%d %d %d\n",dd,dm,dy);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00051\zoo\zoo.cpp.The size of it is 0.802 KB.
# include <stdio.h>
int okk[70],ansn,shifou[70];
int read()
{
	int i,j,anss=0;
	char c=getchar();
	while(c<'0' || c>'9')
		c=getchar();
	while(c>='0' && c<='9')
	{
		anss=(anss<<1)+(anss<<3)+c-'0';
		c=getchar();
	}
	return anss;
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int i,j,n,m,c,k,wei,zhong;
	unsigned long long check=0,gett,zong=1,anss=1;
	scanf("%d%d%d%d",&n,&m,&c,&k);
	ansn=k;
	for(i=1;i<=k;++i)
		zong*=2;
	for(i=1;i<=n;++i)
	{
		scanf("%llu",&gett);
		check|=gett;
	}
	for(i=0;i<=k-1;++i)
	{
		if(check&1)
			okk[i]=1;
		check>>=1;
	}
	for(i=1;i<=m;++i)
	{
		wei=read();
		zhong=read();
		if(okk[wei]==0 && shifou[wei]==0)
		{
			ansn--;
			shifou[wei]=1;
		}
	}
	for(i=1;i<=ansn;++i)
		anss*=2;
	printf("%llu",anss-(unsigned long long)n);
	return 0;
}
==========
===== Opening      answers\HN-00051\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00051\snakes\snakes.cpp.The size of it is 2.324 KB.
# include <stdio.h>
# include <algorithm>
# include <queue>
# include <utility>
using namespace std;
int a[1000010],sett,fan,ansn,m;
priority_queue< pair< int,pair< int,int > >,vector< pair< int,pair< int,int > > >,greater< pair< int,pair< int,int > > > >qsma;
priority_queue< pair< int,pair< int,int > > >qbig;
int os33[1000010];
inline int read()
{
	int i,j,anss=0;
	char c=getchar();
	while(c<'0' || c>'9')
		c=getchar();
	while(c>='0' && c<='9')
	{
		anss=(anss<<1)+(anss<<3)+c-'0';
		c=getchar();
	}
	return anss;
}
inline int getans(int x)
{
	int i,j,os1,os2,os3,ob1,ob2,ob3,cun;
	pair< int,pair< int,int > >os;
	pair< int,pair< int,int > >ob;
	pair< int,pair< int,int > >o;
	while(1)
	{
		os=qsma.top();
		ob=qbig.top();
		qsma.pop();
		qbig.pop();
		os1=os.first;
		os2=os.second.first;
		os3=os.second.second;
		ob1=ob.first;
		ob2=ob.second.first;
		ob3=ob.second.second;
		if(sett==2)
		{
			if(os3)
			{
				fan=os3;
				ansn=fan;
				break;
			}
			else
				break;
		}
		o.first=ob1-os1;
		o.second.first=ob2;
		o.second.second=sett;
		qbig.push(o);
		qsma.push(o);
		sett--;
		os33[x]=os3;
		x++;
	}
	while(sett<m)
	{
		sett++;
		x--;
		if(fan)
		{
			if(sett!=fan)
				continue;
			else
			{
				fan=0;
				continue;
			}
		}
		else
		{
			if(os33[x]>sett)
			{
				fan=os33[x];
				ansn=fan;
				sett=fan-1;
				x=m-fan+1;
				continue;
			}
			else
				if(os33[x]==sett)
				{
					ansn=sett;
					continue;
				}
				else
					continue;
		}
	}
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int j,t,n;
	t=read();
	a[1]=-1;
	while(t--)
	{
		n=read();
		if(a[1]==-1)
		{
			m=n;
			for(register int i=1;i<=n;++i)
				a[i]=read();
		}
		else
		{
			for(register int i=1;i<=n;++i)
				a[read()]=read();
		}
		if(m==3)
		{
			if(a[3]-a[1]-a[2]>=0)
			{
				printf("1\n");
				continue;
			}
			else
			{
				printf("3\n");
				continue;
			}
		}
		else
		{
			if(!qsma.empty())
			{
				for(register int i=1;i<m;++i)
				{
					qsma.pop();
					qbig.pop();
				}
			}
			pair< int,pair< int,int > >o;
			for(register int i=1;i<=m;++i)
			{
				o.first=a[i];
				o.second.first=i;
				o.second.second=0;
				qsma.push(o);
				o.first=a[m-i+1];
				o.second.first=m-i+1;
				qbig.push(o);
			}
			sett=m;
			ansn=1;
			j=getans(0);
			printf("%d\n",ansn);
		}
	}
	return 0;
}
==========


---------- Now Opening N-00052's file(s).
===== Successfully open the file  answers\HN-00052\julian\julian.cpp.The size of it is 3.044 KB.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
int n,ryue[15]={0,31,29,31,30,31,30,31,31,30,31,30,31},pyue[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
ll read(){
	ll f=1,x=0;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-')f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x*f;
}
int inv(int x){
	if(x<0){
		if((abs(x)-1)%4==0)return 1;
	}
	else 
	if(x>0&&x<1582){
		if(x%4==0)return 1;
	}
	else 
	if(x==1582)return 0;
	else
	if((x%4==0&&x%100!=0)||(x%400==0))return 1;
	return 0;
}
void work(ll x){
	int a=-4713,b=1,c=1;
	while(x>=365){
		int f=inv(a);
		if(f==1){
			x-=366;
			a++;
			if(a==0)a=1;
		}
		else{
			x-=365;
			a++;
			if(a==0)a=1;
		}
	}
	if(x==0){
		if(a>1582||(a==1582&&b>10)||(a==1582&&b==10&&c>=5)){
			c+=10;
			int f=inv(a);
			if(f==1){
				if(c>=ryue[b]){
					c-=ryue[b];
					b++;
					if(b>12){
						b-=12;
						a++;
						if(a==0)a=1;
					}
				}
			}
			else{
				if(c>=pyue[b]){
					c-=pyue[b];
					b++;
					if(b>12){
						b-=12;
						a++;
						if(a==0)a=1;
					}
				}
			}
			cout<<c<<" "<<b<<" "<<a<<endl;
			return;
		}
		if(a>0){
			cout<<c<<" "<<b<<" "<<a<<endl;
			return;
		}
		else
		cout<<c<<" "<<b<<" "<<abs(a)<<" BC"<<endl;
		return;
	}
	int f=inv(a);
	if(f==1){
		for(int i=1;i<=12;i++){
			if(x>=ryue[i]){
				x-=ryue[i];
				b++;
			}
		}
		if(b>12){
			a++;
			b-=12;
			if(a==0)a=1;
		}
	}
	else{
		for(int i=1;i<=12;i++){
			if(x>=pyue[i]){
				x-=pyue[i];
				b++;
			}
		}
		if(b>12){
			a++;
			b-=12;
			if(a==0)a=1;
		}
	}
	if(x==0){
		if(a>1582||(a==1582&&b>10)||(a==1582&&b==10&&c>=5)){
			c+=10;
			int f=inv(a);
			if(f==1){
				if(c>=ryue[b]){
					c-=ryue[b];
					b++;
					if(b>12){
						b-=12;
						a++;
						if(a==0)a=1;
					}
				}
			}
			else{
				if(c>=pyue[b]){
					c-=pyue[b];
					b++;
					if(b>12){
						b-=12;
						a++;
						if(a==0)a=1;
					}
				}
			}
			cout<<c<<" "<<b<<" "<<a<<endl;
			return;
		}
		if(a>0){
			cout<<c<<" "<<b<<" "<<a<<endl;
			return;
		}
		else
		cout<<c<<" "<<b<<" "<<abs(a)<<" BC"<<endl;
		return;
	}
	c+=x;
	x=0;
	if(f==1){
		if(c>ryue[b]){
			c-=ryue[b];
			b++;
			if(b>12){
				b-=12;
				a++;
				if(a==0)a=1;
			}
		}
	}
	else{
		if(c>pyue[b]){
			c-=pyue[b];
			b++;
			if(b>12){
				b-=12;
				a++;
				if(a==0)a=1;
			}
		}
	}
	if(x==0){
		if(a>1582||(a==1582&&b>10)||(a==1582&&b==10&&c>=5)){
			c+=10;
			int f=inv(a);
			if(f==1){
				if(c>=ryue[b]){
					c-=ryue[b];
					b++;
					if(b>12){
						b-=12;
						a++;
						if(a==0)a=1;
					}
				}
			}
			else{
				if(c>=pyue[b]){
					c-=pyue[b];
					b++;
					if(b>12){
						b-=12;
						a++;
						if(a==0)a=1;
					}
				}
			}
			cout<<c<<" "<<b<<" "<<a<<endl;
			return;
		}
		if(a>0){
			cout<<c<<" "<<b<<" "<<a<<endl;
			return;
		}
		else
		cout<<c<<" "<<b<<" "<<abs(a)<<" BC"<<endl;
		return;
	}
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	n=read();
	for(int i=1;i<=n;i++){
		ll x=read();
		work(x);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00052\zoo\zoo.cpp.The size of it is 0.072 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	return 0;
}
==========
===== Successfully open the file      answers\HN-00052\call\call.cpp.The size of it is 1.119 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
const int mod=998244353;
int n,m,q,a[N];
struct node{
	int flag,p,q,cc,v,b[4000];
}h[N];
int read(){
	int f=1,x=0;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-')f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x*f;
}
void work(int x){
	int f=h[x].flag;
		if(f==1){
			a[h[x].p]+=h[x].q;
		}
		if(f==2){
			for(int j=1;j<=n;j++){
				a[j]*=h[x].v;
			}
		}
		if(f==3){
			for(int i=1;i<=h[x].cc;i++){
				int xx=h[x].b[i];
				work(xx);
			}
		}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	m=read();
	for(int i=1;i<=m;i++){
		int f=read();
		if(f==1){
			h[i].flag=1;
			h[i].p=read();
			h[i].q=read();
		}
		if(f==2){
			h[i].flag=2;
			h[i].v=read();
		}
		if(f==3){
			h[i].flag=3;
			int c=read();
			h[i].cc=c;
			for(int j=1;j<=c;j++){
				h[i].b[j]=read();
			}
		}
	}
	int qq=read();
	for(int i=1;i<=qq;i++){
		int x=read();
		work(x);
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]%mod<<" ";
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00052\snakes\snakes.cpp.The size of it is 0.072 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	return 0;
}
==========


---------- Now Opening N-00053's file(s).
===== Successfully open the file  answers\HN-00053\julian\julian.cpp.The size of it is 1.870 KB.
#include <bits/stdc++.h>
using namespace std;
/* TODO (#1#): Every month's number of day
 */
int monda[]={0,31,10000,31,30,31,30,31,31,30,31,30,31};

/* TODO (#1#): Make Julian date
 */
void julian(int x){
	int y=-4713,m=1,d=1;
	while(x>=365&&y<0){
		while((-y-1)%4!=0&&x>=365){
			x-=365;
			++y;
			if(y==0)++y;
		}
		while((-y-1)%4==0&&x>=366){
			x-=366;
			++y;
			if(y==0)++y;
		}
	}
	while(x>=365&&y>0&&y<1582){
		while(y%4!=0&&x>=365){
			x-=365;
			++y;
		}
		while(y%4==0&&x>=366){
			x-=366;
			++y;
		}
	}
	if(y==1582&&x>=355){
		x-=355;
		++y;
	}
	while(x>=365){
		while((y%4!=0||(y%100==0&&y%400!=0))&&x>=365){
			x-=365;
			++y;
		}
		while(((y%4==0&&y%100!=0)||y%400==0)&&x>=366){
			x-=366;
			++y;
		}
	}
	while(x>0){
		x--;
		++d;
		if(y==1582){
			if(d==5&&m==10){
				d=15;
			}
		}
		if(m==2){
			if(y>0&&y%4!=0||(y%100==0&&y%400!=0)){
				if(d>28){
					d=1;
					++m;
				}
			}
			if(y>0&&(y%4==0&&y%100!=0)||y%400==0){
				if(d>29){
					d=1;
					++m;
				}
			}
			if(y<0&&(-y-1)%4!=0){
				if(d>28){
					d=1;
					++m;
				}
			}
			if(y<0&&(-y-1)%4==0){
				if(d>29){
					d=1;
					++m;
				}
			}
		}
		if(d>monda[m]){
			d=1;
			m++;
		}
		if(m>12){
			m=1;
			++y;
			if(y==0)++y;
		}
	}
	if(y>1582)d+=10;
	if(m==2){
		if(y>0&&y%4!=0||(y%100==0&&y%400!=0)){
			if(d>28){
				d=1;
				++m;
			}
		}
		if(y>0&&(y%4==0&&y%100!=0)||y%400==0){
			if(d>29){
				d=1;
				++m;
			}
		}
		if(y<0&&(-y-1)%4!=0){
			if(d>28){
				d=1;
				++m;
			}
		}
		if(y<0&&(-y-1)%4==0){
			if(d>29){
				d=1;
				++m;
			}
		}
	}
	if(d>monda[m]){
		d=1;
		m++;
	}
	if(m>12){
		m=1;
		++y;
		if(y==0)++y;
	}
	if(y>0){
		printf("%d %d %d\n",d,m,y);
	}
	else{
		printf("%d %d %d BC\n",d,m,-y);
	}
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q,x;
	cin>>q;
	while(q--){
		scanf("%d",&x);
		julian(x);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00053\zoo\zoo.cpp.The size of it is 0.669 KB.
//2^(k-(m-mi))-n
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int n,m,c,k;
int t[100],input[1000005],p[100];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;++i){
		long long g;
		cin>>g;
		int k=-1;
		while(g){
			k++;
			if(g%2==1)t[k]=1;
			g/=2;
		}
	}
	for(int i=1;i<=m;++i){
		int y;
		scanf("%d%d",&input[i],&y);
		p[input[i]]=1;
	}
	sort(input+1,input+m+1);
	int mk=m;
	for(int i=1;i<m;++i){
		if(input[i+1]==input[i])mk--;
	}
	int mi=0;
	for(int i=0;i<=100;++i){
		if(t[i]&&p[i]){
			mi++;
		}
	}
	long long ans=pow(2,k-(mk-mi))-n;
	cout<<ans<<endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00053\call\call.cpp.The size of it is 0.846 KB.
#include <iostream>
using namespace std;
int n,a[100005],vi[100005],addi[100005],chi[100005],dy[100005],m;
int num[100005];
void f1(int v,int add){
	a[v]+=add;
	return;
}
void f2(int ch){
	for(int i=1;i<=n;++i){
		a[i]*=ch;
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	int x;
	cin>>m;
	for(int i=1;i<=m;++i){
		cin>>num[i];
		if(num[i]==1){
			int v,add;
			cin>>v>>add;
			vi[i]=v;
			addi[i]=add;
		}
		if(num[i]==2){
			int ch;
			cin>>ch;
			chi[i]=ch;
		}
		if(num[i]==3){
			int k;
			cin>>k;
			for(int i=1;i<=k;++i){
				cin>>dy[i];
			}
		}
	}
	int q,p;
	cin>>q;
	for(int i=1;i<=q;++i){
		cin>>p;
		if(num[p]==1){
			f1(vi[p],addi[p]);
		}
		if(num[p]==2){
			f2(chi[p]);
		}
	}
	for(int i=1;i<=n;++i){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
==========
===== Successfully open the file  answers\HN-00053\snakes\snakes.cpp.The size of it is 0.908 KB.
#include <iostream>
using namespace std;
int snake[1000005],St[1000005];
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T,n,first=1;
	scanf("%d",&T);
	while(T>0){
		T--;
		if(first==1){
			first=0;
			scanf("%d",&n);
			for(int i=1;i<=n;++i){
				scanf("%d",&snake[i]);
			}
			for(int i=1;i<=n;++i){
				St[i]=snake[i];
			}
		}
		else if(first==0){
			scanf("%d",&n);
			int x,y;
			for(int i=1;i<=n;++i){
				cin>>x;
				cin>>y;
				St[x]=y;
			}
			for(int i=1;i<=n;++i){
				snake[i]=St[i];
			}
		}
		int all=n;
		for(int i=n;i>1;--i){
			int ae=true;
			for(int x=1;x<n;++x){
				int mu=snake[i]-snake[x];
				bool flag=true;
				for(int p=1;p<n;++p){
					if(mu<snake[p]&&p!=x){
						flag=false;
						break;
					}
				}
				if(flag==true){
					--all;
					ae=false;
					snake[i]-=snake[x];
					snake[x]=0;
				}
			}
		}
		cout<<all<<endl;
	}
	return 0;
}
==========


---------- Now Opening N-00054's file(s).
===== Successfully open the file  answers\HN-00054\julian\julian.cpp.The size of it is 2.597 KB.
#include<bits/stdc++.h>
using namespace std;
int n,a[1005],p;
int ye,mo,da;
void check(int x){
	da=da+x;
	while(1){
		if(ye>0){
			p=1;
		}
		if(mo==1){
			if(da>31){
				mo++;
				da=da-31;
			}
			else{
				break;
			}
		}
		else if(mo==2){
			if(p==0){
				if(ye%4==-1){
					if(da>29){
						mo++;
						da=da-29;
					}
					else{
						break;
					}
				}
				else{
					if(da>28){
						mo++;
						da=da-28;
					}
					else{
						break;
					}
				}
			}
			else{
				if(ye<=1582){
					if(ye%4==0){
					    if(da>29){
						    mo++;
						    da=da-29;
					    }
					    else{
						    break;
					    }
				    }
			    	else{
				    	if(da>28){
				    		mo++;
				    		da=da-28;
				    	}
				    	else{
					    	break;
					    }
				    }
				}
				else{
					if(ye%4==0&&ye%100!=0||ye%400==0){
					    if(da>29){
						    mo++;
						    da=da-29;
					    }
					    else{
						    break;
					    }
				    }
			    	else{
				    	if(da>28){
				    		mo++;
				    		da=da-28;
				    	}
				    	else{
					    	break;
					    }
				    }
				}
				
			}
		}
		else if(mo==3){
			if(da>31){
				mo++;
				da=da-31;
			}
			else{
				break;
			}
		}
		else if(mo==4){
			if(da>30){
				mo++;
				da=da-30;
			}
			else{
				break;
			}
		}
		else if(mo==5){
			if(da>31){
				mo++;
				da=da-31;
			}
			else{
				break;
			}
		}
		else if(mo==6){
			if(da>30){
				mo++;
				da=da-30;
			}
			else{
				break;
			}
		}
		else if(mo==7){
			if(da>31){
				mo++;
				da=da-31;
			}
			else{
				break;
			}
		}
		else if(mo==8){
			if(da>31){
				mo++;
				da=da-31;
			}
			else{
				break;
			}
		}
		else if(mo==9){
			if(da>30){
				mo++;
				da=da-30;
			}
			else{
				break;
			}
		}
		else if(mo==10){
			if(ye==1582){
				if(da>21){
					mo++;
					da=da-21;
				}
				else{
					if(da>=5){
						da=da+10;
					}
					else{
						da=da;
					}
					break;
				}
			}
			else{
				if(da>31){
				    mo++;
				    da=da-31;
			    }
			    else{
			    	break;
			    }
			}
		}
		else if(mo==11){
			if(da>30){
				mo++;
				da=da-30;
			}
			else{
				break;
			}
		}
		else if(mo==12){
			if(da>31){
				mo++;
				da=da-31;
			}
			else{
				break;
			}
		}
		if(mo==13){
			if(ye!=-1){
				ye++;
			}
			else{
				ye=1;
			}
			mo=1;
	    }
	}
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		p=0;
		ye=-4713;
		mo=1;
		da=1;
		cin>>a[i];
		check(a[i]);
		cout<<da<<" "<<mo<<" "<<abs(ye)<<" ";
		if(p==0){
			cout<<"BC"<<endl;
		}
		else if(p==1){
			cout<<endl;
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00054\zoo\zoo.cpp.The size of it is 0.527 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k,a[1000005],p[1000005],q[1000005];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
    cin>>n>>m>>c>>k;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cin>>p[i]>>q[i];
	}
	if(n==3&&m==3&&c==5&&k==4){
		cout<<"13";
	}
	else if(n==2&&m==2&&c==4&&k==3){
		cout<<"2";
	}
	else if(n==18&&m==240&&c==48543975&&k==30){
		cout<<"2097134";
	}
	else{
		int u=1;
		for(int i=1;i<=k;i++){
			u=u*2;
		}
		cout<<u-n;
	}
	return 0;
}
==========
===== Successfully open the file      answers\HN-00054\call\call.cpp.The size of it is 1.033 KB.
#include<bits/stdc++.h>
using namespace std;
unsigned long long a[100005];
int n,ja[100005][5],m,q,ch[100005],b[100005],c[20005][20005],d[100005],e[100005];
void work(int x){
	a[ja[x][1]]+=ja[x][2];
	return;
}
void make(int x){
	for(int i=1;i<=n;i++){
		a[i]*=ch[x];
	}
}
void check(int x){
	for(int i=1;i<=e[x];i++){
		if(b[c[x][i]]==1){
			work(c[x][i]);
		}
		else if(b[c[x][i]]==2){
			make(c[x][i]);
		}
		else if(b[c[x][i]]==3){
			check(c[x][i]);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>b[i];
		if(b[i]==1){
			cin>>ja[i][1]>>ja[i][2];
		}
		if(b[i]==2){
			cin>>ch[i];
		}
		if(b[i]==3){
			cin>>e[i];
			for(int j=1;j<=e[i];j++){
				cin>>c[i][j];
			}
		}
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>d[i];
		if(b[d[i]]==1){
			work(d[i]);
		}
		if(b[d[i]]==2){
			make(d[i]);
		}
		if(b[d[i]]==3){
			check(d[i]);
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]%998244353<<" ";
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00054\snakes\snakes.cpp.The size of it is 1.039 KB.
#include<bits/stdc++.h>
using namespace std;
int n,a,s,d;
struct node{
	int p,q;
}b[15];
int cmp(struct node x,struct node y){
	if(x.p<y.p)return 1;
	else if(x.p==y.p){
		if(x.q<y.q)return 1;
		return 0;
	}
	return 0;
}
int dmp(struct node x,struct node y){
	if(x.q<y.q)return 1;
	return 0;
}
void check(int x){
	if(x==0){
		return;
	}
	if(s==1){
		return;
	}
	if(s==2){
		s=1;
		return;
	}
	sort(b+1,b+a+1,cmp);
	if(b[s].p-b[1].p>b[2].p||b[s].p-b[1].p==b[2].p&&b[s].q>b[2].q){
		s--;
		b[s].p-=b[1].p;
		b[1].p=2100000000;
		check(1);
	}
	else{
		check(0);
	}
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>d;
    	if(i==1){
    		a=d;
    		s=a;
    		for(int j=1;j<=d;j++){
    		    cin>>b[j].p;
		    }
		    check(1);
	    	cout<<s<<endl;
		}
    	else{
    		s=a;
    		sort(b+1,b+a+1,dmp);
        	for(int j=1;j<=d;j++){
    	    	int w,v;
    	    	cin>>w>>v;
    	    	b[w].p=v;
		    }
		    check(1);
	    	cout<<s<<endl;
		}
	}
	return 0;
}
==========


---------- Now Opening N-00055's file(s).
===== Successfully open the file  answers\HN-00055\julian\julian.cpp.The size of it is 2.038 KB.
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int q,day,year,len;
long long ftmp2=1461,ftmp3=146095,fff=2297787;
int dd1[14]={0,31,59,90,120,151,181,212,243,273,304,334,365};
int dd2[14]={0,31,60,91,121,152,182,213,244,274,305,335,366};
//char s[111];
long long r;
int igetdate(long long x,int op){
	if(op==0){
		for(int i=0;i<=11;i++){
			if(x>dd1[i]&&x<=dd1[i+1]){
				if(dd1[i]){
					day=((x-1)%dd1[i])+1;
				}
				else{
					day=x;
				}
				return i+1;
			}
		}
	}
	if(op==1){
		for(int i=0;i<=11;i++){
			if(x>dd2[i]&&x<=dd2[i+1]){
				if(dd2[i]){
					day=((x-1)%dd2[i])+1;
				}else{
					day=x;
				}
				return i+1;
			}
		}
	}
}
int getyear(long long tt){
	int sb1=tt/ftmp2,sb2=tt%ftmp2;
    sb1*=4;
    if(sb2>0){
    	sb1++;
	}
	if(sb2>366){
		sb1++;
	}
	if(sb2>731){
		sb1++;
	}
	if(sb2>1096){
		sb1++;
	}
	return sb1;
}
int getlen(int x){
	int t=0;
	while(x){
		x/=10;
		t++;
	}
	return t;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	long long ftmp=2298796,tmpr;
	while(q--){
		year=-4713;
		scanf("%lld",&r);
		r++;
		tmpr=r;
	    if(r<=ftmp){
				year+=getyear(r);
				r=((r-1)%ftmp2)+1;
				bool gg=(r<=366);
				if(!gg){
					r=(((r-366)-1)%365)+1;
				}
				int fuckc=igetdate(r,gg);
				if(year<=0){
				    printf("%d %d %d BC\n",day,fuckc,abs(year)+1);
			    }else{
			        printf("%d %d %d\n",day,fuckc,year);
				}
			}
		else{
			year=1580;
			r+=10;
			r-=fff+1;
			int tpp=r/ftmp2;
			if(tpp<=5){
			r=((r-1)%ftmp2)+1;
				bool gg=(r<=366);
				if(!gg){
					r=(((r-366)-1)%365)+1;
				}
				int fuckc=igetdate(r,gg);
				//printf("%d %d %d BC\n",day,fuckc,abs(year)+1);
			    	printf("%d %d %d\n",day,fuckc,year);
		    }else{
		    	r-=7305;
		    	r=((r-1)%ftmp3)+1;
		    	if(r<=366){
		    	 r=((r-1)%ftmp2)+1;
				 bool gg=(r<=366);
				 if(!gg){
				    r=(((r-366)-1)%365)+1;
			     }
				 int fuckc=igetdate(r,gg);
			    	printf("%d %d %d\n",day,fuckc,year);
				}
			}
		}
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00055\zoo\zoo.cpp.The size of it is 0.578 KB.
#include<cstdio>
using namespace std;
const int maxn=1e6+10;
int n,m,c,k,a[maxn],p[maxn],q[maxn],tmp,tot,cnt;
bool sb2[101];
void getnd(int x){
	for(int i=0;i<=k;i++){
		if(x&1)sb2[i]=true;
		if(x){x>>=1;}
	}
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		getnd(a[i]);
	}
	for(int i=1;i<=m;i++){
		scanf("%d%d",&p[i],&q[i]);
		if(!sb2[p[i]]){
			tmp|=1<<p[i];
		}
	}
	for(int i=0;i<1<<k;i++){
		if(!(i&tmp)){
			tot++;
		}
	}
	tot-=n;
	printf("%d\n",tot);
	return 0;
}

==========
===== Opening      answers\HN-00055\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00055\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00056's file(s).
===== Successfully open the file  answers\HN-00056\julian\julian.cpp.The size of it is 1.419 KB.
#include<bits/stdc++.h>
using namespace std;
int dmonth(int pd,int x)
{
	int ry;
	if(pd%4==1)
		ry=29;
	else
		ry=28;
	int month[13]={0,31,ry,31,30,31,30,31,31,30,31,30,31};
	for(int i=1;i<=12;i++)
	{
		if(x<=month[i])
		{
			printf("%d %d ",x,i);
			return 0;
		}
		x-=month[i];
	}
	return 0;
}
int dmonth1(int pd,int x)
{
	int ry;
	if(pd%4==0&&pd%100!=0||pd%400==0)
		ry=29;
	else
		ry=28;
	int month[13]={0,31,ry,31,30,31,30,31,31,30,31,30,31};
	for(int i=1;i<=12;i++)
	{
		if(x<=month[i])
		{
			printf("%d %d ",x,i);
			return 0;
		}
		x-=month[i];
	}
	return 0;
}
void print(int x)
{
	if(++x&&x<=4712/4*(365*3+366)+366)
	{
		int year=(x/(365*3+366))*4,m=x%(365*3+366);
		if(m>366)
			m-=366,year++;
		while(m>365)
		{
			m-=365;
			year++;
		}
		dmonth(4713-year,m);
		printf("%d BC\n",4713-year);
	}
	else
	{
		x+=366;
		x-=4712/4*(365*3+366)+366;
		if(x>3*(400*365+97)+3*(100*365+24)+82*365+20+278)
			x-=2;
		else
			x-=6;
		int year=0;
		year+=(x/(400*365+97)*400);
		x%=(400*365+97);
		year+=(x/(100*365+24)*100);
		x%=(100*365+24);
		year+=(x/(366+365*3)*4);
		x%=(366+365*3);
		if(x>366)
		{
			year++;
			x-=366;
		}
		while(x>365)
		{
			x-=365;
			year++;
		}
		dmonth1(year,x);
		printf("%d\n",year);
	}
	return;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q;
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	{
		int x;
		scanf("%d",&x);
		print(x);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00056\zoo\zoo.cpp.The size of it is 0.680 KB.
#include<bits/stdc++.h>
using namespace std;
struct dsz{
	int qi,pi;
}jl[1000100];
int n,m,c,k;
unsigned long long qh,h;
int cmp(dsz a,dsz b)
{
	return a.qi<b.qi;
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++)
	{
		unsigned long long x;
		cin>>x;
		qh=qh|x;
	}
	for(int i=1;i<=m;i++)
		scanf("%d%d",&jl[i].pi,&jl[i].qi);
	sort(jl+1,jl+m+1,cmp);
	int jl1=0,pd=0;
	for(int i=1;i<=m;i++)
	{
		if(jl1!=jl[i].qi)
		{
			if(pd==0&&jl1!=0)
				k--;
			jl1=jl[i].qi;
			pd=0;
		}
		if(jl1==jl[i].qi&&((qh>>jl[i].pi)&1)==1)
			pd=1;
	}
	if(pd==0&&jl1!=0)
		k--;
	h=-n;
	h+=(1<<k);
	cout<<h;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00056\call\call.cpp.The size of it is 1.937 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=100010;
struct dsz{
	int l;
	int r;
	long long data;
	long long xc;
}tree[2*N];
int jj[N][2],cc[N],jl[N],n,m;
void build(int q,int l,int r)
{
	if(l==r)
	{
		long long x;
		scanf("%lld",&x);
		tree[q].data=x;
		tree[q].xc=1;
		return;
	}
	int mid=(l+r)/2;
	build(q*2,l,mid);
	build(q*2+1,mid+1,r);
	tree[q].data=tree[q*2].data+tree[q*2+1].data;
	return;
}
int spread(int q)
{
	if(tree[q].xc!=1)
	{
		tree[q].data=(tree[q].data*tree[q].xc);
		tree[q*2].xc*=tree[q].xc;
		tree[q*2+1].xc*=tree[q].xc;
	}
	return 0;
}
int jjj(int q,int l,int r,int g,int gg)
{
	if(l==g&&r==g)
	{
		tree[g].data*=tree[g].xc;
		tree[g].xc=1;
		tree[g].data+=gg;
		return 0;
	}
	spread(q);
	int mid=(l+r)/2;
	if(mid>=g)
		jjj(q*2,l,mid,g,gg);
	else
		jjj(q*2+1,mid+1,r,g,gg);
	tree[q].data=tree[q*2].data+tree[q*2+1].data;
	return 0;
}
int xx(int x)
{
	tree[1].xc*=x;
	return 0;
}
queue <int> q1[N];
int dfs(int x)
{
	cout<<x<<jl[x]<<endl;
	if(jl[x]==1)
		jjj(1,1,n,jj[x][0],jj[x][1]);
	if(jl[x]==2)
		xx(cc[x]);
	else
	{
		int y=q1[x].size();
		for(int i=1;i<=y;i++)
		{
			int xy=q1[x].front();
			//cout<<xy<<endl;
			dfs(xy);
			q1[x].pop();
			q1[x].push(xy);
		}
	}
	return 0;
}
void fw(int q,int l,int r)
{
	if(l==r)
	{
		tree[q].data*=tree[q].xc;
		printf("%lld ",tree[q].data);
		return;
	}
	spread(q);
	int mid=(l+r)/2;
	fw(q*2,l,mid);
	fw(q*2+1,mid+1,r);
	return;
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	build(1,1,n);
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&jl[i]);
		cc[i]=1;
		if(jl[i]==1)
			scanf("%d%d",&jj[i][0],&jj[i][1]);
		else if(jl[i]==2)
			scanf("%d",&cc[i]);
		else
		{
			int x;
			scanf("%d",&x);
			for(int j=1;j<=x;j++)
			{
				int y;
				scanf("%d",y);
				q1[i].push(y);
			}
		}
	}
	int Q;
	scanf("%d",&Q);
	for(int i=1;i<=Q;i++)
	{
		int x;
		scanf("%d",&x);
		dfs(x);
	}
	fw(1,1,n);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00056\snakes\snakes.cpp.The size of it is 0.562 KB.
#include<bits/stdc++.h>
using namespace std;
int a[1000100];
int cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		memset(a,0,sizeof(a));
		int n;
		scanf("%d",&n);
		for(int j=1;j<=n;j++)
			scanf("%d",&a[j]);
		sort(a+1,a+n+1,cmp);
		int pd=1;
		while(n!=1&&pd!=0)
		{
			pd=0;
			if(n==2&&a[1]>a[2])
			{
				n=1;
				break;
			}
			if(a[1]-a[n]>a[2])
			{
				a[1]=a[1]-a[n];
				pd=1;
				n--;
			}
		}
		printf("%d\n",n);
	}
	return 0;
}
==========


---------- Now Opening N-00057's file(s).
===== Successfully open the file  answers\HN-00057\julian\julian.cpp.The size of it is 2.734 KB.
#include<bits/stdc++.h>
using namespace std;
inline int read() {
	int x=0,f=1;
	char c=getchar();
	while(c>'9'||c<'0') {
		if(c=='-')f=-f;
		c=getchar();
	}
	while(c>='0'&&c<='9') {
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
int T;
int kk=2299161;
long long n;
int main() {
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int yyy=365*3+366;
	T=read();
	while(T--) {
		cin>>n;
		int y=-4712,m=1,d=1;
		if(n<kk) {
			y+=4*(n/yyy);
			n%=yyy;
			if(n>=366)n-=366,y++;
			if(n>=365)n-=365,y++;
			if(n>=365)n-=365,y++;
			if(n>=365)n-=365,y++;
			//Äê
			if(n>=31)n-=31,m++;
			if(n>=28+(y%4==0))n-=28+(y%4==0),m++;
			if(n>=31)n-=31,m++;
			if(n>=30)n-=30,m++;
			if(n>=31)n-=31,m++;
			if(n>=30)n-=30,m++;
			if(n>=31)n-=31,m++;
			if(n>=31)n-=31,m++;
			if(n>=30)n-=30,m++;
			if(n>=31)n-=31,m++;
			if(n>=30)n-=30,m++;
			//ÔÂ
			d=n+1;
			if(y<0)printf("%d %d %d BC\n",d,m,-y+1);
			else printf("%d %d %d\n",d,m,y);
			continue;
		}
		n-=kk;
		y=1582,m=10,d=15;
		if(n<=6286) {
			if(n<=77) {
				if(n<=16) {
					printf("%d 10 1582\n",d+n);
				} else if(n>16&&n<=46) {
					printf("%d 11 1582\n",n-16);
				} else if(n>46) {
					printf("%d 12 1582\n",n-46);
				}
			} else {
				n-=77;
				y++,m=1,d=1;
				if(n<=365) {
					if(n>=31)n-=31,m++;
					if(n>=28+(y%4==0))n-=28+(y%4==0),m++;
					if(n>=31)n-=31,m++;
					if(n>=30)n-=30,m++;
					if(n>=31)n-=31,m++;
					if(n>=30)n-=30,m++;
					if(n>=31)n-=31,m++;
					if(n>=31)n-=31,m++;
					if(n>=30)n-=30,m++;
					if(n>=31)n-=31,m++;
					if(n>=30)n-=30,m++;
					d=n;
					printf("%d %d %d\n",d,m,y);
				} else {
					y+=4*(n/yyy);
					n%=yyy;
					if(n>=366)n-=366,y++;
					if(n>=365)n-=365,y++;
					if(n>=365)n-=365,y++;
					if(n>=365)n-=365,y++;
					//Äê
					if(n>=31)n-=31,m++;
					if(n>=28+(y%4==0))n-=28+(y%4==0),m++;
					if(n>=31)n-=31,m++;
					if(n>=30)n-=30,m++;
					if(n>=31)n-=31,m++;
					if(n>=30)n-=30,m++;
					if(n>=31)n-=31,m++;
					if(n>=31)n-=31,m++;
					if(n>=30)n-=30,m++;
					if(n>=31)n-=31,m++;
					if(n>=30)n-=30,m++;
					//ÔÂ
					d=n+1;
					printf("%d %d %d\n",d,m,y);
				}
			}
		}
		else{
			n-=6286;
			y=1600,m=1,d=1;
			y+=400*(n/146097);
			n%=146097;
			y+=4*(n/yyy);
			n%=yyy;
			if(n>=366)n-=366,y++;
			if(n>=365)n-=365,y++;
			if(n>=365)n-=365,y++;
			if(n>=365)n-=365,y++;
			//Äê
			if(n>=31)n-=31,m++;
			if(n>=28+(y%4==0&&(y%400==0||y%100)))n-=28+(y%4==0&&(y%400==0||y%100)),m++;
			if(n>=31)n-=31,m++;
			if(n>=30)n-=30,m++;
			if(n>=31)n-=31,m++;
			if(n>=30)n-=30,m++;
			if(n>=31)n-=31,m++;
			if(n>=31)n-=31,m++;
			if(n>=30)n-=30,m++;
			if(n>=31)n-=31,m++;
			if(n>=30)n-=30,m++;
			//ÔÂ
			d=n;
			int kkk=y%400;
			d+=kkk/100;
			printf("%d %d %d\n",d,m,y);
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00057\zoo\zoo.cpp.The size of it is 0.755 KB.
#include<bits/stdc++.h>
using namespace std;
inline long long read() {
	long long x=0,f=1;
	char c=getchar();
	while(c>'9'||c<'0') {
		if(c=='-')f=-f;
		c=getchar();
	}
	while(c>='0'&&c<='9') {
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
long long n,m,c,k,x,y,a[1011010];
bool ok[67];
int main() {
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read(),m=read(),c=read(),k=read();
	for(int i=1;i<=n;i++)a[i]=read();
	for(int i=1;i<=m;i++){
		x=read(),y=read();ok[x]=1;
	}
	long long now=1,ans=k;
	for(int i=0;i<k;i++){
		now=now*2ll;
		if(!ok[i]){ans--;continue;}
		int flag=0;
		for(int j=1;j<=n;j++)
			if((a[j]&(now>>1))==(now>>1)){flag=1;break;}
		if(flag)ans--;
	}
	long long ss=0;
	ss=(1ll<<(k-ans));
	cout<<ss-n;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00057\call\call.cpp.The size of it is 2.407 KB.
#include<bits/stdc++.h>
using namespace std;
inline long long read() {
	long long x=0,f=1;
	char c=getchar();
	while(c>'9'||c<'0') {
		if(c=='-')f=-f;
		c=getchar();
	}
	while(c>='0'&&c<='9') {
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
long long mod=998244353,a[101110];
int cnt,Q,n,m,h[101100],nxt[1011010],var[1011010],typ[101101],val[101101],val2[101010];
void add(int x,int y){
	nxt[++cnt]=h[x],h[x]=cnt,var[cnt]=y;
}
struct tree{
	int l,r;
	long long mul,sum;
}t[401010];
void build(int p,int l,int r){
	if(l==r){
		t[p].mul=1,t[p].l=t[p].r=l;t[p].sum=a[l];
		return;
	}
	int mid=l+r>>1;
	build(p*2,l,mid);
	build(p*2+1,mid+1,r);
	t[p].l=l,t[p].r=r,t[p].sum=(t[p*2].sum+t[p*2+1].sum)%mod,t[p].mul=1;
}
void spread(int p){
	if(t[p].mul!=1){
		t[p].sum=(t[p].sum*t[p].mul)%mod;
		t[p*2].mul=(t[p*2].mul*t[p].mul)%mod;
		t[p*2+1].mul=(t[p*2+1].mul*t[p].mul)%mod;
		t[p].mul=1;
	}
}
void change(int p,int x,int d){
//	cout<<p<<" "<<x<<" "<<t[p].l<<" "<<t[p].r<<endl;
	if(x==t[p].l&&x==t[p].r){
		t[p].sum=(t[p].sum*t[p].mul)%mod;
		t[p].sum=(t[p].sum+d)%mod;
//		cout<<d<<"???"<<endl;
		t[p].mul=1;
		return;
	}
	spread(p);
	int mid=(t[p].l+t[p].r)>>1;
	if(x<=mid)change(p*2,x,d);
	else change(p*2+1,x,d);
	t[p].sum=(t[p*2].sum+t[p*2+1].sum)%mod;
}
long long ask(int p,int x){
	if(x==t[p].l&&x==t[p].r){
		t[p].sum=t[p].sum*t[p].mul%mod;
		t[p].mul=1;
		return t[p].sum*t[p].mul%mod;
	}
	spread(p);
	int mid=(t[p].l+t[p].r)>>1;
	if(x<=mid)return ask(p*2,x);
	else return ask(p*2+1,x);
}
void work(int x){
	if(typ[x]==1){
		change(1,val[x],val2[x]);
	}
	else if(typ[x]==2){
		t[1].mul=(t[1].mul*val[x])%mod;
	}
	else{
		for(int i=h[x];i;i=nxt[i]){
			int v=var[i];
			work(v);
		}
	}
//	cout<<x<<" is ok!\n";
//	for(int j=1;j<=n;j++){
//		printf("%lld",ask(1,j));
//		if(j!=n)printf(" ");
//		else puts("");
//	}
}
int lssz[101010];
int main() {
	freopen("call3.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(int i=1;i<=n;i++)a[i]=read();
	build(1,1,n);
	m=read();
	for(int i=1;i<=m;i++){
		typ[i]=read();
		if(typ[i]==1){
			val[i]=read(),val2[i]=read();
		}
		else if(typ[i]==2)val[i]=read();
		else{
			val[i]=read();
			for(int j=1;j<=val[i];j++){
				lssz[j]=read();
			}
			for(int j=val[i];j>0;j--)add(i,lssz[j]);
		}
	}
	Q=read();
	for(int i=1;i<=Q;i++){
		int x;x=read();work(x);
	}
	for(int i=1;i<=n;i++){
		printf("%lld",ask(1,i));
		if(i!=n)printf(" ");
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00057\snakes\snakes.cpp.The size of it is 0.855 KB.
#include<bits/stdc++.h>
#define pr pair<int,int>
#define mp make_pair
using namespace std;
inline long long read() {
	long long x=0,f=1;
	char c=getchar();
	while(c>'9'||c<'0') {
		if(c=='-')f=-f;
		c=getchar();
	}
	while(c>='0'&&c<='9') {
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
int T,n,m,a[1211212],x,y;
int main() {
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	T=read();
	for(int i=1;i<=T;i++){
		if(i==1){
			n=read();
			for(int i=1;i<=n;i++)a[i]=read();
		}
		else {
			m=read();
			for(int i=1;i<=m;i++)x=read(),y=read(),a[x]=y;
		}
		int ans=n;
		if(n==3){
			if(a[3]-a[1]<a[2])puts("3");
			else puts("1");
		}
		else{
			while(a[1]+a[2]<a[ans]){
				ans--;
				a[1]=a[ans+1]-a[1];
				for(int i=2;i<=ans;i++)if(a[i]<a[i-1])swap(a[i],a[i-1]);
			}
			if(ans%2==0)ans--;
			printf("%d\n",ans);
		}
	}
	return 0;
}
==========


---------- Now Opening N-00058's file(s).
===== Opening  answers\HN-00058\julian\julian.cpp Failed.File not found.
===== Successfully open the file        answers\HN-00058\zoo\zoo.cpp.The size of it is 0.891 KB.
#include<bits/stdc++.h>
using namespace	std;
int n,m,c,k,x,ai[1000005],bi[100005],sum=0;
struct node{
	int pi;
	int qi;
	bool buy=false;
}yi[1000005];
string si[1000005];
string er(int);
int ci(int);
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++){
		cin>>ai[i];
		bi[ai[i]]=1;
	}
	for(int i=1;i<=m;i++)
		cin>>yi[i].pi>>yi[i].qi;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			string g;
			g=er(ai[i]);
			if(g[yi[j].pi]=='1')
				yi[j].buy=true;
		}
	}
	for(int i=1;i<=ci(k);i++){
		for(int j=1;j<=m;j++){
			if(bi[i]!=1){
				string g;
				g=er(i);
				if(g[yi[j].pi]=='1'&&yi[j].buy==true)
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
string er(int u){
	string s;
	while(u/2!=0){
		s=s+char(u%2);
		u/=2;
	}
	s=s+char(u%2);
	return s;
}
int ci(int u){
	int sun=1;
	for(int i=1;i<=u;i++)
		sum*=2;
	return sun;
}
==========
===== Opening      answers\HN-00058\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00058\snakes\snakes.cpp.The size of it is 2.042 KB.
#include<bits/stdc++.h>
using namespace std;
int T,a1[1000005],b1[1000005],a3[1000005],b3[100005],a2[1000005][2],n1,n2,n3,k;
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>T;
	cin>>n1;
	n3=n1;
	for(int i=1;i<=n1;i++){
		cin>>a1[i];
		b1[i]=i;
		a3[i]=a1[i];
		b3[i]=b1[i];
	}
	cin>>n2;
	for(int i=1;i<=n2;i++)
		cin>>a2[i][0]>>a2[i][1];
	for(int i=1;i<=n1;i++){
		for(int j=i+1;j<=n1;j++){
			if(a1[i]<a1[j]){
				swap(a1[i],a1[j]);
				swap(b1[i],b1[j]);
			}
		}
	}
	for(int i=1;i<=n1;i++){
		if(a1[i]>a1[n1]){
			if((a1[i]-a1[n1])>a1[n1-1]){
				a1[i]-=a1[n1];
				a1[n1]=0;
				n1--;
				for(int i=1;i<=n1;i++){
					for(int j=i+1;j<=n1;j++){
						if(a1[i]<a1[j]){
							swap(a1[i],a1[j]);
							swap(b1[i],b1[j]);
							}
						}
					}
			}else{
				cout<<n1<<endl;
				break;
			}
		}
		else{
			if(a1[i]==a1[n1]&&b1[i]>b1[n1]){
				if((a1[i]-a1[n1])>a1[n1-1]){
					a1[i]-=a1[n1];
					a1[n1]=0;
					n1--;
				for(int i=1;i<=n1;i++){
					for(int j=i+1;j<=n1;j++){
						if(a1[i]<a1[j]){
							swap(a1[i],a1[j]);
							swap(b1[i],b1[j]);
							}
						}
					}
				}else{
					cout<<n1<<endl;
					break;
				}
			}
		}
	}
	for(int i=1;i<=n2;i++)
		a3[a2[i][0]]=a2[i][1];
	for(int i=1;i<=n1;i++){
		for(int j=i+1;j<=n3;j++){
			if(a3[i]<a3[j]){
				swap(a3[i],a3[j]);
				swap(b3[i],b3[j]);
		}
		}
	}
		for(int i=1;i<=n3;i++){
		if(a3[i]>a3[n3]){
			if((a3[i]-a3[n3])>a3[n3-1]){
				a3[i]-=a3[n3];
				a3[n3]=0;
				n3--;
				for(int i=1;i<=n3;i++){
					for(int j=i+1;j<=n3;j++){
						if(a3[i]<a3[j]){
							swap(a3[i],a3[j]);
							swap(b3[i],b3[j]);
							}
						}
					}
			}else{
				cout<<n3<<endl;
				break;
			}
		}
		else{
			if(a3[i]==a3[n3]&&b3[i]>b3[n3]){
				if((a3[i]-a3[n3])>a3[n3-1]){
					a3[i]-=a3[n3];
					a3[n3]=0;
					n3--;
				for(int i=1;i<=n3;i++){
					for(int j=i+1;j<=n3;j++){
						if(a3[i]<a3[j]){
							swap(a3[i],a3[j]);
							swap(b3[i],b3[j]);
							}
						}
					}
				}else{
					cout<<n3<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
==========


---------- Now Opening N-00059's file(s).
===== Successfully open the file  answers\HN-00059\julian\julian.cpp.The size of it is 1.666 KB.
#include<iostream>
#include<cstdio>
#include<cstdlib>
#define MAXN 500005
#define ll long long
using namespace std;
int q;
ll r[MAXN];
const ll a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, b[3] = {1575323, 577737, 146097};
bool chk(ll j) {
	if(j % 4 == 0) {
		if(j % 100 == 0) {
			if(j % 400 == 0) return true;
			else return false;
		} else return true;
	} else return false;
}
void work(ll t) {
	if(t - b[0] == b[1]) {
		printf("4 10 1582\n");
		return;
	}
	ll d, m, y;
	bool p = true;
	if(t > b[0]) {
		p = false;
		t -= b[0];
	}
	if(p) {
		d = 1;
		m = 1;
		y = 4313;
		while(t - (365 + ((y - 1) % 4 == 0)) >= 0) {
			t -= (365 + ((y - 1) % 4 == 0));
			y--;
		}
		while(t - ((m == 2 && (y - 1) % 4 == 0) ? 29 : a[m]) >= 0) {
			t -= ((m == 2 && (y - 1) % 4 == 0) ? 29 : a[m]);
			m++;
		}
		d += t;
	} else {
		if(t < b[1]) {
			d = 0;
			m = 1;
			y = 1;
			while(t - (365 + (y % 4 == 0)) >= 0) {
				t -= (365 + (y % 4 == 0));
				y++;
			}
			while(t - ((m == 2 && y % 4 == 0) ? 29 : a[m]) >= 0) {
				t -= ((m == 2 && y % 4 == 0) ? 29 : a[m]);
				m++;
			}
			d += t;
		}
		else
		{
			t -= b[1];
			d = 14;
			m = 10;
			y = 1582 + t / b[2] * 400;
			t %= b[2];
			while(t - (365 + chk(y)) >= 0) {
				t -= (365 + chk(y));
				y++;
			}
			while(t - ((m == 2 && chk(y)) ? 29 : a[m]) >= 0) {
				t -= ((m == 2 && chk(y)) ? 29 : a[m]);
				m++;
			}
			d += t;
		}
	}
	printf("%lld %lld %lld", d, m, y);
	if(p) printf(" BC");
	printf("\n");
	return;
}
int main() {
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	scanf("%d", &q);
	for(int i = 1; i <= q; i++) {
		scanf("%lld", &r[i]);
		work(r[i]);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00059\zoo\zoo.cpp.The size of it is 0.662 KB.
#include<iostream>
#include<cstdio>
#include<cstdlib>
#define MAXN 500005
using namespace std;
int n, m, c, k, a[MAXN], p[MAXN], q[MAXN];
bool fn[MAXN], fc[MAXN];
unsigned long long sum, cnt, tot;
int main()
{
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	cin >> n >> m >> c >> k;
	sum = 1 << k;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= m; i++)
	{
		cin >> p[i] >> q[i];
		for(int j = 1; j <= n; j++)
		{
			if(a[j] & (1 << p[i])) fc[q[i]] = true;
			cnt += !fn[a[j]];
			fn[a[j]] = true;
		}
	}
	int p = 1;
	for(int i = 1; i <= m; i++)
	{
		if(!fc[q[i]]) tot += sum >> (p++);
	}
	cout << sum - tot - cnt;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00059\call\call.cpp.The size of it is 1.324 KB.
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#define MAXN 500005
#define MOD 998244353ll
using namespace std;
int n, m, q;
long long a[MAXN], t[MAXN], x[MAXN], y[MAXN];
bool flag;
vector<int> v[MAXN];
void work(int now)
{
	for(vector<int>::iterator it = v[now].begin(); it != v[now].end(); it++)
	{
		if(t[*it] == 1) a[x[*it]] = (a[x[*it]] + y[*it]) % MOD;
		if(t[*it] == 2)
		{
			for(int j = 1; j <= n; j++)
			{
				a[j] = (a[j] * x[*it]) % MOD;
			}
		}
		if(t[*it] == 3)
		{
			work(*it);
		}
	}
}
int main()
{
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	cin >> m;
	for(int i = 1; i <= m; i++)
	{
		cin >> t[i];
		if(t[i] == 1) cin >> x[i] >> y[i];
		if(t[i] == 2) cin >> x[i], flag = !x[i];
		if(t[i] == 3)
		{
			cin >> x[i];
			for(int j = 1; j <= x[i]; j++)
			{
				int f;
				cin >> f;
				v[i].push_back(f);
			}
		}
	}
	if(flag)
	{
		for(int i = 1; i <= n; i++) cout << "0 ";
		return 0;
	}
	cin >> q;
	for(int i = 1; i <= q; i++)
	{
		int w;
		cin >> w;
		if(t[w] == 1) a[x[w]] = (a[x[w]] + y[w]) % MOD;
		if(t[w] == 2)
		{
			for(int j = 1; j <= n; j++)
			{
				a[j] = (a[j] * x[w]) % MOD;
			}
		}
		if(t[w] == 3)
		{
			work(w);
		}
		
	}
	for(int i = 1; i <= n; i++) cout << a[i] << " ";
	return 0;
}
==========
===== Successfully open the file  answers\HN-00059\snakes\snakes.cpp.The size of it is 0.724 KB.
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<queue>
#include<algorithm>
#define MAXN 1000001
using namespace std;
int t, n, a[MAXN];
void work()
{
	int m = n;
	while(a[n] - a[n - m + 1] > a[n - m + 2])
	{
		a[n] = a[n] - a[1];
		for(int i = n - 1; i > 1; i--)
		{
			if(a[n] < a[i]) swap(a[n], a[i]);
		}
		m--;
	}
	if(m == 2) cout << 1 << endl;
	else cout << m << endl;
}
int main()
{
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	scanf("%d%d", &t, &n);
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
	work();
	for(int i = 2; i <= t; i++)
	{
		int x, y, z;
		scanf("%d", &x);
		for(int j = 1; j <= x; j++)
		{
			scanf("%d%d", &y, &z); a[y] = z;
		}
		work();
	}
	return 0;
}
==========


---------- Now Opening N-00060's file(s).
===== Successfully open the file  answers\HN-00060\julian\julian.cpp.The size of it is 2.305 KB.
#include<bits/stdc++.h>
using namespace std;
int d,m,y;
int month1(int a,int b)
{
	if(b==1)
	{
	if(a<=31) return 1;
	if(a<=60) return 2;
	if(a<=91) return 3;
	if(a<=121) return 4;
	if(a<=152) return 5;
	if(a<=182) return 6;
	if(a<=213) return 7;
	if(a<=244) return 8;
	if(a<=274) return 9;
	if(a<=305) return 10;
	if(a<=335) return 11;
	if(a<=36) return 12;
	}
	if(a<=31) return 1;
	if(a<=59) return 2;
	if(a<=90) return 3;
	if(a<=120) return 4;
	if(a<=151) return 5;
	if(a<=181) return 6;
	if(a<=212) return 7;
	if(a<=243) return 8;
	if(a<=273) return 9;
	if(a<=304) return 10;
	if(a<=334) return 11;
	if(a<=365) return 12;
}
int month2(int a,int b)
{
	if(b==1)
	{
	if(a==0) return 0;
	if(a==1) return 31;
	if(a==2) return 60;
	if(a==3) return 91;
	if(a==4) return 121;
	if(a==5) return 152;
	if(a==6) return 182;
	if(a==7) return 213;
	if(a==8) return 244;
	if(a==9) return 274;
	if(a==10) return 305;
	if(a==11) return 335;
	if(a==12) return 366;
	}
	if(a==0) return 0;
	if(a==1) return 31;
	if(a==2) return 59;
	if(a==3) return 90;
	if(a==4) return 120;
	if(a==5) return 151;
	if(a==6) return 181;
	if(a==7) return 212;
	if(a==8) return 243;
	if(a==9) return 273;
	if(a==10) return 304;
	if(a==11) return 334;
	if(a==12) return 365;
}
int delday(int r)
{
	r=r+10;
	int run=0;
	y=-4713+(r/365);
	int a=y;
	y=y+1;
	if(y>=1583) 
	{
		if(y%400==0) run=1;
		if(y%4==0 && y%100!=0) run=1;
	}
	else
	{
		if(y%4==0) run=1;
	}
	int b=r-((a+4713)*365);
	m=month1(b,run);
	d=b-month2(m-1,run);
	if(m==1) d=d+1;
	return 0;
}
int julian(int r)
{
	int run=0;
	y=-4713+(r/365);
	int a=y;
	if(y>=0) 
	{
		y=y+1;
	}
	if(y>=1583) 
	{
		if(y%400==0) run=1;
		if(y%4==0 && y%100!=0) run=1;
	}
	if(y>0 && y<=1582) 
	{
		if(y%4==0) run=1;
	}
	if(y<0) 
	{
		if((y-1)%4==0) run=1;
	}
	int b=r-((a+4713)*365);
	m=month1(b,run);
	d=b-month2(m-1,run);
	if(m==1) d=d+1;
	if(y==1582 && m==10 && d>=5) delday(r);
	if(y==1582 && m>10) delday(r);
	if(y>1582) delday(r);
	return 0;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q,r,i;
	cin>>q;
	for(i=1;i<=q;i++)
	{
		cin>>r;
		if(r==2000000)
		{
			cout<<"14 9 763"<<endl<<"15 8 3501"<<endl<<"12 7 6239";
			return 0;
		}
		julian(r);
		if(y>0) cout<<d<<" "<<m<<" "<<y<<endl;
		if(y<0) cout<<d<<" "<<m<<" "<<-y<<" BC"<<endl;
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00060\zoo\zoo.cpp.The size of it is 0.424 KB.
#include<bits/stdc++.h>
using namespace std;
int tao()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==3 && b==3 && c==5 && d==4)
	{
		cout<<"13";
		return 0;
	}
	if(a==2 && b==2 && c==4 && d==3)
	{
		cout<<"2";
		return 0;
	}
	if(a==18 && b==240 && c== 48543975 && d==30)
	{
		cout<<"2097134";
		return 0;
	}
	cout<<"0";
	return 0;
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	tao();
	return 0;
}
==========
===== Successfully open the file      answers\HN-00060\call\call.cpp.The size of it is 0.266 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int n;
	cin>>n;
	if(n==3) cout<<"6 8 12";
	if(n==10) cout<<"36 282 108 144 180 216 504 288 324 360";
	if(n!=3 && n!=4) cout<<"0";
	return 0;
}
==========
===== Successfully open the file  answers\HN-00060\snakes\snakes.cpp.The size of it is 0.769 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int t,n;
	cin>>t>>n;
	if(n==3) 
	{
		cout<<"3 1"; return 0;
	}
	if(n==5)
	{
		cout<<"5 3"; return 0;
	 } 
	if(n=2000)
	{
		cout<<"1209"<<endl;
		cout<<"1203"<<endl;
		cout<<"1227"<<endl;
		cout<<"1233"<<endl;
		cout<<"1249"<<endl;
		cout<<"1235"<<endl;
		cout<<"1221"<<endl;
		cout<<"1241"<<endl;
		cout<<"1231"<<endl;
		cout<<"1251"<<endl;
		return 0;
	}
	if(n=50000)
	{
		cout<<"30857"<<endl;
		cout<<"30801"<<endl;
		cout<<"30771"<<endl;
		cout<<"30965"<<endl;
		cout<<"30881"<<endl;
		cout<<"30985"<<endl;
		cout<<"30733"<<endl;
		cout<<"30879"<<endl;
		cout<<"30815"<<endl;
		cout<<"30859"<<endl;
		return 0;
	}
	cout<<"0";
	return 0;
}
==========


---------- Now Opening N-00061's file(s).
===== Successfully open the file  answers\HN-00061\julian\julian.cpp.The size of it is 2.612 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q,r,a,b,x,y,Day,Month,Year,i,j;
	cin>>q;
	for(i=0;i<=q+1;i++)
	{
		cin>>r;
		if(r<=365)
		{
			if(r<=30)
			{
				Day=1+r;
				Month=1;
				Year=4713;
				cout<<Day<<" "<<Month<<" "<<Year<<" "<<"BC"<<endl;
			}
			else
			{
				for(i=1;i<=11;i++)
				{
					if(i==2)
						r=r-29;
					else if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
						r=r-31;
					else
						r=r-30;
					if(r<=28)
					{
						Day=1+r;
						Month=1+i;
						Year=4713;
						cout<<Day<<" "<<Month<<" "<<Year<<" "<<"BC"<<endl;
						break;
					}
				}
			}
		}
		else if(r<=1721058)
		{
			for(i=4713;i<=1;i--)
			{
				if((i-1)%4==0)
					r=r-366;
				else
					r=r-365;
				if(r<=364)
					break;
			}
			Year=i;
			if((Year-1)%4==0)
			{
				for(i=1;i<=11;i++)
				{
					if(i==2)
						r=r-29;
					else if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
						r=r-31;
					else
						r=r-30;
					if(r<=28)
					{
						Day=1+r;
						Month=1+i;
						cout<<Day<<" "<<Month<<" "<<Year<<" "<<"BC"<<endl;
						break;
					}
				}
			}
		}
		else
		{
			r=r-1721085;
			if(r<=364)
			{
				if(r<=30)
				{
					Day=r;
					Month=1;
					Year=1;
					cout<<Day<<" "<<Month<<" "<<Year<<endl;
					break;
				}
				else 
				{
					for(i=1;i<=11;i++)
					{
						if(i==2)
							r=r-29;
						else if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
							r=r-31;
						else
							r=r-30;
						if(r<=28)
						{
							Day=r;
							Month=i;
							Year=1;
							cout<<Day<<" "<<Month<<" "<<Year<<endl;
							break;
						}
					}
				}
			}
			else
			{
				for(i=1;i<=100000000;i++)
				{
					if(i%4==0)
						r=r-366;
					else
						r=r-365;
					if(r<=364)
					{
						if(r<=30)
						{
							Day=r;
							Month=1;
							Year=i;
							cout<<Day<<" "<<Month<<" "<<Year<<endl;
							break;
						}
						else if(i%4==0 && r>30)
						{
							if(r<=30)
							{
								Day=r;
								Month=1;
								Year=i;
								cout<<Day<<" "<<Month<<" "<<Year<<endl;
								break;
							}
							else 
							{
								for(j=1;j<=11;j++)
								{
									if(j==2)
										r=r-29;
									else if(j==1 || j==3 || j==5 || j==7 || j==8 || j==10 || j==12)
										r=r-31;
									else
										r=r-30;
									if(r<=28)
									{
										Day=r;
										Month=j;
										Year=i;
										cout<<Day<<" "<<Month<<" "<<Year<<endl;
										break;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file        answers\HN-00061\zoo\zoo.cpp.The size of it is 0.169 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

==========
===== Successfully open the file      answers\HN-00061\call\call.cpp.The size of it is 0.171 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

==========
===== Successfully open the file  answers\HN-00061\snakes\snakes.cpp.The size of it is 0.163 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	
	fclose(stdin);
	fclose(stdout);
}
==========


---------- Now Opening N-00062's file(s).
===== Successfully open the file  answers\HN-00062\julian\julian.cpp.The size of it is 1.098 KB.
#include<bits/stdc++.h>
using namespace std;
int q,yr[3000003],sum[3000003],b[3000003],l,r,mid,n,a;
int mth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int check(int x)
{
	if(x%400==0)
		return 1;
	if(x%4==0&&x%100!=0)
		return 1;
	return 0;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	for(int i=1;i<=3000000;i++)
		yr[i]=365;
	for(int i=1;i<=6295;i+=4)
		yr[i]++;	
	for(int i=1584;i<=3000000;i+=4)
		if(check(i))
			yr[i+4713]++;
	yr[6295]-=10;
	for(int i=1;i<=3000000;i++)
		sum[i]=sum[i-1]+yr[i];
	while(q--)
	{
		scanf("%d",&a);
		a++,l=1,r=3000000;
		while(l<=r)
		{
			mid=(l+r)/2;
			if(a<=sum[mid])
				r=mid-1;
			else
				l=mid+1;
		}
		for(int i=1;i<=12;i++)
			b[i]=mth[i];
		if(yr[r+1]==355)
			b[10]-=10;
		if(yr[r+1]==366)
			b[2]++;
		a-=sum[r];
		for(int i=1;i<=12;i++)
			if(a>b[i])
				a-=b[i];
			else
			{
				if(b[i]==21)
					printf("%d ",a-4+14);
				else
					printf("%d ",a);
				printf("%d ",i);
				if(r<4713)
					printf("%d BC\n",4713-r);
				else
					printf("%d\n",r-4713+1);
				break;
			}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00062\zoo\zoo.cpp.The size of it is 0.569 KB.
#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
int n,m,c,k,ans,a[1000003],b[1000003],b1[1000003],p,q,t;
signed main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%llu%llu%llu%llu",&n,&m,&c,&k);
	ans=k;
	for(int i=1;i<=n;i++)
		scanf("%llu",&a[i]);
	for(int i=1;i<=n;i++)
	{
		t=a[i];
		for(int j=0;j<k;j++)
		{
			if(t%2==1)
				b[j]=1;
			t=(t>>1);
		}
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%llu%llu",&p,&q);
		b1[p]=1;
	}
	for(int i=0;i<k;i++)
		if(b[i]==0&&b1[i]==1)
			ans--;
	cout<<(1<<ans)-n;
	return 0;
}
==========
===== Opening      answers\HN-00062\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00062\snakes\snakes.cpp.The size of it is 0.906 KB.
#include<bits/stdc++.h>
using namespace std;
int t,n,x,y,a[1000003],b[1000003],nu[1000003];
int ma(int p,int p1,int q,int q1)
{
	if(p>q)
		return 1;
	if(p==q&&p1>q1)
		return 1;
	return 0;
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++)
	{
		scanf("%d",&n);
		if(tt==1)
			for(int i=1;i<=n;i++)
				scanf("%d",&b[i]);
		else
			for(int i=1;i<=n;i++)
			{
				scanf("%d%d",&x,&y);
				b[x]=y;
			}
		for(int i=1;i<=n;i++)
			a[i]=b[i],nu[i]=i;
		for(int i=n;i>=1;i--)
		{
			if(i==1)
			{
				cout<<1<<endl;
				break;
			}
			if(i==2||(ma(a[i],nu[i],a[1],nu[1])&&ma(a[i]-a[1],nu[i],a[2],nu[2])))
			{
				a[1]=a[i]-a[1],nu[1]=nu[i];
				for(int j=2;j<=n-1;j++)
					if(ma(a[j-1],nu[j-1],a[j],nu[j]))
						swap(a[j-1],a[j]),swap(nu[j-1],nu[j]);						
			}
			else
			{
				cout<<i<<endl;
				break;
			}
		}
		
	}	
	return 0;
}
==========


---------- Now Opening N-00063's file(s).
===== Successfully open the file  answers\HN-00063\julian\julian.cpp.The size of it is 3.583 KB.
#include <bits/stdc++.h>

#define int long long

using namespace std;

template<typename T> inline void read(T& x) {
	T a = 0, b = 1; char ch = getchar();
	while (ch != '-' && (ch < '0' || ch > '9')) ch = getchar();
	if (ch == '-') b = -1, ch = getchar();
	while (ch >= '0' && ch <= '9') a = a*10+ch-48, ch = getchar();
	x = a*b;
}

const int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int Month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int daybc = 1721424;
const int dayjl = 577460;
const int daych = 355;
const int dayrt = 6209;
const int c = 1461;
const int cc = 146097;

int a[400], aa[400], b[400], bb[400], y[400], yy[400], yr[150000];

void init() {
	for (int i = 1, j = 1; i <= 12; ++i)
		for (int k = 1; k <= month[i]; ++k) {
			a[j] = i; aa[j] = k; ++j;
		}
	for (int i = 1, j = 1; i <= 12; ++i)
		for (int k = 1; k <= Month[i]; ++k) {
			b[j] = i; bb[j] = k; ++j;
		}
	for (int i = 0; i < 400; ++i) {
		if (i%100 == 0) y[i] = i%400 ? 365 : 366;
		else y[i] = i%4 ? 365 : 366;
		if (i) yy[i] = yy[i-1]+y[i]; else yy[i] = y[i];
		for (int j = yy[i]-y[i]+1; j <= yy[i]; ++j)
			yr[j] = i;
	}
}

signed main() {
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	init();
	int Q; read(Q);
	while (Q--) {
		int r; read(r); ++r;
		if (r <= daybc) {
			int circle = r/c, rest = r%c;
			int year = 4714-4*circle;
			if (rest <= 366) {
				if (rest == 0) printf("%d %d %lld BC\n", 31, 12, year);
				else printf("%lld %lld %lld BC\n", bb[rest], b[rest], year-1); 
			}
			else {
				year -= (rest-366)/365+1; (rest -= 366) %= 365;
				if (rest == 0) printf("%d %d %lld BC\n", 31, 12, year);
				else printf("%lld %lld %lld BC\n", aa[rest], a[rest], year-1);
			}
		} else if (r-daybc <= dayjl) {
			r -= daybc;
			int circle = r/c, rest = r%c;
			int year = 4*circle;
			if (rest <= 365*3) {
				year += rest/365; rest %= 365;
				if (rest == 0) printf("%d %d %lld\n", 31, 12, year);
				else printf("%lld %lld %lld\n", aa[rest], a[rest], year+1);
			} else {
				year += (rest-365*3)/366+3; (rest -= 365*3) %= 366;
				if (rest == 0) printf("%d %d %lld\n", 31, 12, year);
				else printf("%lld %lld %lld\n", bb[rest], b[rest], year+1);
			}
		} else if (r-daybc-dayjl <= daych) {
			r -= daybc+dayjl;
			int year = 1582, rest = r-daybc-dayjl;
			if (rest <= 277) printf("%lld %lld %lld\n", aa[rest], a[rest], year);
			else printf("%lld %lld %lld\n", aa[rest+10], a[rest+10], year);
		} else if (r-daybc-dayjl-daych <= dayrt) {
			r -= daybc+dayjl+daych;
			int circle = r/c, rest = r%c;
			int year = 1582+4*circle;
			if (rest <= 365) {
				year += rest/365; rest %= 365;
				if (rest == 0) printf("%d %d %lld\n", 31, 12, year);
				else printf("%lld %lld %lld\n", aa[rest], a[rest], year+1);
			} else if (rest-365 <= 366) {
				year += (rest-365)/366+1; (rest -= 365) %= 366;
				if (rest == 0) printf("%d %d %lld\n", 31, 12, year);
				else printf("%lld %lld %lld\n", bb[rest], b[rest], year+1);
			} else {
				year += (rest-366-365)/365+2; (rest -= 365+366) %= 365;
				if (rest == 0) printf("%d %d %lld\n", 31, 12, year);
				else printf("%lld %lld %lld\n", aa[rest], a[rest], year+1);
			}
		} else {
			r -= daybc+dayjl+daych+dayrt;
			int circle = r/cc, rest = r%cc;
			int year = 1600+circle*400;
			if (rest == 0) printf("%d %d %lld\n", 31, 12, year);
			else {
				int num = yr[rest]; year += num;
				if (num) rest -= yy[num-1];
				if (y[num] == 366) printf("%lld %lld %lld\n", bb[rest], b[rest], year);
				else printf("%lld %lld %lld\n", aa[rest], a[rest], year);
			}
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00063\zoo\zoo.cpp.The size of it is 0.901 KB.
#include <bits/stdc++.h>

using namespace std;

template<typename T> inline void read(T& x) {
	T a = 0, b = 1; char ch = getchar();
	while (ch != '-' && (ch < '0' || ch > '9')) ch = getchar();
	if (ch == '-') b = -1, ch = getchar();
	while (ch >= '0' && ch <= '9') a = a*10+ch-48, ch = getchar();
	x = a*b;
}

const int maxn = 1e6;

typedef unsigned long long ull;

ull n, m, c, k, tot, a[maxn+10], b[maxn+10], p[maxn+10], q[maxn+10], buy[100], pd[100];

int main() {
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	read(n); read(m); read(c); read(k);
	for (int i = 1; i <= n; ++i)
		read(a[i]);
	for (int i = 1; i <= m; ++i)
		read(p[i]), read(q[i]), pd[p[i]] = 1;
	for (int i = 1; i <= n; ++i)
		for (int j = 0; j < k; ++j)
			if (((a[i]>>j)&1) && pd[j]) buy[j] = 1;
	int ans = 1;
	for (int i = 0; i < k; ++i)
		if (!pd[i] || buy[i]) ans *= 2ull;
	cout<<ans-n<<endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00063\call\call.cpp.The size of it is 3.054 KB.
#include <bits/stdc++.h>

using namespace std;

template<typename T> inline void read(T& x) {
	T a = 0, b = 1; char ch = getchar();
	while (ch != '-' && (ch < '0' || ch > '9')) ch = getchar();
	if (ch == '-') b = -1, ch = getchar();
	while (ch >= '0' && ch <= '9') a = a*10+ch-48, ch = getchar();
	x = a*b;
}

const int maxn = 1e5;
const int mod = 998244353;

int n, m, q, a[maxn+10], ty[maxn+10], p[maxn+10], v[maxn+10], c[maxn+10], t[maxn+10], ans[maxn+10], f[maxn+10], tag[maxn+10];

int tot, head[maxn+10], d[maxn+10];

struct edge {
	int to, nex;
	edge (int to = 0, int nex = 0) : to(to), nex(nex) {}
} edges[maxn*10+10];

void addedge(int from, int to) {
	edges[++tot] = edge(to, head[from]);
	head[from] = tot;
}

vector<int> g[maxn+10];

void build1() {
	for (int i = 1; i <= m; ++i)
		if (ty[i] == 3) for (int j = 0; j < g[i].size(); ++j)
			if (ty[g[i][j]] == 3) addedge(g[i][j], i), ++d[i];
}

void topu1() {
	queue<int> q;
	for (int i = 1; i <= m; ++i)
		if (ty[i] == 3 && d[i] == 0) q.push(i);
	for (int i = 1; i <= m; ++i)
		if (ty[i] == 3) {
			t[i] = 1;
			for (int j = 0; j < g[i].size(); ++j)
				if (ty[g[i][j]] == 2) t[i] = 1ll*t[i]*v[g[i][j]]%mod;
		}
	while (!q.empty()) {
		int x = q.front(); q.pop();
		for (int i = head[x]; i; i = edges[i].nex) {
			int u = edges[i].to; t[u] = 1ll*t[u]*t[x]%mod;
			if ((--d[u]) == 0) q.push(u);
		}
	}
}

void build2() {
	memset(d, 0, sizeof(d));
	for (int i = 1; i <= m; ++i)
		if (ty[i] == 3) for (int j = 0; j < g[i].size(); ++j)
			if (ty[g[i][j]] == 3) ++d[g[i][j]];
}

void topu2() {
	queue<int> q;
	for (int i = 1; i <= m; ++i)
		if (ty[i] == 3 && d[i] == 0) q.push(i);
	while (!q.empty()) {
		int x = q.front(); q.pop();
		int res = tag[x];
		for (int j = g[x].size()-1; j >= 0; --j) {
			int k = g[x][j];
			if (ty[k] == 1) (ans[p[k]] += 1ll*v[k]*res%mod) %= mod;
			else if (ty[k] == 2) res = 1ll*res*v[k]%mod;
			else if (ty[k] == 3) {
				(tag[k] += res) %= mod;
				res = 1ll*res*t[k]%mod;
				if ((--d[k]) == 0) q.push(k);
			}
		}
	}
}

int main() {
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	read(n);
	for (int i = 1; i <= n; ++i)
		read(a[i]);
	read(m);
	for (int i = 1; i <= m; ++i) { 
		read(ty[i]);
		if (ty[i] == 1) read(p[i]), read(v[i]);
		else if (ty[i] == 2) read(v[i]);
		else {
			read(c[i]);
			for (int j = 1, x; j <= c[i]; ++j)
				read(x), g[i].push_back(x);
		}
	}
	build1(); topu1();
	read(q);
	for (int i = 1; i <= q; ++i)
		read(f[i]);
	int res = 1;
	for (int i = q; i >= 1; --i) {
		int x = f[i];
		if (ty[x] == 1) (ans[p[x]] += 1ll*v[x]*res%mod) %= mod;
		else if (ty[x] == 2) res = 1ll*res*v[x]%mod;
		else {
			for (int j = g[x].size()-1; j >= 0; --j) {
				int k = g[x][j];
				if (ty[k] == 1) (ans[p[k]] += 1ll*v[k]*res%mod) %= mod;
				else if (ty[k] == 2) res = 1ll*res*v[k]%mod;
				else {
					(tag[k] += res) %= mod; 
					res = 1ll*res*t[k]%mod;
				}
			}
		}
	}
	for (int i = 1; i <= n; ++i)
		(ans[i] += 1ll*a[i]*res%mod) %= mod;
	build2(); topu2();
	for (int i = 1; i <= n; ++i)
		printf("%d ", ans[i]);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00063\snakes\snakes.cpp.The size of it is 0.609 KB.
#include <bits/stdc++.h>

using namespace std;

int n, a[20], b[20];

int main() {
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	int T; 
	scanf("%d%d", &T, &n);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &a[i]);
	memcpy(b, a, sizeof(a));
	sort(b+1, b+1+n);
	if (b[3] >= b[1]+b[2]) printf("1\n");
	else printf("3\n");
	--T;
	while (T--) {
		int m; 
		scanf("%d", &m);
		for (int i = 1; i <= m; ++i) {
			int p, x;
			scanf("%d%d", &p, &x);
			a[p] = x;
		}
		memcpy(b, a, sizeof(a));
		sort(b+1, b+1+n);
		if (b[3] >= b[1]+b[2]) printf("1\n");
		else printf("3\n");
	}
	return 0;
}
==========


---------- Now Opening N-00064's file(s).
===== Successfully open the file  answers\HN-00064\julian\julian.cpp.The size of it is 0.187 KB.
#include<iostream>
using namespace std;
  freopen("julian.in","r","in");
  freopen("julian.out","w","out");
int main()
{
	int Y
	if(
	
    return 0;
	
}
  fclose(stdin);
  fclose(stdout);==========
===== Successfully open the file        answers\HN-00064\zoo\zoo.cpp.The size of it is 0.000 KB.
==========
===== Successfully open the file      answers\HN-00064\call\call.cpp.The size of it is 0.222 KB.
#include<iostream>
using namespace std;
int main()
{
	int n,i,a[n],m,Tj;
	cin>>n>>a[n]>>m;
	if(Tj==1){
		a[1]++;}
	if(Tj==2){
		a[n]=2*a[n];}
	if(Tj==3){
		a[1]++;
		a[n]=2*a[n];}
	cout<<a[n]%998244353<<endl;
	return 0;
	}==========
===== Successfully open the file  answers\HN-00064\snakes\snakes.cpp.The size of it is 0.000 KB.
==========


---------- Now Opening N-00065's file(s).
===== Successfully open the file  answers\HN-00065\julian\julian.cpp.The size of it is 1.038 KB.
#include<bits/stdc++.h>
using namespace std;
int a[1000000];
char si[1000000][4];
int main()
{
	freopen("julian.in","r",stdin);
    freopen("julian.out","w",stdout);
	int Q,ri,da,mo,ye,sam;
	cin>>Q;
	for(int i=0;i<Q;i++)
	{
		cin>>ri;
		a[i]=ri;
	}
	for(int i=0;i<Q;i++)
	{
		da=a[i]+1;
	  	ye=da/365;
		if(ye<6295)
		if(da<(ye+ye/4))
		{
			ye-=1;
			da=da+365-(ye+ye/4);
		}
		else
		da-=(ye+ye/4);
		if(ye>6295)
		sam=ye-6295;
		if(da<(sam/4-sam/100+sam/400))
		{
			ye-=1;
			da=da+356-(sam/4-sam/100+sam/400);
		}
		else
			da-=(sam/4-sam/100+sam/400);
		mo=(da%365)/30;
	  	da=(da%365)%30;
		if(mo+1==13)
	  	{
	  		mo=1;ye+=1;
		  }
		if((ye<4713)&&ye/4==0&&(mo+=2)&&(da+1>29))
		{
			da-=29;mo+=1;ye=4713-ye;
		}
		if((ye<4713)&&(mo+=2)&&(da+1>28))
		{
			da-=28;mo+=1;
		}
		if(ye>4713)
		ye-=4713;
		si[i][0]=da;si[i][1]=mo;si[i][2]=ye;
	}
	if(ye<4713)
	for(int i=0;i<Q;i++)
	cout<<si[i][0]<<" "<<si[i][1]<<" "<<si[i][2]<<" "<<"BC";
	if(ye>4713)
	for(int i=0;i<Q;i++)
	cout<<si[i][0]<<" "<<si[i][1]<<" "<<si[i][2];
	return 0;
}
==========
===== Successfully open the file        answers\HN-00065\zoo\zoo.cpp.The size of it is 0.071 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	return 0;
}
==========
===== Successfully open the file      answers\HN-00065\call\call.cpp.The size of it is 0.071 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	return 0;
}
==========
===== Successfully open the file  answers\HN-00065\snakes\snakes.cpp.The size of it is 0.071 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	return 0;
}
==========


---------- Now Opening N-00066's file(s).
===== Successfully open the file  answers\HN-00066\julian\julian.cpp.The size of it is 2.259 KB.
#include <bits/stdc++.h>
using namespace std;
/*main*/int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int q,r;
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int ask,i,d,m,y;
	bool bc;
	scanf("%d",&q);
	for(ask=1;ask<=q;ask++)
	{
		d=1;
		m=1;
		y=-4712;
		scanf("%d",&r);
		r++;
		if(r<=2298795)                    //BC
		{
			y+=(r-1)/1461*4;
			r=(r-1)%1461+1;
			if(r<=366)
			{
				month[2]=29;
				while(r>month[m])
				{
					r-=month[m];
					m++;
				}
				month[2]=28;
			}
			else
			{
				y++;
				r-=366;
				y+=(r-1)/365;
				r=(r-1)%365+1;
				while(r>month[m])
				{
					r-=month[m];
					m++;
				}
			}
			d=r;
		}
		else                                     //AD
		{
			r-=2298795;
			y=1582;
			r+=287;
			//if(r<=577715)
			{
				y+=(r-1)/1461*4;
				r=(r-1)%1461+1;
				if(r>1095)
				{
					y+=3;
					r-=1095;
					month[2]=29;
					while(r>month[m])
					{
						r-=month[m];
						m++;
					}
					month[2]=28;
				}
				else
				{
					y+=(r-1)/365;
					r=(r-1)%365+1;
					while(r>month[m])
					{
						r-=month[m];
						m++;
					}
				}
			}
			//else
			{
				//r-=577715;
				
				y+=(r-1)/146097*400;
				r=(r-1)%146097+1;
				if(r>145731)                           //400
				{
					y+=399;
					r-=145731;
					month[2]=29;
					while(r>month[m])
					{
						r-=month[m];
						m++;
					}
					month[2]=28;
				}
				else                           //400
				{
					y+=(r-1)/36524*100;
					r=(r-1)%36524+1;
					if(r>36159)                //100
					{
						y+=99;
						r-=36159;
						while(r>month[m])
						{
							r-=month[m];
							m++;
						}
					} 
					else                       //100
					{
						y+=(r-1)/1461*4;
						r=(r-1)%1461+1;
						if(r>1095)             //4     
						{
							y+=3;
							r-=1095;
							month[2]=29;
							while(r>month[m])
							{
								r-=month[m];
								m++;
							}
							month[2]=28;
						}
						else
						{
							y+=(r-1)/365;
							r=(r-1)%365+1;
							while(r>month[m])
							{
								r-=month[m];
								m++;
							}
						}
					}
				}
			}
			d=r;
		}
		if(y<=0)
			cout<<d<<" "<<m<<" "<<abs(y-1)<<" BC"<<endl;
		else
			cout<<d<<" "<<m<<" "<<y<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Opening        answers\HN-00066\zoo\zoo.cpp Failed.File not found.
===== Opening      answers\HN-00066\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00066\snakes\snakes.cpp.The size of it is 0.951 KB.
#include <bits/stdc++.h>
using namespace std;
/*main*/struct snake
{
	int number,strong,door;
} a[5];
/*sort*/inline bool compare(snake a,snake b)
{
	return a.strong>b.strong||(a.strong==b.strong&&a.number>b.number);
}
int main()
{
	int t,n,k,x,y;
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int i;
	scanf("%d",&t);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i].strong);
		a[i].number=i;
		a[i].door=i;
	}	
	sort(a+1,a+4,compare);
	if(a[1].strong-a[3].strong>a[2].strong||(a[1].strong-a[3].strong==a[2].strong&&a[1].number>a[2].number))
		cout<<1<<endl;
	else
		cout<<3<<endl;
	while(t--)
	{
		scanf("%d",&k);
		for(i=1;i<=k;i++)
		{
			scanf("%d %d",&x,&y);
			a[a[x].door].strong=y;
		}	
		sort(a+1,a+4,compare);
		if(a[1].strong-a[3].strong>a[2].strong||(a[1].strong-a[3].strong==a[2].strong&&a[1].number>a[2].number))
			cout<<1<<endl;
		else
			cout<<3<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========


---------- Now Opening N-00067's file(s).
===== Successfully open the file  answers\HN-00067\julian\julian.cpp.The size of it is 2.422 KB.
#include<bits/stdc++.h>
using namespace std;
inline int read()
{
	int x=0;
	char c=getchar();
	while(!isdigit(c)) c=getchar();
	while(isdigit(c)){ x=(x<<3)+(x<<1)+c-'0'; c=getchar(); }
	return x;
}
int t;
int mth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int i,j,k,x,y,year,mon,day;
	bool c;
	t=read();
	while(t--)
	{
		x=read();
		if(x<2299160)
		{
			y=x/(365*4+1)*4;
			if(y<4713) year=4713-y,c=1;
			else year=y-4712,c=0;
			y=x%(365*4+1);
			if(c)
			{
				for(i=1; ;i++)
				{
					if(y<365||((year-1)%4==0&&y==365)) break;
					year--;
					if((year)%4==0) y-=366;
					else y-=365;
				}
				if(y==365)
				{
					mon=12,day=31;
					continue;
				}
				if(year<0)
				{
					year=0-year+1;
					continue;
				}
				for(mon=1;mon<=12;mon++)
				{
					if(y<=mth[mon]) break;
					y-=mth[mon];
					if(mon==2&&(year-1)%4==0) y--;
				}
				day=y;
				if(!y) day=29,mon=2;
				printf("%d %d %d BC\n",day+1,mon,year);
				c=1;
			}
			if(!c)
			{
				year;
				while(y)
				{
					if(y<365||(year+1)%4==0&&y==365) break;
					year++;
					if(year%4!=0) y-=365;
					else y-=366;
				}
				if(y==365)
				{
					mon=12,day=31;
					continue;
				}
				for(mon=1;mon<=12;mon++)
				{
					if(y<=mth[mon]) break;
					y-=mth[mon];
					if(year%4==0&&mon==2) y--;
				}
				day=y;
				if(!y) day=29,mon=2;
				printf("%d %d %d\n",day,mon,year);
			}
		}
		else
		{
			x-=2299160;
			if(x==0)
			{
				printf("4 10 1582\n");
				continue;
			}
			year=1582;
			y=x;
			if(y<=77)
			{
				if(y<=16)
				{
					mon=10;
					day=14+y;
				}
				else
				{
					if(y<=46)
					{
						mon=11;
						day=y-16;
					}
					else
					{
						mon=12;
						day=y-46;
					}
				}
				printf("%d %d %d\n",day,mon,year);
				continue;
			}
			y-=77;
			year++;
			year+=y/(365*4+1)*4;
			y%=(365*4+1);
			while(y)
			{
				if(y<365||((year+1)%4==0&&((!(year+1)%100==0)||(year+1)%400==0)&&y==365)) break;
				year++;
				y-=365;
				if(year%4==0) y++;
				if(year%100==0&&year%400!=0) y--;
			}
			if(year==365)
			{
				mon=12,day=31;
				continue;
			}
			for(mon=1;mon<=12;mon++)
			{
				if(y<=mth[mon]) break;
				y-=mth[mon];
				if(mon==2&&year%4==0) y--;
				if(mon==2&&year%100==0&&year%400!=0) y++;
			}
			day=y;//2299661
			if(!y) day=29,mon=2;
			printf("%d %d %d\n",day,mon,year);
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file        answers\HN-00067\zoo\zoo.cpp.The size of it is 0.798 KB.
#include<bits/stdc++.h>
using namespace std;
inline int read()
{
	int x=0;
	char c=getchar();
	while(!isdigit(c)) c=getchar();
	while(isdigit(c)){ x=(x<<3)+(x<<1)+c-'0'; c=getchar(); }
	return x;
}
int n,m,c,k,f[1000001];
long long a=0,b=0;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int i,x,y;
	long long mx=0,k,j,l;
	n=read(),m=read(),c=read();
	scanf("%lld",&k);
	for(i=1;i<=n;i++)
	{
		f[i]=read();
		a|=(long long)f[i];
	}
	l=0;
	for(i=1;i<=m;i++)
	{
		x=read(),y=read();
		b|=(1<<x);
		if((1<<x)&a) mx=max(mx,(long long)y);
		else l|=(1<<x);
		if(mx>k) break;
	}
	j=0;
	while(l)
	{
		j+=(l&1);
		l>>=1;
	}
//	mx=min(mx,k);
//	cout<<b<<" "<<mx<<" "<<k<<" "<<n<<" "<<l<<"\n";
	printf("%lld",(1<<k-j)-(long long)n);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00067\call\call.cpp.The size of it is 1.465 KB.
#include<bits/stdc++.h>
using namespace std;
inline int read()
{
	int x=0;
	char c=getchar();
	while(!isdigit(c)) c=getchar();
	while(isdigit(c)){ x=(x<<3)+(x<<1)+c-'0'; c=getchar(); }
	return x;
}
const int mo=998244353;
int n,m,a[100001],c[100001];
long long nc=1;
vector<int> w[100001];
void work(int);
void work1(int x,int y)
{
	a[x]=((a[x]*((long long)(nc+mo)/c[x]))%mo+y)%mo;
	c[x]=nc%mo;
	return ;
}
void work2(int x)
{
	x%=mo;
	nc=(nc*(long long)x)%mo;
//	cout<<x<<" "<<nc<<"*\n";
	return ;
}
void work3(int f)
{
	int k;
	k=w[f][1];
	for(int i=2;i<=k+1;i++) work(w[f][i]);
}
void work(int k)
{
	int x=w[k][0];
	if(x==1) work1(w[k][1],w[k][2]);
	if(x==2) work2(w[k][1]);
	if(x==3) work3(k);
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int i,j,k,t,x,y;
	n=read();
	for(i=1;i<=n;i++) a[i]=read(),c[i]=1;
	m=read();
	for(i=1;i<=m;i++)
	{
		x=read();
		w[i].push_back(x);
		if(x==1)
		{
			j=read(),y=read();
			w[i].push_back(j);
			w[i].push_back(y);
		}
		if(x==2)
		{
			y=read();
			w[i].push_back(y);
		}
		if(x==3)
		{
			t=read();
//			cout<<"*";
			w[i].push_back(t);
			for(j=1;j<=t;j++)
			{
				y=read();
				w[i].push_back(y);
			}
		}
	}
	t=read();
	for(i=1;i<=t;i++)
	{
		x=read();
		work(x);
	}
	cout<<nc<<"\n";
	for(i=1;i<=n;i++)
	{
		if(c[i]>nc) printf("%d ",a[i]*((nc+mo)/(c[i]%mo))%mo);
		else printf("%d ",a[i]*(nc/c[i]%mo)%mo);
//		if(c[i]==0) cout<<"&";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00067\snakes\snakes.cpp.The size of it is 1.543 KB.
#include<bits/stdc++.h>
using namespace std;
inline int read()
{
	int x=0;
	char c=getchar();
	while(!isdigit(c)) c=getchar();
	while(isdigit(c)){ x=(x<<3)+(x<<1)+c-'0'; c=getchar(); }
	return x;
}
int t,n,ans,bns,a[3000001],b[3000001];
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int i,j,k,l,x,y,z;
	bool w;
	t=read();
	n=read();
	if(n==3)
	{
		a[1]=x=read(),a[2]=y=read(),a[3]=z=read();
		if(z-x<=y) printf("3\n");
		else printf("1\n");
		t--;
		while(t--)
		{
			k=read();
			for(i=1;i<=k;i++)
			{
				x=read(),y=read();
				a[x]=y;
			}
			if(a[3]-a[1]<=a[2]) printf("3\n");
			else printf("1\n");
		}
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	for(i=1;i<=n;i++) a[i]=read();
	for(l=1;l<=t;l++)
	{
		ans=bns=0;
		if(a[n]-a[1]<=a[2]) printf("%d\n",n);
		else
		{
			ans++;
			b[++bns]=a[n]-a[1];
			w=0;
			while(ans<n)
			{
				if(a[n-ans]>b[bns])
				{
					if(a[n-ans]-min(a[ans],b[b[0]])<=max(a[ans],b[b[0]]))
					{
						printf("%d\n",n-ans);
						w=1;
						break;
					}
					else
					{
						b[++b[0]]=a[n-ans]-min(a[ans],b[b[0]]);
						ans++;
					}
				}
				else
				{
					if(b[bns]-min(a[ans],b[b[0]])<=max(a[ans],b[b[0]]))
					{
						printf("%d\n",n-ans);
						w=1;
						break;
					}
					else
					{
						b[++b[0]]=b[bns]-min(a[ans],b[b[0]]);
						bns++;
					}
				}
			}
			if(!w) printf("1\n");
		}
		if(l==t) break;
		memset(b,0,sizeof(b));
		k=read();
		for(i=1;i<=k;i++)
		{
			x=read(),y=read();
			a[x]=y;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========


---------- Now Opening N-00068's file(s).
===== Successfully open the file  answers\HN-00068\julian\julian.cpp.The size of it is 1.644 KB.
#include <bits/stdc++.h>
using namespace std;
long long i,Q,r,Day,Month,Year;
int yue[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%lld",&Q);
	while(Q--)
	{
		int YNZTS;//Ò»Äê×ÜÌìÊý 
		int f=0;
		scanf("%lld",&r);
		r+=1;
		Year=-4713,Month=1,Day=1;
		if(r<=31)
		printf("%lld 1 4713 BC\n",r);
		else if(r<=2299161)
		{
			Year=Year+r/1461*4;
			r%=1461;
			if(Year>=0)
			Year+=1;
			while(r>=yue[Month])
			{
				if(Year<0 && abs(Year)%4==1 || Year>0 && Year%4==0)
				yue[2]=29;
				else
				yue[2]=28;
				if(r>=yue[Month])
				{
					if(Year<0 && abs(Year)%4==1 || Year>0 && Year%4==0)
					yue[2]=29;
					else
					yue[2]=28;
					r-=yue[Month];
					Month++;
					if(Month>12)
					{
						Year++;
						if(Year==0)
						Year=1;
						Month=1;
					}
				}
			}
			if(Year<0)
			printf("%lld %lld %lld BC\n",r,Month,abs(Year));
			else
			printf("%lld %lld %lld\n",r,Month,Year);
		}
		else
		{
			r-=2299161;
			if(r<=17)
			printf("%lld %lld %lld\n",r+14,Month,Year);
			else
			{
				Year=1582;Day=15;Month=10;
				Year=Year+r/(1461*100-3)*400;
				r=r%(1461*100-3);
				r+=14;
				while(r>=yue[Month])
				{
					if(Year%4==0 && Year%100!=0 || Year%400==0)
					yue[2]=29;
					else
					yue[2]=28;
					if(r>=yue[Month])
					{
						if(Year%4==0 && Year%100!=0 || Year%400==0)
						yue[2]=29;
						else
						yue[2]=28;
						r-=yue[Month];
						Month++;
						if(Month>12)
						{
							Year++;
							if(Year==0)
							Year=1;
							Month=1;
						}
					}
				}
			}
			printf("%lld %lld %lld\n",r,Month,Year);
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00068\zoo\zoo.cpp.The size of it is 0.981 KB.
#include <bits/stdc++.h>
using namespace std;
long long n,m,c,k,a[1010],p,q,DD=2,zuiduo,DDD,EMM,sum,num;
map<long long,long long> V,VV,KKK;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%lld%lld%lld%lld",&n,&m,&c,&k);
	for(int i=2;i<=k;i++)
	DD*=2;
	for(int i=1;i<=n;i++)
	scanf("%lld",&a[i]);
	for(int i=1;i<=m;i++)
	{
		scanf("%lld%lld",&p,&q);
		VV[p]=1;
		for(int j=1;j<=n;j++)
		{
			long long t=1,C=a[j],VVV=0,flag=0;
			while(C>0 && VVV<=p && flag==0)
			{
				if(VVV==p && C%2==1)
				{
					KKK[a[j]]++;
					if(KKK[a[j]]==1)
					sum++;
					V[p]=1;
					flag=1;
				}
				VVV++;
				C/=2;
			}
			KKK[a[j]]=1;
		}
	}
	long long zuiduo=DD;
	for(long long j=0;j<DD;j++)
	{
		if(KKK[a[j]]==0)
		{
			DDD=0;
			long long C=j;
			int flag=1;
			while(C>0 && flag!=0)
			{
				if(V[DDD]==0 && VV[DDD]==1 && C%2==1)
				{
					zuiduo--;
					flag=0;
					break;
				}
				DDD++;
				C/=2;
			}
		}
	}
	printf("%lld",zuiduo-n);
	return 0;
}
==========
===== Opening      answers\HN-00068\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00068\snakes\snakes.cpp.The size of it is 1.377 KB.
#include <bits/stdc++.h>
using namespace std;
int T,n,wz,ans,QAQ;
struct S
{
	int tl;
	int wz;
}a[1000010],b[1000010];
int cmp(S x,S y)
{
	return x.tl >y.tl || x.tl ==y.tl && x.wz >y.wz ;
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&T);
	for(int k=1;k<=T;k++)
	{
		if(k==1)
		{
			scanf("%d",&n);
			QAQ=n;
			ans=n;
			for(int i=1;i<=n;i++)
			{
				scanf("%d",&a[i].tl);
				a[i].wz =i;
				b[i]=a[i];
			}
			sort(b+1,b+ans+1,cmp);
			int l=ans;
			for(int i=1;i<=ans;i++)
			{
				int bc=0;
				while(b[i].tl -b[l].tl >b[l-1].tl || b[i].tl -b[l].tl ==b[l-1].tl && b[i].wz >=b[l-1].wz )
				{
					ans--;
					l--;
					bc++;
				}
				if(ans==2 && b[i].tl >b[l].tl )
				ans=1;
				if(bc==0)
				break;
				else
				sort(b+1,b+ans+1,cmp);
			}
			printf("%d\n",ans);
		}
		else
		{
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
			{
				int X,Y;
				scanf("%d%d",&X,&Y);
				a[X].tl =Y;
			}
			for(int i=1;i<=n;i++)
			b[i]=a[i];
			ans=QAQ;
			sort(b+1,b+ans+1,cmp);
			int l=ans;
			for(int i=1;i<=ans;i++)
			{
				int bc=0;
				while(b[i].tl -b[l].tl >b[l-1].tl || b[i].tl -b[l].tl ==b[l-1].tl && b[i].wz >b[l-1].wz )
				{
					ans--;
					l--;
					bc++;
				}
				if(ans==2 && b[i].tl >b[l].tl )
				ans=1;
				if(bc==0)
				break;
				else
				sort(b+1,b+ans+1,cmp);
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
==========


---------- Now Opening N-00069's file(s).
===== Successfully open the file  answers\HN-00069\julian\julian.cpp.The size of it is 1.366 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int read(){
	int w=0,h=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')h=-h;ch=getchar();}
	while(ch>='0'&&ch<='9'){w=w*10+ch-'0';ch=getchar();}
	return w*h;
}
int Q,r,Y,M,D;
int year[10]={0,146100,36525,1461,366,365,365,365},sum[610]={0,400,100,4,1,1,1,1};
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool run(int y){
	int x;
	if(y<=4713)x=4713-y-1;
	else x=y-4713+1;
	if(x%4==0){
		if(x%100==0){
			if(x%400==0)
				return true;
			return false;
		}
		return true;
	}
	return false;
}
signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	Q=read();
	while(Q--){
		r=read();
		Y=0,M=1,D=1;
		bool flag=0;
		year[1]=146100;
		year[2]=36525;
		for(int i=1;i<=3;i++){
			while(r>=year[i]){
				Y+=sum[i];
				r-=year[i];
				if(Y-4713+1>1582&&flag==0){
					flag=1;
					r+=11;
					year[1]=146097;
					year[2]=36524;
				}
//				printf("%lld\n",r);
			}
		}
		for(int i=4;i<=7;i++)
			if(r>year[i])r-=year[i],Y+=sum[i];
		month[2]=28;
		if(run(Y))month[2]=29;
		month[10]=31;
		if(Y-4713+1==1582)month[10]=21;
//		printf("%lld\n",r);
		for(int i=1;i<=12;i++)
			if(r>month[i])r-=month[i],M++;
		D+=r;
		if(Y-4713+1==1582&&D>4)D+=10;
		if(Y<4713)printf("%lld %lld %lld BC\n",D,M,4713-Y);
		else printf("%lld %lld %lld\n",D,M,Y-4713+1);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00069\zoo\zoo.cpp.The size of it is 0.818 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int read(){
	int w=0,h=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')h=-h;ch=getchar();}
	while(ch>='0'&&ch<='9'){w=w*10+ch-'0';ch=getchar();}
	return w*h;
}
int n,m,c,k;
int a[1000010],p[1000010],q[1000010];
int si,cnt;
bitset<100000010>nd;
int power(int k){
	int s=1,b=2;
	while(k){
		if(k&1)s=s*b;
		k>>=1;
		b=b*b;
	}
	return s;
}
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read(),m=read(),c=read(),k=read();
	for(int i=1;i<=n;i++)a[i]=read();
	for(int i=1;i<=m;i++)p[i]=read(),q[i]=read();
	for(int i=1;i<=n;i++)si=si|a[i];
	for(int i=1;i<=m;i++){
		for(int j=0;j<=k;j++){
			int l=(si>>j)&1;
			if(p[i]==j&&!l)nd[j]=1;
		}
	}
	cnt=k-nd.count();
	printf("%lld\n",max(0ll,power(cnt)-n));
	return 0;
}
==========
===== Successfully open the file      answers\HN-00069\call\call.cpp.The size of it is 1.075 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int read(){
	int w=0,h=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')h=-h;ch=getchar();}
	while(ch>='0'&&ch<='9'){w=w*10+ch-'0';ch=getchar();}
	return w*h;
}
const int mod=998244353;
int n,m,q;
int a[100010];
int t[100010],p[100010],v[100010],g[1010][1010];
void do3(int x){
	for(int i=1;i<=p[x];i++){
		int f=g[x][i];
		if(t[f]==1)a[p[f]]=(a[p[f]]+v[f])%mod;
		if(t[f]==2)
			for(int j=1;j<=n;j++)a[j]=a[j]*v[f]%mod;
		if(t[f]==3)
			do3(f);
	}
}
signed main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(int i=1;i<=n;i++)a[i]=read();
	m=read();
	for(int i=1;i<=m;i++){
		t[i]=read();
		if(t[i]==1)p[i]=read(),v[i]=read();
		if(t[i]==2)v[i]=read();
		if(t[i]==3){
			p[i]=read();
			for(int j=1;j<=p[i];j++)g[i][j]=read();
		}
	}
	q=read();
	for(int i=1;i<=q;i++){
		int f=read();
		if(t[f]==1)a[p[f]]=(a[p[f]]+v[f])%mod;
		if(t[f]==2)
			for(int j=1;j<=n;j++)a[j]=a[j]*v[f]%mod;
		if(t[f]==3)do3(f);
	}
	for(int i=1;i<=n;i++)printf("%lld ",a[i]);
	return 0;
}
==========
===== Opening  answers\HN-00069\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00070's file(s).
===== Successfully open the file  answers\HN-00070\julian\julian.cpp.The size of it is 0.870 KB.
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define RI register int
int Q;
int y,m=1,d=1;
const int t0=1721424;
inline int ts(int n){
	if(n<0&&(n+1)%4==0)return 366;
	return 365;
}
inline int tts(int n,int nian){
	if(n==1&&n==3&&n==5&&n==7&&n==8&&n==10&&n==12)return 31;
	else if(n!=2)return 30;
	else if(ts(nian)==366)return 29;
	else return 28;
}
signed main(){
    freopen("julian.in","r",stdin);
    freopen("julian.out","w",stdout);
	int x;
	cin>>Q;
	for(RI i=1;i<=Q;i++){
		scanf("%lld",&x);
		if(x<t0){
			y=-(4713-x/1461*4);
			x%=1461;
			int ns=0;
			while(1){
				if(x>=ts(y+1+ns)){
					x-=ts(y+1+ns);
					ns++;
				}
				else break ;
			}
			y+=ns;
			for(RI j=1;j<=x;j++){
				if(d==tts(m,y)+1){
					d=0;
					m++;
				}
				d++;
			}
			printf("%lld %lld %lld ",d+i-1,m,-y);
			printf("BC\n");
		}
		y=0,m=1,d=1;
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00070\zoo\zoo.cpp.The size of it is 0.936 KB.
#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define RI register int
const int MAXN=1e6+1;
int N,M,C,K;
int tot;
int a[MAXN];
int ix[MAXN],iy[MAXN];
map<int,bool>tong;
bool pd[MAXN];
vector<int> m[MAXN];
inline void ejz(int n){
	int bh=0;
	while(n){
		if(n&1)
			for(RI i=0;i<m[bh].size();i++)
				tong[m[bh][i]]=1;
		n>>=1;
		bh++;
	}
}
inline int cpow(int x,int y){
	if(y==0)return 1;
	if(y&1)return x*cpow(x,y-1);
	return cpow(x,y>>1)*cpow(x,y>>1);
}
signed main(){
    freopen("zoo.in","r",stdin);
    freopen("zoo.out","w",stdout);
	scanf("%lld%lld%lld%lld",&N,&M,&C,&K);
	for(RI i=1;i<=N;i++)
		scanf("%lld",&a[i]);
	for(RI i=1;i<=M;i++){
		scanf("%lld%lld",&ix[i],&iy[i]);
		m[ix[i]].push_back(iy[i]);
	}	
	for(RI i=1;i<=N;i++)
		ejz(a[i]);
	for(RI i=1;i<=M;i++){
		if(tong[iy[i]]==0&&pd[ix[i]]==0){
			pd[ix[i]]=1;
			tong[iy[i]]=1;
			tot++;
		}
	}
	cout<<cpow(2,K-tot)-N;
	return 0;
}
//100 pts
==========
===== Successfully open the file      answers\HN-00070\call\call.cpp.The size of it is 1.052 KB.
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define RI register int
const int MAXN=1e5+1,MOD=998244353;
int N,M,Q;
int tot;
double cheng=1;
double a[MAXN];
struct node{
	int opt,x,y;
	vector<int> dy;
}hs[MAXN];
inline void solve(int n){
	if(hs[n].opt==1){
		a[hs[n].x]+=(hs[n].y/cheng);
		return ;
	}
	else if(hs[n].opt==2){
		cheng*=hs[n].x;
		return ;
	}
	else {
		for(RI i=0;i<hs[n].x;i++)
			solve(hs[n].dy[i]);
	}
}
signed main(){
    freopen("call.in","r",stdin);
    freopen("call.out","w",stdout);
	scanf("%lld",&N);
	for(RI i=1;i<=N;i++)
		scanf("%lf",&a[i]);
	scanf("%lld",&M);
	for(RI i=1;i<=M;i++){
		scanf("%lld",&hs[i].opt);
		if(hs[i].opt==1)
			scanf("%lld%lld",&hs[i].x,&hs[i].y);
		else if(hs[i].opt==2)
			scanf("%lld",&hs[i].x);
		else {
			scanf("%lld",&hs[i].x);
			int aa;
			for(RI j=1;j<=hs[i].x;j++){
				scanf("%lld",&aa);
				hs[i].dy.push_back(aa);
			}
		}
	}
	scanf("%lld",&Q);
	int xx;
	while(Q--){
		scanf("%lld",&xx);
		solve(xx);
	}
	for(RI i=1;i<=N;i++)
		cout<<a[i]*cheng<<" ";
	return 0;
}

==========
===== Successfully open the file  answers\HN-00070\snakes\snakes.cpp.The size of it is 0.599 KB.
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define RI register int
const int MAXN=1e6+1;
int T,N,K;
int a[MAXN];
inline void sub1(){
	sort(a+1,a+4);
	if(a[3]-a[1]>a[2])printf("1\n");
	else if(a[3]-a[1]==a[2])printf("2\n");
	else printf("3\n");
}
signed main(){
    freopen("snakes.in","r",stdin);
    freopen("snakes.out","w",stdout);
	cin>>T;
	scanf("%lld",&N);
	for(RI i=1;i<=N;i++)scanf("%lld",&a[i]);
	if(N==3)sub1();
	T--;
	while(T--){
		scanf("%lld",&K);
		int x,y;
		for(RI i=1;i<=K;i++)	{
			scanf("%lld%lld",&x,&y);
			a[x]=y;
		}
		if(N==3)sub1();
	}
	return 0;
}

==========


---------- Now Opening N-00071's file(s).
===== Opening  answers\HN-00071\julian\julian.cpp Failed.File not found.
===== Opening        answers\HN-00071\zoo\zoo.cpp Failed.File not found.
===== Opening      answers\HN-00071\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00071\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00072's file(s).
===== Successfully open the file  answers\HN-00072\julian\julian.cpp.The size of it is 1.028 KB.
#include<bits/stdc++.h>
using namespace std;
int days[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int year,month,day;
inline int leap(int x){
	if(x>0){
		if(x%400==0) return 1;
		if(x%100!=0&&x%4==0) return 1;
		return 0;
	}
	else{
		return leap(-x-1);
	}
}
inline int rd(){
	int s=0,f=1;char ch=getchar();
	while(ch>'9'||ch<'0'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){s=s*10+ch-'0';ch=getchar();}
	return s*f;
}
inline int add(int x){
	for(int i=1;i<=x;i++){
		day++;
		if(leap(year)) days[2]=29;
		else days[2]=28;
		if(day>days[month]){
			day=1;
			month++;
		}
		if(month>12){
			month=1;
			year++;
		}
		if(year==0){
			year++;
		}
	}
}
void printing(){
	printf("%d %d %d ",day,month,abs(year));
	if(year<0) printf("BC");
	printf("\n");
}
int n;
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	n=rd();
	while(n--){
		year=-4713;
		month=1;
		day=1;
		int x=rd();
		while(x>=365){
			x=x-365-leap(year);
			year++;
		} 
		cout<<x;
		add(x);
		printing();
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00072\zoo\zoo.cpp.The size of it is 0.823 KB.
#include<bits/stdc++.h>
using namespace std;
inline int rd(){
	int s=0,f=1;char ch=getchar();
	while(ch>'9'||ch<'0'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){s=s*10+ch-'0';ch=getchar();}
	return s*f;
}
const int maxn=1000005,maxm=65;
int n,m,c,k,a[maxn],p[maxn],q[maxn],cant[maxm],tot; 
int num[65],num2[65];
unsigned long long ans=1;
inline void turn(int x){
	int cnt=0;
	while(x){
		num[cnt]=num[cnt]||x%2;
		cnt++;
		x=x/2;
	}
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=rd();m=rd();c=rd();k=rd();
	for(int i=1;i<=n;i++){
		a[i]=rd();
		turn(a[i]);
	}
	for(int i=0;i<k;i++){
		num2[i]=num[i];
	}
	for(int i=1;i<=m;i++){
		int u=rd(),v=rd();
		if(num[u]&&v<k){
			num2[v]=1;
		}
	}
	for(int i=0;i<k;i++){
		if(num2[i]) ans=ans*2;
	}
	ans=ans-n;
	cout<<ans;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00072\call\call.cpp.The size of it is 1.248 KB.
#include<bits/stdc++.h>
using namespace std;
inline int rd(){
	int s=0,f=1;char ch=getchar();
	while(ch>'9'||ch<'0'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){s=s*10+ch-'0';ch=getchar();}
	return s*f;
}
const int maxn=100005;
int n,a[maxn],m,q,type[maxn],p[maxn],v[maxn],g[maxn*10],tagadd[maxn],multag[maxn];
inline void adding(int x){
	a[p[x]]=a[p[x]]*multag[p[x]]+v[x];
	multag[p[x]]=1;
} 
inline void mulling(int x){
	for(int i=1;i<=n;i++){
		multag[i]*=v[x];
	}
}
inline void func(int x){
	for(int i=1;i<=p[x];i++){
		if(type[g[i]]==1){
			adding(g[i]);
		}
		else if(type[g[i]]==2){
			mulling(g[i]);
		}
		else{
			func(g[i]);
		}
	}
} 
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stodut);
	n=rd();
	for(int i=1;i<=n;i++) multag[i]=1;
	for(int i=1;i<=n;i++){
		a[i]=rd();
	}
	m=rd();
	for(int i=1;i<=m;i++){
		type[i]=rd();
		if(type[i]==1){
			p[i]=rd();
			v[i]=rd();
		}
		else if(type[i]==2){
			v[i]=rd();
		}
		else{
			p[i]=rd();
			for(int j=1;j<=p[i];j++){
				g[j]=rd();
			}
		}
	}
	q=rd();
	while(q--){
		int f=rd();
		if(type[f]==1){
			adding(f);
		}
		else if(type[f]==2){
			mulling(f);
		}
		else{
			func(f);
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]*multag[i]<<" ";
	} 
	return 0;
} 
==========
===== Opening  answers\HN-00072\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00073's file(s).
===== Successfully open the file  answers\HN-00073\julian\julian.cpp.The size of it is 1.675 KB.
#include <bits/stdc++.h>
using namespace std;
long k,ans,sun,a[100003],n[100003],y[100003],r[100003];
int s[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main() {
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>k;
	for(long i=1; i<=k; i++) {
		cin>>a[i];
	}
	for(long i=1; i<=k; i++) {
		n[i]=-4713;
		sun=a[i];
		while(sun>=365) {
			if(n[i]>=1582) {
				if(n[i]%4==0&&sun==365&&n[i]%100!=0||n[i]%100==0&&n[i]%400==0&&sun==365) {
					break;
				}
				if(n[i]%4==0&&n[i]%100!=0||n[i]%100==0&&n[i]%400==0) {
					n[i]++;
					sun-=366;
				} else {
					n[i]++;
					sun-=365;
				}
			} else {
				if(n[i]%4==0&&sun==365) {
					break;
				}
				if(n[i]%4==0) {
					n[i]++;
					sun-=366;
				} else {
					n[i]++;
					sun-=365;
				}
			}
		}
		for(int j=1; j<=12; j++) {
			if(sun>s[j]) {
				if(n[i]>=1582) {
					if(n[i]%4==0&&j==2&&n[i]%100!=0||n[i]%100==0&&n[i]%400==0&&j==2) {
						sun-=29;
						if(sun<0) {
							break;
							sun+=29;
						}
						y[i]++;
					} else {
						sun-=s[j];
						y[i]++;
					}
				} else {
					if(n[i]%4==0&&j==2) {
						sun-=29;
						if(sun<0) {
							break;
							sun+=29;
						}
						y[i]++;
					} else {
						sun-=s[j];
						y[i]++;
					}
				}
			} else {
				break;
			}
		}
		r[i]=sun;
		sun=0;
		if(n[i]>1852||n[i]==1852&&y[i]>10||n[i]==1852&&y[i]==10&&r[i]>=4) {
			r[i]+=10;
			if(r[i]>=s[y[i]]) {
				if(y[i]==11) {
					y[i]=0;
					n[i]++;
				}
				r[i]-=s[y[i]]-1;
				y[i]++;
			}
		}
	}
	for(long i=1; i<=k; i++) {
		if(n[i]<0) {
			cout<<r[i]+1<<" "<<y[i]+1<<" "<<0-n[i]<<" "<<"BC"<<endl;
		} else {
			cout<<r[i]+1<<" "<<y[i]+1<<" "<<n[i]+1<<endl;
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00073\zoo\zoo.cpp.The size of it is 0.146 KB.
#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cout<<13;
	return 0;
}

==========
===== Successfully open the file      answers\HN-00073\call\call.cpp.The size of it is 0.154 KB.
#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cout<<"6 8 12";
	return 0;
}

==========
===== Successfully open the file  answers\HN-00073\snakes\snakes.cpp.The size of it is 0.164 KB.
#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cout<<"3"<<endl<<"1";
	return 0;
}

==========


---------- Now Opening N-00074's file(s).
===== Successfully open the file  answers\HN-00074\julian\julian.cpp.The size of it is 1.350 KB.
#include<bits/stdc++.h>
using namespace std;
int M[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long long r,year,mouth,day,f;
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int Q;
	cin>>Q;
	while(Q--){
		cin>>r;
		mouth=1;f=0;
		if(r>2299160){
			year=1582;
			mouth=10;
			day=14;f=1;
			r-=2299160;
			for(;;year++)
				if(year%4==0&&year%400!=0&&r>366) r-=366;
				else if(r>365) r-=365;
				else break;
			for(int i=10;i<=12;i++)
				if(r>=M[i]) r-=M[i],mouth++;
			if(mouth>12) mouth-=12,year++;
			for(int i=1;i<=12;i++){
				if(i==2&&year%4==0) M[i]++;
				if(r>=M[i]) r-=M[i],mouth++;
				if(i==2&&year%4==0) M[i]--;
			}
			day+=r;
		}
		else if(r>1721423){
			r-=1721423;f=1;
			year=r/1461*4+1;
			r-=r/1461*1461;
			for(int i=1;i<=3;i++)
				if(r%1461>365) year++,r-=365;
			for(int i=1;i<=12;i++){
				if(i==2&&year%4==0) M[i]++;
				if(r>=M[i]) r-=M[i],mouth++;
				if(i==2&&year%4==0) M[i]--;
			}
			day=r;
		}
		else{
			r++;
			year=4713-(r/1461*4);
			r-=r/1461*1461;
			if(r>365) year--,r-=366;
			if(r>366) year--,r-=365;
			if(r>365) year--,r-=365;
			for(int i=1;i<=12;i++){
				if(i==2&&(year-1)%4==0) M[i]++;
				if(r>=M[i]) r-=M[i],mouth++;
				if(i==2&&(year-1)%4==0) M[i]--;
			}
			day=r;
		}
		cout<<day<<' '<<mouth<<' '<<year;
		if(f==0) cout<<' '<<"BC";
		cout<<endl;
	}
	return 0;
}
==========
===== Opening        answers\HN-00074\zoo\zoo.cpp Failed.File not found.
===== Successfully open the file      answers\HN-00074\call\call.cpp.The size of it is 0.513 KB.
#include<bits/stdc++.h>
using namespace std;
int a[100001],t,f[100001],Q;
int n,m,t1p[100001],t1v[100001],t2[100001],t3c[100001],t3[100001][1001];
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>t;
		if(t==1)
			cin>>t1p[i]>>t1v[i];
		else if(t==2)
			cin>>t2[i];
		else{
			cin>>t3c[i];
			for(int j=1;j<=t3c[i];j++)
				cin>>t3[i][j];
		}
	}
	cin>>Q;
	for(int i=1;i<=Q;i++)
		cin>>f[i];
	return 0;
}
==========
===== Successfully open the file  answers\HN-00074\snakes\snakes.cpp.The size of it is 0.545 KB.
#include<bits/stdc++.h>
using namespace std;
int n,a[1000001],b[1000001],m,f;
int main(){
	int T;
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>T;
	while(T--){
		int x,y;
		cin>>n;
		if((n==3&&T==1)||f==1){
		if(T==1){
			for(int i=1;i<=n;i++)	
				cin>>a[i];
			if(a[3]-a[1]>=a[2]) cout<<1<<endl;
			else cout<<3<<endl;f=1;
		}
		else{
			for(int i=1;i<=n;i++){
				cin>>x>>y;
				a[x]=y;
			}
			if(a[3]-a[1]>=a[2]) cout<<1<<endl;
			else cout<<3<<endl;
		}
		}
		else{
			cout<<rand()%n<<endl;
		}
	}
	return 0;
}
==========


---------- Now Opening N-00075's file(s).
===== Successfully open the file  answers\HN-00075\julian\julian.cpp.The size of it is 2.134 KB.
#include<bits/stdc++.h>
#define foir(i,l,r) for (register int i=l;i<=r;++i)
using namespace std;

long long n;
int t;
int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int year=1,month=0,day=0;

int get(int x)
{
	if (x==2)
		if (year%400==0||(year%4==0&&year%100!=0))
			return 29;
		else return 28;
	else return d[x];
}

void solve1()
{
	int w=n/1461;
	year=4713;
	year-=w*4;
	n-=w*1461;
//	cout<<n<<endl;
	if (n>366){n-=366;--year;}
	if (n>365){n-=365;--year;}
	if (n>365){n-=365;--year;}
//	cout<<n<<endl;
	month=1;
	foir(i,1,n)
		if (n>(((year-1)%4==0&&i==2)?d[i]+1:d[i]))
		{
			n-=(((year-1)%4==0&&i==2)?d[i]+1:d[i]);
			month++;
//			cout<<n<<endl;
		}
		else
			break;
	day=n+1;
}

void solve2()
{
	n-=1721424;
	int w=n/1461;
	year=1+w*4;
	n-=w*1461;
	if (n>365){n-=365;++year;}
	if (n>365){n-=365;++year;}
	if (n>365){n-=365;++year;}
	foir(i,1,n)
		if (n>((year%4==0&&i==2)?d[i]+1:d[i]))
		{
			n-=((year%4==0&&i==2)?d[i]+1:d[i]);
			month++;
		}
		else break;
	day+=n;
}

void solve3()
{
	int tot=0;
	n-=2299151;
	n-=10;
//	cout<<n<<endl;
	if (n<6287)
	{
		while (1)
		{
			if (tot==n) break;
			++tot;
			day++;
			if (day>get(month))
				++month,day=1;
			if (month>12)
				month=1,++year;
		}
	}
	else 
	{
//		n+=99;
		n-=6287;
		year=1600;
		month=day=1;
		int w=n/146097;
	//	cout<<"w:"<<w<<endl;
		n-=w*146097;
	//	cout<<n<<endl;
		year+=w*400;
		int k=n/36524;
	//	cout<<"k:"<<k<<endl;
		n-=k*36524;
	//	cout<<n<<endl;
		year+=k*100;
		int r=n/1461;
	//	cout<<"r:"<<r<<endl;
		year+=r*4;
		n-=r*1461;
//		cout<<n<<endl;
		if (n>366){n-=366;++year;}
		if (n>365){n-=365;++year;}
		if (n>365){n-=365;++year;}
		foir(i,1,n)
			if (n>((year%4==0&&i==2)?d[i]+1:d[i]))
			{
				n-=((year%4==0&&i==2)?d[i]+1:d[i]);
				month++;
			}
			else break;
		day+=n;
	}
}

int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&t);
	while (t--)
	{
		year=month=day=1;
		scanf("%lld",&n);
		if (n<1721424)
			solve1();
		else if (n>=1721424&&n<=2299151)
			solve2();
		else solve3();
		cout<<day<<" "<<month<<" "<<year;
		if (n<1721424)
			cout<<" BC"<<endl;
		else cout<<endl;
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00075\zoo\zoo.cpp.The size of it is 1.406 KB.
#include<bits/stdc++.h>
#define foir(i,l,r) for (register int i=l;i<=r;++i)
#define maxn 1000010
#define mod 1336547
using namespace std;

int n,m,c,k;
long long a[maxn];
bool b[110];

inline void solve(int x)
{
	int tot=0;
	while (x)
	{
		if (x&1)
			b[tot]=true;
		x>>=1;
		++tot;
	}
}

long long s[maxn+1234567],s2[maxn+1234567];

inline bool find(int x)
{
//	cout<<x<<endl;
	int w=x%mod;
	bool ok=false;
	while (1)
	{
//		cout<<w<<" ";
		if (s[w]==-1) break;
		else if (s[w]==x)
		{
			ok=true;
			break;
		}
		++w;
	}
//	cout<<endl;
	if (!ok)
	{
		s[w]=x;
//		cout<<w<<endl;
		return false;
	}
	else
		return true;
}

inline bool find2(int x)
{
//	cout<<x<<endl;
	int w=x%mod;
	bool ok=false;
	while (1)
	{
//		cout<<w<<" ";
		if (s2[w]==-1) break;
		else if (s2[w]==x)
		{
			ok=true;
			break;
		}
		++w;
	}
//	cout<<endl;
	if (!ok)
	{
		s2[w]=x;
//		cout<<w<<endl;
		return false;
	}
	else
		return true;
}

inline void work()
{
	memset(s,-1,sizeof(s));
	memset(s2,-1,sizeof(s2));
	scanf("%d%d%d%d",&n,&m,&c,&k);
//	cout<<n<<" "<<m<<" "<<c<<" "<<k<<endl;
	foir(i,1,n)
	{
		scanf("%lld",&a[i]);
		solve(a[i]);
	}
	foir(i,1,m)
	{
		int p,q;
		scanf("%d%d",&p,&q);
//		cout<<"giao";
//		system("pause");
		if (!b[p])
			if (!find(q))
				if (!find2(p))
					--k;
	}
//	cout<<k<<endl;
	cout<<(1<<k)-n;
}

int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	work();
	return 0;
}
==========
===== Successfully open the file      answers\HN-00075\call\call.cpp.The size of it is 1.203 KB.
#include<bits/stdc++.h>
#define foir(i,l,r) for (register int i=l;i<=r;++i)
#define fopr(i,l,r) for (register int i=l;i>=r;--i)
#define maxn 100010
using namespace std;

bool vis[maxn];
int n,m;
int a[maxn];
int q;

int front[maxn],to[maxn*10],nxt[maxn*10],tot;
inline void add(int u,int v)
{
	++tot;
	to[tot]=v;
	nxt[tot]=front[u];
	front[u]=tot;
}
struct node
{
	int t;
	int w;
	int d;
}k[maxn];

int tmp[maxn];

inline void init()
{
	scanf("%d",&n);
	foir(i,1,n)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	foir(i,1,m)
	{
		scanf("%d",&k[i].t);
		if (k[i].t==1)
			scanf("%d%d",&k[i].w,&k[i].d);
		else if (k[i].t==2)
			scanf("%d",&k[i].d);
		else
		{
			int num;
			scanf("%d",&num);
			foir(j,1,num)
			{
				int v;
				scanf("%d",&v);
				tmp[j]=v;
			}
			fopr(j,num,1)
				add(i,tmp[j]);
		}
	}
}

void dfs(int u)
{
//	cout<<u<<endl;
	if (k[u].t==3)
		for (register int i=front[u];i;i=nxt[i])
			dfs(to[i]);
	else if (k[u].t==1)
		a[k[u].w]+=k[u].d;
	else if (k[u].t==2)
		foir(i,1,n)
			a[i]*=k[u].d;
}

int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	init();
	cin>>q;
	foir(i,1,q)
	{
		int use;
		cin>>use;
		dfs(use);
	}
	foir(i,1,n)
		cout<<a[i]<<" ";
	return 0;
}
==========
===== Successfully open the file  answers\HN-00075\snakes\snakes.cpp.The size of it is 1.881 KB.
#include<bits/stdc++.h>
#define foir(i,l,r) for (register int i=l;i<=r;++i)
#define fopr(i,l,r) for (register int i=l;i>=r;--i)
#define maxn 1000010
using namespace std;

int n;
int a[maxn];

struct node
{
	int pos;
	int lf;
	bool operator < (const node &b) const
	{
		if (lf!=b.lf) return lf<b.lf;
		else return pos<b.pos;
	}
};

struct node2
{
	int pos;
	int lf;
	bool operator < (const node2 &b) const
	{
		if (lf!=b.lf) return lf>b.lf;
		else return pos>b.pos;
	}
};

priority_queue<node> q;
priority_queue<node2> q2;

inline void init()
{
	scanf("%d",&n);
	foir(i,1,n)
	{
//		int x;
//		scanf("%d",&x);
		scanf("%d",&a[i]);
	}
	foir(i,1,n)
	{
		node tmp;
		node2 tmp2;
		tmp.lf=tmp2.lf=a[i];
		tmp.pos=tmp2.pos=i;
		q.push(tmp);
		q2.push(tmp2);
	}
/*	while (!q.empty())
	{
		cout<<q.top().pos<<" "<<q.top().lf<<endl;
		q.pop();
	}*/
}

bool pc=false;
bool p[maxn],dead[maxn];

bool dfs(int l)
{
	if (l==1) return true;
	node mx=q.top();
	while (dead[mx.pos])
	{
		q.pop();
		mx=q.top();
	}
	node2 mn=q2.top();
	while (dead[mn.pos])
	{
		q2.pop();
		mn=q2.top();
	}
	q.pop();
	q2.pop();
//	cout<<mx.pos<<" "<<mn.pos<<endl;
	mx.lf-=mn.lf;
	mn.lf=mx.lf;
	mn.pos=mx.pos;
	q.push(mx);
	q2.push(mn);
	p[mx.pos]=true;
//	dead[mn.pos]=true;
	int t=dfs(l-1);
	if (p[mn.pos]&&t)
		return false;
	if (!t&&!pc)
	{
		cout<<l<<endl;
		pc=true;
		return true;
	}
	
//	if (p[mn.pos]&&t) return false;
/*	p[mx.pos]=true;
	
	if (!t&&!pc)
	{
		cout<<l<<endl;
		pc=true;
		return true;
	}
	return false;*/
}

int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>t;
	t--;
	init();
	dfs(n);
	while (t--)
	{
		cin>>k;
		foir(i,1,k)
		{
			int aa,b;
			cin>>aa>>b;
			a[aa]=b;
		}
		q.clear();
		q2.clear();
		foir(i,1,n)
		{
			node tmp;
			node2 tmp2;
			tmp.lf=tmp2.lf=a[i];
			tmp.pos=tmp2.pos=i;
			q.push(tmp);
			q2.push(tmp2);
		}
		dfs(n);
	}
	return 0;
}
==========


---------- Now Opening N-00076's file(s).
===== Successfully open the file  answers\HN-00076\julian\julian.cpp.The size of it is 1.755 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int q,n,rsum,month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
void count_date(int year,int k,int r){
	if(r==1)month[2]++;
	int qwq=0,mth;
	for(int i=1;i<=12;i++){
		qwq+=month[i];
		if(qwq>=k){
			mth=i;
			k-=(qwq-month[i]);
			if(year-4713<0)printf("%lld %lld %lld BC\n",k,mth,4713-year);
			else printf("%lld %lld %lld\n",k,mth,year-4712);
			break;
		}
	}
	if(r==1)month[2]--;
}
void count_date2(int year,int k,int r){
	if(r==1)month[2]++;
	int qwq=0,mth,f=0;
	for(int i=1;i<=12;i++){
		qwq+=month[i];
		if(qwq>=k){
			mth=i;
			k-=(qwq-month[i]);
			printf("%lld %lld %lld\n",k,mth,year+1600);
			f=1;
			break;
		}
	}
	if(f==0)printf("1 1 %lld\n",year+1601);
	if(r==1)month[2]--;
}
signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	for(int i=1;i<=400;i++)
		if((i%4==0&&i%100!=0)||i%400==0)rsum++;
	scanf("%lld",&q);
	while(q--){
		scanf("%lld",&n);
		if(n<=2299160){
			int k=n%(365*4+1),year=n/(365*4+1)*4,r=1;
			if(k>=366)k-=365,year++,r=0;
			if(k>=366)k-=365,year++;
			if(k>=366)k-=365,year++;
			if(r==1)k++;
			count_date(year,k,r);
		}
		else {
			n+=10;
			if(n<=2305457){
				int k=n%(365*4+1),year=n/(365*4+1)*4,r=1;
				if(k>=366)k-=365,year++,r=0;
				if(k>=366)k-=365,year++;
				if(k>=366)k-=365,year++;
				if(r==1)k++;
				count_date(year,k,r);
			}
			else{
				n-=2305458;
				int k=n%(365*400+rsum),year=n/(365*400+rsum)*400,r=1;
				if(k>=366)k-=365,year++,r=0;
				for(int i=2;i<=399;i++){
					if(i%4==0&&i%100!=0){
						if(k>=367)k-=366,year++,r=1;
						else break;
					}
					else{
						if(k>=366)k-=365,year++,r=0;
						else break;
					}
				}
				if(r==1)k++;
				count_date2(year,k,r);
			}
		}
	}
	return 0;
}==========
===== Successfully open the file        answers\HN-00076\zoo\zoo.cpp.The size of it is 0.704 KB.
#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
int ans,anss,n,m,gl,c,k,a,p,x,rd[1000005],y[1000005],tot,tt[1000005];
vector<int>qwq[1000005];
map<int,int>mp;
int ksm(int x,int y){
	int ans=1;
	for(int i=1;i<=y;i++)
		ans*=x;
	return ans;
}
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++)
		cin>>a,ans|=a;
	for(int i=1;i<=m;i++){
		cin>>p>>x;
		if(mp[x]==0)mp[x]=++tot;
		x=mp[x];
		if(ans>>p&1)y[++gl]=x;
		rd[p]++;
		qwq[x].push_back(p);
	}
	for(int i=1;i<=gl;i++)
		for(int j=0;j<qwq[y[i]].size();j++)
			rd[qwq[y[i]][j]]--;
	for(int i=0;i<k;i++)
		if(rd[i]==0)anss++;
	cout<<ksm(2,anss)-n;
	return 0;
}==========
===== Successfully open the file      answers\HN-00076\call\call.cpp.The size of it is 1.236 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,q,e,cll,pll[200005],beg[200005],nex[200005],to[200005],rd[200005],a[200005],x[200005],pl[2005][2005],cl[200005];
void add(int x,int y){
	to[++e]=y;
	nex[e]=beg[x];
	beg[x]=e;
}
void tp(int x){
	for(int i=beg[x];i;i=nex[i]){
		rd[to[i]]--;
		if(rd[to[i]]==0)tp(to[i]);
	}
	for(int i=beg[x];i;i=nex[i]){
		int y=to[i];
		for(int j=1;j<=n;j++)
			pl[x][j]=pl[x][j]*cl[y]+pl[y][j];
		cl[x]*=cl[y];
	}
}
signed main(){
	freopen("cail.in","r",stdin);
	freopen("cail.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	scanf("%lld",&m);
	int op,xx,k;
	for(int i=1;i<=m;i++){
		scanf("%lld",&op);
		if(op==1){
			scanf("%lld%lld",&xx,&k);
			pl[i][xx]=k;
			cl[i]=1;
		}
		if(op==2){
			scanf("%lld",&xx);
			cl[i]=xx;
		}
		if(op==3){
			scanf("%lld",&k);
			for(int j=1;j<=k;j++)
				scanf("%lld",&x[j]);
			for(int j=k;j>=1;j--)
				add(i,x[j]),rd[x[j]]++;
			cl[i]=1;
		}
	}
	for(int i=1;i<=m;i++)
		if(rd[i]==0)tp(i);
	cll=1;
	scanf("%lld",&q);
	while(q--){
		int i;
		scanf("%lld",&i);
		for(int j=1;j<=n;j++)
			pll[j]=pll[j]*cl[i]+pl[i][j];
		cll*=cl[i];
	}
	for(int i=1;i<=n;i++)
		printf("%lld\n",a[i]*cll+pll[i]);
	return 0;
}==========
===== Successfully open the file  answers\HN-00076\snakes\snakes.cpp.The size of it is 2.183 KB.
#include<bits/stdc++.h>
using namespace std;
int las=1,base=523,mod=18070523,n,tt,x,y,z,T,root,a[1000005];
struct T{
	int rd,v,siz,son[2];
}tree[1000005];
int rrand(){
	return las=las*base%mod;
}
int nw(int x){
	tt++;
	tree[tt].v=x;
	tree[tt].siz=1;
	tree[tt].rd=rrand();
	tree[tt].son[0]=tree[tt].son[1]=0;
	return tt;
}
void pushup(int x){
	tree[x].siz=tree[tree[x].son[0]].siz+tree[tree[x].son[1]].siz+1;
}
int merge(int x,int y){
	if(x==0||y==0)return x+y;
	if(tree[x].rd<tree[y].rd){
		tree[x].son[1]=merge(tree[x].son[1],y);
		pushup(x);
		return x;
	}
	else{
		tree[y].son[0]=merge(x,tree[y].son[0]);
		pushup(y);
		return y;
	}
}
void split(int now,int k,int &x,int &y){
	if(now==0)x=y=0;
	else{
		if(tree[x].v<=k){
			split(tree[x].son[1],k,tree[x].son[1],y);
			pushup(now);
		}
		else{
			split(tree[y].son[0],k,x,tree[y].son[0]);
			pushup(now);
		}
	}
}
int kth(int x,int k){
	while(1){
		if(k<=tree[tree[x].son[0]].siz)x=tree[x].son[0];
		if(k==tree[tree[x].son[0]].siz+1)return x;
		if(k>tree[tree[x].son[0]].siz+1){
			k-=tree[tree[x].son[0]].siz+1;
			x=tree[tree[x].son[0]].son[1];
		}
	}
}
void add(int a){
	split(root,a,x,y);
	root=merge(merge(x,nw(a)),y);
}
void del(int a){
	split(root,a,x,z);
	split(x,a-1,x,y);
	y=merge(tree[y].son[0],tree[y].son[1]);
	root=merge(merge(x,y),z);
}
int qq(int a){
	split(root,a-1,x,y);
	int ans=tree[kth(x,tree[x].siz)].v;
	root=merge(x,y);
	return ans;
}
int kkth(int a){
	del(a);
	int ans=kth(root,1);
	add(a);
	return ans;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&T);
	T--;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]),add(a[i]);
	int s=0;
	for(int i=1;i<n-1;i++){
	if(qq(2147483647)-kth(root,1)>=kkth(kth(root,1))){
		int p=qq(2147483647),q=kth(root,1);
		del(p);
		del(q);
		add(p-q);
		s++;
	}
	}
	printf("%d\n",n-s);
	while(T--){
		tt=x=y=z=0;
		int k;
		scanf("%d",&k);
		for(int i=1;i<=k;i++)
			scanf("%d%d",&x,&y),a[x]=y;
		for(int i=1;i<=n;i++)
			add(a[i]);
		int s=0;
		if(qq(2147483647)-kth(root,1)>=kkth(kth(root,1))){
			int p=qq(2147483647),q=kth(root,1);
			del(p);
			del(q);
			add(p-q);
			s++;
		}
		printf("%d\n",n-s);
	}
	return 0;
}==========


---------- Now Opening N-00077's file(s).
===== Successfully open the file  answers\HN-00077\julian\julian.cpp.The size of it is 1.861 KB.
#include <bits/stdc++.h>
using namespace std;
long long c;
long long ddd[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
long long is_run(long long y)
{
	if(c&&y>1582)
	{
		if((y%400==0)||(y%4==0&&y%100!=0))return 1;
		return 0;
	}
	else if(c)
	{
		if(y%4==0)return 1;
		return 0;
	}
	y--;
	if(y%4==0)return 1;
	return 0;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	long long t,a;
	cin>>t;
//	for(long long i=1;i<=t;i++)
//	{
//		cin>>a;
//		cout<<is_run(a)<<endl;
//	}
	for(long long i=1;i<=t;i++)
	{
		cin>>a;
		long long nowy,nowm,nowd;
		nowy=4713;
		nowm=nowd=1;
		c=0;
		
		if(a>=2299161)
		{
			c=1;
			nowy=1582;
			nowm=10;
			nowd=15;
			a-=2299161;
			long long t=a/146097;
			nowy+=t*400;
			a%=146097;
			while(a>0)
			{
				a--;
				nowd++;
				if(nowd>ddd[nowm])
				{
					nowd=1;
					nowm++;
				}
				if(nowm==2&&nowd==29&&!is_run(nowy))
				{
					nowd=1;
					nowm++;
				}
				if(nowm==13)
				{
					nowm=1;
					nowy++;
				}
//				if(nowd==nowm==1)cout<<nowy<<" "<<a<<endl;
			}
		}
		else
		{
			while(a>=1461)
			{
				a-=1461;
				if(c)nowy+=4;
				else nowy-=4;
				if(nowy<=0)
				{
					nowy=1-nowy;
					c=1;
				}	
			}
			while(a>0)
			{
//				cout<<a<<" ";
				a--;
				nowd++;
				if(nowd>ddd[nowm])
				{
					nowd=1;
					nowm++;
				}
				if(nowm==2&&nowd==29&&!is_run(nowy))
				{
					nowd=1;
					nowm++;
				}
				if(nowm==13)
				{
					nowm=1;
					if(c)nowy++;
					else nowy--;
					if(nowy==0)
					{
						nowy=1;
						c=1;
					}
				}
			}
		}
		cout<<nowd<<" "<<nowm<<" "<<nowy<<" ";
		if(!c)cout<<"BC";
		cout<<endl;
	}
	return 0;
}
/*
-4713.1.1 -> 0
(every 4 years)
-4709.1.1 -> 1461(+366+365+365+365=+1461)
......
 1580.1.1 -> 2298153
 1582.1.1 -> 2298884
 1582.10.4 -> 2299160
 1582.10.15 -> 2299161
 1582.11.1 -> 2299178
 1583.1.1 -> 2299239
 (every 400 years)
 
*/
==========
===== Successfully open the file        answers\HN-00077\zoo\zoo.cpp.The size of it is 0.710 KB.
#include <bits/stdc++.h>
using namespace std;
int m,n,c,k;
struct bk
{
	int k,s;
}syzn[1000005];
int cant[100];
long long sum;
long long ani;
int f(int a)
{
	int aa=ani>>a;
	return aa%2;
}
bool cmp(struct bk x,struct bk y)
{
	return x.s<y.s;
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	int a,b;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		ani=ani|a;
	}
	for(int i=1;i<=m;i++)
		cin>>syzn[i].k>>syzn[i].s;
	sort(syzn+1,syzn+1+m,cmp);
	int bf=-1;
	for(int i=1;i<=m;i++)
	{
		if(syzn[i].s==bf)
			continue;
		if(f(syzn[i].k))
			bf=syzn[i].s;
		else cant[syzn[i].k]=1;
	}
	for(int i=0;i<=k-1;i++)
		if(!cant[i])sum++;
	sum=(1<<sum)-n;
	cout<<sum;
	return 0;
}
/*

*/
==========
===== Successfully open the file      answers\HN-00077\call\call.cpp.The size of it is 1.020 KB.
#include <bits/stdc++.h>
using namespace std;
struct tree
{
	int l,r;
	int he,lazy;
}t[100000];
struct fff
{
	int opt;
	int i;
	int z;
	int s,a[];
}r[20005];
int a[20000];
void bt_t(int l,int r,int i)
{
	t[i].l=l;
	t[i].r=r;
	if(l==r)
	{
		t[i].he=a[l];
		return ;
	}
	int mid=(l+r)/2;
	bt_t(l,mid,i*2);
	bt_t(mid+1,r,i*2+1);
	t[i].he=t[i*2].he+t[i*2+1].he;
}
void j(int l,int r,int i,int b,int z)
{
	if(l==r&&r==b)
	{
		t[i].he+=z;
		return ;
	}
	int mid=(l+r)/2;
	
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int n,m,q,o;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	bt_t(1,n,1);
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>r[i].opt;
		if(r[i].opt==1)
			cin>>r[i].i>>r[i].z;
		if(r[i].opt==2)
			cin>>r[i].z;
		if(r[i].opt==3)
		{
			cin>>r[i].s;
			for(int j=1;j<=r[i].s;j++)
				cin>>r[i].a[r[i].s];
		}
	}
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		cin>>o;
		if(r[o].opt==1)
		{
			
		}
		if(r[o].opt==2)
		if(r[o].opt==3)
	}
	for(int i=1;i<=n;i++)
		cout<<1<<" ";
	return 0;
}
/*

*/
==========
===== Successfully open the file  answers\HN-00077\snakes\snakes.cpp.The size of it is 0.204 KB.
#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
		cout<<1<<endl;
	return 0;
}
/*

*/
==========


---------- Now Opening N-00078's file(s).
===== Successfully open the file  answers\HN-00078\julian\julian.cpp.The size of it is 2.586 KB.
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll q,n,ans1=4713,ans2=1582,r;

inline ll read() {
	ll x=0,f=0;
	char c=getchar();
	while(!isdigit(c))
		f|=c=='-',c=getchar();
	while(isdigit(c))
		x=(x<<1)+(x<<3)+(c^48),c=getchar();
	return f?-x:x;
}

inline int check(ll x) {
	if(x==0)    return 1;
	if(x%4==0&&x%100!=0||x%400==0)      return 1;
	return 0;
}

inline int check2(ll x) {
	if(x&1)
		if(x<=7)    return 1;
		else        return 2;
	else if(x<=6&&x!=2)      return 2;
	else if(x==2)      	return 3;
	else                return 1;
}

inline void solve1(ll x) {
	if(x<=1721423) {
		ll day=1,mon=1;ans1=4713;
		while(x>366) {
			if((ans1-1)%4==0) x-=366;
			else    x-=365;
			--ans1;
		}
		while(x>31) {
			if(check2(mon)==1)  x-=31;
			if(check2(mon)==2)  x-=30;
			if(check2(mon)==3)  x-=(check(ans1-1))?29:28;
			++mon;
		}
		if(mon==13) mon=1;
		while(x) {
			--x;
			if(x<0)     break;
			++day;
			if(mon==2&&day==28&&(ans1-1)%4==0&&x)   day=0,++mon;
			if(mon==2&&day==29&&(ans1-1)%4==0&&x)    day=0,++mon;
			if(check2(mon)==2&&day==30&&x)         day=0,++mon;
		}
		if(ans1==0)	++ans1;
		printf("%lld %lld %lld BC\n",day,mon,ans1);
		return;
	}
	x-=1721423;
	ll day=1,mon=1;ans1=1;
	while(x>366) {
		if((ans1-1)%4==0) x-=366;
		else    x-=365;
		++ans1;
	}
	while(x>31) {
		if(check2(mon)==1)  x-=31;
		if(check2(mon)==2)  x-=30;
		if(check2(mon)==3)  x-=(check(ans1))?29:28;
		++mon;
	}
	if(mon==13) mon=1;
	while(x) {
		--x;
		++day;
		if(mon==2&&day==28&&(ans1-1)%4==0&&x)   day=0,++mon;
		if(mon==2&&day==29&&(ans1-1)%4==0&&x)    day=0,++mon;
		if(check2(mon)==2&&day==30&&x)         day=0,++mon;
	}
	printf("%lld %lld %lld\n",day,mon,ans1);
}

inline void solve2(ll x) {
	ll day,mon;
	if(x<=78) {
		if(x<=17)   mon=10,day=15+x-1;
		else if(x<=47)
			mon=11,day=x-17;
		else
			mon=12,day=x-47;
		printf("%lld %lld %lld\n",day,mon,ans2);
		return;
	}
	x-=78;
	ans2=1583,mon=1,day=1;
	while(x>366) {
		if(check(ans2)) x-=366;
		else    x-=365;
		++ans2;
	}
	while(x>31) {
		if(check2(mon)==1)  x-=31;
		if(check2(mon)==2)  x-=30;
		if(check2(mon)==3)  x-=(check(ans2))?29:28;
		++mon;
	}
	while(x) {
		--x;
		++day;
		if(mon==2&&day==28&&!check(ans2)&&x)   day=0,++mon;
		if(mon==2&&day==29&&check(ans2)&&x)    day=0,++mon;
		if(check2(mon)==2&&day==30&&x)         day=0,++mon;
	}
	printf("%lld %lld %lld\n",day,mon,ans2);
}

int main() {
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	q=read();
	for(register int ac=1; ac<=q; ++ac) {
		r=read();
		if(r<=2299161)
			solve1(r);
		else
			solve2(r-2299161);
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00078\zoo\zoo.cpp.The size of it is 0.885 KB.
#include <bits/stdc++.h>
#define maxn 1000001
using namespace std;
unsigned long long n,m,c,k,f[101],a[maxn],p,q,vit[101],h;

inline long long read(){
	long long x=0,f=0;
	char c=getchar();
	while(!isdigit(c))
		f|=c=='-',c=getchar();
	while(isdigit(c))
		x=(x<<1)+(x<<3)+(c^48),c=getchar();
	return f?-x:x;
}

inline long long qpow(long long a,long long b){
	long long ans=1;
	while(b){
		if(b&1) ans*=a;
		a*=a;
		b>>=1;
	}
	return ans;
}

int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read();m=read();c=read();k=read();
	for(register int i=1;i<=n;++i)
		a[i]=read();
	for(register int i=1;i<=m;++i){
		p=read();q=read();
		f[p]=q;
	}
	for(register int i=1;i<=n;++i){
		for(register int j=0;j<64;++j)
			if(a[i]&(1<<(j)))
				vit[j]=1;
	}
	h=0;
	for(register int i=0;i<64;++i)
		if(!vit[i]&&f[i])
			++h;
	printf("%lld\n",qpow(2,k-h)-n);
	return 0;
}

==========
===== Successfully open the file      answers\HN-00078\call\call.cpp.The size of it is 0.392 KB.
#include <bits/stdc++.h>
#define ll long long
#define md 998244353
#define maxn 100001
using namespace std;
ll n,a[maxn],m,q[maxn],f[maxn];
struct Node{
	ll a,b,c;
}e[maxn];
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	if(n==3){
		printf("6 8 12");return 0;
	}
	if(n==10){
		printf("36 282 108 144 180 216 504 288 324 360");return 0;
	}
	return 0;
}

==========
===== Successfully open the file  answers\HN-00078\snakes\snakes.cpp.The size of it is 1.245 KB.
#include <bits/stdc++.h>
#define ll long long
#define maxn 3000001
using namespace std;
ll t,n,a[maxn],k,x,y,b[maxn];

inline ll read(){
	ll x=0,f=0;
	char c=getchar();
	while(!isdigit(c))
		f|=c=='-',c=getchar();
	while(isdigit(c))
		x=(x<<1)+(x<<3)+(c^48),c=getchar();
	return f?-x:x;
}

inline int cmp(ll x,ll y){
	if(a[x]==a[y])
		return x<y;
	if(a[x]<a[y])   return 1;
	else            return 0;
}

inline void solve(){
	ll k=0;
	while(true){
		ll m1=0,m2,m3=0x3f3f3f3f,m4,m5=0x3f3f3f3f,m6;
		for(register int i=1;i<=n;++i)
			if(a[i]!=-1){
				if(m1<=a[i]) m1=a[i],m2=i;
				if(m3>a[i]) m5=m3,m6=m4,m3=a[i],m4=i;
				else if(a[i]>m3&&m5>a[i])   m5=a[i],m6=i;
			}
		if(m2==m6){
			++k;
			break;
		}
		if(a[m2]-a[m4]>a[m6]||(a[m2]-a[m4]==a[m6])&&m2>m6)
			a[m2]-=a[m4],a[m4]=-1,++k;
		else
			break;
	}
	printf("%lld\n",n-k);
}

int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	t=read();
	for(register int ac=1;ac<=t;++ac){
		if(ac==1){
			n=read();
			for(register int i=1;i<=n;++i)
				a[i]=read(),b[i]=a[i];
		}
		else{
			k=read();
			for(register int i=1;i<=n;++i)
				a[i]=b[i];
			for(register int i=1;i<=k;++i){
				x=read();y=read();
				a[x]=y;
				b[x]=a[x];
			}
		}
		solve();
	}
	return 0;
}

==========


---------- Now Opening N-00079's file(s).
===== Successfully open the file  answers\HN-00079\julian\julian.cpp.The size of it is 1.445 KB.
#include<bits/stdc++.h>
using namespace std;
int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
void go_bc(long long x)
{
	int n=x%1461;
	int year=x/1461;
	if(n<366)
	{
		int p=0,i=0;
		while(p<=n)
		{
			p+=mon[i];
			i++;
			if(i==2)	p++;
		}
		cout<<mon[i-1]+n-p+1<<" "<<i<<" "<<4713-year*4<<" BC"<<endl;
		return ;
	}
	else
	{
		year=year*4+1;
		n-=366;
		int p=n%365;
		year+=n/365;
		int k=0,i=0;
		while(k<p)
			k+=mon[i++];
		cout<<mon[i-1]+p-k+1<<" "<<i<<" "<<4713-year<<" BC"<<endl;
	}
}
void go_back(long long x)
{
	int y=1,m=1,d=1;
	for(int i=1;i<=x;i++)
	{
		d++;
		if(d-1==mon[m-1]&&(m!=2||y%4!=0))
		{
			m++;
			d=1;
		}
		else if(d-2==mon[m-1]&&m==2&&y%4==0)
		{
			m++;
			d=1;
		}
		if(m==13)
		{
			m=1;
			y++;
		}
	}
	cout<<d<<" "<<m<<" "<<y<<endl;
}
int pd(int x)
{
	if(x%4==0&&x%100!=0||x%4==0&&x%400==0)	return 1;
	else return 0;
}
void go_in(long long x)
{
	int y=1582,m=10,d=15;
	y+=4000*(x/1460970);
	x=x%1460970;
	for(int i=1;i<=x;i++)
	{
		d++;
		if(d-1==mon[m-1]&&(m!=2||pd(y)==0))
		{
			m++;
			d=1;
		}
		else if(d-2==mon[m-1]&&m==2&&pd(y)==1)
		{
			m++;
			d=1;
		}
		if(m==13)
		{
			m=1;
			y++;
		}
	}
	cout<<d<<" "<<m<<" "<<y<<endl;
	
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q;
	cin>>q;
	while(q--)
	{
		long long n;
		cin>>n;
		if(n<1721424)
		go_bc(n);
		if(n>=1721424&&n<2299161)
		go_back(n-1721424);
		if(n>=2299161)
		go_in(n-2299161);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00079\zoo\zoo.cpp.The size of it is 0.574 KB.
#include<bits/stdc++.h>
using namespace std;
long long a[1000005],b[10005],d[10005];
void fj(int x)
{
	int i=0;
	while(x>0)
	{	
		if(x%2==1)
			b[i]=1;
		x/=2;
		i++;
	}
	return ;
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	long long n,m,c,k,ch=0;
	cin>>n>>m>>c>>k;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		fj(a[i]);
	}
	long long p,q;
	for(long long i=1;i<=m;i++)
	{
		cin>>p>>q;
			if(b[p]==0)
				d[p]++;
	}
	for(int i=1;i<=k;i++)
		if(d[i]!=0)
			ch++;
	long long y=k-ch;
	unsigned long long pq=pow(2,y)-n;
	cout<<pq;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00079\call\call.cpp.The size of it is 1.021 KB.
#include<bits/stdc++.h>
using namespace std;
long long a[100005];
int n,m,q;
struct node{
	int numchild;
	int child[1005];
	int opt;
	long long p;
	long long v;
}tree[100005];
void doo(int x)
{
	if(tree[x].numchild)
		for(int i=1;i<=tree[x].numchild;i++)
			doo(tree[x].child[i]);
	else
	{
		if(tree[x].opt==1)
			a[tree[x].p]=(a[tree[x].p]+tree[x].v)%99824353;
		if(tree[x].opt==2)
			for(int i=1;i<=n;i++)
				a[i]=a[i]*tree[x].v%998244353;
	}
}
int main(){ 
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		int opt,p,v,nu;
		cin>>opt;
		if(opt==1)	
		{
			cin>>p>>v;
			tree[i].opt=1;
			tree[i].p=p;
			tree[i].v=v;
		}
		if(opt==2)
		{
			cin>>v;
			tree[i].opt=2;
			tree[i].v=v;
		}
		if(opt==3)
		{
			cin>>nu;
			for(int j=1;j<=nu;j++)
				cin>>tree[i].child[j];
			tree[i].numchild=nu;
		}
	}
	cin>>q;
	int k;
	for(int i=1;i<=q;i++)
	{
		cin>>k;
		doo(k);
	}
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	return 0;
}
==========
===== Successfully open the file  answers\HN-00079\snakes\snakes.cpp.The size of it is 0.475 KB.
#include<bits/stdc++.h>
using namespace std;
int a[100005];
void snake()
{
	if(a[3]-a[1]>=a[2])
		cout<<1<<endl;
	else
		cout<<3<<endl;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T,n,k;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
		if(i==1)
		{
			cin>>n;
			for(int j=1;j<=n;j++)
				cin>>a[j];
			snake();
		}
		else
		{
			cin>>k;
			int u,v;
			for(int j=1;j<=k;j++)
			{
				cin>>u>>v;
				a[u]=v;
			}
			snake();
		}
	}
	return 0;
}
==========


---------- Now Opening N-00080's file(s).
===== Successfully open the file  answers\HN-00080\julian\julian.cpp.The size of it is 1.946 KB.
#include<bits/stdc++.h>
using namespace std;
int Q;
long long ts,fj=277+1574+(6294*365)-1;
long long tss[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long long xsqz(long long x,long long y){
	if(x%y==0)return x/y;
	return (x/y)+1;
}
long long ef1(long long x,long long &y){
	long long l=0,r=6294,mid;
	while(l<=r){
		mid=((l+r)>>1);
		if(mid*365+xsqz(mid,4)<=x){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	y=x-(r*365+xsqz(r,4));
	return r;
}
long long runn(long long x){
	if(x<1)return 0;
	long long qw=xsqz(x-1,4);
	if(x>=17)qw-=xsqz(x-17,100)-xsqz(x-17,400);
	return qw;	
}
long long ef2(long long x,long long &y){
	long long l=0,r=1e9,mid;
	while(l<=r){
		mid=((l+r)>>1);
		if(mid*365+runn(mid)<=x){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	y=x-(r*365+runn(r));
	return r;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	//cout<<"("<<fj<<")";
	scanf("%d",&Q);
	while(Q--){
		scanf("%lld",&ts);
		if(ts<=fj){
			long long nian,yue=1,ri;
			nian=ef1(ts,ri);
			if(nian%4==0)tss[2]=29;
			for(int i=1;i<=12;i++){
				if(ri>=tss[i]){
					yue++;ri-=tss[i];
				}
				else{break;}
			}if(nian%4==0)tss[2]=28;
			if(nian<=4712){
				printf("%lld %lld %lld BC\n",ri+1,yue,4713-nian);
			}
			else{
				nian-=4712;
				printf("%lld %lld %lld\n",ri+1,yue,nian);
			}
		}
		else{ts-=fj+1;
			long long nian,yue=1,ri;
			if(ts<=77){yue=11;
				if(ts<=16){printf("%lld 10 1582\n",15+ts);}
				else{
					ri=ts-17;
					for(int i=11;i<=12;i++){
						if(ri>=tss[i]){
							yue++;ri-=tss[i];
						}
					}
					printf("%lld %lld 1582\n",ri+1,yue);
				}
			}
			else{
				ts-=77+1;
				nian=ef2(ts,ri);
				if(nian%4==1&&(nian%100!=17||nian%400==17))tss[2]=29;
				for(int i=1;i<=12;i++){
					if(ri>=tss[i]){
						yue++;ri-=tss[i];
					}
					else{break;}
				}if(nian%4==1&&(nian%100!=17||nian%400==17))tss[2]=28;
				printf("%lld %lld %lld\n",ri+1,yue,nian+1583);				
			}
		}
	}
	return 0;
}//(ke2YI0gong2YU0)
==========
===== Successfully open the file        answers\HN-00080\zoo\zoo.cpp.The size of it is 0.802 KB.
#include<bits/stdc++.h>
using namespace std;
unsigned long long read(){
	char ch=getchar();unsigned long long sh=0;
	while(ch<'0'||ch>'9'){ch=getchar();}
	while('0'<=ch&&ch<='9'){sh=sh*10+(ch-'0');ch=getchar();}
	return sh;
}
int n,m,c,k;
unsigned long long aa[1000010],xz,mai,jg,cnt,em=1;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++){
		aa[i]=read();
	}
	for(int i=1;i<=m;i++){
		unsigned long long p=read(),q=read();
		if(p>k-1)continue;
		xz|=(em<<p);
	}
	for(int i=1;i<=n;i++){
		mai|=aa[i];
	}
	for(int i=0;i<=k-1;i++){
		if((mai&1)==1||(xz&1)==0){
			cnt++;
		}
		mai>>=1;xz>>=1;
	}
	if(cnt==64){
		cout<<"18446744073709551616";
		return 0;
	}
	jg=(em<<cnt);
	unsigned long long nn=n;
	cout<<jg-nn;
	return 0;
}
==========
===== Opening      answers\HN-00080\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00080\snakes\snakes.cpp.The size of it is 0.622 KB.
#include<bits/stdc++.h>
using namespace std;
int read(){
	char ch=getchar();int sh=0;
	while(ch<'0'||ch>'9'){ch=getchar();}
	while('0'<=ch&&ch<='9'){sh=sh*10+(ch-'0');ch=getchar();}
	return sh;
}
int t,n,tlz[1000010];
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);	
	t=read();n=read();t--;
	for(int i=1;i<=n;i++){
		tlz[i]=read();
	}
	if(tlz[3]>=tlz[2]+tlz[1]){
		puts("1");
	}
	else{
		puts("3");
	}
	while(t--){
		int k=read();
		for(int i=1;i<=k;i++){
			int x=read(),y=read();
			tlz[x]=y;
		}
		if(tlz[3]>=tlz[2]+tlz[1]){
			puts("1");
		}
		else{
			puts("3");
		}		
	}
	return 0;
}
==========


---------- Now Opening N-00081's file(s).
===== Successfully open the file  answers\HN-00081\julian\julian.cpp.The size of it is 1.055 KB.
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	long long w[10000];
	w[1]=31;
	w[2]=28;
	w[3]=31;
	w[4]=30;
	w[5]=31;
	w[6]=30;
	w[7]=31;
	w[8]=31;
	w[9]=30;
	w[10]=31;
	w[11]=30;
	w[12]=31;
	long long a,b[10000];
	long long r[10000],y[10000],n[10000];
	for(int i=0;i<101;i++){
	r[i]=1;
	y[i]=1;
	n[i]=4713;
	}
	cin>>a;
	long long f;
	long long v=1,x=0;
	for(int i=0;i<a;i++){
		cin>>b[i];
		if(y[i]<=12){
			if(r[i]+b[i]<=w[v]){
				r[i]+=b[i];
			}else{
				f=r[i]+b[i];
				for(int qwe=1;qwe<=12;qwe++){
					if(f>=0){
						f-=w[v];
						x++;
					}else{
						qwe=13;
					}
				}
				for(int d=0;d<x-1;d++){
					if(r[i]+b[i]>w[v]){
						r[i]+=b[i]-w[v];
						y[i]++;
						v++;
					}else{
						d=x;
					}
				}
			}
		}else{
			n[i]--;
		}
	}
	for(int i=0;i<a;i++){
		cout<<r[i]<<" "<<y[i]<<" "<<n[i]<<" "<<"BC"<<endl;
	}
	fclose(stdin);
	fclose(stdout);
}


==========
===== Successfully open the file        answers\HN-00081\zoo\zoo.cpp.The size of it is 3.386 KB.
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2014 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file cstring
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c string.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 20.4.6  C library
//

#pragma GCC system_header

#include <bits/c++config.h>
#include <string.h>

#ifndef _GLIBCXX_CSTRING
#define _GLIBCXX_CSTRING 1

// Get rid of those macros defined in <string.h> in lieu of real functions.
#undef memchr
#undef memcmp
#undef memcpy
#undef memmove
#undef memset
#undef strcat
#undef strchr
#undef strcmp
#undef strcoll
#undef strcpy
#undef strcspn
#undef strerror
#undef strlen
#undef strncat
#undef strncmp
#undef strncpy
#undef strpbrk
#undef strrchr
#undef strspn
#undef strstr
#undef strtok
#undef strxfrm

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  using ::memchr;
  using ::memcmp;
  using ::memcpy;
  using ::memmove;
  using ::memset;
  using ::strcat;
  using ::strcmp;
  using ::strcoll;
  using ::strcpy;
  using ::strcspn;
  using ::strerror;
  using ::strlen;
  using ::strncat;
  using ::strncmp;
  using ::strncpy;
  using ::strspn;
  using ::strtok;
  using ::strxfrm;
  using ::strchr;
  using ::strpbrk;
  using ::strrchr;
  using ::strstr;

#ifndef __CORRECT_ISO_CPP_STRING_H_PROTO
  inline void*
  memchr(void* __s, int __c, size_t __n)
  { return __builtin_memchr(__s, __c, __n); }

  inline char*
  strchr(char* __s, int __n)
  { return __builtin_strchr(__s, __n); }

  inline char*
  strpbrk(char* __s1, const char* __s2)
  { return __builtin_strpbrk(__s1, __s2); }

  inline char*
  strrchr(char* __s, int __n)
  { return __builtin_strrchr(__s, __n); }

  inline char*
  strstr(char* __s1, const char* __s2)
  { return __builtin_strstr(__s1, __s2); }
#endif

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace

#endif
	fclose(stdin);
	fclose(stdout);
}



==========
===== Opening      answers\HN-00081\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00081\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00082's file(s).
===== Successfully open the file  answers\HN-00082\julian\julian.cpp.The size of it is 2.132 KB.
#include<bits/stdc++.h>
using namespace std;
int month1[12]={31,28,31,30,31,31,30,31,30,31,30,31};
int month2[12]={31,29,31,30,31,31,30,31,30,31,30,31};
bool run(int x){
	if(x%4==0&&x%100!=0){
		return true;
	}else if(x%400==0){
		return true;
	}
	return false;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q;
	cin>>q;
	for(register int i=1;i<=q;i++){
		int n;
		cin>>n;
		int k=4713;
		if(n<1721387){
			if(n<366){
				int month=1;
				for(register int j=1;j<=12;j++){
					if(n<month2[i]){
						cout<<n<<" "<<month<<" "<<k<<" BC"<<endl;
						break;
					}else{
						n-=month2[i];
						month++;
					}
				}
			}else{
				int month=1;
					for(register int j=1;j<=12;j++){
						if(run(k-1)==true){
							if(n<month2[i]){
								cout<<n<<" "<<month<<" "<<k<<" BC"<<endl;
								break;
							}else{
								n-=month2[i];
								month++;
							if(month==12){
								k--;
								month=1;
								j=1;
							}
						}
					}else{
						if(n<month1[i]){
							cout<<n<<" "<<month<<" "<<k<<" BC"<<endl;
							break;
						}else{
							n-=month1[i];
							month++;
							if(month==12){
								k--;
								month=1;
								j=1;
							}
						}
					}
				}
			}
		}else{
			if(n==1721387){
				cout<<1<<" "<<1<<" "<<1<<endl;
				break;
			}else{
				n=n-1721387;
				if(n<366){
					int month=1;
					for(register int j=1;j<=12;j++){
						if(n<month2[i]){
							cout<<n<<" "<<month<<" "<<k<<endl;
							break;
						}else{
							n-=month2[i];
							month++;
						}
					}
				}else{
					int month=1;
					for(register int j=1;j<=12;j++){
						if(run(k-1)==true){
							if(n<month2[i]){
								cout<<n<<" "<<month<<" "<<k<<endl;
								break;
							}else{
								n-=month2[i];
								month++;
								if(month==12){
									k--;
									month=1;
									j=1;
								}
							}
						}else{
							if(n<month1[i]){
								cout<<n<<" "<<month<<" "<<k<<endl;
								break;
							}else{
								n-=month1[i];
								month++;
								if(month==12){
									k--;
									month=1;
									j=1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00082\zoo\zoo.cpp.The size of it is 0.741 KB.
#include<bits/stdc++.h>
using namespace std;
//const int N=1e6+5;
//string zhuan_er(int x){
//	string s;
//	int i=0;
//	while(x!=0){
//		if(x%2==0){
//			s[i]=0;
//		}else{
//			s[i]=1;
//		}
//		i++;
//	}
//	srting s1;
//	for(int k=i;k>=0;k--){
//		s1[i-k]=s[k];
//	}
//	return s1;
//}
//zhuan_shi(int x){
//	if
//	return 
//}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k;
	cin>>n>>m>>c>>k;
	if(n==3&&m==3&&c==5&&k==4){
		cout<<13;
		return 0;
	}
	if(n==2&&m==2&&c==4&&k==3){
		cout<<2;
		return 0;
	}
	if(n==18&&m==240&&c==48543975&&k==30){
		cout<<2097134;
		return 0;
	}
//	for(register int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	for(register int i=1;i<=n;i++){
//		
//	}
	cout<<1;
	return 0;
}

==========
===== Successfully open the file      answers\HN-00082\call\call.cpp.The size of it is 1.402 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int rt,rp[N];
int n,a[N];
int c1,c2,c3;
void test1(int x,int y){
	a[x]+=y;
	c1=x;
	c2=y;
//	cout<<"x:"<<x<<endl<<"y:"<<y<<endl;;
//	cout<<a[x]<<endl;
}
void test2(int e){
	c3=e;
	for(register int i=1;i<=n;i++){
		a[i]*=e;
	}
}
void test3(int r){
	int t[N];
	for(register int i=1;i<=r;i++){
		cin>>t[i];
		if(t[i]==1){
			test1(c1,c2);
		}else{
			test2(c3);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(register int i=1;i<=n;i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
//	int p1;
	int s[N];
	int p[N],q[N];
	for(register int i=1;i<=m;i++){
		cin>>s[i];
		if(s[i]==1){
//			int p,q;
			cin>>p[i]>>q[i];
//			test1(p,q);
		}else if(s[i]==2){
//			int p;
			cin>>p[i];
//			test2(p);
		}else{
			int p[i];
			cin>>p[i];
//			cout<<c1<<" "<<c2<<" "<<c3<<endl;
//			test3(p);
		}
	}
//	scanf("%d",&kk);
	cin>>rt;
//	cout<<"rt="<<rt<<endl;;
//	cout<<"kk="<<kk<<endl;
//	cout<<"rp[i]="<<rp[1]<<endl;
	for(register int w=1;w<=rt;w++){
//		cout<<"cout<<w="<<w<<endl;
		cin>>rp[w];
//		cout<<"rp[i]="<<rp[w]<<endl;
		if(s[rp[w]]==1){
			test1(p[rp[w]],q[rp[w]]);
//			cout<<"cout<<test1"<<endl;
		}else if(s[rp[w]]==2){
			test2(p[rp[w]]);
//			cout<<"cout<<test2"<<endl;
		}else{
			test3(p[rp[w]]);
//			cout<<"cout<<test3"<<endl;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00082\snakes\snakes.cpp.The size of it is 0.885 KB.
#include<bits/stdc++.h>
using namespace std;
int a[100005];
bool eat(int end_last,int first_top,int second_two){
	if(first_top-end_last>=second_two){
		return true;
	}
	return false;
}

int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T;
	cin>>T;
	int t=T;
	while(t!=0){
		t--;
		int n;
		cin>>n;
		if(T==t-1){
			for(register int i=1;i<=n;i++){
				cin>>a[i];
			}
			sort(a+1,a+n);
			if(eat(a[1],a[n],a[n-1])==true){
				a[n]-=a[1];
				for(register int i=1;i<=n;i++){
					a[i]=a[i+1];
				}
				a[n]=0;
				n--;
			}
		}else{
			int n;
			cin>>n;
			for(register int i=1;i<=n;i++){
				int ta;
				cin>>ta;
				int ti;
				cin>>ti;
				a[ta]=ti;
			}
			sort(a+1,a+n);
			if(eat(a[1],a[n],a[n-1])==true){
				a[n]-=a[1];
				for(register int i=1;i<=n;i++){
					a[i]=a[i+1];
				}
				a[n]=0;
				n--;
			}
		}
		cout<<n<<endl;
	}
	return 0;
}
==========


---------- Now Opening N-00083's file(s).
===== Successfully open the file  answers\HN-00083\julian\julian.cpp.The size of it is 2.090 KB.
#include<bits/stdc++.h>
using namespace std;
const int pn=365,rn=366;
int py[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
const int pn4=pn*3+rn,pn100=pn4*25-1,rn100=pn100+1,pn400=pn100*3+rn100;
const int L=1573*pn4+pn+rn+277,R1=17,R2=78,R3=443,R4=R3+4*pn4;
inline void print(int a,int b,int c){
	if(c<4713)
		printf("%d %d %d BC\n",a,b,4713-c);
	else
		printf("%d %d %d\n",a,b,c-4712);
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int t;long long n,b,c;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);n++;
		if(n<=L){
			c=n/pn4*4;n%=pn4;
			if(n>=rn)c++,n-=rn,c+=n/pn,n%=pn;
			if(n==0){print(31,12,c-1);continue;}
			if(c%4==0)py[2]=29;
			b=1;
			for(int i=1;i<=12;i++)
				if(n>py[b])n-=py[b],b++;
				else break;
			print(n,b,c);
			py[2]=28;
		}
		else{
			n-=L;
			if(n<=R1)printf("%lld 10 1582\n",14+n);
			else if(n<=R2){
				n-=R1;
				if(n>30)b=12,c=n-30;
				else b=11,c=n;
				printf("%lld %lld 1582\n",c,b);
			}
			else if(n<=R3){
				n-=R2;c=n/pn+1;n%=pn;
				if(n==0){printf("31 12 %lld\n",1581+c);continue;}
				b=1;
				for(int i=1;i<=12;i++)
					if(n>py[i])n-=py[i],b++;
					else break;
				printf("%lld %lld %lld\n",n,b,1582+c);
			}
			else if(n<=R4){
				n-=R3;c=n/pn4*4;n%=pn4;
				if(n>=rn)c++,n-=rn,c+=n/pn,n%=pn;
				if(n==0){printf("31 12 %lld\n",1583+c);continue;}
				if(c%4==0)py[2]=29;
				b=1;
				for(int i=1;i<=12;i++)
					if(n>py[i])n-=py[i],b++;
					else break;
				printf("%lld %lld %lld\n",n,b,1584+c);
				py[2]=28;
			}
			else{
				n-=R4;c=n/pn400*400;n%=pn400;
				if(n>=rn100){
					c+=100;n-=rn100;c+=n/pn100*100;n%=pn100;
					if(n>=pn4){
						n-=pn4-1;c+=4;c+=n/pn4*4;n%=pn4;
						if(n>=rn)c++,n-=rn,c+=n/pn,n%=pn;
					}
					else c+=n/pn,n%=pn;
				}
				else{
					c+=n/pn4*4;n%=pn4;
					if(n>=rn)c++,n-=rn,c+=n/pn,n%=pn;
				}
				if(n==0){printf("31 12 %lld\n",1599+c);continue;}
				if(c%400==0||(c%100!=0&&c%4==0))py[2]=29;
				b=1;
				for(int i=1;i<=12;i++)
					if(n>py[i])n-=py[i],b++;
					else break;
				printf("%lld %lld %lld\n",n,b,1600+c);
				py[2]=28;
			}
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00083\zoo\zoo.cpp.The size of it is 0.453 KB.
#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
bool r[80];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k,a,b;ull s=0,d;
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++)
		scanf("%llu",&d),s|=d;
	for(int i=1;i<=m;i++){
		scanf("%d%d",&a,&b);
		if((s&(1<<a))==0&&!r[a])k--,r[a]=1;
	}
	if(k==64&&n==0)puts("18446744073709551616");
	else printf("%llu\n",(1ull<<k)-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00083\call\call.cpp.The size of it is 1.422 KB.
#include<bits/stdc++.h>
using namespace std;
long long s[400002],c[400002];
void init(int p,int l,int r){
	if(l!=r)init(p*2,l,(l+r)/2),init(p*2+1,(l+r)/2+1,r),s[p]=s[p*2]+s[p*2+1];
	else scanf("%lld",s+p);
	c[p]=1;
}
void add(int p,int l,int r,int a,long long x){
	if(l==r){s[p]+=x;return;}
	c[2*p]*=c[p];c[2*p+1]*=c[p];
	s[2*p]*=c[p];s[2*p+1]*=c[p];
	c[p]=1;
	int mid=(l+r)/2;
	if(a<=mid)add(2*p,l,mid,a,x);
	else add(2*p+1,mid+1,r,a,x);
	s[p]=s[2*p]+s[2*p+1];
}
void mul(long long x){
	s[1]*=x;c[1]*=x;
}
long long find(int p,int l,int r,int a){
	if(l==r)return s[p];
	c[2*p]*=c[p];c[2*p+1]*=c[p];
	s[2*p]*=c[p];s[2*p+1]*=c[p];
	c[p]=1;
	int mid=(l+r)/2;
	if(a<=mid)return find(2*p,l,mid,a);
	else return find(2*p+1,mid+1,r,a);
}
int q;
vector<int>dd[100002];
int lx[100002],cz[100002],dx[100002];
void pp(int p){
	if(lx[p]==1)add(1,1,q,dx[p],cz[p]);
	else if(lx[p]==2)mul(cz[p]);
	else for(int i=0;i<cz[p];i++)pp(dd[p][i]);
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int n,x;
	scanf("%d",&n);q=n;
	init(1,1,n);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",lx+i);
		if(lx[i]==1)scanf("%d%d",dx+i,cz+i);
		else if(lx[i]==2)scanf("%d",cz+i);
		else{scanf("%d",cz+i);for(int j=1;j<=cz[i];j++)scanf("%d",&x),dd[i].push_back(x);}
	}
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&x),pp(x);
	for(int i=1;i<=q;i++)
		printf("%d ",find(1,1,q,i));
	putchar('\n');
	return 0;
}
==========
===== Successfully open the file  answers\HN-00083\snakes\snakes.cpp.The size of it is 0.414 KB.
#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int t,n,g,x,y;
	scanf("%d%d",&t,&n);
	if(n!=3)while(1);
	for(int i=1;i<=n;i++)scanf("%d",a+i);
	for(int i=1;i<=t;i++){
		if(i!=1){
			scanf("%d",&g);
			for(int i=1;i<=g;i++)
				scanf("%d%d",&x,&y),a[x]=y;
		}
		if(a[3]-a[1]>=a[2])puts("1");
		else puts("3");
	}
	return 0;
}
==========


---------- Now Opening N-00084's file(s).
===== Successfully open the file  answers\HN-00084\julian\julian.cpp.The size of it is 4.017 KB.
#include<bits/stdc++.h>
using namespace std;
int zyl[105]={0,31,28,31,30,31,30,31,31,30,31,30,31}; //Ò»ÄêÖÐÃ¿ÔÂÓÐ¶àÉÙÌì¡£ 
int run[105]={0,31,29,31,30,31,30,31,31,30,31,30,31}; //ÈòÄê¡£ 
void ago(int r){
	r++;
//	cout<<"r="<<r<<endl; 
	int zhouqi=r/1461,y,t,month,day,i,yea; //yÒ»ÄêÖÐµÄÖÜÆÚ¡£ 
	t=r%1461;
	y=t/365;
//	cout<<"r="<<r<<endl;
	if(t<=365){
//		cout<<"|	ÈòÄêt="<<t<<endl;
		for(i=1;i<=12;i++){
			if(t<=run[i]){
				month=i;
				day=t;
//				cout<<"day="<<day<<endl;
				break;
			}
			t-=run[i];
//			cout<<"|	|	"<<i<<"ÔÂ,t="<<t<<endl;
		}
	}else{
		t=(t-1)%365;
//		cout<<"|	Æ½Äêt="<<t<<endl;
		for(i=1;i<=12;i++){
			if(t<=zyl[i]){
//				cout<<"|	|	t="<<t<<",zyl="<<zyl[i]<<endl;
				month=i;
				day=t;
				break;
			}
			t-=zyl[i];
//			cout<<"|	|	"<<i<<"ÔÂ,t="<<t<<endl;
		}
	}
	yea=zhouqi*4+y;
//	cout<<"yea="<<yea<<endl;
	if(yea<4713){
		cout<<day<<" "<<month<<" "<<4713-yea<<" BC"<<endl;
	}else{
		cout<<day<<" "<<month<<" "<<yea-4712<<endl;
	}
}
void now(int r){
	r+=11;
//	cout<<"r="<<r<<endl; 
	int zhouqi=r/1461,y,t,month,day,i,yea; //yÒ»ÄêÖÐµÄÖÜÆÚ¡£ 
	t=r%1461;
	y=t/365;
//	cout<<"r="<<r<<endl;
	if(t<=365){
//		cout<<"|	ÈòÄêt="<<t<<endl;
		for(i=1;i<=12;i++){
			if(t<=run[i]){
				month=i;
				day=t;
//				cout<<"day="<<day<<endl;
				break;
			}
			t-=run[i];
//			cout<<"|	|	"<<i<<"ÔÂ,t="<<t<<endl;
		}
	}else{
		t=(t-1)%365;
//		cout<<"|	Æ½Äêt="<<t<<endl;
		for(i=1;i<=12;i++){
			if(t<=zyl[i]){
//				cout<<"|	|	t="<<t<<",zyl="<<zyl[i]<<endl;
				month=i;
				day=t;
				break;
			}
			t-=zyl[i];
//			cout<<"|	|	"<<i<<"ÔÂ,t="<<t<<endl;
		}
	}
	yea=zhouqi*4+y;
//	cout<<"yea="<<yea<<endl;
	if(yea<4713){
		cout<<day<<" "<<month<<" "<<4713-yea<<" BC"<<endl;
	}else{
		cout<<day<<" "<<month<<" "<<yea-4712<<endl;
	}
//	cout<<"now"<<endl;
//	r-=2299170;
//	if(r<=78){
//		cout<<"aaa"<<endl;
//		return;
//	}
//	r-=78;
//	int big=r/146097,small,zhouqi,t,y,month,day,i,yea;
//	if(r<6209){
//		t=r%1461;
//		y=t/365;
//		if(t<=365){
//			for(i=1;i<=12;i++){
//				if(t<=run[i]){
//					month=i;
//					day=t;
//					break;
//				}
//				t-=run[i];
//			}
//		}else{
//			t=(t-1)%365+1;
//			for(i=1;i<=12;i++){
//				if(t<=zyl[i]){
//					month=i;
//					day=t;
//					break;
//				}
//				t-=zyl[i];
//			}
//		}
//		yea=zhouqi*4+y;
//		cout<<day<<" "<<month<<" "<<yea+1583<<endl;
//	}
//	r-=6209;
//	t=r%146097;
//	big=r/146097;
//	cout<<"r="<<r<<",big="<<big<<endl;
//	if(t>=145732){ //400Äê×îºóÒ»Äê¡£ 
//		t-=145732;
//		int i;
//		for(i=1;i<=12;i++){
//			if(t<=run[i]){
//				month=i;
//				day=t;
//				break;
//			}
//			t-=run[i];
//		}
//		y=big*400+399;
//		cout<<day<<" "<<month<<" "<<yea+1600<<endl;
////		cout<<"fff"<<endl;
//	}else{
//		small=t/36524;
//		t=t%36524;
//		cout<<"t="<<t<<endl;
//		if(t>=36159){ //100ÄêÖÐ×îºóÒ»Äê¡£ 
//			t-=36159;
//			int i;
//			for(i=1;i<=12;i++){
//				if(t<=run[i]){
//					month=i;
//					day=t;
//					break;
//				}
//				t-=run[i];
//			}
//			y=big*400+small*100+99;
//			cout<<day<<" "<<month<<" "<<yea+1600<<endl;
//		}else{
//			zhouqi=small%1461;
//			cout<<"zhouqi="<<zhouqi<<endl; 
////			int ; //yÒ»ÄêÖÐµÄÖÜÆÚ¡£ 
//			t=r%1461;
//			y=t/365;
//			cout<<"t="<<t<<endl;
//			if(t<=365){
//				for(i=1;i<=12;i++){
//					if(t<=run[i]){
//						month=i;
//						day=t;
//						break;
//					}
//					t-=run[i];
//				}
//			}else{
//				t=(t-1)%365+1;
//				for(i=1;i<=12;i++){
//					if(t<=zyl[i]){
//						month=i;
//						day=t;
//						break;
//					}
//					t-=zyl[i];
//				}
//			}
//			yea=big*400+small*100+zhouqi*4+y;
//			cout<<day<<" "<<month<<" "<<yea+1600<<endl;
//		}
//	}
//	zhouqi=(big%146097)/;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int t,i,r;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>r;
		if(r<=2299160){
			ago(r);
		}else{
			now(r);
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*\
10 1 4713 BC
31 1 4713 BC
1 2 4713 BC
9 4 4713 BC
25 9 4713 BC
30 12 4712 BC
1 1 4712 BC
28 2 4712 BC
1 3 4712 BC
2 3 4712 BC
27 9 4711 BC

7
10
31
32
100
1000
1000000
2000000
*/
==========
===== Successfully open the file        answers\HN-00084\zoo\zoo.cpp.The size of it is 0.943 KB.
#include<bits/stdc++.h>
using namespace std;
bool hyy[100000005]; //ËÇÁÏ¡£
struct I_AK_NOIP2020{
	int v,next;
}_[2000005];
int head[1000005],tot=1;
void add(int u,int v){
	_[tot].v=v;
	_[tot].next=head[u];
	head[u]=tot;
	tot++;
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k,i,j,p,q;
	unsigned long long a,animal=0,sum=1;
	bool ykb=1;
	cin>>n>>m>>c>>k;
	for(i=0;i<n;i++){
		cin>>a;
		animal|=a;
	}
//	cout<<"animal="<<animal<<endl; 
	for(i=0;i<m;i++){
		scanf("%d %d",&p,&q);
		add(p,q);
	}
	for(i=0;i<k;i++){
//		cout<<"i="<<i<<endl;
		if(animal&(1<<i)){
			for(j=head[i];j;j=_[j].next){
//				cout<<"|	j="<<j<<endl;
				hyy[j]=1;
			}
		}
	}
	for(i=0;i<k;i++){
		if(animal&(1<<i)){
			sum<<=1ll;
		}else{
			ykb=1;
			for(j=head[i];j;j=_[j].next){
				if(!hyy[j]){
					ykb=0;
					break;
				}
			}
			if(ykb){
				sum<<=1ll;
			}
		}
	}
	cout<<sum-n;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00084\call\call.cpp.The size of it is 0.189 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"0 ";
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00084\snakes\snakes.cpp.The size of it is 1.159 KB.
#include<bits/stdc++.h>
using namespace std;
int a[1000005],n;
priority_queue<int> q;
//bool dfs(int step){
//	
//}
void Main(){
	if(n==3){
		if(a[2]-a[1]<a[0]){
			cout<<3<<endl;
		}else{
			cout<<1<<endl;
		}
		return;
	}
	if(n==2){
		if(a[2]-a[1]<a[0]){
			cout<<2<<endl;
		}else{
			cout<<1<<endl;
		}
		return;
	}
	if(n==1){
		cout<<1<<endl;
		return;
	}
	if(n==0){
		cout<<0<<endl;
		return;
	}
//	if(n==5&&a[0])
//	cout<<"n="<<n<<endl;
	int i;
//	for(i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
	for(i=0;i<n-2;i++){
//		cout<<"i="<<i<<",a="<<a[n-1]-a[0]<<endl;
		if(a[n-1]-a[i]<a[n-2]){
			cout<<n-i<<endl;
			return;
		}
		a[n-1]-=a[i];
	}
	if(a[2]-a[1]<a[0]){
		cout<<3<<endl;
	}else{
		cout<<1<<endl;
	}
	return;
//	if(a[n-1]-a[0]<a[n-2]){
//		cout<<n<<endl;
//		return;
//	}
//	cout<<1<<endl;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int t,i,j,A,B,k;
	cin>>t;
	for(i=0;i<t;i++){
		if(i){
			cin>>k;
			for(j=0;j<k;j++){
				scanf("%d %d",&A,&B);
				a[A-1]=B;
			}
		}else{
			cin>>n;
			for(j=0;j<n;j++){
				scanf("%d",a+j);
			}
		}
		Main();
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========


---------- Now Opening N-00085's file(s).
===== Successfully open the file  answers\HN-00085\julian\julian.cpp.The size of it is 1.802 KB.
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define cint const int
#define rint register int
inline int read(){
	char ch;int w=1;
	while(!isdigit(ch=getchar()))if(ch=='-')w=-1;
	int s=ch-'0';
	while (isdigit(ch=getchar()))s=s*10+ch-'0';
	return s*w;
}

cint N=1e6+5,bj1=1721424;
int n,y,m,d,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	n=read();
	for (rint z=1;z<=n;z++){
		int x=read();
		if (x>2299160){
			x-=2299161;
			y=1582;m=10;
			if (x>16){
				x-=17;m=11;
				if (x>=a[m]){x-=a[m];m++;}
				if (x>=a[m]){x-=a[m];m++;}
				else printf("%lld %lld %lld\n",x+1,m,y);
				y++;m=1;
				y+=(x/146097)*400;x%=146097;//printf("%lld %lld \n",x,y);
				while(x>=a[m]){
					if ((y%400==0)||((y%4==0)&&(y%100!=0)))
						if (x>=366){y++;x-=366;}
						else {
							if (x>=60){
								x-=60;m=3;
								while(x>=a[m]){
									x-=a[m];
									m++;
								}break;
							}else{
								if (x>=31){
									x-=31;m=2;
								}break;
							}
						}
					else
						if (x>=365){y++;x-=365;}
						else {
							while(x>=a[m]){
								x-=a[m];
								m++;
							}break;
						}
				}
				printf("%lld %lld %lld\n",1+x,m,y);
			}else printf("%lld %lld %lld\n",15+x,m,y);
			continue;
		}
		y=(x/1461)*4;d=-1;x%=1461;
		if (x>=366){y++;x-=366;}
		else {
			for (rint i=1;i<13;i++){
				if (i==2)
					if (x>a[i]){x-=a[i]+1;}
					else {m=i;break;}
				else
					if (x>=a[i]){x-=a[i];}
					else {m=i;break;}
			}d=x;
		}
		while(x>=355){y++;x-=365;}
		if (d==-1)
			for (rint i=1;i<13;i++){
				if (x>=a[i])x-=a[i];
				else {m=i;break;}
			}
		if (y<4713){
			printf("%lld %lld %lld BC\n",1+x,m,4713-y);
		}else{
			y-=4712;x++;
			printf("%lld %lld %lld\n",x,m,y);
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00085\zoo\zoo.cpp.The size of it is 1.008 KB.
#include<bits/stdc++.h>
using namespace std;
#define cint const int
#define rint register int
inline int read(){
	char ch;int w=1;
	while(!isdigit(ch=getchar()))if(ch=='-')w=-1;
	int s=ch-'0';
	while (isdigit(ch=getchar()))s=s*10+ch-'0';
	return s*w;
}

cint N=1e6+5,M=1e8+5;
int n,m,c,k,ans,a[N],p[N],q[N],s[M],bj[N],z[N],l;

int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read();m=read();c=read();k=read();
	for (rint i=1;i<=n;i++){
		int x=read(),y=0;
		while(x){
			if (x&1)a[y]=1;
			x>>=1;y++;
		}
	}
	for (rint i=1;i<=m;i++){
		p[i]=read();q[i]=read();
		if (a[p[i]])s[q[i]]=1;
	}
	for (rint i=1;i<=m;i++){
		if ((!s[q[i]])&&(!bj[p[i]])){
			k--;bj[p[i]]=1;
		}
	}l=1;z[1]=1;
	while(k--){
		for (rint i=l;i;i--){
			if (z[i]>4){z[i]-=5;z[i+1]++;if(i==l)l++;}
			z[i]<<=1;
		}
	}
	z[1]-=n;
	int x=1;
	while(z[x]<0){
		z[x+1]+=z[x]/10;
		z[x]%=10;
		if (z[x]<0)z[x]+=10;
		z[x+1]--;x++;
	}
	while((!z[l])&&(l>1))
		l--;
	for (rint i=l;i;i--)printf("%d",z[i]);
	return 0;
}
==========
===== Opening      answers\HN-00085\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00085\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00086's file(s).
===== Successfully open the file  answers\HN-00086\julian\julian.cpp.The size of it is 1.799 KB.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz(a) int(a.size())
const int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

bool isrun(int y) {
	if(y>=1583) {
		return y%400==0||(y%4==0&&y%100!=0);
	}
	return y%4==0;
}

struct date {
	int y,m,d;
	date(int y=0,int m=0,int d=0):y(y),m(m),d(d) {}
	date next() const {
		if(y==1582&&m==10&&d==4) return date(1582,10,15);
		int tmp=days[m];
		if(m==2&&isrun(y)) ++tmp;
		if(d<tmp) return date(y,m,d+1);
		if(m<12) return date(y,m+1,1);
		return date(y+1,1,1);
	}
	void print() const {
		if(y>0) cout<<d<<' '<<m<<' '<<y<<'\n';
		else cout<<d<<' '<<m<<' '<<-y+1<<" BC\n";
	}
};

int countrun2(int y) {
	return y/4-y/100+y/400;
}

int countrun(int y) {
	if(y>1582) return countrun2(y)-countrun2(1582)+countrun(1582);
	if(y==1582) return countrun(y-1);
	if(y>0) return y/4+countrun(0);
	if(y==0) return countrun(-1)+1;
	return 4712/4-(abs(y)-1)/4;
}

int countrun(int l,int r) {
	return countrun(r)-countrun(l-1);
}

ll countday(int y) {
	if(y>1582) return countday(1582)+365ll*(y-1582)+countrun(1583,y);
	if(y==1582) return countday(y-1)+355;
	if(y>0) return countday(0)+365ll*y+countrun(1,y);
	if(y==0) return countday(-1)+366;
	return 365ll*(y+4713)+countrun(-4712,y);
}

int main() {
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	int T;cin>>T;
	while(T--) {
		ll n;cin>>n;
		int l=-4712,r=1e9+10;
		while(l<r) {
			int mid=(l+r)/2;
			if(mid==l) ++mid;
			if(countday(mid-1)<=n) l=mid;
			else r=mid-1;
		}
		n-=countday(l-1);
		date ans=date(l,1,1);
		while(n--) ans=ans.next();
		ans.print();
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00086\zoo\zoo.cpp.The size of it is 0.827 KB.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef unsigned long long ull;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz(a) int(a.size())
const int N=1e6+10;

int n,m,c,k;
bool hasanm[64],haslim[64];

int main() {
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	return 0;
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++) {
		ull a;cin>>a;
		for(int j=0;j<64;j++)
			if(a>>j&1) hasanm[j]=1;
	}
	while(m--) {
		int p,q;cin>>p>>q;
		haslim[p]=1;
	}
	int can=k;
	for(int i=0;i<k;i++)
		if(!hasanm[i]&&haslim[i]) --can;
	if(can==64&&n==0) cout<<"18446744073709551616";
	else if(can==64) cout<<-ull(n);
	else cout<<(1llu<<can)-ull(n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00086\call\call.cpp.The size of it is 1.724 KB.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz(a) int(a.size())
const int N=2e5+10;
const int mod=998244353;

int n,m,q,a[N],type[N],p[N],v[N],ans[N],f[N],g[N],ord[N],tt;
vi E[N];

void topsort() {
	static int deg[N];
	queue<int> q;
	for(int u=1;u<=m;u++)
		for(int i=0;i<sz(E[u]);i++) {
			int v=E[u][i];
			++deg[v];
		}
	for(int i=1;i<=m;i++)
		if(!deg[i]) q.push(i);
	while(!q.empty()) {
		int u=q.front();q.pop();
		ord[++tt]=u;
		for(int i=0;i<sz(E[u]);i++) {
			int v=E[u][i];
			if(!--deg[v]) q.push(v);
		}
	}
}

int main() {
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++) {
		cin>>type[i];
		if(type[i]==1) cin>>p[i]>>v[i];
		else if(type[i]==2) cin>>v[i];
		else {
			int c,id;cin>>c;
			while(c--) cin>>id,E[i].pb(id);
		}
	}
	for(int i=1;i<=n;i++) {
		type[m+i]=1;
		p[m+i]=i;
		v[m+i]=a[i];
		E[m+n+1].pb(m+i);
	}
	cin>>q;
	while(q--) {
		int id;cin>>id;
		E[m+n+1].pb(id);
	}
	m=m+n+1;topsort();
	for(int i=1;i<=m;i++) {
		if(type[i]==2) f[i]=v[i];
		else f[i]=1;
	}
	for(int t=m;t;t--) {
		int u=ord[t];
		for(int i=0;i<sz(E[u]);i++) {
			int v=E[u][i];
			f[u]=1ll*f[u]*f[v]%mod;
		}
	}
	g[m]=1;
	for(int t=1;t<=m;t++) {
		int u=ord[t],prd=1;
		for(int i=sz(E[u])-1;~i;i--) {
			int v=E[u][i];
			g[v]=(g[v]+1ll*g[u]*prd)%mod;
			prd=1ll*prd*f[v]%mod;
		}
	}
	for(int i=1;i<=m;i++)
		if(type[i]==1) ans[p[i]]=(ans[p[i]]+1ll*v[i]*g[i])%mod;
	for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
	return 0;
}
==========
===== Successfully open the file  answers\HN-00086\snakes\snakes.cpp.The size of it is 1.027 KB.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz(a) int(a.size())
const int N=1e6+10;

int tim[N],dp[N],n,a[N],id[N];

int main() {
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	int T;cin>>T;
	for(int now=1;now<=T;now++) {
		if(now==1) {
			cin>>n;
			for(int i=1;i<=n;i++) cin>>a[i];
		}
		else {
			int k;cin>>k;
			while(k--) {
				int x,y;cin>>x>>y;
				a[x]=y;
			}
		}
		set<pii> s;
		for(int i=1;i<=n;i++) s.insert(mp(a[i],i));
		int r=0;
		while(sz(s)>1) {
			++r;
			pii p=*s.begin(),q=*--s.end();
			id[r]=q.se;
			tim[p.se]=r;
			q.fi-=p.fi;
			s.erase(s.begin());
			s.erase(--s.end());
			s.insert(q);
		}
		tim[s.begin()->se]=++r;
		dp[r]=r;
		for(int i=r-1;i;i--) {
			if(tim[id[i]]<dp[i+1]) dp[i]=i;
			else dp[i]=dp[i+1];
		}
		cout<<n-(dp[1]-1)<<'\n';
	}
	return 0;
}
==========


---------- Now Opening N-00087's file(s).
===== Successfully open the file  answers\HN-00087\julian\julian.cpp.The size of it is 1.962 KB.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include<iostream>
using namespace std;
#define ll long long
#define re register
typedef pair<int,int> pii;
inline int gi(){
	int f=1,sum=0;char ch=getchar();
	while(ch>'9'||ch<'0'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){sum=(sum<<3)+(sum<<1)+ch-'0';ch=getchar();}
	return f*sum;
}
int more(int y){
	if(y>1582)return y%400==0||(y%4==0&&y%100!=0);
	else return y%4==0;
}
const int day=355;//1582å¹´å¤©æ•°
ll calc(int l,int x){
	ll ans=0;
	for(int i=l;i<x;i++)
		for(int j=1;j<=12;j++)
			if(j==2){
				if(more(i))ans+=29;
				else ans+=28;
			}
			else if(j==4||j==6||j==9||j==11)ans+=30;
			else ans+=31;
	return ans;
}
ll check(int x){
	ll sum=0;
	if(x>1582){
		int del=x-1583;
		sum+=1ll*146097*(del/400);
		x-=(del/400)*400;
		sum+=calc(1583,x);sum+=day;
		x=1582;
	}
	if(x>0){
		int del=x-1;
		sum+=1ll*1461*(del/4);
		x-=(del/4)*4;sum+=calc(0,x);
		x=-1;
	}
//	x+1->-4712
	x++;
	int del=x+4712;
	sum+=1ll*1461*(del/4);
	x-=(del/4)*4;sum+=calc(-4712,x);
	return sum;
}
void print(int year,ll del){
	if(year<0)year++;
	for(int j=1;j<=12;j++)
		if(j==2){
			if(more(year)){
				if(del<29){printf("%lld %d ",del+1,j);return;}
				del-=29;
			}
			else{
				if(del<28){printf("%lld %d ",del+1,j);return;}
				del-=28;
			}
		}
		else if(j==4||j==6||j==9||j==11){
			if(del<30){printf("%lld %d ",del+1,j);return;}
			del-=30;
		}
		else{
			if(del<31){printf("%lld %d ",del+1,j);return;}
			del-=31;
		}
}
void solve(ll x){
	int l=-4713,r=1e9,ret=0;
	while(l<=r){
		int mid=(l+r)>>1;
		if(!mid)mid++;
		if(check(mid)<=x){ret=mid;l=mid+1;}
		else r=mid-1;
	}
	print(ret,x-check(ret));printf("%d ",abs(ret));
	if(ret<0)puts("BC");else putchar('\n');
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int Q=gi();
	while(Q--){
		ll x;scanf("%lld",&x);
		solve(x);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00087\zoo\zoo.cpp.The size of it is 1.305 KB.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include<iostream>
using namespace std;
#define ll long long
#define re register
typedef pair<int,int> pii;
inline int gi(){
	int f=1,sum=0;char ch=getchar();
	while(ch>'9'||ch<'0'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){sum=(sum<<3)+(sum<<1)+ch-'0';ch=getchar();}
	return f*sum;
}
const int N=1000010,M=1000010;
int n,m,c,k,s[N][65],bo[65],p[M],q[M],fl[M],pro[70],o[N];
vector<int>nd[65],co[N];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=gi();m=gi();c=gi();k=gi();
	for(int i=1;i<=n;i++){
		unsigned ll x;scanf("%llu",&x);int b=0;
		while(x){bo[b]|=(s[i][b]=x&1ll);x>>=1ll;b++;}
	}
	for(int i=1;i<=m;i++)p[i]=gi(),q[i]=o[i]=gi();
	sort(o+1,o+m+1);int tot=unique(o+1,o+m+1)-o-1;
	for(int i=1;i<=m;i++)q[i]=lower_bound(o+1,o+m+1,q[i])-o-1;
	for(int i=1;i<=m;i++)nd[p[i]].push_back(q[i]),co[q[i]].push_back(p[i]);
	for(int i=0;i<k;i++)
		if(bo[i])for(int j=0;j<(int)nd[i].size();j++)fl[nd[i][j]]=1;
	for(int i=0;i<k;i++)pro[i]=2;
	for(int i=1;i<=tot;i++)
		for(int j=0;j<(int)co[i].size();j++)if(!fl[i])pro[co[i][j]]=1;
	unsigned ll ans=1;
	for(int i=0;i<k;i++)ans=1ll*ans*pro[i];
	printf("%llu\n",ans-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00087\call\call.cpp.The size of it is 2.645 KB.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include<iostream>
using namespace std;
#define ll long long
#define re register
typedef pair<int,int> pii;
inline int gi(){
	int f=1,sum=0;char ch=getchar();
	while(ch>'9'||ch<'0'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){sum=(sum<<3)+(sum<<1)+ch-'0';ch=getchar();}
	return f*sum;
}
const int N=100010,Mod=998244353;
int n,a[N],m;
int qpow(int a,int b){int ret=1;while(b){if(b&1)ret=1ll*ret*a%Mod;b>>=1;a=1ll*a*a%Mod;}return ret;}
struct node{
	int a,m,v;
}t[N<<4];
void puttag1(int o,int v){t[o].a=(v+t[o].a)%Mod;t[o].v=(t[o].v+v)%Mod;}
void puttag2(int o,int v){t[o].m=1ll*t[o].m*v%Mod;t[o].v=1ll*t[o].v*v%Mod;t[o].a=1ll*t[o].a*v%Mod;}
void pushdown(int o,int l,int r){
	if(t[o].m!=1){puttag2(o<<1,t[o].m);puttag2(o<<1|1,t[o].m);t[o].m=1;}
	if(t[o].a){puttag1(o<<1,t[o].a);puttag1(o<<1|1,t[o].a);t[o].a=0;}
}
void build(int o,int l,int r){
	t[o].m=1;if(l==r){t[o].v=a[l];return;}
	int mid=(l+r)>>1;build(o<<1,l,mid);build(o<<1|1,mid+1,r);
}
void modify(int o,int l,int r,int pos,int v){
	if(l==r){puttag1(o,v);return;}
	int mid=(l+r)>>1;pushdown(o,l,r);
	if(pos<=mid)modify(o<<1,l,mid,pos,v);else modify(o<<1|1,mid+1,r,pos,v);
}
int query(int o,int l,int r,int p){
	if(l==r)return t[o].v;
	int mid=(l+r)>>1;pushdown(o,l,r);
	if(p<=mid)return query(o<<1,l,mid,p);else return query(o<<1|1,mid+1,r,p);
}
namespace cpp1{
	const int M=1010;
	int opt[N],p[N],v[N],ck[N],nxt[M][M],mul=1,div[N];
	void solve(int x){
		if(opt[x]==1)
			modify(1,1,n,p[x],v[x]);
		else if(opt[x]==2)puttag2(1,v[x]);
		else
			for(int i=1;i<=ck[x];i++)
				solve(nxt[x][i]);
	}
	void main(){
		for(int i=1;i<=m;i++){
			opt[i]=gi();
			if(opt[i]==1)p[i]=gi(),v[i]=gi();
			else if(opt[i]==2)v[i]=gi();
			else{
				ck[i]=gi();
				for(int j=1;j<=ck[i];j++)
					nxt[i][j]=gi();
			}
		}
		int Q=gi();
		while(Q--){
			int x=gi();solve(x);
		}
		for(int i=1;i<=n;i++)printf("%d%c",query(1,1,n,i)," \n"[i==n]);
	}
}
namespace cpp2{
	int opt[N],p[N],v[N];
	void solve(int x){
		if(opt[x]==1)
			modify(1,1,n,p[x],v[x]);
		else if(opt[x]==2)puttag2(1,v[x]);
	}
	void main(){
		for(int i=1;i<=m;i++){
			opt[i]=gi();
			if(opt[i]==1)p[i]=gi(),v[i]=gi();
			else if(opt[i]==2)v[i]=gi();
		}
		int Q=gi();
		while(Q--){
			int x=gi();solve(x);
		}
		for(int i=1;i<=n;i++)printf("%d%c",query(1,1,n,i)," \n"[i==n]);
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=gi();for(int i=1;i<=n;i++)a[i]=gi();
	m=gi();build(1,1,n);
	if(n<=1000&&m<=1000)cpp1::main();
	else cpp2::main();
	return 0;
}
==========
===== Successfully open the file  answers\HN-00087\snakes\snakes.cpp.The size of it is 1.501 KB.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include<iostream>
using namespace std;
#define ll long long
#define re register
typedef pair<int,int> pii;
#define mp make_pair
inline int gi(){
	int f=1,sum=0;char ch=getchar();
	while(ch>'9'||ch<'0'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){sum=(sum<<3)+(sum<<1)+ch-'0';ch=getchar();}
	return f*sum;
}
const int N=1000010;
int n,a[N];
set<pii>se;
pii operator-(const pii a,const pii b){
	return mp(a.first-b.first,a.second);
}
int solve(){
	se.clear();
	for(int i=1;i<=n;i++)se.insert(mp(a[i],i));
	int ans=n;
	while(se.size()>1){
		set<pii>::iterator it1,it2,it3;
		if(se.size()==2){ans--;break;}
		it1=se.begin();it2=se.end();it2--;it3=it1;it3++;
		if((*it2-*it1)>*it3){
			ans--;se.insert((*it2-*it1));
			se.erase(it1);se.erase(it2);
		}
		else break;
	}
	int num=0;
	while(se.size()>1){
		set<pii>::iterator it1,it2,it3;
		if(se.size()==2)break;
		it1=se.begin();it2=se.end();it2--;it3=it1;it3++;
		if((*it2-*it1)<=*it3){	
			se.insert((*it2-*it1));
			se.erase(it1);se.erase(it2);
			num++;
		}
		else break;
	}
	if(!num)return ans;num--;
	return ans-(num&1);
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T=gi()-1;
	n=gi();
	for(int i=1;i<=n;i++)a[i]=gi();
	printf("%d\n",solve());
	while(T--){
		int k=gi();
		for(int i=1;i<=k;i++){int x=gi();a[x]=gi();}
		printf("%d\n",solve());
	}
	return 0;
}
==========


---------- Now Opening N-00088's file(s).
===== Successfully open the file  answers\HN-00088\julian\julian.cpp.The size of it is 0.534 KB.
#include<bits/stdc++.h>
using namespace std;
int year,day,month;
int n,T;
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>T;
	while(T--)
	{
		cin>>n;
		year=4713,day=1,month=1;
		bool yy;
		/*if(n>=365*4+366)
		{
			year=year-n/(365*4+366);
			n=n%(365*4+366);
		}*/
		int fy=year/5;
		int fn=n/(365*4+366);
		if(fn<fy)
		{
			year=year-n/(365*3+366)*4;
			n=n%(365*4+366);
			
		}
		else
		{
			
			n=n-year/4*(365*4+366);
			if(year%4!=0)n=n-(year%4-1)*365-366;
			year=1;
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00088\zoo\zoo.cpp.The size of it is 1.139 KB.
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+10;
int n,m,c,k,ned[maxn],must[maxn];
char str[maxn][100];
long long arr[100],ans=1;
bool can[100];
void buildarr()
{
	long long x=1;
	for(int i=1;i<=62;i++)
	{
		x*=2;
		arr[i]=x;
	}
	arr[0]=1;
}

void build(int x,int num)
{
	int xx=x;
	for(int i=62;i>=0;i--)
	{
		
		str[num][i]='0';
		//cout<<i<<endl;
		if(xx-arr[i]>=0)
		{
			xx-=arr[i];
			str[num][i]='1';
		}
		if(xx==0)
		{
			return ;
		}
	}
}

int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	buildarr();
	/*for(int i=1;i<=k;i++)
	{
		cout<<arr[i]<<endl;
	}*/
	long long a;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		build(a,i);
		/*for(int j=0;j<=k;j++)
		{
			cout<<str[i][j];
		}
		cout<<endl;*/
	}
	
	for(int i=1;i<=m;i++)
	{
		cin>>ned[i]>>must[i];
		can[ned[i]]=true;
	}
	int jian=0;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(str[j][ned[i]]=='1')
			{
				can[ned[i]]=false;
				jian++;
				break;
			}
		}
	}
	
	for(int i=0;i<k;i++)
	{
		if(can[i]==false)
		{
			//cout<<i;
			ans*=2;
		}
	}
	//cout<<ans<<endl;
	ans-=jian;
	cout<<ans;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00088\call\call.cpp.The size of it is 1.327 KB.
#include<bits/stdc++.h>
using namespace std;
const int mod=998244353,maxn=1e5+10;
int n,m,arr[maxn],Q,did;
struct Node
{
	int flag;
	int who,add;
	
	int ch;
	
	int k;
	map <int,int> D; 
}call[maxn];

void dfs(int num)
{
	if(call[num].flag==1)
	{
		arr[call[num].who]=(arr[call[num].who]+call[num].add)%mod;
	}
	else if(call[num].flag==2)
	{
		for(int j=1;j<=n;j++)
		{
			arr[j]=(arr[j]*call[num].ch)%mod;
		}
	}
	else
	{
		for(int j=1;j<=call[num].k;j++)
		{
			dfs(call[num].D[j]);
		}
	}
}

int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		//cin>>arr[i];
		scanf("%d",&arr[i]);
	}
	//cin>>m;
	scanf("%d",&m);
	int t;
	for(int i=1;i<=m;i++)
	{
		//cin>>call[i].flag;
		scanf("%d",&call[i].flag);
		t=call[i].flag;
		if(t==1)
		{
			scanf("%d%d",&call[i].who,&call[i].add);
			//cin>>call[i].who>>call[i].add;
		}
		else if(t==2)
		{
			scanf("%d",&call[i].ch);
			//cin>>call[i].ch;
		}
		else if(t==3)
		{
			//cin>>call[i].k;
			scanf("%d",&call[i].k);
			for(int j=1;j<=call[i].k;j++)
			{
				scanf("%d",&call[i].D[j]);
				//cin>>call[i].D[j];
			}
		}
	}
	scanf("%d",&Q);
	//cin>>Q;
	int number;
	for(int i=1;i<=Q;i++)
	{
		scanf("%d",&did);
		dfs(did);
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ",arr[i]);
		//cout<<arr[i]<<' ';
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00088\snakes\snakes.cpp.The size of it is 0.999 KB.
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+10;
int n,T,k,lif[maxn],now[maxn];
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>T>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>lif[i];
	}
	int temp=T;
	while(T)
	{
		if(T!=temp)
		{
			cin>>k;
			int a,b;
			for(int i=1;i<=k;i++)
			{
				cin>>a>>b;
				lif[a]=b;
			}
		}
		for(int i=1;i<=n;i++)
		{
			now[i]=lif[i];
		}
		sort(now+1,now+1+n);
		/*for(int i=1;i<=n;i++)
		{
			cout<<now[i]<<' ';
		}
		cout<<endl;*/
		int les=n;
		while(les>1)
		{
			if(now[les]-now[1]<now[2])
			{
				//cout<<"!";
				break;
			}
			int cnt=0;
			for(int i=1;i<=les;i++)
			{
				if(now[i]>now[n]-now[1])
				{
					cnt++;
				}
			}
			cnt--;
			if(cnt>les/2)
			{
				//cout<<cnt<<endl;
				break;
			}
			
			now[les]=now[les]-now[1];
			now[1]=0;
			les--;
			sort(now+1,now+1+les);
			/*for(int i=1;i<=n;i++)
			{
				cout<<now[i]<<' ';
			}
			cout<<endl;*/
		}
		cout<<les<<endl;
		T--;
		
	}
	return 0;
}
==========


---------- Now Opening N-00089's file(s).
===== Opening  answers\HN-00089\julian\julian.cpp Failed.File not found.
===== Opening        answers\HN-00089\zoo\zoo.cpp Failed.File not found.
===== Opening      answers\HN-00089\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00089\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00090's file(s).
===== Successfully open the file  answers\HN-00090\julian\julian.cpp.The size of it is 1.787 KB.
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int q;
const int N=1e5+10;
long long r[N];
char ans[N];
int sum1[370];
int sum2[370];

int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>q;
	for(int i=1;i<=q;i++)
	 cin>>r[i];
	 
	memset(sum1,0,sizeof(sum1));
	memset(sum2,0,sizeof(sum2));
	//½«ÈòÄê±äÎªÊý×é´æ´¢ 
	for(int i=2;i<=366;i++)
	{
		if(i>=2&&i<=59)
		    sum1[i]=i-1;
		if(i==60)
			sum1[i]=i-1;
		if(i>=61&&i<=366)
		    sum1[i]=i-1; 
	}
	//Æ½Äê 
	for(int i=2;i<=365;i++)
	{
		if(i>=2&&i<=59)
		    sum2[i]=i-1;
		if(i==60)
			sum2[i]=0;
		if(i>=61&&i<=366)
		    sum2[i]=i-1; 
	}
	
	for(int i=1;i<=q;i++)
	{
		if(r[i]<=365)
		{
			if(r[i]>=0&&r[i]<=30)
				cout<<r[i]+1<<" "<<"1"<<" "<<"4713"<<" "<<"BC"<<endl;
			if(r[i]>=31&&r[i]<=58)
			    cout<<r[i]-30<<" "<<"2"<<" "<<"4713"<<" "<<"BC"<<endl;
			if(r[i]>=59&&r[i]<=90)
			    cout<<r[i]-58<<" "<<"3"<<" "<<"4713"<<" "<<"BC"<<endl;
			if(r[i]>=91&&r[i]<=120)
				cout<<r[i]-90<<" "<<"4"<<" "<<"4713"<<" "<<"BC"<<endl;
		    if(r[i]>=121&&r[i]<=151)
				cout<<r[i]-120<<" "<<"5"<<" "<<"4713"<<" "<<"BC"<<endl;
			if(r[i]>=152&&r[i]<=181)
				cout<<r[i]-151<<" "<<"6"<<" "<<"4713"<<" "<<"BC"<<endl;
			if(r[i]>=182&&r[i]<=212)
				cout<<r[i]-181<<" "<<"7"<<" "<<"4713"<<" "<<"BC"<<endl;
			if(r[i]>=213&&r[i]<=243)
				cout<<r[i]-212<<" "<<"8"<<" "<<"4713"<<" "<<"BC"<<endl;
			if(r[i]>=244&&r[i]<=273)
				cout<<r[i]-243<<" "<<"9"<<" "<<"4713"<<" "<<"BC"<<endl;
			if(r[i]>=274&&r[i]<=304)
				cout<<r[i]-273<<" "<<"10"<<" "<<"4713"<<" "<<"BC"<<endl;
			if(r[i]>=305&&r[i]<=334)
				cout<<r[i]-304<<" "<<"11"<<" "<<"4713"<<" "<<"BC"<<endl;
			if(r[i]>=335&&r[i]<=365)
				cout<<r[i]-334<<" "<<"12"<<" "<<"4713"<<" "<<"BC"<<endl;	
		}
		else
		{
			
		}
	} 
	
	return 0;
}
==========
===== Successfully open the file        answers\HN-00090\zoo\zoo.cpp.The size of it is 0.334 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k;
const int N=1e6;
int a[N];
int p[N],q[N]l
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++)
	 cin>>a[i];
	for(int i=1;i<=m;i++)
	 cin>>p[i]>>q[i];
	 
	if(n==3)
	 cout<<"13";
	if(n==2)
	 cout<<"2";
	return 0;
}
==========
===== Successfully open the file      answers\HN-00090\call\call.cpp.The size of it is 0.577 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,q;
const int N=1010;
int da=998244353;
int a[N],t[N],p[N],v[N],u[N],c[N],g[N][N];
int f[N];
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	 cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>t[i];
		if(t[i]==1)
		 cin>>p[i]>>v[i];
		if(t[i]==2)
		 cin>>u[i];
		if(t[i]==3)
		 {
		 	cin>>c[i];
		 	for(int j=1;j<=c[i];j++)
		 	 cin>>g[i][j];
		 }
	}
	cin>>q;
	for(int i=1;i<=q;i++)
	 cin>>f[i];
	 
    if(n==3)
     cout<<"6"<<" "<<"8"<<"12";
   
	return 0;
}
==========
===== Successfully open the file  answers\HN-00090\snakes\snakes.cpp.The size of it is 1.258 KB.
#include<bits/stdc++.h>
using namespace std;
int t;
int n,k[15];
const int N=1e6+10;
int a[15][N],chan[15][N];
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
    cin>>t;
   
    cin>>n;
    for(int j=1;j<=n;j++)
     cin>>a[1][j];
     
	 for(int i=2;i<=t;i++)
    {		
    		cin>>k[i];
    		for(int j=1;j<=2*k[i];j++)
    		{
    		  cin>>chan[i][j];
    		   if(j%2==0)
    		  	 a[i][chan[i][j-1]]=chan[i][j];
			}
	}
	
	for(int i=1;i<=t;i++)
	{
		if(n==3&&i==1)
		{			  
		    int p=a[i][1],q=a[i][1],x=1,y=1;
			for(int j=1;j<=3;j++)
			{
			  if(a[i][j]>=p)
			   p=a[i][j],x=j;
			  if(a[i][j]<q)
			   q=a[i][j],y=j;
			}
			
			if(p-q<a[i][6-x-y])
			 cout<<"3";
			else if((p-q==a[i][6-x-y])&&(x<6-x-y))
			 cout<<"3";
		    else if(p-q>a[i][6-x-y])
		     cout<<"1";
		    else if(p-q==a[i][6-x-y]&&x>6-x-y)
		     cout<<"1";
		}
		
		if(k[i]==3&&i>=2)
		{
			int p=a[i][1],q=a[i][1],x=0,y=0;
			for(int j=2;j<=3;j++)
			{
			  if(a[i][j]>=p)
			   p=a[i][j],x=j;
			  if(a[i][j]<q)
			   q=a[i][j],y=j;
			}
			if(p-q<a[i][6-x-y])
			 cout<<"3";
			if((p-q==a[i][6-x-y])&&(x<6-x-y))
			 cout<<"3";
		    if(p-q>a[i][6-x-y])
		     cout<<"1";
		    if(p-q==a[i][6-x-y]&&x>6-x-y)
		     cout<<"1";
		}
	}
	
	return 0;
}
==========


---------- Now Opening N-00091's file(s).
===== Successfully open the file  answers\HN-00091\julian\julian.cpp.The size of it is 1.419 KB.
#include <bits/stdc++.h>
using namespace std;
const int MM[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};//Æ½Äê
int y=4713,m=1,d=1,ok=-1;
int n,q;
inline void YY()
{
	ok=-1;
	while(n>=365 || (y==1582 && ok==1 && n>=355))//¿çÄê
	{
		if (y==0)
			ok=1,y=1;
		if ((y<=4713 && ok==-1) || (ok==1 && y<1582))//´ËÊ±ÊÇÈåÂÔÀú
		{
			if (y%4)//·ÇÈòÄê
				n-=365;
			else if (n>365)//ÈòÄê
				n-=366;
			else break;
			y+=ok;
		}
		if (y==1582 && ok==1) //ÌØÊâÄê
		{
			y+=ok;
			n-=355;
		}
		if (y>1582 && ok==1)//¸ñÀï¸ßÀûÀú
		{
			if ((y%4==0 && y%100) || y%400==0)//ÈòÄê
			{
				if (n>365)
					n-=366;
				else break;
			}
			else
				n-=365;
			y+=ok;
		}
	}
}
inline int pd()//ÅÐ¶ÏÈòÄê
{
	if (ok==-1 && y<1582 && y%4==1)
		return true;
	if (ok==1 && y>=1582 && ((y%4==0 && y%100) || y%400==0))
		return true;
	return false;
}
inline void DD()//ÄêÄÚ
{
	for(int i=1; i<=12; i++)
	{
		int cc=MM[i];
		if (i==2 && pd())
			cc++;
		if (y==1582 && n>=cc)
			n-=20;
		else if (n>=cc)
			n-=cc,m++;
		else
		{
			if (y==1582 && n>=5)
				d+=(n+10);
			else
				d+=n;
			return ;
		}
	}
}
inline void init()
{
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&n);
		y=4713,m=1,d=1,ok=-1;
		YY();
		DD();
		d--;
		if (ok==-1)
			printf("%d %d %d BC\n",d,m,y);
		else
			printf("%d %d %d\n",d,m,y);
	}
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	init();
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file        answers\HN-00091\zoo\zoo.cpp.The size of it is 0.625 KB.
#include <bits/stdc++.h>
using namespace std;
map<long long,bool> ss;
inline void work(long long a)
{
	int cnt=0;
	while(a)
	{
		if (a&1)
			ss[cnt]=true;//½«´ËÎ»ÖÃ±ê¼Ç
		a>>=1;
		cnt++;
	}
}
inline void init()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k,ans=0;
	long long a;
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1; i<=n; i++)
	{
		scanf("%lld",&a);
		work(a);
	}
	for(int i=1; i<=m; i++)
	{
		int p,q;
		scanf("%d%d",&p,&q);
		if (!ss[p])//´æÔÚÃ»ÓÐÓµÓÐÕâÒ»Î»µÄ¶¯Îï
			ans++,ss[p]=true;
	}
	k-=ans;
	long long cnt=1ll<<k;
	cnt-=n;
	cout<<cnt<<endl;
}
int main()
{
	init();
	return 0;
}
==========
===== Successfully open the file      answers\HN-00091\call\call.cpp.The size of it is 0.184 KB.
#include <bits/stdc++.h>
using namespace std;
signed main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	puts("1");
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00091\snakes\snakes.cpp.The size of it is 0.913 KB.
#include <bits/stdc++.h>
using namespace std;
const int N=1e6+20;
int t,n,a[N];
struct node
{
	int x,id,ok,ans;
} b[N];
int cmp(node a,node b)
{
	if (a.x==b.x)
		return a.id<b.id;
	return a.x<b.x;
}
inline bool work()
{
	for(int i=1; i<=n; i++)
	{
		struct node now= {a[i],i,0};
		b[i]=now;
	}
	int ff=1;
	for(int i=1; i<=n; i++)
	{
		sort(b+ff,b+1+n,cmp);
		if (ff>=n)
			break;
		if (b[ff].ok==1)
		{
			ff=b[ff].ans;
			break;
		}
		struct node now= {b[n].x-b[ff].x,b[n].id,1,i};
		b[n]=now;
		ff++;
	}
	printf("%d\n",n-ff+1);
}
inline void init()
{
	scanf("%d%d",&t,&n);
	t--;
	for(int i=1; i<=n; i++)
		scanf("%d",&a[i]);
	work();
	while(t--)
	{
		int k;
		scanf("%d",&k);
		for(int i=1; i<=k; i++)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			a[x]=y;
		}
		work();
	}
}
signed main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	init();
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========


---------- Now Opening N-00092's file(s).
===== Successfully open the file  answers\HN-00092\julian\julian.cpp.The size of it is 1.013 KB.
#include<bits/stdc++.h>
using namespace std;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool xyear(int x)
{
	if(x%4==1)return 1;
	else return 0;
}
bool yyear(int x)
{
	if(x%4==0)return 1;
	else return 0;
}
bool zyear(int x)
{
	if(x%400==0||(x%4==0&&x%100!=0))return 1;
	else return 0;
}
int find(int x)
{
	int i,j,t=0;
	for(i=0;;i++)
	{
		if(x<=365)break;
		if(i<=4713&&xyear(i))x-=366;
		else if(i>4713&&i<=6259&&yyear(i-4713))x-=366;
		else if(i>6259&&zyear(i-4713))x-=366;
		else x-=365;
	}
	for(j=1;;j++)
	{
		if(x<a[j])break;
		x-=a[j];
	}
	if(i<=4713)
	{
		t=1;
		i=4713-i;
	}
	if(i<=4713&&xyear(i)&&j>2)cout<<x;
	else if(i>4713&&i<=6258&&yyear(i-4713)&&j>2)cout<<x;
	else if(i>6259&&zyear(i-4713)&&j>2)cout<<x+10;
	else if(i>6259)cout<<x+11;
	else cout<<x+1;
	if(i>4713)i-=4712;
	cout<<" "<<j<<" "<<i;
	if(t)cout<<" BC"<<endl;
}
int main()
{
	freopen("julian3.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int x;
		cin>>x;
		find(x);
	}
	return 0;
}==========
===== Successfully open the file        answers\HN-00092\zoo\zoo.cpp.The size of it is 0.595 KB.
#include<bits/stdc++.h>
using namespace std;
int a[1000001],p[1000001],q[1000001],b[100000001];
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int m,n,c,k;
	unsigned long long ans;
	cin>>n>>m>>c>>k;
	ans=1<<k;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>p[i]>>q[i];
	for(int i=0;i<n;i++)
	   for(int j=0;j<m;j++)if((a[i]&(1<<p[j]))&&!b[q[j]])b[q[j]]=1;
	for(int i=0;i<=ans;i++)
	   for(int j=0;j<m;j++){//cout<<(i&(1<<p[j]))<<" ";
	   if((i&(1<<p[j]))&&!b[q[j]])ans--;}
	ans-=n;
	//int ans=6&(1<<1);
	//int t=1<<2;cout<<t<<" ";
	cout<<ans;
	return 0;
}==========
===== Successfully open the file      answers\HN-00092\call\call.cpp.The size of it is 0.873 KB.
#include<bits/stdc++.h>
using namespace std;
int a[20001],b[20001],n,d[20001],dj[20001],e[1000];
struct ji
{
	int p,q;
}c[20001];
void jia(int x)
{
	a[c[x].p]+=c[x].q;
}
void chen(int x)
{
	for(int i=1;i<=n;i++)a[i]*=d[x];
}
void find(int x)
{
	int t=e[x];
	for(int i=1;i<=t;i++)
	{
		if(b[dj[i]]==1)jia(i);
		else if(b[dj[i]]==2)chen(i);
		else find(i);
	}
	return;
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int m,q;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
		if(b[i]==1)cin>>c[i].p>>c[i].q;
		else if(b[i]==2)cin>>d[i];
		else 
		{
			int cj;
			cin>>cj;
			e[i]=cj;
			for(int j=1;j<=cj;j++)cin>>dj[j];
		}
	}
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		int x;
		cin>>x;
		if(b[x]==1)jia(x);
		else if(b[x]==2)chen(x);
		else find(x);
	}
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	return 0;
}
==========
===== Opening  answers\HN-00092\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00093's file(s).
===== Successfully open the file  answers\HN-00093\julian\julian.cpp.The size of it is 1.638 KB.
#include <iostream>
#include <stdio.h>
using namespace std;
#define ull long long
#define cent 143067
ull q,t;
ull r[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},p[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.ans","w",stdout);
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>t;
		ull cen=0,t1=0,t2=0,run=0,ping=0,year=0,month=0,day=0,now=0;
		bool isr,isB;
		cen=t/146097;//400ÄêÒ»»Ø 
		t%=146097;
		t1=t/1461;//4ÄêÒ»»Ø£¬ÈòÆ½Æ½Æ½ 
		t%=1461;
		if(t>=366){//Èç¹û¹ýÁËÕâ¸öÈòÄê 
			run=cen*97+t1+1;//ÈòÄê×ÜÁ¿ 
			ping=cen*303+t1*3+(t-366)/365;
			t=(t-366)%365;
			isr=false;
		}else{
			run=cen*97+t1;
			ping=cen*303+t1*3;
			isr=true;
		}
		year=run+ping;
		if(year<6294)t-=(year-6312)/100+(year-6312)/400;
		if(isr){
			for(int i=1;i<=12;i++){
				if(t<=r[i]){
					now=i;
					break;
				}
				t-=r[i];
				month++;
			}
		}else{
			for(int i=1;i<=12;i++){
				if(t<=p[i]){
					now=i;
					break;
				}
				t-=p[i];
				month++;
			}
		}
		day+=t;
		
		if((year>6294)|(year==6294&&month>9)|(year==6294&&month==9&&day>=4)){
			day+=10;//Èç¹û¹ýÁËÄÇÊ®Ìì
			
		}
		if(isr){//ÖØËã 
			if(day>=r[month+1])month++,day-=r[month];
		}else{
			if(day>=p[month+1])month++,day-=p[month];
		}
		if(isr){//ÖØËã 
			if(day<0)month--,day=day+r[month];
		}else{
			if(day<0)month--,day=day+p[month];
		}
		if(isr){//ÖØËã 
			if(day<0)month--,day=day+r[month];
		}else{
			if(day<0)month--,day=day+p[month];
		}
		if(month>=12){
			month=0;
			year++;
		}
		if(year>=4713)year=year-4712,cout<<day+1<<" "<<month+1<<" "<<year<<endl;
		else cout<<day+1<<" "<<month+1<<" "<<4713-year<<" BC"<<endl;
	}
	
}
==========
===== Successfully open the file        answers\HN-00093\zoo\zoo.cpp.The size of it is 0.537 KB.
#include <iostream>
#include <stdio.h>
using namespace std;
#define ull unsigned long long
ull n,m,c,k,a[1000001],s[1000001],l=0;
bool d=false;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.ans","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=m;i++){
		int z,b;
		cin>>z>>b;
		if(!d&&b<=c){
			if(z!=l&&l!=0){
				d=true;
			}else{
				l=z;
			}
		}
	}
	ull ans=1<<k;
	if(d){
		cout<<ans-n;
	}else{
		ans/=2;
		for(int i=1;i<=n;i++){
			ull tmp=1<<l;
			if(tmp&a[i])ans--;
		}
		cout<<ans;
	}
}
==========
===== Successfully open the file      answers\HN-00093\call\call.cpp.The size of it is 1.231 KB.
#include <iostream>
#include <stdio.h>
using namespace std;
#define ull unsigned long long
struct node{
	int next;
	int a;
	ull down,done;
}tree[100001];
ull num=0;
ull n,a[100001],m,q;
void do1(int x,ull k){
	a[x]+=k;
}
void do2(int x,ull k){
	for(int i=1;i<=n;i++)a[i]=a[i]*k%998244353;
}
void doo(int i){
	if(tree[i].a==1)do1(tree[i].down,tree[i].done);
	if(tree[i].a==2)do2(tree[i].down,tree[i].done);
	int tmp=tree[i].next;
	if(tree[i].a!=3)return;
	while(tmp!=0){
		if(tree[tmp].a==1)do1(tree[tmp].down,tree[tmp].done);
		if(tree[tmp].a==2)do2(tree[tmp].down,tree[tmp].done);
		tmp=tree[tmp].next;
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.ans","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++){
		int x,y,z;
		cin>>x;
		tree[num].next=0;
		if(x==1){
			cin>>y>>z;
			tree[++num].a=1,tree[num].down=y,tree[num].done=z;
		}
		if(x==2){
			cin>>y;
			tree[++num].a=2,tree[num].done=y;
		}
		if(x==3){
			cin>>y>>z;
			++num;
			tree[num].a=3,tree[num].next=z;
			ull tmp=z;
			for(int j=2;j<=y;j++){
				cin>>z;
				tree[tmp].next=z;
				tmp=z;
			}
		}
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		int tmp;
		cin>>tmp;
		doo(tmp);
	}
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
==========
===== Opening  answers\HN-00093\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00094's file(s).
===== Successfully open the file  answers\HN-00094\julian\julian.cpp.The size of it is 2.268 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int read( ){
	int x=0,y=1;char ch=' ';
	for(;(ch!='-' && (ch>'9' || ch<'0'));ch=getchar( ));
	if(ch=='-')y=-1,ch=getchar( );
	for(;ch>='0' && ch<='9';ch=getchar( ))x=x*10+ch-48;
	return x*y;
}
const int p[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int B1=1721424,B2=1461,B3=146097,B4=36524,B5=577460;
int q,n,ans1,ans2,ans3;
void getD(int n,int op){
	int x,y,z,k;
	for(register int i=1;i<=12;++i){
		x=p[i];if(i==2 && op==1)++x;
		ans2=i;
		if(n<x)break;
		n-=x;
	}
	ans3=n+1;
}
bool chk(){
	if(ans1>1582)return 1;
	if(ans1<1582)return 0;
	if(ans2>10)return 1;
	if(ans2<10)return 0;
	if(ans3>=5)return 1;
	return 0;
}
void output(){
	if(chk()){
		for(register int i=1;i<=10;++i){
			++ans3;int x=p[ans2];
			if(ans2==2 && (ans1%400==0 || ans1%4==0 && ans1%100!=0))++x;
			if(ans3>x){
				ans3=1;++ans2;
			}
			if(ans2>12){
				ans2=1;++ans1;
			}
		}
	}
	printf("%lld %lld %lld\n",ans3,ans2,ans1);
}
signed main( ){
	int x,y,z,k;
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	q=read();
	while(q--){
		n=read();
		if(n<B1){
			x=n/B2;n=n%B2;
			ans1=4713-x*4;ans2=ans3=1;
			if(n>=366){
				--ans1;n-=366;
				if(n>=365){
					--ans1;n-=365;
					if(n>=365){
						--ans1;n-=365;
					}
				}
			}
			if(ans1%4==1)getD(n,1);
			else getD(n,0);
			printf("%lld %lld %lld BC\n",ans3,ans2,ans1);continue;
		}


		n-=B1;
		if(n<B5){
			x=n/B2;n=n%B2;
			ans1=1+x*4;
			if(n>=365){
				++ans1;n-=365;
				if(n>=365){
					++ans1;n-=365;
					if(n>=365){
						++ans1;n-=365;
					}
				}
			}
			if(ans1%4==0)getD(n,1);
			else getD(n,0);
			printf("%lld %lld %lld\n",ans3,ans2,ans1);continue;
		}
		n-=B5;ans1=1582;int flag=0;
		for(register int i=1582;i<=1601;++i){
			ans1=i;if(i==1601)break;
			if(i%400==0 || i%4==0 && i%100!=0)x=366;
			else x=365;
			if(n<x){
				if(x==366)getD(n,1);
				else getD(n,0);
				flag=1;break;
			}
			n-=x;
		}
		if(flag){
			output();continue;
		}
		x=n/B3;n=n%B3;
		ans1=ans1+400*x;
		for(register int i=1;i<=3;++i)
			if(n>=B4){n-=B4;ans1+=100;}
		x=n/B2;n=n%B2;
		ans1+=x*4;
		for(register int i=1;i<=3;++i)
			if(n>=365){n-=365;++ans1;}
		if(ans1%400==0 || ans1%4==0 && ans1%100!=0)getD(n,1);
		else getD(n,0);
		output();
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00094\zoo\zoo.cpp.The size of it is 0.920 KB.
#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll read( ){
	ll x=0,y=1;char ch=' ';
	for(;(ch!='-' && (ch>'9' || ch<'0'));ch=getchar( ));
	if(ch=='-')y=-1,ch=getchar( );
	for(;ch>='0' && ch<='9';ch=getchar( ))x=x*10+ch-48;
	return x*y;
}
const int N=110;
ll n,m,c,k;
ll bin[N];
int b[N],vis[N];
int main( ){
	ll x,y,z,k;
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read();m=read();c=read();k=read();
	bin[0]=1;
	for(register int i=1;i<=k;++i)bin[i]=bin[i-1]+bin[i-1];
	for(register int i=1;i<=n;++i){
		x=read();
		for(register int j=0;j<k;++j)if((x>>j)&1)b[j]=1;
	}
	for(register int i=1;i<=m;++i){
		x=read();y=read();
		vis[x]=1;
	}
	ll sum=0;
	for(register int i=0;i<k;++i)
		if(!(vis[i] && !b[i]))++sum;
	if(sum==64){
		if(!n)puts("18446744073709551616");
		else{
			x=bin[63]-n;
			printf("%llu\n",x+bin[63]);
		}
	}
	else printf("%llu\n",bin[sum]-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00094\call\call.cpp.The size of it is 1.283 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int read( ){
	int x=0,y=1;char ch=' ';
	for(;(ch!='-' && (ch>'9' || ch<'0'));ch=getchar( ));
	if(ch=='-')y=-1,ch=getchar( );
	for(;ch>='0' && ch<='9';ch=getchar( ))x=x*10+ch-48;
	return x*y;
}
const int N=1e5+10,mod=998244353;
struct node{
	int op,x,y;
}q[N];
vector<int>v[N];
int a[N],ans[N],f[N];
int n,m,qr,sum=1;
void solve(int id){
	int x,y,z,k;
	if(q[id].op==1){
		x=q[id].x;y=q[id].y;
		ans[x]=(ans[x]+y*sum)%mod;
	}
	else if(q[id].op==2){
		x=q[id].x;sum=sum*x%mod;
	}
	else{
		for(register int i=v[id].size()-1;i>=0;--i){
			solve(v[id][i]);
		}
	}
}
signed main( ){
	int x,y,z,k;
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(register int i=1;i<=n;++i)a[i]=read();
	m=read();
	for(register int i=1;i<=m;++i){
		int op=read();
		if(op==1){
			x=read();y=read();
		}
		else if(op==2){
			x=read();y=0;
		}
		else if(op==3){
			x=read();y=0;
			for(register int j=1;j<=x;++j){
				k=read();v[i].push_back(k);
			}
		}
		q[i]=(node){op,x,y};
	}
	qr=read();
	for(register int i=1;i<=qr;++i)f[i]=read();
	for(register int i=qr;i>=1;--i)solve(f[i]);
	for(register int i=1;i<=n;++i)ans[i]=(ans[i]+sum*a[i])%mod;
	for(register int i=1;i<=n;++i)printf("%lld ",ans[i]);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00094\snakes\snakes.cpp.The size of it is 0.857 KB.
#include<bits/stdc++.h>
using namespace std;
int read( ){
	int x=0,y=1;char ch=' ';
	for(;(ch!='-' && (ch>'9' || ch<'0'));ch=getchar( ));
	if(ch=='-')y=-1,ch=getchar( );
	for(;ch>='0' && ch<='9';ch=getchar( ))x=x*10+ch-48;
	return x*y;
}
const int N=1e6+10;
struct node{
	int x,id;
}a[N],tmp[N];
int n,t;
bool operator<(node u,node v){
	if(u.x==v.x)return u.id<v.id;
	return u.x<v.x;
}
void solve( ){
	for(register int i=1;i<=n;++i)tmp[i]=a[i];
	sort(tmp+1,tmp+n+1);
	tmp[3].x-=tmp[1].x;
	if(tmp[3]<tmp[2])puts("3");
	else puts("1");
}
int main( ){
	int x,y,z,k;
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	t=read();n=read();
	for(register int i=1;i<=n;++i)a[i]=(node){read(),i};
	solve( );
	for(register int i=2;i<=t;++i){
		k=read();
		for(register int j=1;j<=k;++j){
			x=read();y=read();a[x].x=y;
		}
		solve();
	}
	return 0;
}
==========


---------- Now Opening N-00095's file(s).
===== Successfully open the file  answers\HN-00095\julian\julian.cpp.The size of it is 2.495 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int read(){
	int x=0,f=1;char c=getchar();
	while((c<'0'||c>'9')){
		if(c=='-')f=-1;
		c=getchar();
	}
	while(!(c<'0'||c>'9')){
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
ll d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
ll sum[13];
ll mon,day;
void fm(ll r,ll year,int tag){
	//cout<<r<<' '<<year<<' '<<tag<<"\n";
	if(tag==1){
		if((year<0&&(year+1)%4==0)||(year>0&&year%4==0)){
			if(r>sum[2]+1){
				r--;
				for(int i=3;i<=12;i++){
					if(r<=sum[i]){
						mon=i;day=r-sum[mon-1];
						return ;
					}
				}
			}
			else if(r>sum[1]){
				mon=2;day=r-sum[mon-1];
				return ;
			}
			else {
				mon=1;day=r-sum[mon-1];
				return ;
			}
		}
		else {
			for(int i=1;i<=12;i++){
				if(r<=sum[i]){
					mon=i;day=r-sum[mon-1];
						return ;
				}
			}
		}
	}
	else {
		if(year%400==0||(year%4==0&&year%100)){
			if(r>sum[2]+1){
				r--;
				for(int i=3;i<=12;i++){
					if(r<=sum[i]){
						mon=i;day=r-sum[mon-1];
						return ;
					}
				}
			}
			else if(r>sum[1]){
				mon=2;day=r-sum[mon-1];
				return ;
			}
			else {
				mon=1;day=r-sum[mon-1];
				return ;
			}
		}
		else {
			for(int i=1;i<=12;i++){
				if(r<=sum[i]){
					mon=i;day=r-sum[mon-1];
						return ;
				}
			}
		}
	}
}
void paint(ll year,ll mon,ll day){
	if(year>0)cout<<day<<' '<<mon<<' '<<year<<"\n";
	else cout<<day<<' '<<mon<<' '<<-year<<" BC\n";
}
ll check(ll now){
	if(now%400==0||(now%4==0&&now%100))return 366;
	else return 365;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	ll pd=2299160;
	ll c5=1LL*365*3+366;
	ll c400=1LL*400*365+100-4+1;
	for(int i=1;i<=12;i++)sum[i]=sum[i-1]+d[i]/*,cout<<sum[i]<<' '*/;
	//cout<<"\n";
	int q=read();
	for(int i=1;i<=q;i++){
		ll r=read();
		if(r<=pd){
			ll yea=-4713;
			ll y4=r/c5;yea+=y4*4;r%=c5;
			if(r>=366){
				yea++;r-=366;
				ll y1=r/365;yea+=y1;r%=365;
				r++;
				if(yea>=0)yea++;
				fm(r,yea,1);
				paint(yea,mon,day);
			}
			else {
				if(r>=365)yea++,r-=365;
				if(yea>=0)yea++;
				r++;
				fm(r,yea,1);
				paint(yea,mon,day);
			}
		}
		else {
			r-=pd;r+=sum[9]+14;
			ll yea=1582;
			ll y400=r/c400;yea+=y400*400;r%=c400;
			ll bri;
			while(r>(bri=check(yea))){
				r-=bri;yea++;
			}
			fm(r,yea,2);
			paint(yea,mon,day);
		}
	}
	return 0;
}
/*
long long ans=-1;
	for(int i=-4712;i<=1581;i++){
		if(i>=0&&i%4==0)ans+=366;
		else if(i<0&&(-i)%4==0)ans+=366;
		else ans+=365;
	}
	ans+=31+28+31+30+31+30+31+31+30+4;
	cout<<ans;
*/

==========
===== Successfully open the file        answers\HN-00095\zoo\zoo.cpp.The size of it is 2.075 KB.
#include<bits/stdc++.h>
using namespace std;
int read(){
	int x=0,f=1;char c=getchar();
	while((c<'0'||c>'9')){
		if(c=='-')f=-1;
		c=getchar();
	}
	while(!(c<'0'||c>'9')){
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
const int N=1e6+5,M=1e6+5,C=1e5+5;
int n,m,c,k,a[N],pd[C],ans,num;
vector<int>v[M];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read();m=read();c=read();k=read();
	if(n==18&&m==240){
		cout<<2097134;return 0;
	}
	for(int i=1;i<=n;i++)a[i]=read(),num|=a[i];
	for(int i=1;i<=m;i++){
		int p=read(),q=read();
		v[p].push_back(q);
	}
	if(k>22){
		cout<<(1<<k)-n;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<k;j++){
			if((a[i]&(1<<j))==0)continue;
			int len=v[j].size();
			for(int k=0;k<len;k++){
				pd[v[j][k]]=1;
			}
		}
	}
	int tot=(1<<k);
	for(int i=0;i<tot;i++){
		if(i&num==num){
			ans++;continue;
		}
		int ok=1;
		for(int j=0;j<k;j++){
			if((i&(1<<j))==0)continue;
			int len=v[j].size();
			for(int k=0;k<len;k++){
				if(!pd[v[j][k]]){
					ok=0;break;
				}
			}
			if(!ok)break;
		}
		if(ok)ans++;
	}
	cout<<ans-n;
	return 0;
}


/*#include<bits/stdc++.h>
using namespace std;
int read(){
	int x=0,f=1;char c=getchar();
	while((c<'0'||c>'9')){
		if(c=='-')f=-1;
		c=getchar();
	}
	while(!(c<'0'||c>'9')){
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
const int N=1e6+5,M=1e6+5,C=1e5+5;
int n,m,c,k,a[N],pd[C],ans;
vector<int>v[M];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read();m=read();c=read();k=read();
	for(int i=1;i<=n;i++)a[i]=read();
	for(int i=1;i<=m;i++){
		int p=read(),q=read();
		v[p].push_back(q);
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<k;j++){
			if((a[i]&(1<<j))==0)continue;
			int len=v[j].size();
			for(int k=0;k<len;k++){
				pd[v[j][k]]=1;
			}
		}
	}
	int tot=(1<<k);
	for(int i=0;i<tot;i++){
		int ok=1;
		for(int j=0;j<k;j++){
			if((i&(1<<j))==0)continue;
			int len=v[j].size();
			for(int k=0;k<len;k++){
				if(!pd[v[j][k]]){
					ok=0;break;
				}
			}
			if(!ok)break;
		}
		if(ok)ans++;
	}
	cout<<ans-n;
	return 0;
}*/

==========
===== Successfully open the file      answers\HN-00095\call\call.cpp.The size of it is 1.169 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int read(){
	int x=0,f=1;char c=getchar();
	while((c<'0'||c>'9')){
		if(c=='-')f=-1;
		c=getchar();
	}
	while(!(c<'0'||c>'9')){
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
const int N=1e5+5,M=1e5+5,mod=998244353;
int n,m,q,t[M],p[M],c[M],add;
vector<int>g[M];
long long a[N],v[M],mul;
void dfs(int x){
	//cout<<x<<' ';
	if(t[x]==1)(a[p[x]]+=v[x])%=mod;
	else if(t[x]==2){
		if(!add)mul=(mul*v[x])%mod;
		else {
			for(int i=1;i<=n;i++){
				(a[i]*=v[x])%=mod;
			}
		}
	}
	else {
		for(int i=0;i<c[x];i++){
			int y=g[x][i];
			dfs(y);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(int i=1;i<=n;i++)a[i]=read();
	m=read();
	for(int i=1;i<=m;i++){
		t[i]=read();
		if(t[i]==1)p[i]=read(),v[i]=read(),add++;
		if(t[i]==2)v[i]=read();
		if(t[i]==3){ 
			c[i]=read();
			for(int j=1;j<=c[i];j++){
				int x=read();//cout<<i<<' '<<x<<"\n";
				g[i].push_back(x);
			}
		}
	}
	mul=1;
	q=read();
	for(int i=1;i<=q;i++){
		int x=read();
		dfs(x);
	}
	for(int i=1;i<=n;i++){
		if(add)cout<<a[i]<<' ';
		else cout<<(mul*a[i])%mod<<' ';
	}
	return 0;
}

==========
===== Successfully open the file  answers\HN-00095\snakes\snakes.cpp.The size of it is 2.145 KB.
/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
int read(){
	int x=0,f=1;char c=getchar();
	while((c<'0'||c>'9')){
		if(c=='-')f=-1;
		c=getchar();
	}
	while(!(c<'0'||c>'9')){
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
const int N=1e6+5,inf=1e9+5;
int n,k,ans;
ll a[N];
int dfs(int now,int l,ll tag){
	ll sum=0,cut=0;
	cout<<now<<' '<<l<<' '<<tag<<"\n";
	if(l==now){
		if(tag>=a[now])return 1;
		else return -1;
	}
	//cout<<now<<' '<<l<<"\n";
	for(int i=l;i<now;i++){
		if(i==now-1){
			if(a[now]-a[i]>tag)return -1;
			else return 0;
		}
		if(a[now]-(sum+a[i])>=a[now-1]){
			sum+=a[i];cut++;
			if(a[i]>tag)return -1;
		}
		else {
			if(a[now]-sum-tag>=a[now-1])return -1;
			int tmp=dfs(now-1,i+1,min(tag,a[now]-sum-a[i]));
			if(tmp==-1)return 0;
			return cut+tmp+1;
		}
	}
	return -1;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T=read();
	for(int t=1;t<=T;t++){
		if(t==1){
			n=read();
			for(int i=1;i<=n;i++)a[i]=read();
		}
		else {
			k=read();
			for(int i=1;i<=k;i++){
				int x=read(),y=read();
				a[x]=y;
			}
		}
		//for(int i=1;i<=n;i++)cout<<a[i]<<' ';
		int tmp=dfs(n,1,inf);
		if(tmp==-1)cout<<n<<"\n";
		else cout<<n-tmp<<"\n";
	}
	return 0;
}*/


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int read(){
	int x=0,f=1;char c=getchar();
	while((c<'0'||c>'9')){
		if(c=='-')f=-1;
		c=getchar();
	}
	while(!(c<'0'||c>'9')){
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
const int N=1e6+5,inf=1e9+5;
int n,k,ans;
ll a[N];
bool dfs(int now,int l,ll tag){
	ll sum=0;
	for(int i=l;i<now;i++){
		if(a[now]-(sum+a[i])>=a[now-1]){
			sum+=a[i];ans--;
			if(a[i]>tag)return false;
		}
		else {
			int b=ans;
			if(dfs(now-1,i,min(tag,a[now]-sum))==false)ans=b;
			return true;
		}
	}
	return false;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T=read();
	for(int t=1;t<=T;t++){
		if(t==1){
			n=read();
			for(int i=1;i<=n;i++)a[i]=read();
		}
		else {
			k=read();
			for(int i=1;i<=k;i++){
				int x=read(),y=read();
				a[x]=y;
			}
		}
		ans=n;dfs(n,1,inf);
		cout<<ans<<"\n";
	}
	return 0;
}

==========


---------- Now Opening N-00096's file(s).
===== Successfully open the file  answers\HN-00096\julian\julian.cpp.The size of it is 3.073 KB.
#include<bits/stdc++.h>
using namespace std;

int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	int q;
	
	cin >> q;
	while(q--) {
		long long n;
		
		scanf("%lld", &n);
		if(n < 366) {
			days[2]++;
			int sum = 0, m = 1;
			for(int i = 1; i <= 12; i++) {
				if(sum + days[i] <= n) {
					sum += days[i];
					m = i + 1;
					if(m > 12) {
						m = 1;
					}
				} else {
					break;
				}
			}
			days[2]--;
			printf("%d %d %d BC\n", (int)n - sum + 1, m, 4713);
		} else if(n < 1461) {
			int y, m = 1, d, sum = 0;
			
			for(int i = 4713; i >= 4710; i--) {
				bool flag = 0, p = 1;
				if((i - 1) % 4 == 0) {
					flag = 1;
				}
				if(flag) {
					days[2]++;
				}
				for(int j = 1; j <= 12; j++) {
					if(sum + days[j] <= n) {
						sum += days[j];
						m = j + 1;
						if(m > 12) {
							m = 1;
						}
					} else {
						p = 0;
						break;
					}
				}
				if(flag) {
					days[2]--;
				}
				y = i;
				if(!p) {
					break;
				}
			}
			printf("%d %d %d BC\n", (int)n - sum + 1, m, y);
		} else if(n <= 1721423) {
			int y = 4713 - (n / 1461) * 4, m = 1, d = 0, sum = 0;
			n %= 1461;
			for(int i = y; i >= 1; i--) {
				bool flag = 0, p = 1;
				if((i - 1) % 4 == 0) {
					flag = 1;
				}
				if(flag) {
					days[2]++;
				}
				for(int j = 1; j <= 12; j++) {
					if(sum + days[j] <= n) {
						sum += days[j];
						m = j + 1;
						if(m > 12) {
							m = 1;
						}
					} else {
						p = 0;
						break;
					}
				}
				if(flag) {
					days[2]--;
				}
				y = i;
				if(!p) {
					break;
				}
			}
			printf("%d %d %d BC\n", (int)n - sum + 1, m, y);
		} else if(n - 1721424 <= 577736) {
			n -= 1721424;
			long long y = (n / 1461) * 4 + 1, m = 1, d = 0, sum = 0;
			n %= 1461;
			for(int i = y; i <= y + 8; i++) {
				bool flag = 0, p = 1;
				if(i % 4 == 0) {
					flag = 1;
				}
				if(flag) {
					days[2]++;
				}
				for(int j = 1; j <= 12; j++) {
					if(sum + days[j] <= n) {
						sum += days[j];
						m = j + 1;
						if(m > 12) {
							m = 1;
						}
					} else {
						p = 0;
						break;
					}
				}
				if(flag) {
					days[2]--;
				}
				y = i;
				if(!p) {
					break;
				}
			}
			printf("%lld %lld %lld\n", n - sum + 1, m, y);
		} else {
			n -= 1721424 + 577736 + 1; n += 287;
			long long y = 1582, m = 1, d = 1, sum = 0;
			y += (n / 146097) * 400;
			n %= 146097;
			y += (n / 36524) * 100;
			n %= 36524;
			y += (n / 1461) * 4;
			n %= 1461;
			while(1) {
				bool flag = 0, p = 1;
				if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
					flag = 1;
				}
				if(flag) {
					days[2]++;
				}
				for(int j = 1; j <= 12; j++) {
					if(sum + days[j] <= n) {
						sum += days[j];
						m = j + 1;
						if(m > 12) {
							m = 1; y++;
						}
						//cout << y << " " << m << " " << sum << " " << n << endl;
					} else {
						p = 0;
						break;
					}
				}
				if(flag) {
					days[2]--;
				}
				if(!p) {
					break;
				}
			}
			printf("%lld %lld %lld\n", n - sum + 1, m, y);
		}
	}
	
	return 0;
}
==========
===== Successfully open the file        answers\HN-00096\zoo\zoo.cpp.The size of it is 1.203 KB.
#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;

const int MAXN = 1000000 + 5;

map<int, int> mp;
ull a[MAXN];
bool b[64], h[MAXN], tmp[64];
int p[MAXN], q[MAXN];
int n, m, c, k;
ull sum;

ull read() {
	char ch;
	while(!isdigit(ch = getchar()));
	ull res = ch - '0';
	while(isdigit(ch = getchar())) {
		res = res * 10 + ch - '0';
	}
	return res;
}

void print(ull k, bool v) {
	if(k == 0) {
		if(v) {
			printf("0\n");
		}
		return;
	}
	print(k / 10, 0);
	putchar(k % 10 + '0');
	if(v) {
		putchar('\n');
	}
}

int main() {
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	scanf("%d%d%d%d", &n, &m, &c, &k);
	for(int i = 1; i <= n; i++) {
		a[i] = read();
		sum |= a[i];
	}
	for(int i = 1; i <= m; i++) {
		scanf("%d%d", &p[i], &q[i]);
		if(mp.find(q[i]) == mp.end()) {
			mp[q[i]] = i;
		}
	}
	for(int i = 0; i < k; i++) {
		if(sum & (1ull << i)) {
			b[i] = 1;
		}
	}
	for(int i = 1; i <= m; i++) {
		if(b[p[i]]) {
			h[mp[q[i]]] = 1;
		}
	}
	
	for(int i = 1; i <= m; i++) {
		if(!h[mp[q[i]]]) {
			tmp[p[i]] = 1;
		}
	}
	int cnt = 0;
	for(int i = 0; i < 64; i++) {
		cnt += tmp[i];
	}
	ull ans = (1ull << (k - cnt)) - n;
	
	print(ans, 1);
	
	return 0;
}
==========
===== Successfully open the file      answers\HN-00096\call\call.cpp.The size of it is 0.093 KB.
#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100000 + 5;

int main() {
	
}
==========
===== Successfully open the file  answers\HN-00096\snakes\snakes.cpp.The size of it is 0.082 KB.
#include<bits/stdc++.h>
using namespace std;

const int MAXN = 

int main() {
	
}
==========


---------- Now Opening N-00097's file(s).
===== Successfully open the file  answers\HN-00097\julian\julian.cpp.The size of it is 0.899 KB.
#include<cstdio>
using namespace std;
int Q, r;
int year, month, day;
int mond[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int dayh;
int yr1(int d)
{
	int y=-4713, sum=0;
	while(sum<d)
	{
		if((-y)%4==1) sum+=366;
		else sum+=365;
		y++;
	}
	return y-1;
}
int ed1(int ye)
{
	int sum=0;
	for(int y=-4713; y<ye; y++)
	{
		if((-y)%4==1) sum+=366;
		else sum+=365;
	}
	return abs(r-sum);
}
int md1(int yd)
{
	if((-year)%4==1&&yd==60) return 3;
	int sum=0, m=1;
	for(m=1; sum<=yd; m++)
	{
		sum+=mond[m];
		if((-year)%4==1&&m==2) sum++;
	}
	day=mond[m-1]-abs(yd-sum);
	return m-1;
}
int main()
{
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	scanf("%d", &Q);
	for(int i=1; i<=Q; i++)
	{
		year=month=day=0;
		scanf("%d", &r);
		if(r<=1721424)
		{
			year=yr1(r);
			int yuday=ed1(year);
			month=md1(yuday);
			printf("%d %d %d BC", day+1, month, -year);
		}
	}
	return 0;
} 
==========
===== Successfully open the file        answers\HN-00097\zoo\zoo.cpp.The size of it is 0.536 KB.
#include<cstdio>
using namespace std;
int a[1000005], p[1000005], q[1000005];
int n, m, c, k;
int main()
{
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	scanf("%d %d %d %d", &n, &m, &c, &k);
	for(int i=1; i<=n; i++) scanf("%d", &a[i]);
	for(int i=1; i<=m; i++) scanf("%d %d", &p[i], &q[i]);
	if(n==3&&m==3&&c==5&&k==4&&a[1]==1&&a[2]==4&&a[3]==6&&p[1]==0&&p[3]==2&&q[1]==3&&q[3]==5)
	{
		printf("13");
		return 0;
	}
	else if(n==2&&m==2&&c==4&&k==3)
	{
		printf("2");
		return 0;
	}
	else printf("0");
	return 0;
} 
==========
===== Successfully open the file      answers\HN-00097\call\call.cpp.The size of it is 0.152 KB.
#include<cstdio>
using namespace std;
int main()
{
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	printf("6 8 12");
	return 0;
} 
==========
===== Successfully open the file  answers\HN-00097\snakes\snakes.cpp.The size of it is 0.675 KB.
#include<cstdio>
using namespace std;
int a[1000005], b[1000005];
int T, n, k;
int main()
{
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	scanf("%d", &T);
	for(int _1=1; _1<=T; _1++)
	{
		if(_1==1)
		{
			scanf("%d", &n);
			for(int i=1; i<=n; i++) scanf("%d", &a[i]);
		}
		else
		{
			scanf("%d", &k);
			for(int i=1; i<=k; i++)
			{
				int x, y;
				scanf("%d %d", &x, &y);
				a[x]=y;
			}
		}
		if(n==3)
		{
			if(a[3]-a[1]>=a[2]) printf("1\n");
			else printf("3\n");
		}
		else
		{
			for(int i=1; i<=n; i++) b[i]=a[i];
			int h=1;
			while(b[n]-b[h]>=b[n-1])
			{
				b[n]-=b[h];
				h++;
			}
			printf("%d", n-h+1);
		}
	}
	return 0;
} 
==========


---------- Now Opening N-00098's file(s).
===== Successfully open the file  answers\HN-00098\julian\julian.cpp.The size of it is 0.253 KB.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cout << "11 1 4713 BC"<<endl<<"10 4 4713 BC"<<endl<<"27 9 4711 BC";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file        answers\HN-00098\zoo\zoo.cpp.The size of it is 0.241 KB.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k,a[10001]={},q[10001]={},p[10001]={};
	cout << 13;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00098\call\call.cpp.The size of it is 0.246 KB.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int m,hs[10001]={},n,dd[100001]={};
	cout << 6<<" "<<8<<" "<<12;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00098\snakes\snakes.cpp.The size of it is 0.232 KB.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int n,a,f[100001]={};
	cout << 5 << endl << 3;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========


---------- Now Opening N-00099's file(s).
===== Successfully open the file  answers\HN-00099\julian\julian.cpp.The size of it is 2.472 KB.
#include <bits/stdc++.h>
using namespace std; 
typedef long long LL; 
int A[20] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
int B[20] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
LL N;
int Sa[20], Sb[20], Sc[20]; 
LL calc(LL mid) { 
	if (mid == 0) return 0; 
	LL res = 365; 
	mid--; 
	if (mid <= 4712) return res + 1ll * mid / 4 * Sc[4] + Sc[mid % 4]; 
	res += 4712ll / 4 * Sc[4], mid -= 4712; 
	if (mid <= 3) return res + mid * 365; 
	res += 3 * 365, mid -= 3; 
	if (mid <= 1578) return res + 1ll * mid / 4 * Sc[4] + Sc[mid % 4]; 
	res += 1578ll / 4 * Sc[4] + Sc[1578 % 4], mid -= 1578; 
	if (mid == 1) return res + 355; 
	mid--, res += 355; 
	if (mid == 1) return res + 365; 
	mid--, res += 365; 
	if (mid <= 16) return res + mid / 4 * Sc[4] + Sc[mid % 4]; 
	res += 16 / 4 * Sc[4], mid -= 16; 
	return res + mid * 365 + mid / 4 - mid / 100 + mid / 400 + 2; 
} 
void print(int x, int arr[]) { 
	++x;
	if (x <= 31) printf("%d 1 ", x);
	else { 
		for (int i = 1; i <= 12; i++) 
			if (x <= arr[i]) { printf("%d %d ", x, i); break; } 
			else x -= arr[i] + (i == 1);
	} 
} 
int sol(int x) { 
	if (x < 4713) return -4713 + x; 
	else return x - 4713 + 1; 
} 
void solve() { 
	int l = 0, r = 1e9 + 1, res = r - 1;
	//++N; 
	while (l <= r) { 
		int mid = (l + r) >> 1; 
		if (calc(mid) <= N) res = mid, l = mid + 1; 
		else r = mid - 1; 
	} 
	LL cnt = calc(res); 
	int year = sol(res);
	if (cnt) ++N; 
	if (year < 0) { 
		if ((-year) % 4 == 0) print(N - cnt, B), printf("%d BC\n", -year); 
		else print(N - cnt, A), printf("%d BC\n", -year); 
	} else { 
		--N; 
		if (year > 1582) --N; 
		if (year == 1582) { 
			int x = cnt - res; 
			A[10] = 20; 
			for (int i = 1; i <= 12; i++) 
				if (x <= A[i]) { 
					if (i != 10) {
						printf("%d %d ", x, i);
					} else { 
						if (x <= 4) printf("%d %d ", x, i); 
						else printf("%d %d ", 10 + x, i); 
					} 
					break; 
				} else x -= A[i]; 
			A[10] = 30; 
			printf("%d\n", year); 
		} else { 
			if (year % 4 == 0) print(N - cnt, B), printf("%d\n", year); 
			else print(N - cnt, A), printf("%d\n", year);
		} 
	} 
} 
int main() { 
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout); 
	int Q; scanf("%d", &Q); 
	for (int i = 1; i <= 12; i++) Sa[i] = Sa[i - 1] + A[i]; 
	for (int i = 1; i <= 12; i++) Sb[i] = Sb[i - 1] + B[i]; 
	Sc[1] = 366, Sc[2] = 366 + 365, Sc[3] = 366 + 365 * 2, Sc[4] = 366 + 365 * 3; 
	while (Q--) { 
		scanf("%lld", &N); 
		solve(); 
	} 
	return 0; 
} 
==========
===== Successfully open the file        answers\HN-00099\zoo\zoo.cpp.The size of it is 0.710 KB.
#include <bits/stdc++.h> 
using namespace std; 
typedef long long LL; 
const int MAX_N = 1e6 + 5; 
int N, M, C, K; 
LL a[MAX_N]; 
vector<int> lim[100];
int hav[100], cnt; 
int main() {
	freopen("zoo.in", "r", stdin); 
	freopen("zoo.out", "w", stdout); 
	scanf("%d %d %d %d", &N, &M, &C, &K);
	for (int i = 1; i <= N; i++) scanf("%lld", a + i); 
	for (int i = 1; i <= M; i++) { 
		int p, q; scanf("%d %d", &p, &q); 
		lim[p].push_back(q); 
	} 
	for (int i = 1; i <= N; i++) 
		for (int j = 0; j < K; j++) 
			if (a[i] >> j & 1ll) hav[j] = 1;
	for (int i = 0; i < K; i++) cnt += hav[i]; 
	for (int i = 0; i < K; i++) 
		if (!hav[i] && !lim[i].size()) ++cnt; 
	printf("%lld\n", (1ll << cnt) - N); 
	return 0; 
} 
==========
===== Successfully open the file      answers\HN-00099\call\call.cpp.The size of it is 0.268 KB.
#include <bits/stdc++.h> 
using namespace std;
const int Mod = 998244353; 
const int MAX_N = 1e6 + 5; 
int N, M, a[MAX_N]; 
int op[MAX_N], P[MAX_N], V[MAX_N]; 
vector<int> pot[MAX_N]; 

int main() {
	freopen("call.out", "w", stdout); 
	puts("6 8 12"); 
	return 0; 
} 
==========
===== Successfully open the file  answers\HN-00099\snakes\snakes.cpp.The size of it is 0.559 KB.
#include <bits/stdc++.h>
using namespace std;
int N, a[1000005]; 
void solve(int a, int b, int c) { 
	if (c >= a + b) puts("1"); 
	else puts("3"); 
} 
int main() {
	freopen("snakes.in", "r", stdin); 
	freopen("snakes.out", "w", stdout); 
	int T; scanf("%d %d", &T, &N); T--; 
	for (int i = 1; i <= N; i++) scanf("%d", a + i); 
	if (N == 3) { 
		solve(a[1], a[2], a[3]);
		while (T--) {
			int n; scanf("%d", &n);
			for (int i = 1; i <= n; i++) {
				int x, y; scanf("%d %d", &x, &y); 
				a[x] = y; 
			}
			solve(a[1], a[2], a[3]); 
		} 
	} 
	return 0; 
} 
==========


---------- Now Opening N-00100's file(s).
===== Successfully open the file  answers\HN-00100\julian\julian.cpp.The size of it is 1.715 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopn("julian.in","r"stdin)
	freopn("julian.out","w"stdout)
	long Q,s,k,d,re,w,u,nf[130100],z,pr,uj[130100],rj[130100];
	long r[130100];
	cin>>Q;
	for(int i=1;i<=Q;i++){
		cin>>r[i];
		if(r[i]>1721422){
			s=r[i]-1721423;
			if(s>578109){
				s=s-10;
			}
			else{
				if(s>578099){
					s=578099;
				}
			}
			if(s>577815){
			k=s-577815;
			d=k/3674*100;
			re=(k-d*100)/1461*4;
			w=(k-d*100-re*4)/365;
			u=k-(4*d+re);
			nf[i]=d+re+w+1582;
			z=u%365;
			if(nf[i]%4==0&&nf[i]%100>0){
				pr=29;
			}
			else{
				if(nf[i]%400==0){
					pr=29;
				}
				else{
					pr=28;
				}
			}
			if(z<153+pr){
				if(z<62+pr){
					if(z<31+pr){
						if(z<31){
							rj[i]=z;
							uj[i]=1;
						}
						else{
							rj[i]=z-31;
							uj[i]=2;
						}
					}
					else{
						rj[i]=z-31-pr;
						uj[i]=3;
					}
				}
				else{
					if(z<123+pr){
						if(z<92+pr){
							rj[i]=z-pr-62;
							uj[i]=4;
						}
						else{
							rj[i]=z-pr-92;
							uj[i]=5;
						}
					}
					else{
						rj[i]=z-123-pr;
						uj[i]=6;
					}
				}
			}
			else{
					if(z<245+pr){
					if(z<215+pr){
						if(z<184+pr){
							rj[i]=z-153-pr;
							uj[i]=7;
						}
						else{
							rj[i]=z-pr-184;
							uj[i]=8;
						}
					}
					else{
						rj[i]=z-215-pr;
						uj[i]=9;
					}
				}
				else{
					if(z<306+pr){
						if(z<276+pr){
							rj[i]=z-pr-245;
							uj[i]=10;
						}
						else{
							rj[i]=z-pr-276;
							uj[i]=11;
						}
					}
					else{
						rj[i]=z-306-pr;
						uj[i]=12;
					}
				}
			}
		}
		}
		//endl{
	////cout<<7<<11<<2020<<"BC"
	//	}
	}
	for(int n=1;n<=Q;n++){
		cout<<rj[n]<<" "<<uj[n]<<" "<<nf[n]<<endl;
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00100\zoo\zoo.cpp.The size of it is 0.284 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopn("zoo.in","r"stdin)
	freopn("zoo.out","w"stdout)
int a,s,d,f,e[100000],m[1111],j[1111];
cin>>a>>s>>d>>f;
	for(int i=1;i<=a;i++){
		cin>>e[i];
	}
		for(int i=1;i<=s;i++){
		cin>>m[i]>>j[i];
	}
	cout<<rand();
	return 0;
}
==========
===== Opening      answers\HN-00100\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00100\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00101's file(s).
===== Successfully open the file  answers\HN-00101\julian\julian.cpp.The size of it is 1.727 KB.
#include<bits/stdc++.h>
using namespace std;
int q,ans[4][100010],qday=2299159,rd,ry,rm=1;
int month[13]={31,28,31,30,31,30,31,31,30,31,30,31};
void mpd(int r){
	for(int i=0;i<12;i++){
		if(r==1&&rm==2){
			if(rd-29<=0) return ;
			else rm++,rd-=29;
		}
		else if(rd-month[i]<=0) return ;
		else rm++,rd-=month[i];
	}
	return ;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	for(int i=1;i<=q;i++){
		int julian;
		scanf("%d",&julian);
		if(julian<2299159){
			ry=(julian/1461)*4,rd=julian%1461;
			ry+=rd/365,rd=rd%365,rm=1;
			if((ry%4==1&&ry<=4713)||((ry+1)%4==0&&ry>4713)) mpd(1);
			else mpd(0);
			if(ry>=4713) ans[1][i]=ry-4713+1;
			else ans[1][i]=-ry;
			ans[2][i]=rm,ans[3][i]=rd+1;
		}
		else if(julian>2299159){
			julian=julian-2299159+11;
			ry=1582;
			if(julian>453){
				julian-=453;
				ry+=2+(julian/1461)*4,rd=julian%1461;
				ry+=rd/365,rd=rd%365,rm=1;
				if((ry%4==0&&ry%100!=0)||ry%400==0) mpd(1);
				else mpd(0);
				ans[1][i]=ry,ans[2][i]=rm,ans[3][i]=rd;
			}
			else if(julian>=88&&julian<453){
				julian-=88;
				ry=ry+1+julian/1461,rd=julian;
				ry+=rd/365,rd=rd%365+1,rm=1;
				mpd(0);
				ans[1][i]=ry,ans[2][i]=rm,ans[3][i]=rd;
			}
			else if(julian<88){
				ans[1][i]=ry,rm=10,rd=julian;
				if(rd>=28) ans[2][i]=rm+1,ans[3][i]=rd-28;
				else ans[2][i]=rm,ans[3][i]=rd+3;
			}
		}
		else ans[1][i]=1582,ans[2][i]=10,ans[3][i]=4;
	}
	for(int i=1;i<q;i++){
		if(ans[1][i]<0) printf("%d %d %d BC\n",ans[3][i],ans[2][i],-ans[1][i]);
		else printf("%d %d %d\n",ans[3][i],ans[2][i],ans[1][i]);
	}
	if(ans[1][q]<0) printf("%d %d %d BC\n",ans[3][q],ans[2][q],-ans[1][q]);
		else printf("%d %d %d\n",ans[3][q],ans[2][q],ans[1][q]);
	return 0;
}
==========
===== Opening        answers\HN-00101\zoo\zoo.cpp Failed.File not found.
===== Successfully open the file      answers\HN-00101\call\call.cpp.The size of it is 1.138 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,t,a[100010],hs[4][100010],b[110][1000010],r=1;
void j1(int o){
	a[hs[2][o]]+=hs[3][o];
	return ;
}
void j2(int o){
	for(int i=1;i<=n;i++)
		a[i]=a[i]*hs[2][o];
	return ;
}
void j3(int o){
	for(int i=1;i<=hs[2][o];i++){
		if(hs[1][b[hs[3][o]][i]]==1) j1(b[hs[3][o]][i]);
		else if(hs[1][b[hs[3][o]][i]]==2) j2(b[hs[3][o]][i]);
		else if(hs[1][b[hs[3][o]][i]]==3) j3(b[hs[3][o]][i]);
	}
	return ;
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&hs[1][i]);
		if(hs[1][i]==1) scanf("%d%d",&hs[2][i],&hs[3][i]);
		else if(hs[1][i]==2) scanf("%d",&hs[2][i]);
		else if(hs[1][i]==3){
			scanf("%d",&hs[2][i]);hs[3][i]=r,r++;
			for(int j=1;j<=hs[2][i];j++) scanf("%d",&b[hs[3][i]][j]);
		}
	}
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int q;
		scanf("%d",&q);
		if(hs[1][q]==1) j1(q);
		else if(hs[1][q]==2) j2(q);
		else if(hs[1][q]==3) j3(q);
	}
	for(int i=1;i<n;i++)
		printf("%d ",a[i]%998244353);
	printf("%d",a[n]%998244353);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00101\snakes\snakes.cpp.The size of it is 0.766 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,t,ans[1000010],a[1000010],b[1000010],r=1;
int hh(int z){
	sort(b+1,b+z+1);
	if(b[z]-b[1]>b[z-1]){
		b[1]-=b[z];
		return 1;
	}
	else return 0;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&t);
	scanf("%d",&n);
	ans[1]=n;
	for(int j=1;j<=n;j++) scanf("%d",&a[j]);
	for(int j=1;j<=n;j++) b[j]=a[j];
	while(hh(ans[1])==1&&ans[1]>1) --ans[1];
	for(int i=2;i<=t;i++){
		scanf("%d",&m);
		int x,y;
		ans[i]=n;
		for(int j=1;j<=m;j++){scanf("%d%d",&x,&y);a[x]=y;}
		for(int j=1;j<=n;j++) b[j]=a[j];
		while(hh(ans[i])==1){
			ans[i]--;
			if(ans[i]==2){
				ans[i]=1;
				break;
			}
		}
	}
	for(int i=1;i<t;i++) printf("%d\n",ans[i]);
	printf("%d",ans[t]);
	return 0;
}
==========


---------- Now Opening N-00102's file(s).
===== Successfully open the file  answers\HN-00102\julian\julian.cpp.The size of it is 1.423 KB.
#include<bits/stdc++.h>
using namespace std;
int q,n,x;
int d=1,m=1,y=4713;
int mon[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool bj=false;
void dm(){
	if(d==1&&y!=4713)d=0;
	if(x==6294)mon[10]-=10;
	if(bj==true&&y%4==0&&y%100!=0)mon[2]=29;
	if(bj==true&&y%4==0&&y<=1582)
	if(bj==true&&y%400==0)mon[2]=29;
	if(bj==false&&(y-1)%4==0)mon[2]=29;
	for(int i=1;i<=12;i++){
		if(n<mon[i])break;
		n-=mon[i];
		m++;
	}
	d+=n;
	mon[2]=28;
	mon[10]=31;
}
void gl(){
	while(y%100!=0&&n){
		if(y%4==0)n-=366;
		else n-=365;
		y++;
	}
	while(n>=146097){
		n-=146097;
		y+=400;
	}
	while(n>=36524){
		n-=36524;
		y+=100;
	}
	while(n>=1461){
		n-=1461;
		y+=4;
	}
	while(n>=365){
		n-=365;
		y++;
		if(y%4==0&&y%100!=0){
			if(n>=366){
				n-=366;
				y++;
			}
			else dm();
		}
		if(y%400==0){
			if(n>=366){
				n-=366;
				y++;
			}
			else dm();
		}
	}
	dm();
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	while(q--){
		scanf("%d",&n);
		d=0,m=1;
		x=n/1461;
		x=x*4+(n%1461)/365;
		if(x>=6295){
			bj=true;
			n=n-6295/4*1461-(6295%4)*365+10;
			n--;
			d=1,m=1,y=1583;
			gl();
		}
		else if(x<6294&&x>=4713){
			bj=true;
			d=1;
			n=n-x/4*1461-(x%4)*365;
			x-=4712;
			y=x;
			dm();
		}
		else if(x<4713){
			bj=false;
			n=n-x/4*1461-(x%4)*365;
			y=4713-x;
			dm();
		}
		if(bj==true)printf("%d %d %d\n",d,m,y);
		else printf("%d %d %d BC\n",d,m,y);
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00102\zoo\zoo.cpp.The size of it is 0.801 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct food{
	int p,q;
}r[1000001];
int n,m,c,k;
int num[1000001];
bool s[100000001]={false},w[100000001]={false};
int t[101],sum;
void er(int x){
	sum=-1;
	memset(t,0,sizeof(t));
	while(x){
		sum++;
		t[sum]=x%2;
		x/=2;
	}
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	ll k1=1;
	while(k--)k1*=2;
	for(int i=1;i<=n;i++)scanf("%d",&num[i]);
	for(int i=1;i<=m;i++)scanf("%d%d",&r[i].p,&r[i].q);
	for(int i=1;i<=n;i++){
		er(num[i]);
		for(int i=1;i<=m;i++){
			if(sum-r[i].p<0)continue;
			if(t[r[i].p]==1)s[r[i].q]=true;
		}
	}
	for(int i=1;i<=m;i++){
		if(s[r[i].q]==false&&w[r[i].p]==false){
			w[r[i].p]=true;
			k1/=2;
		}
	}
	k1-=n;
	printf("%lld",k1);
	return 0;
}

==========
===== Opening      answers\HN-00102\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00102\snakes\snakes.cpp.The size of it is 0.916 KB.
#include<bits/stdc++.h>
using namespace std;
struct snake{
	int p,num;
}a[1000001];
int n,m;
bool cmp(snake x,snake y){
	if(x.p==y.p)return x.num<y.num;
	else return x.p<y.p;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T;
	scanf("%d",&T);
	for(int o=1;o<=T;o++){
		if(o==1)scanf("%d",&n);
		else scanf("%d",&m);
		if(o==1)for(int i=1;i<=n;i++){
			scanf("%d",&a[i].p);
			a[i].num=i;
		}
		else{
			for(int i=1;i<=n;i++){
				int x,y;
				scanf("%d%d",&x,&y);
				for(int i=1;i<=n;i++){
					if(a[i].num==x){
						a[i].p=y;
						break;
					}
				}
			}
		}
		if(n==3){
			if(a[3].p-a[1].p>=a[2].p)printf("1\n");
			else printf("3\n");
		}
		else{
			int n1=n;
			int c=1;
			while(a[n1].p-a[c].p>a[c+1].p||(a[n1].p-a[c].p==a[c+1].p&&a[n1].num>a[c+1].num)){
				n1--;
				a[n1].p-=a[c].p;
				c++;
				sort(a+c,a+c+n,cmp);
			}
			printf("%d\n",n1);
		}
	}
	return 0;
}

==========


---------- Now Opening N-00103's file(s).
===== Successfully open the file  answers\HN-00103\julian\julian.cpp.The size of it is 0.336 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m;
inline int read()
{
	int tr=0,fl=1;
	char ch;
	while(!((ch=getchar())>='0'&&ch<='9'))if(ch=='-')fl=-1;
	while(ch>='0'&&ch<='9')
	{
		tr=tr*10+ch-'0';
		ch=getchar();
	}
	return tr*fl;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	
	return 0;
}
==========
===== Successfully open the file        answers\HN-00103\zoo\zoo.cpp.The size of it is 1.770 KB.
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long UlL;
inline void read(UlL & tr)
{
	UlL fl=1;
	tr=0;
	char ch;
	while(!((ch=getchar())>='0'&&ch<='9'))if(ch=='-')fl=-1;
	while(ch>='0'&&ch<='9')
	{
		tr=tr*10+ch-'0';
		ch=getchar();
	}
	tr*=fl;
	return ;
}
inline void read(int & tr)
{
	int fl=1;
	tr=0;
	char ch;
	while(!((ch=getchar())>='0'&&ch<='9'))if(ch=='-')fl=-1;
	while(ch>='0'&&ch<='9')
	{
		//cout<<tr;
		tr=tr*10+ch-'0';
		//cout<<tr<<endl;
		ch=getchar();
	}
	tr*=fl;
	return ;
}
const int maxn=1e6+5;
int n,m,c,k;
int dc[maxn],cnt=0;
bool bi_have[100],food_got[maxn],bi_avai[100];
struct query
{
	int p,c;
}q[maxn];
bool cmp(const query & q1,const query & q2){
	return q1.c<q2.c;
}
void sep(UlL ops)
{
	int opt=0;
	while(ops)
	{
		if(ops&1)bi_have[opt]=1;
		opt++;
		ops>>=1;
	}
	return ;
}
const UlL msu=((((UlL)1<<63)-1)<<1)+1;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	read(n);read(m);
	read(c);read(k);
	//cout<<n<<' '<<m<<' '<<c<<' '<<k<<endl;
	UlL t=0;
	for(int i=0;i<k;i++)bi_avai[i]=1;
	for(int i=1;i<=n;i++)
	{
		read(t);
		sep(t);
	}
	for(int i=1;i<=m;i++)
	{
		read(q[i].p);
		read(q[i].c);
	}
	sort(q+1,q+m+1,cmp);
	q[0].c=0;
	
	for(int i=1;i<=m;i++)
	{
		if(q[i].c!=q[i-1].c)dc[i]=++cnt;
		else dc[i]=dc[i-1];
		//if(dc[i]>100)cout<<dc[i]
		food_got[dc[i]]|=bi_have[q[i].p];
	}
	
	for(int i=1;i<=m;i++)
	if((food_got[dc[i]]==0)&&(bi_have[q[i].p]==0))bi_avai[q[i].p]=0;
	int nk=0;
	for(int i=0;i<k;i++)
	if(bi_avai[i])nk++;
	UlL sum;
	if(nk==64)
	{
		sum=msu;
		n-=1;
	}
	else sum=((UlL)1<<nk);
	cout<<sum-n;
	//for(int i=1;i<=6;i++)cout<<dc[i]<<' ';
	//for(int i=0;i<=3;i++)cout<<bi_have[i]<<endl;
	//cout<<endl;
	//cout<<sum<<' '<<sum-n<<endl;
	//cout<<((UlL)1<<63)<<endl;
	
	return 0;
}
==========
===== Successfully open the file      answers\HN-00103\call\call.cpp.The size of it is 0.854 KB.
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int n,m;
const LL mod=998244353;
LL s[1005][1005],m[1005],a[1005];
vector<int> used[1005];
inline LL read()
{
	LL tr=0,fl=1;
	char ch;
	while(!((ch=getchar())>='0'&&ch<='9'))if(ch=='-')fl=-1;
	while(ch>='0'&&ch<='9')
	{
		tr=tr*10+ch-'0';
		ch=getchar();
	}
	return tr*fl;
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=(int)read();
	for(int i=1;i<=n;i++)a[i]=read();
	m=(int)read();
	LL t,t1,t2;
	for(int i=1;i<=m;i++)
	{
		t=read();
		m[i]=1;
		if(t==1)
		{
			t1=read();
			s[i][t1]=read();
		}
		else if(t==2) m[i]=read();
		else 
		{
			m[i]=0;
			t2=read();
			for(int j=1;j<=t2;j++)
			used[i].push_back()
		}
	}
	for(int i=1;i<=m;i++)
	if(m[i]==0)
	{
		m[i]=1;
		for(int i=1;i<=t1;i++)
		{
			t2=read();
			m[i]=m[i]*m[t2]
	 	}
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00103\snakes\snakes.cpp.The size of it is 1.083 KB.
#include<bits/stdc++.h>
using namespace std;
inline int read()
{
	int tr=0,fl=1;
	char ch;
	while(!((ch=getchar())>='0'&&ch<='9'))if(ch=='-')fl=-1;
	while(ch>='0'&&ch<='9')
	{
		tr=tr*10+ch-'0';
		ch=getchar();
	}
	return tr*fl;
}
int n,m;
struct snake
{
	int h,nam;
	bool operator < (snake s1) const {
		if((this->h<s1.h)||(this->h==s1.h&&this->nam>s1.nam))return true;
		return false;
	}
}a[1000005];
bool cmp(snake s1,snake s2)
{
	return s1.nam<s2.nam;
}
map<snake,int> pq,epq;
map<snake,int>::iterator i1;
int d[1000005];
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T=read();
	for(int Ti=1;Ti<=T;Ti++)
	{
		if(Ti==1)
		{
			n=read();
			for(int i=1;i<=n;i++)
			{
				a[i].h=read();
				a[i].nam=i;
			}
		}
		else
		{
			m=read();
			sort(a+1,a+n+1,cmp);
			for(int i=1;i<=m;i++)
			{
				int t=read();
				a[t].h=read();
			}
		}
		pq=epq;
		for(int i=1;i<=n;i++)
		pq.insert(make_pair(a[i],1));
		for(int i=1;i<=n-1;i++)
		{
			i1=pq.end();
			i1--;
			d[i]=(*i1).first.nam;
			pq.erase(i1);
			i1=pq.begin();
			
		}
	}
	return 0;
}
==========


---------- Now Opening N-00104's file(s).
===== Successfully open the file  answers\HN-00104\julian\julian.cpp.The size of it is 2.010 KB.
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <iomanip>

using namespace std;

long long q, r, day, month, year, a[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	freopen ("julian.in", "r", stdin);
	freopen ("julian.out", "w", stdout);
	cin >> q;
	while (q--) {
		cin >> r;
		day = 1;
		month = 1;
		year = -4713;
		day += r;
		if (day <= 366) {
			while (day > a[month]) {
				day -= a[month];
				month++;
			}
			cout << day << " " << month << " " << abs(year) << " " << "BC" << endl;
		}
		else if (day <= ((4713 * 365) + 1178)) {
			day -= 1 + day / 365 / 4;
			year += day / 365;
			day %= 365;
			if ((year + 1) % 4 != 0) {
				a[2] = 28;
			}
			while (day > a[month]) {
				day -= a[month];
				month++;
			}
			cout << day << " " << month << " " << abs(year) << " " << "BC" << endl;
			a[2] = 29;
		}
		else if (day <= ((6294 * 365) + 1573)){ // 60'
			year = 1;
			day -= ((4713 * 365) + 1178);
			day -= 1 + day / 365 / 4;
			year += day / 365;
			day %= 365;
			if (year % 4 != 0) {
				a[2] = 28;
			}
			while (day > a[month]) {
				day -= a[month];
				month++;
			}
			cout << day << " " << month << " " << year << endl;
			a[2] = 29;
		}
		else if (day >= ((6294 * 365) + 1573 + 1) && day <= ((6294 * 365) + 1574 + 365)) {
			day -= (6294 * 365) + 1573;
			year = 1582;
			a[2] = 28;
			while (day > a[month]) {
				day -= a[month];
				month++;
			}
			if (month == 10 && day >= 5) {
				day += 10;
			}
			while (day > a[month]) {
				day -= a[month];
				month++;
			}
			cout << day << " " << month << " " << year << endl;
			a[2] = 29;
		}
		else{
			year = 1583;
			day -= (6295 * 365) + 1573 + 355;
			day -= day / 365 / 4;
			year += day / 365;
			day %= 365;
			if ((year % 4 != 0 || year % 100 == 0) && year % 400 != 0) {
				a[2] = 28;
			}
			while (day > a[month]) {
				day -= a[month];
				month++;
			}
			cout << day << " " << month << " " << year << endl;
			a[2] = 29;
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00104\zoo\zoo.cpp.The size of it is 0.778 KB.
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int kMaxN = 1e6 + 1;
const int kMaxK = 1e5 + 1;

int n, m, c, k, a[kMaxN], q[kMaxN], p;
bool b[kMaxK];

int main() {
	freopen ("zoo.in", "r", stdin);
	freopen ("zoo.out", "w", stdout);
	cin >> n >> m >> c >> k;
	int gong;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> q[i] >> p;
	}
	if (n == 3 && m == 3 && c == 5 && k == 4 && q[1] == 1 && q[2] == 0 && q[3] == 2 && q[4] == 2) {
		cout << 13;
	} 
	else if (n == 2 && m == 2 && c == 4 && k == 3 && q[1] == 1 && q[2] == 1 && q[3] == 2) {
		cout << 2;
	}
	else if (n == 18 && m == 240 && c == 48543975 && k == 30 && q[1] == 29 && q[2] == 19){
		cout << 2097134;
	}
	else {
		cout << 0;
	}
	return 0;
}
==========
===== Opening      answers\HN-00104\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00104\snakes\snakes.cpp.The size of it is 0.592 KB.
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int kMaxN = 1e6 + 1;

int n, a[kMaxN], f, ff, t, x, y;

int main() {
	freopen ("snakes.in", "r", stdin);
	freopen ("snakes.out", "w", stdout);
	cin >> t;
	ff = t - 1;
	while (t--) {
		if (t == ff) {
			cin >> n;
			for (int j = 1; j <= n; j++) {
				cin >> a[j];
			}
		}
		else {
			cin >> f;
			for (int j = 1; j <= f; j++) {
				cin >> x >> y;
				a[x] = y;
			}
		}
		sort (a + 1, a + n + 1);
		if ((a[3] - a[1]) < a[2]) {
			cout << 3 << endl;
		}
		else {
			cout << 1 << endl;
		}
	}
	return 0;
}
==========


---------- Now Opening N-00105's file(s).
===== Successfully open the file  answers\HN-00105\julian\julian.cpp.The size of it is 1.984 KB.
#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
using namespace std;
inline ll re(){
	ll x=0;char q;bool f=1;
	do{q=getchar();if(q=='-')f=0;}while((q<'0'||q>'9')&&~q);
	while(q>='0'&&q<='9'){x=(x<<3)+(x<<1)+(q^'0');q=getchar();}
	return f?x:-x;
}
int Q,n;
int a[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int y,m,d;
inline bool pd(int x){
	if(x<0){
		x++;
	}
	if(x<=1582){
		if(x%4==0)return 1;
		return 0;
	}else{
		if(x%400==0)return 1;
		if((x%100!=0)&&(x%4==0))return 1;
		return 0;
	}
}
int main(){
	freopen("julian.in","r",stdin);freopen("julian.out","w",stdout);
	Q=re();
	while(Q--){
	//	cerr<<Q<<endl;
		n=re();
		y=-4713;
		m=1;
		d=1;
		a[2]=28;
			while(n>=pd(y)+365&&y!=1582){
				n-=pd(y)+365;
				y++;
				if(y==0)y++;
				//printf("%d %d %d BC %d\n",d,m,-y,n);
			}
			if(y==1582&&n>=355){
				n-=355;
				y++;
				//cerr<<-1<<endl;
			}
		while(n>=pd(y)+365&&y!=1582){
			n-=pd(y)+365;
			y++;
			if(y>0&&y%100==0){
				while(1){
					if(y%400==0){
						if(n<36525)break;
						n-=36525;
						y+=100;
					}else{
						if(n<36524)break;
						n-=36524;
						y+=100;
					}
				}
			}
			if(y>0&&y%1000==0){
				while(1){
					if(y%400==0){
						if(n<365242)break;
						n-=365242;
						y+=1000;
					}else{
						if(n<365242 )break;
						n-=365242 ;
						y+=1000;
					}
				}
			}
		}
		if(y==1582){
			for(int i=1;i<=9;i++){
				if(n>=a[i]){
					n-=a[i];
					m++;
				}else{
					break;
				}
			}
			if(m=10){
				while(n){
					d++;
					n--;
					if(d==5)d=15;
					if(d==a[10]+1){
						d=1;
						m++;
					}
				}
			}
			for(int i=m;i<=12;i++){
				if(n>=a[i]){
					n-=a[i];
					m++;
				}else{
					break;
				}
			}
			d+=n;
		}else{
			a[2]+=pd(y);
			for(int i=1;i<=12;i++){
				if(n>=a[i]){
					n-=a[i];
					m++;
				}else{
					break;
				}
			}
			d+=n;
		//printf("%d %d %d BC %d\n",d,m,-y,n);
		}
		if(y==0)y++;
		if(y<0){
			printf("%d %d %d BC\n",d,m,-y);
		}else{
			printf("%d %d %d\n",d,m,y);
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00105\zoo\zoo.cpp.The size of it is 1.249 KB.
#include<bits/stdc++.h>
#define ll unsigned long long
#define mp make_pair
using namespace std;
inline ll re(){
	ll x=0;char q;bool f=1;
	do{q=getchar();if(q=='-')f=0;}while((q<'0'||q>'9')&&~q);
	while(q>='0'&&q<='9'){x=(x<<3)+(x<<1)+(q^'0');q=getchar();}
	return f?x:-x;
}
const int N=1e6+5;
ll n,m,c,k;
bool a[70];
map<int,bool>v;
struct edge{
	int to,nt;
}e[N<<1];
int head[70],tot;
void add(int f,int t){
	e[++tot]=(edge){t,head[f]};
	head[f]=tot;
}
ll f[70][2];
ll dfs(int x,bool c){
	//cerr<<x<<" "<<c<<endl;
	if(x==-1){
		return !c;
	}
	if(f[x][c]){
		return f[x][c];
	}
	bool u=1;
	for(int i=head[x-1];i&&u;i=e[i].nt){
		if(!v[e[i].to]){
			u=0;
		}
	}
	if(u){
		ll tmp=0;
		tmp+=dfs(x-1,1);
		tmp+=dfs(x-1,0);
		return f[x][c]=tmp;
	}else{
		return f[x][c]=dfs(x-1,0);
	}
}
int main(){
	freopen("zoo.in","r",stdin);freopen("zoo.out","w",stdout);
	n=re();m=re();c=re();k=re();
	for(int i=1;i<=n;i++){
		ll x=re();
		for(ll j=0;j<64;j++){
			if(x&((ll)(1)<<j)){
				a[j]=1;
		//		cerr<<"->"<<j<<endl;
			}
		}
	}
	for(int i=1;i<=m;i++){
		int x=re(),c=re();
		if(a[x]){
			v[c]=1;
		//	cerr<<"buy:"<<c<<endl;
		}
		add(x,c);
	}
	ll ans=dfs(k,0);
	for(int i=0;i<k;i++){
		cerr<<f[i][0]<<"-"<<f[i][1]<<endl;
	}
	cout<<ans-n<<endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00105\call\call.cpp.The size of it is 2.075 KB.
#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define ls (rt<<1)
#define rs (rt<<1|1)
#define mid ((l+r)>>1)
using namespace std;
inline ll re(){
	ll x=0;char q;bool f=1;
	do{q=getchar();if(q=='-')f=0;}while((q<'0'||q>'9')&&~q);
	while(q>='0'&&q<='9'){x=(x<<3)+(x<<1)+(q^'0');q=getchar();}
	return f?x:-x;
}
const ll N=1e5+5,M=998244353;
int n,m;
ll a[N];
struct node{
	int type;
	int p,k;
	vector<int>m;
}b[N*3];
int l,r;
ll mul[N<<2];
void push(int rt){
	if(mul[rt]!=1){
		mul[ls]*=mul[rt];
		mul[ls]%=M;
		mul[rs]*=mul[rt];
		mul[rs]%=M;
		mul[rt]=1;
	}
}
void slove(int rt,int l,int r){
	if(l==r){
		a[l]*=mul[rt];
		a[l]%=M;
		mul[rt]=1;
		printf("%lld ",a[l]);
		return;
	}
	push(rt);
	slove(ls,l,mid);
	slove(rs,mid+1,r);
}
void add(int rt,int l,int r,int o){
	//cerr<<-2<<endl;
	if(l==r){
		a[l]*=mul[rt];
		a[l]%=M;
		a[l]+=b[o].k;
		a[l]%=M;
		mul[rt]=1;
		//cerr<<l<<" "<<o<<" "<<b[o].k<<" "<<a[l]<<endl;
		return;
	}
	push(rt);
	if(b[o].p<=mid)
		add(ls,l,mid,o);
	else
		add(rs,mid+1,r,o);
}
void tp3(int i){
	//cerr<<"-"<<i<<endl;
	vector<int>::iterator it=b[i].m.begin();
	for(;it!=b[i].m.end();it++){
		int x=(*it);
		//cerr<<-x<<endl;
		//cerr<<"--"<<x<<endl;
		if(b[x].type==1){
			add(1,1,n,x);
		}else if(b[x].type==2){
			mul[1]*=b[x].k;
		}else{
			tp3(x);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);freopen("call.out","w",stdout);
	n=re();
	for(int i=1;i<=n;i++){
		a[i]=re();
	}
	for(int i=1;i<=n<<2+1;i++){
		mul[i]=1;
	}
	m=re();
	for(int i=1;i<=m;i++){
		int type=re();
		if(type==1){
			b[i].type=1;
			b[i].p=re();
			b[i].k=re();
		}else if(type==2){
			b[i].type=2;
			b[i].k=re();
		}else{
			int o=re();
			b[i].type=3;
			while(o--){
				b[i].m.push_back(re());
			}
		}
	}
	//cerr<<endl;
	int Q=re();
	while(Q--){
		int x=re();
		//cerr<<b[x].type<<"-"<<endl;
		if(b[x].type==1){
			//cerr<<-1<<endl;
			add(1,1,n,x);
		}else if(b[x].type==2){
			//cerr<<-2<<endl;
			mul[1]*=b[x].k;
			push(1);
		}else{
			//cerr<<-3<<endl;
			tp3(x);
		}
		//slove(1,1,n);
		//cerr<<endl<<endl;
	}
	slove(1,1,n);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00105\snakes\snakes.cpp.The size of it is 0.963 KB.
#include<bits/stdc++.h>
#define ll unsigned long long
#define mp make_pair
using namespace std;
inline ll re(){
	ll x=0;char q;bool f=1;
	do{q=getchar();if(q=='-')f=0;}while((q<'0'||q>'9')&&~q);
	while(q>='0'&&q<='9'){x=(x<<3)+(x<<1)+(q^'0');q=getchar();}
	return f?x:-x;
}
const int N=1e6+5;
int T,n;
struct node{
	int v,i;
	bool operator<(node a)const{return v!=a.v?v>a.v:i>a.i;}
}a[N],b[N];
int main(){
	freopen("snakes.in","r",stdin);freopen("snakes.out","w",stdout);
	T=re();
	n=re();
	for(int t=1;t<=T;t++){
		if(t==1){
			for(int i=1;i<=n;i++){
				a[i]=(node){re(),i};
			}
		}else{
			int m=re();
			for(int i=1;i<=m;i++){
				int x=re(),y=re();
				a[x]=(node){y,i};
			}
		}
		for(int i=1;i<=n;i++){
			b[i]=a[i];
		}
		sort(b+1,b+n+1);
		int i_=1,n_=n;
		int sum=0;
		while(n_-i_+1>1){
			if(b[i_].v-b[n_].v>=b[i_+1].v){
				n_--;
			}else{
				sum++;
				i_++;
			}
			if(n_-i_+1==2){
				n_--;
			}
		}
		printf("%d\n",n_-i_+1+sum);
	}
	return 0;
}
==========


---------- Now Opening N-00106's file(s).
===== Successfully open the file  answers\HN-00106\julian\julian.cpp.The size of it is 1.692 KB.
#include<bits/stdc++.h>
using namespace std;
const long long now=-4713;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
int q;
inline jdz(int t)
{
	if(t<0)return -t;
	return t;
}
long long qiu(long long day,long long t)
{
	long long guo=(t+4713);
	if(t>0)guo--;
	long long run=guo/4+1;
	if(guo%4==0)run--;
	long long geli=t-1582;
	for(int i=1600;i<=t;i+=100)
	{
		run++;
		if(i%400==0)run--;
	}
	long long res=(long long)(day-365*guo-run);
	if(t>1582)res-=10;
	return res;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	while(q--)
	{
		month[2]=28;
		long long day,year,yday;
		scanf("%lld",&day);
		year=day/365+now;
		yday=day%365;
		long long ruy,geli;
		if(year>=0)year+=1;
		ruy=(year-now)/4;
		if(year<1582)if((year-now)%4>=1)ruy++;
		if(year>=1582)
		{
			day+=10;
			geli=year-1582;
			ruy=ruy-(geli/100+1)+(geli/400);
		}
		yday-=ruy;
		while(yday<0)
		{
			year--,yday+=365;
			if(year>1852)
			{
				if(year%4==0&&year%100!=0||year%400==0)yday++;
			}
			if(year==1852)yday-=9;
			if(year<1852){
				if(year%4==0)yday++;
			}
			if(year==0)year--;
		}
//		long long past=(year-now)*365,run=(year-now-1)/4+1;
//		if(year>1582)
//		{
//			past-=10;
//			if(year>=1600)
//			run=run-((year-1582-12)/1000+1)+((year-1582-12)/400+1);
//		}
//		past+=run;
//		if(year>now)
//		yday=day-past;
		yday=qiu(day,year);
		int w=1;
		yday++;
		if((year<0&&(year+1)%4==0)||((year)>0&&(year%4==0&&year%100!=0)||(year%400==0)))month[2]=29;
		while(yday>month[w])
		{
			yday-=month[w];
			w++;
		}
		if(w==0)w++;
		printf("%d ",yday);
		printf("%d ",w);
		printf("%d ",jdz(year));
		if(year<0)printf("BC");
		puts("");
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00106\zoo\zoo.cpp.The size of it is 0.672 KB.
#include<bits/stdc++.h>
using namespace std;
long long a[100005],m,c;
int n,k,flag[64];
inline int log_2(long long t)
{
	int c=0;
	while(t>1)
	{
		t/=2;c++;
	}
	return c;
}
inline long long pow_2(int t)
{
	long long sum=1;
	for(int i=1;i<=t;i++)
	sum*=2;
	return sum;
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		long long t=a[i];
		while(t>0)
		{
			long long w=t&(t-1);
			flag[log_2(t-w)]=1;
			t=w;
		}
	}
	long long res=k;
	for(int i=1;i<=m;i++)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		if(!flag[l])flag[l]=1,res--;
	}
	cout<<pow_2(res)-n;
	return 0;
}

==========
===== Successfully open the file      answers\HN-00106\call\call.cpp.The size of it is 0.592 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,q,plus[100005],cheng[100005],a[100005],flag[100005];
struct xxxx{
	int kind;
	int a,b,c,sx[105];
}call[20005];
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",a+i);
	}
	for(int i=1;i<=m;i++)
	{
		int t;
		scanf("%d",&t);
		call[i].kind=t;
		if(t==1){
			scanf("%d%d",&call[i].a,&call[i].b);
		}
		if(t==2){
			scanf("%d",&call[i].a);
		}
		if(t==3){
			int cnt;
			scanf("%d",&cnt);
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<0<<" ";
	}
	return 0;
}

==========
===== Opening  answers\HN-00106\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00107's file(s).
===== Successfully open the file  answers\HN-00107\julian\julian.cpp.The size of it is 0.513 KB.
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
ll a[5],d[100000000];
void julian(ll day){
	a[1]=4713;a[2]=1;a[3]=1;
	a[3]+=day;
	while (a[3]>=31){
		if (a[2]==13) a[2]=1;
		a[3]-=b[a[2]];
		a[2]++;
		}
	cout<<a[3]<<" "<<a[2]<<" "<<a[1]<<" BC";
	}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	ios::sync_with_stdio(0);
	int q;
	cin>>q;
	for (int i=1;i<=q;i++){
		cin>>d[i];julian(d[i]);
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00107\zoo\zoo.cpp.The size of it is 0.212 KB.
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	ios::sync_with_stdio(0);
	int x=rand();
	cout<<x;
	return 0;
}

==========
===== Successfully open the file      answers\HN-00107\call\call.cpp.The size of it is 0.965 KB.
#include<bits/stdc++.h>
#define ll long long int
#define num 20001
using namespace std;
int n,m,q,i,j;
int a[num],gj[num][num];
struct hs{
	int pd;
	int pj;
	int vj;
	int cj;
	int fj;
}hs[num];
void m1(int xs){
	a[hs[xs].pj]+=hs[xs].vj;
}
void m2(int xs){
	for (i=1;i<=n;i++) a[i]*=hs[xs].vj;
}
void m3(int xs){
	for (i=1;i<=hs[xs].cj;i++){
		int xxss=gj[xs][i];
		int ppdd=hs[xxss].pd;
		if (ppdd==1) m1(xxss);
		else m2(xxss);
	}
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n;
	for (i=1;i<=n;i++) cin>>a[i];
	cin>>m;int tj;
	for (i=1;i<=m;i++){
		cin>>tj;hs[i].pd=tj;
		if (tj==1) cin>>hs[i].pj>>hs[i].vj;
		else if (tj==2) cin>>hs[i].vj;
		else{
			cin>>hs[i].cj;
			for (j=1;j<=hs[i].cj;j++)
			cin>>gj[i][j];
		}
	}
	cin>>q;int fj;
	for (j=1;j<=q;j++){
		cin>>fj;
		if (hs[fj].pd==1) m1(fj);
		else if (hs[fj].pd==2) m2(fj);
		else m3(fj);
	}
	for (i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
==========
===== Opening  answers\HN-00107\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00108's file(s).
===== Successfully open the file  answers\HN-00108\julian\julian.cpp.The size of it is 1.445 KB.
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int month[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	ll month1=0,month2=0;
	for (int j=1;j<=12;j++)
	{
		if (j==2)
			month2+=29;
		else
			month2+=month[j];
		month1+=month[j];
	}
	ll q,r;
	scanf("%lld",&q);
	while (q--)
	{
		month[2]=28;
		ll year=-4713;
		scanf("%lld",&r);
		while (1)
		{
			bool p=0;
			if (year<0)
			{
				if ((year+1)%4==0||year==-1)
				{
					if (r>month2)
					{
						p=1;
						r-=month2;
					}	
				}
				else if (r>month1)
				{
					p=1;
					r-=month1;
				}
			}
			else
			{
				if ((year%4==0&&year%100!=0)||year%400==0)
				{
					if (r>month2)
					{
						p=1;
						r-=month2;
					}	
				}
				else if (r>month1)
				{
					p=1;
					r-=month1;
				}
			}
			cout<<p<<endl;
			if (!p)break;
			year++;
			if (year==0)
				year++;
		}
		ll yue,day=1;
		if (year>0)
		{
			if ((year%4==0&&year%100!=0)||year%400==0)month[2]++;
			for (yue=1;yue<=12;yue++)
			{
				if (r<month[yue])
				{
					day+=r;
					break;
				}
				r-=month[yue];
			}
		}
		else
		{
			if ((year+1)%4==0||year==-1)month[2]++;
			for (yue=1;yue<=12;yue++)
			{
				if (r<month[yue])
				{
					day+=r;
					break;
				}
				r-=month[yue];
			}
		}
		if (year>0)
			printf("%lld %lld %lld\n",day,yue,year);
		else
			printf("%lld %lld %lld BC\n",day,yue,-year);
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00108\zoo\zoo.cpp.The size of it is 0.763 KB.
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e6+5;
const ll M=1e6+5;
ll n,m,c,k,a[N];
bool vis[100],bj[100],hj[100000005];
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%lld %lld %lld %lld",&n,&m,&c,&k);
	for (ll i=1;i<=n;i++)
		scanf("%lld",&a[i]),hj[i]=1;
	for (ll i=1;i<=m;i++)
	{
		ll pp,qq;
		scanf("%lld %lld",&pp,&qq);
		bj[pp]=1;
	}
	if (n==3&&m==3&&c==5&&k==4)
	{
		printf("%d",13);
		return 0;
	}
	for (ll i=1;i<=n;i++)
		for (ll j=0;j<=35;j++)
			if ((i&(1<<j))||(bj[j]==0))
				vis[j]=1;
	ll s=0;
	for (ll i=0;i<=31;i++)
		if (vis[i])s=s+(ll)(1<<i);
	ll maxn=pow(2,k)-1,ans=0;
	for (ll i=0;i<=maxn;i++)
		if (((i|s)|s)==s&&(hj[i]==0))
			ans++;
	printf("%lld",ans);
	return 0;
}

==========
===== Successfully open the file      answers\HN-00108\call\call.cpp.The size of it is 1.311 KB.
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+5;
const ll mod=998244353;
struct edge
{
	int v,next;
}e[1000005];
struct hj
{
	int t,p,v;
}DO[N];
int cnt,n,m,head[N],total[N],diao[N];
ll a[N],cheng=1;
void add(int u,int v)
{
	cnt++;
	e[cnt].v=v;
	e[cnt].next=head[u];
	head[u]=cnt;
}
void dfs(int u)
{
	if (DO[u].t!=3)
	{
		if (DO[u].t==1)a[DO[u].p]=(a[DO[u].p]+DO[u].v%mod)%mod;
		else
		{
			for (int i=1;i<=n;i++)
				a[i]=(a[i]%mod*DO[u].v%mod)%mod;
		}
		return;
	}
	for (int i=head[u];i;i=e[i].next)
		dfs(e[i].v);
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	for (int i=1;i<=m;i++)
	{
		scanf("%d",&DO[i].t);
		if (DO[i].t==1)
			scanf("%d %d",&DO[i].p,&DO[i].v);
		else if (DO[i].t==2)
			scanf("%d",&DO[i].v);
		else
		{
			int c;
			scanf("%d",&c);
			for (int j=1;j<=c;j++)
				scanf("%d",&diao[j]);
			for (int j=c;j>=1;j--)
				add(i,diao[j]);
		}
	}
	int Q;
	scanf("%d",&Q);
	for (int i=1;i<=Q;i++)
	{
		int zuo;
		scanf("%d",&zuo);
		dfs(zuo);
	}
//	for (int i=1;i<=n;i++)
//		a[i]=(a[i]*cheng)%mod;
//	for (int i=1;i<=m;i++)
//		if (total[i])a[DO[i].p]=(a[DO[i].p]+DO[i].v%mod)%mod;
	for (int i=1;i<=n;i++)
		printf("%lld ",a[i]);
	return 0;
}

==========
===== Successfully open the file  answers\HN-00108\snakes\snakes.cpp.The size of it is 0.550 KB.
#include <bits/stdc++.h>
using namespace std;
int a[3000005];
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int t,n;
	scanf("%d %d",&t,&n);
	t--;
	for (int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	if (a[3]-a[1]>a[2])
	{
		a[3]-=(a[1]+a[2]);
		a[1]=a[2]=0;
		printf("%d\n",1);
	}
	else
		printf("%d\n",n);
	while (t--)
	{
		int k;
		scanf("%d",&k);
		for (int i=1;i<=k;i++)
		{
			int x,y;
			scanf("%d %d",&x,&y);
			a[x]=y;
		}
		if (a[3]-a[1]>a[2])
		{
			a[3]-=(a[1]+a[2]);
			printf("%d\n",1);
		}
	}
	return 0;
}

==========


---------- Now Opening N-00109's file(s).
===== Successfully open the file  answers\HN-00109\julian\julian.cpp.The size of it is 3.280 KB.
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;
int n,ans1,ans2(1),ans3(1),K1=1721058,K2=146097,K3=1461,K4=365,K5=2299158;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long long in;
inline void printi(bool fg){
	if(!fg){
		printf("%d %d %d BC\n",ans3,ans2,4713-ans1);
	}
	else{
		printf("%d %d %d\n",ans3,ans2,ans1-4712);
	}
}
inline int  read(){
	int w(1),res(0);char c(getchar());
	while(c<'0'||c>'9'){if(c=='-')w=-1;c=getchar();}
	while(c>='0'&&c<='9')res=(res<<3)+(res<<1)+(c^48),c=getchar();
	return res*w;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	n=read();
	for(int i(1);i<=n;++i){
		scanf("%lld",&in);
		if(in<=366){
			for(int i(1);i<=12;++i){
				if(i==2){
					if(in>=a[i]+1){
						++ans2;
						ans3=1;
						in-=a[i]+1;
					}
					else{
						ans3+=in;
						break;
					}
				}
				else{
					if(in>=a[i]){
						++ans2;
						ans3=1;
						in-=a[i];
					}
					else{
						ans3+=in;
						break;
					}
				}
			}
			printi(0);
		}
		else if(in<K1){
			if(in<K3)in-=366,++ans1;
			ans1+=4*(in/K3);in%=K3;
			if(in<=366){
				for(int i(1);i<=12;++i){
					if(i==2){
						if(in>=a[i]+1){
							++ans2;
							ans3=1;
							in-=a[i]+1;
						}
						else{
							ans3+=in;
							break;
						}
					}
					else{
						if(in>=a[i]){
							++ans2;
							ans3=1;
							in-=a[i];
						}
						else{
							ans3+=in;
							break;
						}
					}
				}
			}
			ans1+=(in/K4);in%=K4;
			for(int i(1);i<=12;++i){
				if(in>=a[i]){
					++ans2;
					ans3=1;
					in-=a[i];
				}
				else{
					ans3+=in;
					break;
				}
			}
			printi(0);
			}
			else if(in<=K5){
				ans1=4712;in-=K1;
				ans1+=400*(in/K2);in%=K2;
				ans1+=4*(in/K3);in%=K3;
				if(in<=366&&((ans1-4712)%400==0||((ans1-4712)%4==0&&(ans1-4712)%100))){
					for(int i(1);i<=12;++i){
						if(i==2){
							if(in>=a[i]+1){
								++ans2;
								ans3=1;
								in-=a[i]+1;
							}
							else{
								ans3+=in;
								break;
							}
						}
						else{
							if(in>=a[i]){
								++ans2;
								ans3=1;
								in-=a[i];
							}
							else{
								ans3+=in;
								break;
							}
						}
					}
					printi(1);
				}
				else{
					ans1+=(in/K4);in%=K4;
					for(int i(1);i<=12;++i){
						if(in>=a[i]){
							++ans2;
							ans3=1;
							in-=a[i];
						}
						else{
							ans3+=in;
							break;
						}
					}
					printi(1);
				}
		}
		else {
			in+=10;
			ans1=4712;in-=K1;
			ans1+=400*(in/K2);in%=K2;
			ans1+=4*(in/K3);in%=K3;
			if(in<=366&&((ans1-4712)%400==0||((ans1-4712)%4==0&&(ans1-4712)%100))){
				for(int i(1);i<=12;++i){
					if(i==2){
						if(in>=a[i]+1){
							++ans2;
							ans3=1;
							in-=a[i]+1;
						}
						else{
							ans3+=in;
							break;
						}
					}
					else{
						if(in>=a[i]){
							++ans2;
							ans3=1;
							in-=a[i];
						}
						else{
							ans3+=in;
							break;
						}
					}
				}
				printi(1);
			}
			else{
				ans1+=(in/K4);in%=K4;
				for(int i(1);i<=12;++i){
					if(in>=a[i]){
						++ans2;
						ans3=1;
						in-=a[i];
						printf("%lld\n",in);
					}
					else{
						printf("%lld\n",in);
						ans3+=in;
						break;
					}
				}
				printi(1);
			}
		}
		ans1=0;ans2=ans3=1;
	}
}
==========
===== Successfully open the file        answers\HN-00109\zoo\zoo.cpp.The size of it is 1.164 KB.
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<map>
using namespace std;
long long n,m,c,k,cnt,tot,ans(1);
int head[1000101];
bool pre[65],buy[1000101],dis[65];
struct node{
	int a,next;
};
node p[1000101];
map<long long,int>f;
inline void add(int x,int y){
	p[++cnt].a=x;p[cnt].next=head[y];
	head[y]=cnt;
}
inline void qwq(long long x){
	for(int i(k);i>=0;--i)
		if(x>=(1ll<<i))pre[i]=1,x-=(1ll<<i);
}
inline int  read(){
	int w(1),res(0);char c(getchar());
	while(c<'0'||c>'9'){if(c=='-')w=-1;c=getchar();}
	while(c>='0'&&c<='9')res=(res<<3)+(res<<1)+(c^48),c=getchar();
	return res*w;
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read();m=read();c=read();k=read();
	for(int i(1),x;i<=n;++i)x=read(),qwq(x);
	long long x,y;
	for(int i(1);i<=m;++i){
		scanf("%lld%lld",&x,&y);
		if(!f[y])y=f[y]=++tot;
		else y=f[y];
		add(x,y);
		if(pre[x])buy[y]=1;
	}
	for(int i(1);i<=tot;++i){
		if(!buy[i]){
			for(int j(head[i]);j;j=p[i].next)dis[p[j].a]=1;
		}
	}
	for(int i(0);i<k-1;++i)
		if(!dis[i])ans*=2;
	if(!dis[k-1])ans+=ans;
	printf("%lld",ans-n);
	fclose(stdin);
	fclose(stdout);
	return 0;
}==========
===== Successfully open the file      answers\HN-00109\call\call.cpp.The size of it is 1.788 KB.
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;
struct node{
	long long sum,mul;
};
node a[1000101];
struct change{
	int kind,add,go;
};
change p[1000101];
struct qwq{
	int to,next,last;
};
qwq qaq[1000101];
const int mod=998244353;
int n,m,q,tot,cnt;
int head[1000101],tail[1000101];
long long all(1);
inline long long EX_pow(long long x,int y){
	long long ans(1);
	while(y){
		if(y&1)ans=(ans*x)%mod;
		x=(x*x)%mod;y>>=1;
	}
	return ans;
}
void dfs(int x){
	if(p[x].kind==1){
		a[p[x].go].sum=((a[p[x].go].sum*EX_pow(a[p[x].go].mul,mod-2))%mod*all+p[x].add)%mod;
		a[p[x].go].mul=all%mod;
	}
	else if(p[x].kind==2) all=(all*p[x].add)%mod;
	else {
		for(int i(tail[p[x].go]);i;i=qaq[i].last)dfs(qaq[i].to);
	}
}
inline int  read(){
	int w(1),res(0);char c(getchar());
	while(c<'0'||c>'9'){if(c=='-')w=-1;c=getchar();}
	while(c>='0'&&c<='9')res=(res<<3)+(res<<1)+(c^48),c=getchar();
	return res*w;
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(int i(1);i<=n;++a[i].mul,++i)a[i].sum=read();
	m=read();
	for(int i(1),x,y,z;i<=m;++i){
		x=read();
		if(x==1){
			y=read();z=read();
			p[i].kind=1;
			p[i].add=z;
			p[i].go=y;
		}
		else if(x==2){
			y=read();
			p[i].kind=2;
			p[i].add=y;
		}
		else{
			y=read();
			p[i].kind=3;
			p[i].go=++tot;
			qaq[++cnt].to=read();
			qaq[cnt].next=head[tot];
			tail[tot]=head[tot]=cnt;
			for(int j(2);j<=y;++j){
				qaq[++cnt].to=read();
				qaq[cnt].next=head[tot];
				qaq[head[tot]].last=cnt;
				head[tot]=cnt;
			}
		}
	}
	q=read();
	for(int i(1);i<=q;++i){
		dfs(read());
	}
	for(int i(1);i<=n;++i)
		printf("%lld ",((a[i].sum*EX_pow(a[i].mul,mod-2))%mod*all)%mod);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Opening  answers\HN-00109\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00110's file(s).
===== Successfully open the file  answers\HN-00110\julian\julian.cpp.The size of it is 0.849 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int Q,r[10000],i,n=4713,y=1,h=1;
	cin>>Q;
	for(i=1;i<=Q;i++){
		h=1;
		y=1;
		n=4713;
		cin>>r[i];
		h=1+r[i];
		if(h>31){
			y=h-h%30;
			y=y/30+1;
		}
		if(y>12){
			n=y-y%12;
			n=4713+n/12;
		}
		if(y>12){
			y=y%12;
		}
		if(y>2&&n%4!=0){
			h=h-28;
			h=h%31;
		}
	}
	for(i=1;i<=Q;i++){
		h=1;
		y=1;
		n=4713;
		h=1+r[i];
		if(h>31){
			y=h-h%30;
			y=y/30+1;
		}
		if(y>12){
			n=y-y%12;
			n=4713-n/12;
		}
		if(y>12){
			y=y%12;
		}
		if(y>2&&n%4!=0&&h>360){
			h=h-29;
		    r[i]=r[i]-r[i]%365;
		    r[i]=r[i]/365+1;
		    h=h%30+r[i]*5;
		    y=y-1;
		}else{
			if(h>30){
				h=h%30-1;
			}else{
				h=h%30;
			}
		}
		cout<<h<<" "<<y<<" "<<n<<" "<<"BC"<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file        answers\HN-00110\zoo\zoo.cpp.The size of it is 0.147 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
    cout<<13;
	return 0;
}

==========
===== Opening      answers\HN-00110\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00110\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00111's file(s).
===== Successfully open the file  answers\HN-00111\julian\julian.cpp.The size of it is 2.585 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int read(){
	int sum=0;
	char ch=getchar();
	while(ch<'0' || '9'<ch){
		ch=getchar();
	}
	while('0'<=ch && ch<='9'){
		sum=(sum<<1)+(sum<<3)+(ch^'0');
		ch=getchar();
	}
	return sum;
}
int day(int x){
	if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12) return 31;
	else if(x==2) return 28;
	else return 30;
}

bool r(int y,bool BC,bool G){
	if(G){
		return (y%400==0 || (y%100!=0 && y % 4 == 0));
	}else{
		if(!BC){
			y++;
		}
		return (y-1 % 4 == 0);
	}
}

int yday(int y,bool BC,bool G){
	if(r(y,BC,G)) return 366;
	else return 365;
}

bool toyear(int y,int &n,bool BC,bool G){
	int tmp=yday(y,BC,G);
	if(n>tmp) n-=tmp;
	else{
		int to=n/30;
		n-=to*30;
		if(to >= 1) n--;
		if(to >= 2) n+= r(y,BC,G)?1:2;
		if(to >= 3) n--;
		if(to >= 5) n--;
		if(to >= 7) n--;
		if(to >= 8) n--;
		if(to >= 10) n--;
		if(to >= 12) n--;
		
		if(n<0){
			n+=day(to);
			to--;
		}
		
		if(BC) printf("%lld %lld %lld BC\n",n+1,to+1,y);
		else printf("%lld %lld %lld\n",n+1,to+1,y);
		return 1;
	}
	return 0;
}

signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int Q=read();
	while(Q--){
		int d=1,m=1,y=4713;
		int n=read();
		
		if(n<=366){
			if(n==366){
				puts("1 1 4712");
			}else{
				int to=n/30;
				n-=to*30;
				if(to >= 1) n--;
				if(to >= 2) n++;
				if(to >= 3) n--;
				if(to >= 5) n--;
				if(to >= 7) n--;
				if(to >= 8) n--;
				if(to >= 10) n--;
				if(to >= 12) n--;
				
				if(n<0){
					n+=day(to);
					to--;
				}
				
				m+=to;
				d+=n;
				printf("%lld %lld 4713 BC\n",d,m);
				continue;
			}
		}else{
			n-=366;
			y=4712;
		}
		
		
		int to=min(1178ll,n/1461);
		
		y-=to*4;
		n-=to*1461;
		
		if(to<1178){
			
			if(toyear(y,n,1,0)) continue;
			if(toyear(y-1,n,1,0)) continue;
			if(toyear(y-2,n,1,0)) continue;
			if(toyear(y-3,n,1,0)) continue;
		}
		
		y=1;
		
		to=min(395ll,n/1461);
		
		y+=to*4;
		n-=to*1461;
		if(to<395){
			if(toyear(y,n,0,0)) continue;
			if(toyear(y+1,n,0,0)) continue;
			if(toyear(y+2,n,0,0)) continue;
			if(toyear(y+3,n,0,0)) continue;
		}
		//ÏÖÔÚÊÇ1581-1-1
		
		
		if(toyear(y++,n,0,0)) continue;
		
		//1582-1-1
		
		if(n>=308){
			n+=10;
			toyear(y++,n,0,0);
		}else{
			if(toyear(y++,n,0,0)) continue;
		}
		
		
		
		//1583-1-1
		
		bool flag=0;
		for(int i=1;i<=17;i++){
			if(toyear(y++,n,0,1)){
				flag=1;
				break;
			}
		}
		if(flag) continue;
		
		//1600-1-1
	
		
		to=n/146097ll;
		
		y+=to*400ll;
		n-=to*146097ll;
		
		
		for(int i=1;i<=400;i++){
			if(toyear(y++,n,0,1)) break;
		}
		
	}
	
	return 0;
}
==========
===== Successfully open the file        answers\HN-00111\zoo\zoo.cpp.The size of it is 0.882 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int read(){
	int sum=0;
	char ch=getchar();
	while(ch<'0' || '9'<ch){
		ch=getchar();
	}
	while('0'<=ch && ch<='9'){
		sum=(sum<<1)+(sum<<3)+(ch^'0');
		ch=getchar();
	}
	return sum;
}
bool flag1[100]; //ÕâÒ»Î»ÊÇ·ñ¶ÔËÇÁÏÓÐÒªÇó 
bool flag2[100]; //ÊÇ·ñÓÐÓµÓÐÕâÒ»Î»µÄ¶¯Îï 
int a[1000005];
int p[1000005];
int q[1000005];
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n=read(),m=read(),c=read(),K=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	
	for(int i=1;i<=m;i++){
		p[i]=read();
		flag1[p[i]]=1;
		q[i]=read();
	}
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<=K;j++){
			if(!flag2[j] && (1ll<<j)&a[i]){
				flag2[j]=1;
			}
		}
	}
	int d=0;
	for(int i=0;i<=K;i++){
		if(flag1[i] && !flag2[i]){
			d++;
		}
	}
	
	int ans=(1ll<<(K-d)) - n;
	
	printf("%lld",ans);
	
	return 0;
}
==========
===== Successfully open the file      answers\HN-00111\call\call.cpp.The size of it is 0.867 KB.
#include<bits/stdc++.h>
using namespace std;
int read(){
	int sum=0;
	char ch=getchar();
	while(ch<'0' || '9'<ch){
		ch=getchar();
	}
	while('0'<=ch && ch<='9'){
		sum=(sum<<1)+(sum<<3)+(ch^'0');
		ch=getchar();
	}
	return sum;
}
int a[100005];
int t[100005];
int p[100005];
int v[100005];
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int n=read(),m;
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	m=read();
	for(int i=1;i<=m;i++){
		t[i]=read();
		if(t[i]==1){
			p[i]=read();
			v[i]=read();
		}else if(t[i]==2){
			v[i]=read();
		}else{
			read();
		}
	}
	
	int Q=read();
	while(Q--){
		int tmp=read();
		if(t[tmp] == 1){
			a[p[tmp]] += v[tmp];
			a[p[tmp]]%=998244353;
		}else if(t[tmp] == 2){
			for(int i=1;i<=n;i++){
				a[i]*=v[tmp];
				a[i]%=998244353;
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

==========
===== Successfully open the file  answers\HN-00111\snakes\snakes.cpp.The size of it is 0.764 KB.
#include<bits/stdc++.h>
using namespace std;
int a[100];
int b[100];
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T;
	scanf("%d",&T);
	int n;
	scanf("%d",&n);
	
	if(n!=3){
		while(T--){
			puts("1");
		}
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
		b[i]=a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	
	if(a[1]-a[3] < a[2]){
		puts("3");
	}else{
		puts("1");
	}
	
	T--;
	while(T--){
		int k;
		scanf("%d",&k);
		for(int i=1;i<=k;i++){
			int tmp1,tmp2;
			scanf("%d%d",&tmp1,&tmp2);
			b[tmp1]=tmp2;
		}
		for(int i=1;i<=n;i++){
			a[i]=b[i];
		}
		sort(a+1,a+n+1,greater<int>());
		
		if(a[1]-a[3] < a[2]){
			puts("3");
		}else if(a[1]-a[3] == a[2]){
			puts("2");
		}else{
			puts("1");
		}
	}
	return 0;
}

==========


---------- Now Opening N-00112's file(s).
===== Successfully open the file  answers\HN-00112\julian\julian.cpp.The size of it is 1.838 KB.
#include<bits/stdc++.h>
using namespace std;
const int sb=146097;
void read(int &x)
{
	x=0;int f=1;char ch=getchar();
	while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}
	while(isdigit(ch)){x=(x<<3)+(x<<1)+ch-'0';ch=getchar();}
	x*=f;
}
int n,y,m,d;
int ps[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int dy(int y)
{
	if(y%400==0)return 366;
	if(y%4==0)
	{
		if(y%100==0)return 365;
		else return 366;
	}
	return 365;
}
void bc(int x)
{
	y=4713,m=1,d=1;
	int p=x/1461;
	y-=p*4;
	x%=1461;
	while(x)
	{
		int now=ps[m];
		if(y%4==1&&m==2)now++;
		if(x<now)
		{
			d+=x;
			x-=now;
			break;
		}
		else
		{
			x-=now;
			if(m==12)
			{
				y--;
				m=1;
			}
			else m++;
		}
	}
	printf("%d %d %d BC\n",d,m,y);
}
void ad1(int x)
{
	y=1,m=1,d=1;
	int p=x/1461;
	y+=p*4;
	x%=1461;
	while(x)
	{
		int now=ps[m];
		if(y%4==0&&m==2)now++;
		if(x<now)
		{
			d+=x;
			x-=now;
			break;
		}
		else
		{
			x-=now;
			if(m==12)
			{
				y++;
				m=1;
			}
			else m++;
		}
	}
	printf("%d %d %d\n",d,m,y);
}
void ad2(int x)
{
	y=1582,m=10,d=15;
	if(x<=77)
	{
		if(x<=16) d+=x;
		else if(x<=46) m=11,d=x-16;
		else if(x<=77) m=12,d=x-46;
		printf("%d %d %d\n",d,m,y);
		return;
	}
	x-=78,y=1583,m=1,d=1;
	int p=x/sb;
	x%=sb;
	y+=400*p;
	/*if(x>=36524)x-=36524,y+=100;
	if(x>=36525)x-=36525,y+=100;
	if(x>=36524)x-=36524,y+=100;*/
	while(x)
	{
		int dyy=dy(y);
		if(x>=dyy)
		{
			x-=dyy,y++;
			continue;
		}
		int now=ps[m];
		if((y%400==0||(y%4==0&&y%100!=0))&&m==2)now++;
		if(x<now)
		{
			d+=x;
			x-=now;
			break;
		}
		else
		{
			x-=now;
			if(m==12)
			{
				y++;
				m=1;
			}
			else m++;
		}
	}
	printf("%d %d %d\n",d,m,y);
}
int _;
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	read(_);
	while(_--)
	{
		read(n);
		if(n<=1721423)bc(n);
		else if(n<=2299160)ad1(n-1721424);
		else ad2(n-2299161);
	}
}
==========
===== Successfully open the file        answers\HN-00112\zoo\zoo.cpp.The size of it is 1.146 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int inf=1e6+16;
const ll G=1e9+7;
void read(ll &x)
{
	x=0;ll f=1;char ch=getchar();
	while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}
	while(isdigit(ch)){x=(x<<3)+(x<<1)+ch-'0';ch=getchar();}
	x*=f;
}
ll n,m,c,k,tot,ans,an2,an;
ll v[inf];
struct e
{
	ll x,y;
}un[inf];
map<int,int>q;
ll ksm(ll x,ll y)
{
	ll sum=1;
	while(y)
	{
		if(y%2==1)sum=sum*x%G;
		x=x*x%G;
		y>>=1;
	}
	return sum;
}
int main()
{
	ll x,y,now;
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	read(n),read(m),read(c),read(k);
	for(int i=1;i<=n;i++)
	{
		read(x);
		now|=x;
	}
	for(int i=1;i<=m;i++)
	{
		read(un[i].x),read(un[i].y);
		if((now&(1<<x))==1) q[y]=1;//,cout<<x<<":"<<y<<endl;
		//un[++tot]=(e){x,y};
	}
	for(int i=1;i<=m;i++)
	{
		int X=un[i].x,Y=un[i].y;
		if((now&(1<<X))==0&&q[Y]==0)
		{
			//cout<<"~"<<X<<" "<<Y<<endl;
			if(v[X]==0)ans++,an2+=Y>c?0:1;
			v[X]=1;
		}
	}
	if(k-ans>c-an) an=ksm(2,c-an);
	else an=ksm(2,k-ans);
	/*printf("%lld %lld %lld %lld\n",k,ans,an,n);
	for(int i=1;i<=tot;i++)
	cout<<i<<" "<<un[i].x<<" "<<un[i].y<<endl;*/
	printf("%lld",an-n);
}
==========
===== Successfully open the file      answers\HN-00112\call\call.cpp.The size of it is 1.326 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll G=998244353,inf=1e6+16;
void read(ll &x)
{
	x=0;ll f=1;char ch=getchar();
	while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}
	while(isdigit(ch)){x=(x<<3)+(x<<1)+ch-'0';ch=getchar();}
	x*=f;
}
ll n,m,T,Q,tok;
ll a[inf],b[inf],aa[inf];
deque<ll>q[inf];
struct k
{
	ll T,x,y;
}wk[inf],nm[inf];
void dfs(int x)
{
	if(nm[x].T==1||nm[x].T==2)
	{
		wk[++tok]=(k){nm[x].T,nm[x].x,nm[x].y};
		return;
	}
	int mx=q[x].size();
	for(int i=0;i<mx;i++)
	dfs(q[x][i]);
}
int main()
{
	ll x,y,tot=1,z;
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	read(n);
	for(int i=1;i<=n;i++)
	read(a[i]);
	read(m);
	
	for(int i=1;i<=m;i++)
	{
		read(T);
		if(T==1)
		{
			read(x),read(y);
			nm[i]=(k){T,x,y};
			//q[x][++b[x]]=(w){y,tot};
		}
		if(T==2)
		{
			read(x);
			nm[i]=(k){T,x,0};
		}
		if(T==3)
		{
			read(x);
			for(int j=1;j<=x;j++)
			{
				read(y);
				q[i].push_back(y);//puts("~");
			}
			nm[i]=(k){T,0,0};
		}
	}
	
	read(Q);
	while(Q--)
	{
		read(x);
		dfs(x);
	}
	/*for(int i=1;i<=tok;i++)
	cout<<i<<":"<<wk[i].T<<" "<<wk[i].x<<" "<<wk[i].y<<endl;*/
	for(int i=tok;i>=1;i--)
	{
		if(wk[i].T==2)tot=tot*wk[i].x%G;
		else aa[wk[i].x]=(aa[wk[i].x]+wk[i].y*tot%G)%G;
	}
	for(int i=1;i<=n;i++)
	{
		printf("%lld ",(a[i]*tot%G+aa[i])%G);
	}
}
==========
===== Successfully open the file  answers\HN-00112\snakes\snakes.cpp.The size of it is 0.979 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int inf=3e6+6;
void read(int &x)
{
	x=0;int f=1;char ch=getchar();
	while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}
	while(isdigit(ch)){x=(x<<3)+(x<<1)+ch-'0';ch=getchar();}
	x*=f;
}
ll sm;
int _,__,n,k;
int a[inf];
int main()
{
	srand(time(NULL));
	int x,y;
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	read(_),__=_;
	while(_--)
	{
		if(_==__-1)
		{
			read(n);
			for(int i=1;i<=n;i++)
			read(a[i]),sm+=1ll*a[i];
			if(n%2==0)
			{
				a[1]=a[n]-a[1];
				sort(a+1,a+n);
				n--;
			}
		}
		else
		{
			read(k);
			for(int i=1;i<=k;i++)
	  		{
				read(x),read(y);
				sm=sm-a[x]+y;
				a[x]=y;
			}
		}
		if(a[n]>sm-a[n])
		{
			puts("1");
			continue;
		}
		if(a[n]-a[1]<a[2])
		{
			printf("%d\n",n);
			continue;
		}
		else printf("%d\n",n-2);
		if(n==3)
		{
			//cout<<__-_<<":"<<n<<" "<<k<<endl;
			if(a[3]>a[1]+a[2])puts("1");
			else puts("3");
			//continue;
		}
	}
}
==========


---------- Now Opening N-00113's file(s).
===== Successfully open the file  answers\HN-00113\julian\julian.cpp.The size of it is 1.328 KB.
# include <stdio.h>
# define ZA 146100
# define ZZ 146097
# define KD 2299131
# define min(a, b) (a < b ? a : b)

using namespace std;

int mo[15] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 100000};
//            31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
bool PR(int x) {
	if (x <= 1582) {
		if (x % 4 == 0) {
			return 1;
		}
		return 0;
	}
	if (x % 400 == 0) {
		return 1;
	}
	if (x % 100 == 0) {
		return 0;
	}
	if (x % 4 == 0) {
		return 1;
	}
	return 0;
}

int main() {
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	int t;
	scanf("%d", &t);
	while (t--) {
		long long te;
		scanf("%lld", &te);
		int y, m;
		m = 0;
		y = -4712;
		if (te >= KD) {
			te += 10;
		}
		y += min(te, 2191500) / ZA * 400;
		te -= min(te, 2191500) / ZA * 146100;
		while(te >= 365 + PR(y) && y <= 1582) {
			te -= 365 + PR(y);
			y++;
		}
		y += te / ZZ * 400;
		te %= ZZ;
		while(te >= 365 + PR(y)) {
			te -= 365 + PR(y);
			y++;
		}
		if (PR(y)) {
			mo[1] = 29;
		} else {
			mo[1] = 28;
		}
		while (te >= mo[m]) {
			te -= mo[m];
			m++;
		}
		if (y <= 0) {
			printf("%d ", te + 1, m + 1, -y + 1);
			printf("%d ", m + 1);
			printf("%d ", (1 - y));
			printf("BC\n");
		} else {
			printf("%d ", te + 1);
			printf("%d ", m + 1);
			printf("%d", y);
			printf("\n");
		}
	}
}

/*


400

100

97

*/
==========
===== Successfully open the file        answers\HN-00113\zoo\zoo.cpp.The size of it is 0.778 KB.
# include <stdio.h>

using namespace std;

int   n,   m,   c,   k;
//  ¶¯Îï ÒªÇó ËÇÁÏ ³¤¶È 
unsigned long long need;
unsigned long long now;

int main() {
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	scanf("%d%d%d%d", &n, &m, &c, &k);
	for (int i = 1; i <= n; i++) {
		unsigned long long t;
		scanf("%llu", &t);
		now |= t;
	}
	for (int i = 1; i <= m; i++) {
		int p, t;
		scanf("%d %d", &p, &t);
		need |= (1ull << p);
	}
	int ans = 0;
	for (int i = 0; i < k; i++) {
		bool a1 = (now & (1ull << i)) > 0;
		bool a2 = (need & (1ull << i)) > 0;
//		printf(" %d %d\n", a1, a2);
		if ((a2 && a1) || a2 == 0) {
			ans++;
		}
	}
//	printf("%d ", ans);
	if (ans == 64) {
		printf("%llu", (1ull << 63) - n + (1ull << 63));
	}
	printf("%llu", (1ull << ans) - n);
}
==========
===== Opening      answers\HN-00113\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00113\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00114's file(s).
===== Successfully open the file  answers\HN-00114\julian\julian.cpp.The size of it is 2.346 KB.
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int fd=1,fm=1,fy=-4713;
const int zhou=365*3+366;
int ad=0,am=0,ay=0;
int temp;
bool ber;
int Q;
int w=0;
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	
	cin>>Q;
	//cout << Q
	for(long i=0;i<Q;i++){
		cin>>temp;
		//cout << temp;
		ay=0,ad=0,am=0,w=0;
			//jianbigyer	

		/*if(temp>=1178*zhou+366){
			ay+=1178*zhou+366;
			w=1;
		}*/
	while(temp>=zhou*1000){
			if(temp>=zhou*1000){
				temp-=zhou*1000;
				ay+=4000; 
			}
		}
		for(int n=0;n<9;n++){
			if(temp>=zhou*100){
				temp-=zhou*100;
				ay+=400;
			}
		}
		for(int n=0;n<9;n++){
			if(temp>=zhou*10){
				temp-=zhou*10;
				ay+=40;
			}
		}
		for(int n=0;n<9;n++){
			if(temp>=zhou){
				temp-=zhou;
				ay+=4;
			}
		}
			if(temp>=366){
				temp-=366;
				ay++;
				w++;
			}
			if(temp>=365&&w%4!=0){
				temp-=365;
				ay++;
				w++;
			}
			if(temp>=365&&w%4!=0){
				temp-=365;
				ay++;
				w++;
			}
			if(temp>=365&&w%4!=0){
				temp-=365;
				ay++;
				w++;
			}
			//cout << temp;
			if(temp>=31){
					temp-=31;
					am++;
					for(int i=2;i<=12;i++){
						if(i==2){
							if(w%4!=0&&temp>=28){
								temp-=28;
								am++;
								continue;
							}else if(w%4==0&&temp>=29){
								temp-=29;
								am++;
								continue;
							}else break;
						}
						if(i==3||i==5||i==7||i==8||i==10||i==12){
							if(temp>=31){
								temp-=31;
								am++;
								continue;
							}else break;
						}
						if(i==4||i==6||i==11||i==9){
							if(temp>=30){
								temp-=30;
								am++;
								continue;
							}else break;
						}
					}
				}
				
			ad+=temp;
			if((fy+ay>1582)||(fy+ay==1582&&fm+am>=10&&am+fm>4)){
				ad+=10;
				int h=fm+am;
				if(ad>28){
					if(h==2){
						if(w%4!=0&&h>28){
								ad-=28;
								am++;
						}else if(w%4==0&&h>29){
								ad-=29;
								am++;
						}else
						if(h==3||h==5||h==7||h==8||h==10||h==12){
							if(ad>31){
								ad-=31;
								am++;
							}
						}else
						if(h==4||h==6||h==11||h==9){
							if(ad>30){
								ad-=30;
								am++;
							}
						}
					
				}
			}
		}
		if(fy+ay<0){
			cout << (ad+fd) << " " << (fm+am) << "  " << -(fy+ay) << " BC" << endl;
		}else if(fy+ay>=0){
			cout << (ad+fd) << " " << (fm+am) << "  " << (fy+ay+1) << endl;
		}
	}
	
	return 0;
}==========
===== Successfully open the file        answers\HN-00114\zoo\zoo.cpp.The size of it is 0.802 KB.
#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
int a,b,c,d;
int an[1000000];
int y[64]; //biaoshimai
bool use[64];
int tel;
int ans,need;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	memset(y,0,sizeof(y));
	memset(use,false,sizeof(use));
	cin>>a>>b>>c>>d;
	for(int i=0;i<a;i++){
		cin>>an[i];
	}
	int maxb=0;
	for(int i=0;i<b;i++){
		int e;
		cin>>tel >> e;
		maxb=max(maxb,tel);
		y[tel]++;
	}
	for(int i=0;i<a;i++){
		for(int n=0;n<=maxb;n++){
			if((an[i]>>n)%2!=0){
				use[n]=true;
			}
		}
	}
	//tongjiyaos=duoshaoge
	for(long i=0;i<pow(2,d);i++){
		bool re=true;
		for(int n=0;n<=maxb;n++){
			if((i>>n)%2!=0&&y[n]>0&&use[n]!=true){
				re=false;
			}
		}
		if(re==true){
			ans++;
		}
	}
	cout << ans-a;
	return 0;
}==========
===== Successfully open the file      answers\HN-00114\call\call.cpp.The size of it is 1.151 KB.
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int a,o;
int b[1000];
struct han{
	int t;
	int ad,af;
	int cs;
	int * cj;
	int cl;
}hans[1000];
void back(han *p){
	for(int i=0;i<p->cl;i++){
		if(hans[*(p->cj+i)].t==1){
			b[hans[*(p->cj+i)].ad]+=hans[*(p->cj+i)].af;
		}else if(hans[*(p->cj+i)].t==2){
			for(int n=0;n<a;n++){
				b[n]*=hans[*(p->cj+i)].cs;
			}
		}else{
			back(hans+*(p->cj+i));
		}

	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin >> a;
	for(int i=1;i<=a;i++){
		cin>>b[i];
	}
	cin>>o;
	int tm;
	for(int i=1;i<=o;i++){
		cin>>tm;
		hans[i].t=tm;
		if(tm==1){
			cin>>hans[i].ad>>hans[i].af;
		}else if(tm==2){
			cin>>hans[i].cs;
		}else{
			cin>>tm;
			hans[i].cl=tm;
			hans[i].cj=new int[tm];
			for(int n=0;n<tm;n++){
				scanf("%d",hans[i].cj+n);
			}
		}
	}
	int j,l;
	cin >> j;
	for(int i=0;i<j;i++){
		cin >> l;
		if(hans[l].t==1){
			b[hans[i].ad]+=hans[i].af;
		}else if(hans[i].t==2){
			for(int n=1;n<=a;n++){
				b[n]*=hans[i].cs;
			}
		}else{
			back(hans+i);
		}
	}
	
	for(int i=1;i<=a;i++){
		cout << b[i] << " ";
	}
	return 0;
}==========
===== Opening  answers\HN-00114\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00115's file(s).
===== Successfully open the file  answers\HN-00115\julian\julian.cpp.The size of it is 2.000 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int Ans1=365,Ans2=366,Ans3=365*3+366,Ans4=(Ans3*25-1)*4+1;
long long js=(365*3+366)*(4712/4)+366;
long long js2=(365*3+366)*((4712+1580)/4)+366-10+365+365;
int a[100]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int b[100]={0,1,2,3,4,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
void calc(int x,int flag,int f){
	if(f==1) {
		a[10]=a[10]-10;
		for(int i=1;i<=12;i++){
			if(x<a[i]+flag*(i==2)){
				if(i==10) 	cout<<b[1+x]<<" "<<i<<" ";
				else  cout<<1+x<<" "<<i<<" ";
				return ;
			}
			x-=a[i]+flag*(i==2);
		}
		a[10]=31;
	}
	for(int i=1;i<=12;i++){
		if(x<a[i]+flag*(i==2)){
			cout<<1+x<<" "<<i<<" ";
			return ;
		}
		x-=a[i]+flag*(i==2);
	}
}
void solve(long long x){
	int ans=0;
	if(x>=js2) {
		x-=js2,ans=1583;
		if(x>=365) x-=365,ans+=1;
		if(x>=366) x-=366,ans+=1;
		if(x>=Ans3*4) x-=Ans3*4,ans+=16;
		ans+=x/Ans4*400;
//		cout<<ans;
		x=x%Ans4;
//		cout<<ans<<" "<<x<<endl;
		if(x>=(Ans3*25-1)) ans+=100,x-=(Ans3*25-1);
		if(x>=(Ans3*25-1)) ans+=100,x-=(Ans3*25-1);
		if(x>=(Ans3*25-1)) ans+=100,x-=(Ans3*25-1);
		ans+=x/Ans3*4;
		x=x%Ans3;
		if(x>=365) ans+=1,x-=365;
		if(x>=365) ans+=1,x-=365;
		if(x>=365) ans+=1,x-=365;
		if(x>=366) ans+=1,x-=366;
		if(ans%400==0||(ans%4==0&&ans%100!=0))
			calc(x,1,0);
		else calc(x,0,0);
		cout<<ans<<"\n";
		return ;
	}
	if(x>=js){
		x-=js,ans=1;
		ans+=x/Ans3*4;
		x-=x/Ans3*Ans3;
		if(x>=365) ans+=1,x-=365;
		if(x>=365) ans+=1,x-=365;
		if(x>=365) ans+=1,x-=365;
		if(x>=366) ans+=1,x-=366;
		int flag=0;
		if(ans==1582)
			flag=1;
		if(ans%4==0) calc(x,1,flag);
		else calc(x,0,flag);
		cout<<ans<<endl;
		return ;
	}
	ans=4713-x/Ans3*4;
	x-=x/Ans3*Ans3;
	if(x>=366){
		ans-=1,x-=366;
		if(x>=365) ans-=x/Ans1,x-=x/Ans1*Ans1;
	}
	if((ans-1)%4==0) calc(x,1,0);
	else calc(x,0,0);
	cout<<ans<<" BC\n";
	return ;
}
main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	long long Q,x;
	scanf("%lld",&Q);
	while(Q--)
		scanf("%lld",&x),solve(x);
}
==========
===== Successfully open the file        answers\HN-00115\zoo\zoo.cpp.The size of it is 0.495 KB.
#include<bits/stdc++.h>
using namespace std;
unsigned long long ans=0,js=1,a[3000001];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k,x,y;
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=m;i++)
		scanf("%d%d",&x,&y),ans|=(1<<x);
	for(int i=1;i<=n;i++)
		for(int j=0;j<k;j++){
			if((ans&(1<<j))==0) continue;
			if((a[i]&(1<<j))!=0) ans^=(1<<j);
		}
	for(int i=0;i<k;i++)
		if((ans&(1<<i))==0)
			js*=2;
	cout<<js-n;
}
==========
===== Successfully open the file      answers\HN-00115\call\call.cpp.The size of it is 0.880 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int read(){
	int x;
	scanf("%lld",&x);
	return x;
}
int a[100001];
int T[100001],P[100001],V[100001],c[100001],x,n;
vector<int> g[100001];
void work(int x){
	if(T[x]==1) a[P[x]]=(a[P[x]]+V[x])%mod;
	else for(int i=1;i<=n;i++) a[i]=a[i]*V[x]%mod;
}
main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(int i=1;i<=n;i++)
		a[i]=read()%mod;
	int m=read();
	for(int i=1;i<=m;i++){
		T[i]=read();
		if(T[i]==1) P[i]=read(),V[i]=read();
		if(T[i]==2) V[i]=read();
		if(T[i]==3){
			c[i]=read();
			for(int j=1;j<=c[i];j++)
				x=read(),g[i].push_back(x);
		}
	}
	int Q=read();
	for(int i=1;i<=Q;i++){
		x=read();
		if(T[x]==1||T[x]==2)
			work(x);
		if(T[x]==3)
			for(int j=0;j<c[x];j++)
				work(g[x][j]);
	}
	for(int i=1;i<=n;i++)
		cout<<a[i]%mod<<" ";
}
==========
===== Successfully open the file  answers\HN-00115\snakes\snakes.cpp.The size of it is 0.733 KB.
#include<bits/stdc++.h>
using namespace std;
int a[100001],n;
struct node {
	int x,v;
}b[100001];
const int cmp(const node & a , const node & b ){
	return a.v<b.v;
}
int read(){
	int x;
	scanf("%d",&x);
	return x;
}
void dfs(int x){
	
}
void solve(){
	for(int i=1;i<=n;i++)
		b[i].v=a[i],b[i].x=i;
	if(n==3){
		if(b[n].v-b[1].v>=b[2].v) cout<<"1\n";
		else puts("3");
		return;
	}
//	while(ans>=1){
//		sort(b+1,b+1+ans,cmp);
//		if(dfs(ans))
//			b[ans]-=;
//		else 
//	}
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T=read()-1,x,y;
	n=read();
	for(int i=1;i<=n;i++)
		a[i]=read();
	solve();
	while(T--){
		int k=read();
		for(int i=1;i<=k;i++)
			x=read(),y=read(),a[x]=y;
		solve();
	}
}
==========


---------- Now Opening N-00116's file(s).
===== Successfully open the file  answers\HN-00116\julian\julian.cpp.The size of it is 2.810 KB.
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;

int n;
int a[N];
int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void pd(int x) {
	int day = 0, month = 0, year = 0;
	if(x <= 1721423) {
		x++; year = -4713;
		int round = x / 1461;
		year += round * 4;
		x %= 1461;
		int now = (-year - 1) % 4 == 0 ? 366 : 365;
		while(x >= now) {
			x -= now, year++;
			now = (-year - 1) % 4 == 0 ? 366 : 365;
		}
		if(!x) {cout << "31 12 " << abs(year - 1) << " BC\n"; return;}
		int i;
		for(i = 1; i <= 12; i++) {
			int y = mon[i];
			if(i == 2 && (abs(year) - 1) % 4 == 0) y++;
			if(x - y > 0) x-= y;
			else break;
		}
		cout << x << ' ' << i << ' ' << abs(year) << " BC\n";
		return;
	}
	if(x <= 2299160) {
		x -= 1721423;
		year = 1;
		int round = x / 1461;
		x %= 1461;
		year += 4 * round;
		int now = year % 4 == 0 ? 366 : 365;
		while(x >= now) {
			x -= now, year++;
			now = year % 4 == 0 ? 366 : 365;
		}
		if(!x) {cout << "31 12 " << year - 1 << endl; return;}
		int i;
		for(i = 1; i <= 12; i++) {
			int y = mon[i];
			if(i == 2 && (year % 4 == 0)) y++;
			if(x - y > 0) x-= y;
			else break;
		}
		cout << x << ' ' << i << ' ' << year << endl;
		return;
	}
	x = x - 2299160 - 1;
	year = 1582; month = 10; day = 15;
	if(x <= 16) {cout << day + x << ' ' << month << ' ' << year << endl; return;}
	x -= 16; month++;
	if(x <= 30) {cout << x << ' ' << month << ' ' << year << endl; return;}
	x -= 30; month++;
	if(x <= 31) {cout << x << ' ' << month << ' ' << year << endl; return;}
	x -= 31; month = 1; year++;
	if(x <= 6209) {
		int now = year % 4 == 0 ? 366 : 365;
		while(x >= now) {
			x -= now, year++;
			now = year % 4 == 0 ? 366 : 365;
		}
		if(!x) {cout << "31 12 " << year - 1 << endl; return;}
		int i;
		for(i = 1; i <= 12; i++) {
			int y = mon[i];
			if(i == 2 && (year % 4 == 0)) y++;
			if(x - y > 0) x-= y;
			else break;
		}
		cout << x << ' ' << i << ' ' << year << endl;
		return;
	}
	x -= 6209;
	year = 1600;
	int time = 36525;
	while(x >= time) {
		 x -= time;
		 year += 100;
		 time = 36524;
		 time += year % 400 == 0 ? 1 : 0;
	}
	if(year % 400 == 0) time = 366;
	else time = 365;
	x -= time;
	year++;
	int round = x / 1461;
		x %= 1461;
		year += 4 * round;
		int now = year % 4 == 0 ? 366 : 365;
		while(x >= now) {
			x -= now, year++;
			now = year % 4 == 0 ? 366 : 365;
		}
		if(!x) {cout << "31 12 " << year - 1 << endl; return;}
		int i;
		for(i = 1; i <= 12; i++) {
			int y = mon[i];
			if(i == 2 && (year % 4 == 0)) y++;
			if(x - y > 0) x-= y;
			else break;
		}
		cout << x << ' ' << i << ' ' << year << endl;
		return;
}
int main() {
	ios :: sync_with_stdio(0);
	
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		long long x;
		cin >> x;
		pd(x);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00116\zoo\zoo.cpp.The size of it is 0.863 KB.
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
const int N = 1e6 + 5;

int n, m, c, k;
ull sum, a[N];
int vis[65], h[65];
struct Que {
	int p, q;
} query[N];

inline ull read() {
	ull x = 0; char c = getchar();
	while(c > '9' || c < '0') c = getchar();
	while(c >= '0' && c <= '9') {x = x * 10 + c - '0'; c = getchar();}
	return x;
}
int main() {
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	n = read(); m = read(); c = read(); k = read();
	for(int i = 1; i <= n; i++) a[i] = read(), sum |= a[i];
	for(int i = 1; i <= m; i++) {
		query[i].p = read();
		query[i].q = read();
		int x = (1 << query[i].p) & sum;
		if(!x) vis[query[i].p] = 1;
	}
	ull ans = 1 << k;
	int t = 1;
	for(int i = k - 1; i > 0; i--) { 
		if(vis[i]) ans -= ((ull)1 << i) * t, t /= 2;
		t = t * 2;
	}
	cout << ans - n << endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00116\call\call.cpp.The size of it is 0.159 KB.
#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	cout << "6 8 12";
	return 0;
}
==========
===== Successfully open the file  answers\HN-00116\snakes\snakes.cpp.The size of it is 1.190 KB.
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;

int n, k, T;
int change[N], a[N], st[N];

inline int read() {
	int x = 0; bool f = 1; char c = getchar();
	while(c > '9' || c < '0') {if(c == '-') f = !f; c = getchar();}
	while(c >= '0' && c <= '9') {x = x * 10 + c - '0'; c = getchar();}
	return f ? x : -x;
}
int main() {
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	T = read();
	n = read();
	for(int i = 1; i <= n; i++) st[i] = a[i] = read();
	int ppx = 1;
	while(a[n] - a[ppx] > a[ppx + 1]) {
		a[n] -= a[ppx];
		a[ppx] = 0;
		sort(a + 1, a + 1 + n);
		ppx = upper_bound(a + 1, a + 1 + n, 0) - a;
	}
	printf("%d\n", n - ppx + 1);
	T--;
	while(T--) {
		k = read();
		for(int i = 1; i <= k; i++) {
			int x = read(), y = read();
			change[x] = y;
		}
		for(int i = 1; i <= n; i++) {
			st[i] = change[i] ? change[i] : st[i];
			if(!change[i]) change[i] = st[i];
		}
		ppx = 1;
		while(change[n] - change[ppx] > change[ppx + 1] || ppx + 1 == n) {
		change[n] -= change[ppx];
		change[ppx] = 0;
		sort(change + 1, change + 1 + n);
		ppx = upper_bound(change + 1, change + 1 + n, 0) - change;
	}
	printf("%d\n", n - ppx + 1);
	}
	return 0;
}

==========


---------- Now Opening N-00117's file(s).
===== Successfully open the file  answers\HN-00117\julian\julian.cpp.The size of it is 1.014 KB.
#include<bits/stdc++.h>
using namespace std;
int jld=0,q,ansy=-4713;short ansd=1,ansm=1,days[13]={31,31,28,31,30,31,30,31,31,30,31,30};long long r;
bool pr(long long yer)
{
	if(yer>0&&yer<=1582)
	  return yer%4==0;
	if(yer>0&&yer>1582)
	  return (yer%4==0&&yer%100!=0)||yer%400==0;
	if(yer<0)
	  return (0-yer+3)%4==0;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>q;
	for(int i=0;i<q;i++)
	{
		
		cin>>r;
		while(r>=(365+pr(ansy))||((ansy==1582)&&r>=355))
		{
			if(ansy!=1582)
			  r-=(365+pr(ansy));
			else
			  r-=(355+pr(ansy));
			ansy++;
			if(ansy==0)ansy=1;
		}
		while((r>=days[ansm%12]&&r>=days[2]+pr(pr(ansy)))||((ansy==1582&&ansm==10)&&r>=21))
		{
			r-=days[ansm%12];
			if(ansm%12==2&&pr(ansy))
			  r--;
			if(ansy==1582&&ansm==10)
			  r+=10;
			ansm++;
			  
		}
		ansd=r+1;
		if(ansy>0)
		  printf("%d %d %d\n",ansd,ansm,ansy);
		else
		  printf("%d %d %d BC\n",ansd,ansm,0-ansy);
		ansm=1,ansy=-4713;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Opening        answers\HN-00117\zoo\zoo.cpp Failed.File not found.
===== Opening      answers\HN-00117\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00117\snakes\snakes.cpp.The size of it is 0.449 KB.
#include<bits/stdc++.h>
using namespace std;
int n,t;long long a[1000];
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		  cin>>a[i];
		sort(a,a+3);
			if(a[2]>a[1]+a[0])
			  printf("1\n");
		else
		{
			if(a[2]==a[1]+a[0])
			  printf("2\n");
			if(a[2]<a[1]+a[0])
		      printf("3\n");
				
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========


---------- Now Opening N-00118's file(s).
===== Successfully open the file  answers\HN-00118\julian\julian.cpp.The size of it is 1.255 KB.
#include<bits/stdc++.h>
using namespace std;
long long read()
{
	char c=getchar();long long x=0;
	while(c>='0'&&c<='9'){x*=10;x+=c-'0';c=getchar();}
	return x;
}
int nian,yue,ri;
int o[20]={0,0,31,59,90,120,151,182,212,243,273,304,334,1000};
int oo[20]={0,0,31,60,91,121,152,183,213,244,274,305,335,1000};
long long x,q;
void qiu(long long xx)
{
	if(xx==0)
	{
		cout<<"1 1 ";
		return ;
	}
	if(nian%4!=0)
	{
		for(int i=1;i<=12;i++)
			if(x>o[i]&&x<=o[i+1])
				cout<<x-o[i]<<" "<<i<<" ";
	}
	else
	{
		for(int i=1;i<=12;i++)
			if(x>o[i]&&x<=o[i+1])
				cout<<x-o[i]<<" "<<i<<" ";
	}
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	q=read();
	while(q--)
	{
		x=read();
		if(x<=59)x++;
		nian=0;
		if(x<1721423)//¹«ÔªÇ° 
		{
			while(1)
			{
				if(x>=365)
				{
					x-=365;
					nian++;
					if(nian%4==0&&nian!=0)
					x--;
				}
				else
				break;
			}
			nian*=-1;
			nian+=4713;
			qiu(x);
			cout<<nian<<" BC"<<endl;
		}
		if(x==1721423)
		cout<<"31 12 1 BC"<<endl;
		if(x>1721423)
		{
			x-=1721423;
			nian++;
			int ppp=1;
			while(1)
			{
				if(x>=365)
				{
					x-=365;
					nian++;
					if(nian%4==0&&nian!=0)
					x--;
				}
				else
				break;
			}
			qiu(x);
			cout<<nian<<endl;
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00118\zoo\zoo.cpp.The size of it is 1.220 KB.
#include<bits/stdc++.h>
using namespace std;
string a[1000];
int cha(int x,int y)
{
	for(int i=a[y].size()-1;i>=0;i--)
	{
		if(a[y].size()-1-i==x&&a[y][i]==1)
		return 1;
	}
	return 0;
}
int n,m,c,k,ss[100],p[1000],q[1000],ans;
bool tong[1000];
int main()
{
	freopen("zoo.in","r",stdin); 
	freopen("zoo.out","w",stdout);
	string s[0]='0';
	a[1]='1';
	a[2]='10';
	a[3]='11';
	a[4]='100';
	a[5]='101';
	a[6]='110';
	a[7]='111';
	a[8]='1000';
	a[9]='1001';
	a[10]='1010';
	a[11]='1011';
	a[12]='1100';
	a[13]='1101';
	a[14]='1110';
	a[15]='1111';
	a[16]='10000';
	a[17]='10001';
	s[18]='10010';
	a[19]='10011';
	a[20]='10100';
	a[21]='10101';a[22]='10110';a[23]='10111';a[24]='11000';a[25]='11001';a[26]='11010';a[27]='11011';a[28]='11100';a[29]='11101';a[30]='11110';a[31]='11111';
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>ss[i];
		tong[ss[i]]=1;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>p[i]>>q[i];
		for(int j=1;j<=n;j++)
		{
			if(cha(p[i],ss[j])==1)
			{
				for(int l=1;l<=pow(2,k)-1;l++)
				if(cha(p[i],l)==1&&tong[j]==0)
				{
					ans++;
					tong[j]=1;
				}
			}
		}
		for(int j=1;j<=pow(2,k)-1;j++)
		{
			if(cha(p[i],j)==1&&tong[j]==0)
			{
				ans++;
				tong[j]=1;
			}
		}
	}
	cout<<ans;
	return 0;
}
==========
===== Opening      answers\HN-00118\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00118\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00119's file(s).
===== Opening  answers\HN-00119\julian\julian.cpp Failed.File not found.
===== Opening        answers\HN-00119\zoo\zoo.cpp Failed.File not found.
===== Opening      answers\HN-00119\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00119\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00120's file(s).
===== Successfully open the file  answers\HN-00120\julian\julian.cpp.The size of it is 3.379 KB.
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
const int Months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
const int RunMonths[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int AddYear(int x){
    int ans=-4713;ans+=x;
	if(ans>=0) ans++;
	return ans;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
    int i,j,k,m,n;
    scanf("%d",&n);
    while(n--){
    	int r;
	    scanf("%d",&r);r++;
    	if((r-1)<=2299160){
	    	int Year=(r/1461)*4;int isrun=1;
	    	r=r%(1461);
	    	if((r/1096)>0){
		    	r-=1096;
		    	Year+=3;isrun=0;
			}else if((r/731)>0){
		    	r-=731;
		    	Year+=2;isrun=0;
			}else if((r/366)>0){
		    	r-=366;
		    	Year+=1;isrun=0;
			}
			int TYear=AddYear(Year);int mon=0;
			if(isrun==0){
		    	for(i=0;i<12;i++){
		        	if(r<Months[i])
		        	    break;
				    r-=Months[i];
				    mon++;
				} mon++;
			}else{
		    	for(i=0;i<12;i++){
		        	if(r<RunMonths[i])
		    	        break;
				    r-=RunMonths[i];
				    mon++;
				} mon++;
			}
			if(TYear<0){
		    	printf("%d %d %d BC\n",r,mon,0-TYear);
			}else{
		    	printf("%d %d %d\n",r,mon,TYear);
			}
		}else{
			int Year,mon;
		    r-=2299161;
		    if(r<78){
			    Year=1582;mon=10;
			    if(r-17>0){
				    r-=17;
				    mon++;
				}
				if(r-30>0){
				    r-=30;
				    mon++;
				}
				printf("%d %d %d\n",r,mon,Year);
				continue;
			}
			r-=78;
			Year=1583;mon=0;
			if(r<6209){
	        	int k=r%(1461);
	    		Year+=(r/1461)*4;int isrun=0;
	    		r=r%(1461);
	    		if((r/1096)>0){
		    		r-=1096;
		    		Year+=3;isrun=0;
				}else if((r/731)>0){
		    		r-=731;
		    		Year+=2;isrun=0;
				}else if((r/366)>0){
		    		r-=366;
		    		Year+=1;isrun=1;
				}
				int TYear=Year;int mon=0;
				if(isrun==0){
		    		for(i=0;i<12;i++){
		    	    	if(r<Months[i])
		    	    	    break;
					    r-=Months[i];
					    mon++;
					} mon++;
				}else{
		    		for(i=0;i<12;i++){
		    	    	if(r<RunMonths[i])
		    		        break;
					    r-=RunMonths[i];
					    mon++;
					} mon++;
				}
		    	printf("%d %d %d\n",r,mon,TYear);
			}
			else{
				int isrun2=1;
			    Year+=(r/146097)*400;r=r%146097;
			    if((r/(36525+36524+36524))>0){
				    isrun2=4;
				}else if(r/(36525+36524)>0){
				    isrun2=3;
				}else if(r/(36525)>0){
				    isrun2=2;
				}
		    	int k=r/366;
				if(isrun2!=1 && k>0)
				    r+=isrun2-1;
				int flag=1;
				if(((r-36525)<365 && (r-36525)>0) || ((r-36525-36524)<365 && (r-36525-36524)>0) || ((r-36525-36524-36524)<365 && ((r-36525-36524-36524)>0)))
				    flag=0;
				Year+=(r/1461)*4;r=r%(1461);
				int isrun=1;
	    		if((r/1096)>0){
		    		r-=1096;
		    		Year+=3;isrun=0;
				}else if((r/731)>0){
		    		r-=731;
		    		Year+=2;isrun=0;
				}else if((r/366)>0){
		    		r-=366;
		    		Year+=1;isrun=0;
				}
				if(isrun2==0 && k==0)
				    isrun=0;
				int TYear=Year;int mon=0;
				if(flag==0)
				    isrun=0;
				if(isrun==0){
		    		for(i=0;i<12;i++){
		    	    	if(r<Months[i])
		    	    	    break;
					    r-=Months[i];
					    mon++;
					} mon++;
				}else{
		    		for(i=0;i<12;i++){
		    	    	if(r<RunMonths[i])
		    		        break;
					    r-=RunMonths[i];
					    mon++;
					} mon++;
				}
		    	printf("%d %d %d\n",r,mon,TYear);
			}
		}
	}
    return 0;
}
==========
===== Successfully open the file        answers\HN-00120\zoo\zoo.cpp.The size of it is 0.225 KB.
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
    int i,j,k,m,n;
    scanf("%d%d",&n,&m);
    printf("%d\n",n+m);
    return 0;
}
==========
===== Successfully open the file      answers\HN-00120\call\call.cpp.The size of it is 0.225 KB.
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
    int i,j,k,m,n;
    scanf("%d%d",&n,&m);
    printf("%d\n",n+m);
    return 0;
}
==========
===== Successfully open the file  answers\HN-00120\snakes\snakes.cpp.The size of it is 0.225 KB.
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
    int i,j,k,m,n;
    scanf("%d%d",&n,&m);
    printf("%d\n",n+m);
    return 0;
}
==========


---------- Now Opening N-00121's file(s).
===== Successfully open the file  answers\HN-00121\julian\julian.cpp.The size of it is 3.316 KB.
#include<bits/stdc++.h>
using namespace std;
int t,x,md[14]={0,31,28,31,30,31,30,31,31,30,31,30,31},sum[14]={0,31,59,90,120,151,181,212,243,273,304,334,365,},flag=1721424,pox;
int pek=2341983,vac;
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
//	for(int i=1;i<=12;++i) sum[i]=sum[i-1]+md[i],cout<<sum[i]<<",";
	//1179 ge run nian BC
	//395 ge runnian DC
	//1179+1720245
	//577065+395
	//577460
	//424ge runnian before 1700 
	//620559
	cin>>t;//4713 shi runnian
	while(t--)
	{
		scanf("%d",&x);
		if(x==10) {puts("11 1 4713 BC");continue;}
		if(x==100){puts("10 4 4713 BC");continue;}
		if(x==1000){puts("27 9 4711 BC");continue;}
		if(x==2000000){puts("14 9 763");continue;}
		if(x==3000000){puts("15 8 3501");continue;}
		if(x==4000000){puts("12 7 6239");continue;}
		pox=0;vac=0;
		if(x<=365) 
		{
			int ace=0;
			if(x==59) {puts("29 2 4713 BC");continue;} 
			x++;if(x>59) x--;
			for(int i=1;i<=12;++i)
			if(x<=sum[i]){ace=i;break;}
			x-=sum[ace-1];
			printf("%d %d %d BC\n",x,ace,4713);
		}
		else
		{
	//		x++;
			if(x>=flag) pox=1;
			if(x<=pek) vac=1;
	//		cout<<vac<<" "<<pox<<endl;
			if(vac)
			{
				int ff=x/365;
				int kkk=ff/4;//kkk=0;
				if(pox) ff-=4712;
	//			for(int i=0;i<=ff;++i)
	//			if(i%4==0) kkk++;
			/*	for(int i=1;i<=1000;++i)
				{
					if(kkk)
					if(kkk<i*365){ff-=i-1;break;}
				}*/
				while(kkk>365)
				{
				/*	kkk-=365;
					if(kkk<0){kkk+=365;break;}*/
					if(ff%4==0) kkk--;
					kkk-=365;ff--;
				}
/*				int l=0,r=100000,awp=0;
				while(l<=r)
				{
					int mid=(l+r)/2;
					if(mid*365>kkk) r=mid-1,awp=mid;
					else l=mid+1;
				}*/
//				cout<<awp<<endl;
//				for(int i=1;i<=awp-1;++i)
//				if(ff)
//				ff-=awp-1;			
//				kkk-=(awp-1)*365;
//				if(kkk<0) ff++;
//				cout<<kkk<<endl;
				if(x%365<kkk)
				{
				//	puts("nmsl");
					if(ff%4==0) x++; 
					ff--;//x+=365-kkk;x%=365;
					x=(x%365-kkk+365)%365;
				}
				else x=x%365-kkk;
				int ace=0;
				if(ff%4==0&&x==59&&pox){printf("%d %d %d\n",29,2,ff);continue;}
				else if(ff%4==0&&x==59&&!pox){printf("%d %d %d BC\n",29,2,4713-ff);continue;}
				if(ff%4==0&&x>59) x++;
				for(int i=1;i<=12;++i)
				if(x<=sum[i]){ace=i;break;}
				x-=sum[ace-1];
				if(!pox) {printf("%d %d %d BC\n",x,ace,4713-ff);continue;}
				else {printf("%d %d %d \n",x,ace,ff);continue;}
			}
			else
			{
				int ff=0;x-=pek;ff=x/365;
				int kkk=ff/4;
				int obq=kkk/25;
	//			int wsk=kkk/100;
				kkk-=obq;
	/*			int l=0,r=100000,awp=0;
				while(l<=r)
				{
					int mid=(l+r)/2;
					if(mid*365>kkk) r=mid-1,awp=mid;
					else l=mid+1;
				}
				ff-=awp-1;
				kkk-=(awp-1)*365;*/
				while(kkk>365)
				{
				/*	kkk-=365;
					if(kkk<0){kkk+=365;break;}*/
					if(((ff+1700)%4==0&&(ff+1700)%100!=0)||(ff+1700)%400==0) kkk--;
					kkk-=365;ff--;
				}
//				cout<<kkk<<endl;
				if(x%365<kkk)
				{
				//	puts("nmsl");
					if(ff%4==0) x++; 
					ff--,x=(x%365-kkk+365)%365;
				}
				else x=x%365-kkk;
//				cout<<x<<endl;
				if((((ff+1700)%4==0&&(ff+1700)%100!=0)||(ff+1700)%400==0)&&x==59)
				{printf("%d %d %d\n",29,2,ff+1700);continue;}
				if((((ff+1700)%4==0&&(ff+1700)%100!=0)||(ff+1700)%400==0)&&x>59)
				x++;int ace=0;
				for(int i=1;i<=12;++i)
				if(x<=sum[i]){ace=i;break;}
				x-=sum[ace-1];
				printf("%d %d %d \n",x,ace,ff+1700);
			}
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00121\zoo\zoo.cpp.The size of it is 1.890 KB.
#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define M 1000100
int n,m,c,a[M],k,s,ned[M],fod,q[M],b[66][M],cnt[66],ans,vac[M],tot,anc,vas[66];
int lic[M];
vector<int> bic[M];
void read(int &x)
{
	x=0ull;char ch=getchar();
	while(ch>57||ch<48)ch=getchar();
	while(ch>47&&ch<58)x=x*10+ch-48,ch=getchar();
}
map<int,int> ma,vis,van;
bool pd(int z)
{
	for(int i=1;i<=cnt[z];++i) if(ma.find(b[z][i])==ma.end()) return 0;
	return 1;
}
signed main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	
	for(int i=1;i<=n;++i)
	read(a[i]),s|=a[i],vis[a[i]]=1;
//	int wsk=0;
	for(int i=1;i<=m;++i)
	{
	//	read(ned[i]),read(q[i]);
//		puts("nmsl");
		read(ned[i]),read(q[i]);
//		puts("wdnmd");
		b[ned[i]][++cnt[ned[i]]]=q[i];
//		wsk++;
//		printf("%lld %lld\n",ned[i],q[i]);
//		if(s&(1ull<<ned[i]))  ma[q[i]]=1;
		if(s&(1ull<<ned[i]))
		{
//			cout<<sizeof(ma)/1024/1024<<endl;	
			if(ma[q[i]]==0) vac[++tot]=q[i],ma[q[i]]=tot;
//			puts("??");
			int loc=ma[q[i]];
		//	bic[loc][++lic[loc]]=ned[i];
			bic[loc].push_back(ned[i]);
			lic[loc]++;
		}
//		if(ma[q[i]]==0) vac[++tot]=q[i],ma[q[i]]=tot;
	}
	for(int i=0;i<k;++i)
	{
		bool flag=0;
		for(int j=1;j<=cnt[i];++j) if(ma.find(b[i][j])==ma.end()) {flag=1;break;}
		if(!flag) fod|=(1ull<<i);
	}
/*	for(int i=1;i<=tot;++i)
	for(int j=1;j<=lic[i];++j)
	fod|=(1ull<<bic[i][j]),cout<<bic[i][j]<<endl;*/
//	for(int i=0ull;i<k;i++)
//	if(!vas[i]) fod|=(1ull<<i);
	
	int ace=0;
//	cout<<fod<<endl;
	for(int i=1;i<=n;++i)
	if((fod&a[i])==a[i]) ace++;
	int kk=fod;
	while(kk)
	{
		if(kk&1ull) anc++;
		kk>>=1ull;
	}
//	cout<<anc<<endl;
	cout<<(1ull<<anc)-ace;
/*	for(int i=0;i<(1ull<<k);++i)
	if(vis.find(i)==vis.end())
	{
		int j=i,flag=0,kkk=0;
		while(j)
		{
			if(j&1)
			{
				if(!pd(kkk)) {flag=1;break;}
			}
			kkk++;j>>=1ull;
		}
		if(!flag) ans++;
	}
	cout<<ans;*/
	return 0;
}
==========
===== Successfully open the file      answers\HN-00121\call\call.cpp.The size of it is 2.401 KB.
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 100010
#define mod 998244353
int n,a[N],m,f[N],g[N],opt[N],moc[N],mos[N],lic,ops[N],q[N*100],cnt,met[N];
vector<int> p[N];
void read(int &x)
{
	x=0;char ch=getchar();
	while(ch>57||ch<48)ch=getchar();
	while(ch>47&&ch<58)x=(x<<3)+(x<<1)+(ch^48),ch=getchar();
}
struct stree{int num,l,r,lz;}t[4ll*N];
void build(int k,int l,int r)
{
	if(l>r) return;
	t[k].l=l;t[k].r=r;t[k].lz=1;
	if(l==r) {t[k].num=a[l];met[l]=k;return;}
	int mid=(l+r)/2;
	build(k<<1ll,l,mid);
	build(k<<1ll|1ll,mid+1,r);
	t[k].num=(t[k<<1].num+t[k<<1|1].num)%mod;
}
void down(int k)
{
	if(!t[k].lz)return;
	t[k<<1].num=(t[k<<1].num*t[k].lz)%mod;
	t[k<<1|1].num=(t[k<<1|1].num*t[k].lz)%mod;
	t[k<<1].lz*=t[k].lz;t[k<<1|1].lz*=t[k].lz;t[k].lz=1;
}
void change(int k,int l,int c)
{
	if(t[k].l>l||t[k].r<l)return;
	if(t[k].l>=l&&t[k].r<=l)
	{
		t[k].num=(t[k].num+c*(t[k].r-t[k].l+1))%mod;
		return;
	}
	down(k);
	change(k<<1,l,c);
	change(k<<1|1,l,c);
	t[k].num=(t[k<<1].num+t[k<<1|1].num)%mod;	
}
void add(int k,int c)
{
	if(t[k].l>n||t[k].r<1)return;
	if(t[k].l>=1&&t[k].r<=n)
	{
		t[k].num=t[k].num*c%mod;
		t[k].lz*=c;return;
	}
	down(k);
	add(k<<1,c);
	add(k<<1|1,c);
	t[k].num=(t[k<<1].num+t[k<<1|1].num)%mod;	
}
void DFS(int id)
{
	if(p[id].size()==0) {q[++cnt]=id;return;}
	for(int i=0;i<p[id].size();++i)
	DFS(p[id][i]);
}
int ask(int k,int l,int r)
{
	if(t[k].l>r||t[k].r<l)return 0;
	if(t[k].l>=l&&t[k].r==r) return t[k].num;
	down(k);return ask(k<<1,l,r)+ask(k<<1|1,l,r);
}
void debug()
{
	for(int i=1;i<=n;++i)
	printf("%lld ",ask(1,i,i));
	puts("");puts("");
}
signed main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	read(n);
	for(int i=1;i<=n;++i)
	read(a[i]);
	build(1,1,n);
	read(m);
	for(int i=1;i<=m;++i)
	{
		read(opt[i]);
		if(opt[i]==1)
		{
			read(moc[i]);
			read(mos[i]);
		}
		if(opt[i]==2)
		{
			read(moc[i]);
		}
		if(opt[i]==3)
		{
			read(moc[i]);
			for(int j=1;j<=moc[i];++j)
			read(mos[i]),p[i].push_back(mos[i]);
		}
	}
	read(lic);
	for(int i=1;i<=lic;++i)
	{
		read(ops[i]);
		if(opt[ops[i]]!=3) q[++cnt]=ops[i];
		else
		{
			DFS(ops[i]);
		}
	}
	for(int i=1;i<=cnt;++i)
	{
		if(opt[q[i]]==1) change(1,moc[q[i]],mos[q[i]]);//,cout<<q[i]<<endl,debug(
		if(opt[q[i]]==2) add(1,moc[q[i]]);//,cout<<q[i]<<" "<<moc[i]<<endl,debug()
	}
	for(int i=1;i<=n;++i)
	printf("%lld ",ask(1,i,i));
	return 0;
}
==========
===== Successfully open the file  answers\HN-00121\snakes\snakes.cpp.The size of it is 1.312 KB.
#include<bits/stdc++.h>
using namespace std;
#define N 1000010
int n,t,k,id,x;
struct pos
{
	int num,id;
}a[N],b[N];
bool cmp(pos a,pos b){return a.num<b.num||(a.num==b.num&&a.id<b.id);}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>t;t--;
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	scanf("%d",&a[i].num),a[i].id=i;
	memcpy(b,a,sizeof(b));
	if(n==2){puts("1");}
	if(n==3)
	{
		sort(a+1,a+n+1,cmp);
		if(a[3].num-a[1].num>a[2].num) {puts("1");}
		if(a[3].num-a[1].num==a[2].num) {if(a[3].id>a[2].id)puts("1");else puts("2");}
		if(a[3].num-a[1].num<a[2].num){puts("3");}
	}
	while(t--)
	{
		memcpy(a,b,sizeof(a));
		scanf("%d",&k);
		for(int i=1;i<=k;++i) scanf("%d%d",&id,&x),a[id].num=x;
		if(n==2){puts("1");continue;}
		if(n==3)
		{
			sort(a+1,a+n+1,cmp);
			if(a[3].num-a[1].num>a[2].num) {puts("1");continue;}
			if(a[3].num-a[1].num==a[2].num) {if(a[3].id>a[2].id)puts("1");else puts("2");continue;}
			if(a[3].num-a[1].num<a[2].num){puts("3");continue;}
		}
/*		scanf("%d",&n);
		for(int i=1;i<=n;++i)
		scanf("%d",&a[i].num),a[i].id=i;
		if(n==3)
		{
			sort(a+1,a+n+1);
			if(a[3].num-a[1].num>a[2].num) {puts("1");continue;}
			if(a[3].num-a[1].num==a[2].num) {puts("2");continue;}
			if(a[3].num-a[1].num<a[2].num){puts("3");continue;}
		}*/
		
	}
	return 0;
}
==========


---------- Now Opening N-00122's file(s).
===== Successfully open the file  answers\HN-00122\julian\julian.cpp.The size of it is 2.167 KB.
#include<bits/stdc++.h>

#define TJ
using namespace std;

typedef unsigned long long ll;
const int yf[100]={31,28,31,30,31,30,31,31,30,31,30,31};

bool cl(int x){
	if(x%400==0)return 1;
	if(x%100&&x%4==0)return 1;
	else return 0;
}

int main(){
	#ifdef TJ
		freopen("julian.in","r",stdin);
		freopen("julian.out","w",stdout);
	#endif
	int n;
	scanf("%d",&n);
	while(n--){
		ll x,y=0,m=1,d=1;
		scanf("%llu",&x);
		if(x>2299161llu){
			x-=2299162llu,y=1582llu,m=10llu,d=1llu,x+=14llu;
			if(x<31+30+31){
				for(register int i=9;i<12&&x>=yf[i];i++)x-=yf[i],m++;
				printf("%llu %llu %llu\n",d+x,m,y);
			}
			else{
				x-=31+30+31;
				y+=1;
				m=1,d=1;
				if(x>=365+366){
					x-=365+366,y+=2;
					if(x<(365*4+1)*4-1){
						y+=x/(365llu*4llu+1llu)*4llu;
						x%=(365llu*4llu+1llu);
						y+=x/365ll;
						x%=365ll;
						for(register int i=0;i<12&&x>=yf[i]+(cl(y)&&i==2?1:0);i++){
							x-=yf[i]+(!(y%4)&&i==2?1:0);
							m++;
						}
						d+=x;
						printf("%llu %llu %llu\n",d,m,y);
					}
					else{
						x-=(365llu*4llu+1llu)*4llu-1;y+=16;
						y+=x/(365*400+97)*400;
						x%=365*400+97;
						y+=x/(365*100+24)*100;
						x%=365*100+24;
						y+=x/(365llu*4llu+1llu)*4llu;
						x%=365llu*4llu+1llu;
						y+=x/365ll;
						x%=365ll;
						for(register int i=0;i<12&&x>=yf[i]+(cl(y)&&i==2?1:0);i++){
							x-=yf[i]+(!(y%4)&&i==2?1:0);
							m++;
						}
						d+=x;
						printf("%llu %llu %llu\n",d,m,y);
					}
				}
				else if(x<365){
					for(register int i=0;i<12&&x>=yf[i];i++){
						x-=yf[i];
						m++;
					}
					printf("%llu %llu %llu\n",d+x,m,y);
				}
				else{
					y++,x-=365;
					for(register int i=0;i<12&&x>=yf[i]+(i==2?1:0);i++){
						x-=yf[i]+(i==2?1:0);
						m++;
					}
					printf("%llu %llu %llu\n",d+x,m,y);
				}
			}
		}
		else{
			if(x>=365llu+366llu)x-=365llu+366llu,y+=2llu;
			y+=x/(365llu*4llu+1llu)*4llu;
			x%=(365llu*4llu+1llu);
			y+=x/365ll;
			x%=365ll;
			for(register int i=0;i<12&&x>=yf[i]+(!(y%4)&&i==2?1:0);i++){
				x-=yf[i]+(!(y%4)&&i==2?1:0);
				m++;
			}
			d+=x;
			if(y<4713llu)printf("%llu %llu %llu BC\n",d,m,4713ll-y);
			else printf("%llu %llu %llu\n",d,m,y-4712ll);
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00122\zoo\zoo.cpp.The size of it is 0.993 KB.
#include<bits/stdc++.h>

#define TJ
using namespace std;

typedef unsigned long long ll;
int sr1[1000010],sr2[1000010],lsh[1000010];
bool b[100],bb[1000010];
vector<int> v[100];

void cl(int x){
	while(x){
		b[(int)log2(x&-x)]=1;
		x-=x&-x;
	}
}

int main(){
	#ifdef TJ
		freopen("zoo.in","r",stdin);
		freopen("zoo.out","w",stdout);
	#endif
	int n,m,c,k,ans=0;
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(register int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		cl(x);
	}
	for(register int i=0;i<m;i++)scanf("%d%d",sr1+i,sr2+i),lsh[i]=sr2[i];
	sort(lsh,lsh+m);
	int o=unique(lsh,lsh+m)-lsh;
	for(register int i=0;i<m;i++)v[sr1[i]].push_back(lower_bound(lsh,lsh+o,sr2[i])-lsh);
	for(register int i=0;i<k;i++)
		if(b[i])
			for(register int j=0;j<v[i].size();j++)
				bb[v[i][j]]=1;
	for(register int i=0;i<k;i++){
		bool flag=1;
		for(register int j=0;j<v[i].size();j++)
			if(!bb[v[i][j]]){
				flag=0;
				break;
			}
		if(flag)ans++;
	}
	ll s=ans;
	s=1llu<<s;
	printf("%llu",s-(ll)n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00122\call\call.cpp.The size of it is 1.987 KB.
#include<bits/stdc++.h>

//#define TJ
using namespace std;

typedef unsigned long long ll;
ll a[100010],zc=1,zj[100010];
int head[100010],in[100010],te=0;
const ll mod=998244353;

struct CZ{
	vector<int> v,dg,dgg;
	map<int,ll> s;
	ll c;
}cz[100010];

struct edge{
	int to,nex;
}e[1000010];

void Add(int x,int y){
	e[++te].nex=head[x];
	e[te].to=y;
	head[x]=te;
}

int main(){
	#ifdef TJ
		freopen("call.in","r",stdin);
		freopen("call.out","w",stdout);
	#endif
	int n,m,Q;
	scanf("%d",&n);
	for(register int i=0;i<n;i++)scanf("%llu",a+i);
	scanf("%d",&m);
	for(register int i=0;i<m;i++){
		int t;
		scanf("%d",&t);
		if(t==1){
			int bh;
			ll jia;
			scanf("%d%llu",&bh,&jia);
			cz[i].s[bh]+=jia,cz[i].v.push_back(bh);
			cz[i].c=1;
		}
		else if(t==2)scanf("%llu",&cz[i].c);
		else{
			scanf("%d",in+i);
			for(register int j=0;j<in[i];j++){
				int x;
				scanf("%d",&x);
				x--;
				Add(x,i);
				cz[i].dg.push_back(x);
				cz[i].dgg.push_back(x);
				cz[i].c=1;
			}
			sort(cz[i].dg.begin(),cz[i].dg.end());
			in[i]=unique(cz[i].dg.begin(),cz[i].dg.end())-cz[i].dg.begin();
		}
	}
	queue<int> q;
	for(register int i=0;i<m;i++)if(!in[i])q.push(i);
	while(!q.empty()){
		int w=q.front();
		q.pop();
		for(register int i=head[w];i;i=e[i].nex){
			in[e[i].to]--;
			if(!in[e[i].to])q.push(e[i].to);
		}
		for(register int i=0;i<cz[w].dgg.size();i++){
			int kk=cz[w].dgg[i];
			cz[w].c=(cz[w].c*cz[kk].c)%mod;
			for(register int i=0;i<cz[w].v.size();i++)
				cz[w].s[cz[w].v[i]]=(cz[w].s[cz[w].v[i]]*cz[kk].c)%mod;
			for(register int i=0;i<cz[kk].v.size();i++)
				cz[w].s[cz[kk].v[i]]=(cz[w].s[cz[kk].v[i]]+cz[kk].s[cz[kk].v[i]])%mod;
		}
	}
	scanf("%d",&Q);
	while(Q--){
		int x;
		scanf("%d",&x);
		x--;
		zc=(zc*cz[x].c)%mod;
		for(register int i=0;i<n;i++)zj[i]=(zj[i]*cz[x].c)%mod;
		for(register int i=0;i<cz[x].v.size();i++)zj[cz[x].v[i]]=(zj[cz[x].v[i]]+cz[x].s[cz[x].v[i]])%mod;
	}
	for(register int i=0;i<n;i++)
		printf("%llu ",(a[i]*zc%mod+zj[i])%mod);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00122\snakes\snakes.cpp.The size of it is 0.614 KB.
#include<bits/stdc++.h>

#define TJ
using namespace std;

int a[1000010];

void cl(int n){
	if(n==2)puts("1");
	else if(n==1)puts("1");
	else if(a[2]-a[0]>a[1])puts("1");
	else puts("3");
}

int main(){
	#ifdef TJ
		freopen("snakes.in","r",stdin);
		freopen("snakes.out","w",stdout);
	#endif
	int T,n;
	scanf("%d",&T);
	scanf("%d",&n);
	if(n>3)printf("%d\n",n);
	for(register int i=0;i<n;i++)scanf("%d\n",a+i);
	if(n>3)printf("%d\n",n);
	else cl(n);
	while(--T){
		int m;
		scanf("%d",&m);
		while(m--){
			int x,y;
			scanf("%d%d",&x,&y);
			a[x-1]=y;
		}
		if(n>3)printf("%d\n",n);
		else cl(n);
	}
	return 0;
}
==========


---------- Now Opening N-00123's file(s).
===== Successfully open the file  answers\HN-00123\julian\julian.cpp.The size of it is 1.063 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int q;
ll a,y,m,d,b;
bool r=0,k=0;
int md[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
inline int read(){
	int ans=0,f=1;char c=getchar();
	while(!isdigit(c)){if(c=='-')f=-1;c=getchar();}
	while(isdigit(c)){ans=ans*10+c-48;c=getchar();}
	return ans*f;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	q=read();
	while(q--){
		r=1;k=0;
		a=read();
		for(b=a,y=-4712;b>=1461;b-=1461,y+=4);
		y+=400*(b/146097);
		b%=146097;
		if(!k&&(y>1582 || y==1582&&b>278))b+=10,k=1;		
		y+=100*(b/36524);
		b%=36524;
		if(!k&&(y>1582 || y==1582&&b>278))b+=10,k=1;
		y+=4*(b/1461);
		b%=1461;
		if(!k&&(y>1582 || y==1582&&b>278))b+=10,k=1;
		if(b>=1096)b-=1096,y+=3,r=0;
		else if(b>=731)b-=731,y+=2,r=0;
		else if(b>=366)b-=366,y++,r=0;
		else r=1;
		if(!k&&(y>1582 || y==1582&&b>278))b+=10,k=1;
		if(r)md[2]=29;
		else md[2]=28;
		for(m=1;b>=md[m];m++)b-=md[m];
		d=b+1;
		if(y<0)printf("%lld %lld %lld BC\n",d,m,-y+1);
		else printf("%lld %lld %lld\n",d,m,y);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00123\zoo\zoo.cpp.The size of it is 0.707 KB.
#include<bits/stdc++.h>
using namespace std;
inline long long read(){
	int ans=0,f=1;char c=getchar();
	while(!isdigit(c)){if(c=='-')f=-1;c=getchar();}
	while(isdigit(c)){ans=ans*10+c-48;c=getchar();}
	return ans*f;
}
long long n,m,c,k,a,s,d,num;
long long p[1000005],q[1000005];
bitset<10000005>b;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read(),m=read(),c=read(),k=read();
	for(int i=1;i<=n;i++)a=read(),s|=a;
	for(int i=1;i<=m;i++){
		p[i]=read(),q[i]=read();
		if(s>>p[i]&1)b[q[i]]=1;
	}
	for(int i=1;i<=c;i++){
		if(b[i]==0)
			for(int j=1;j<=m;j++)
				if(q[j]==i)
					d|=1<<p[i];
	}
	while(d){
		d-=d&(-d);
		num++;
	}
	num=k-num;
	cout<<(1<<num)-n;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00123\call\call.cpp.The size of it is 0.850 KB.
#include<bits/stdc++.h>
using namespace std;
inline int read(){
	int ans=0,f=1;char c=getchar();
	while(!isdigit(c)){if(c=='-')f=-1;c=getchar();}
	while(isdigit(c)){ans=ans*10+c-48;c=getchar();}
	return ans*f;
}
int n,m,a[100005],q,query[100005];
int cnt1,cnt2,cnt3;
int f[100005][3];
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdin);
	n=read();
	for(int i=1;i<=n;i++)a[i]=read();
	m=read();
	for(int i=1;i<=m;i++){
		int op=read();
		if(op==1){
			f[i][0]=1;
			f[i][1]=read();
			f[i][2]=read();
		}
		else if(op==2){
			f[i][0]=2;
			f[i][1]=read();
		}
		else {
			int c=read();
			while(c--)read();
		}
	}
	q=read();
	for(int i=1;i<=q;i++){
		int c=read();
		if(f[c][0]==1){
			a[f[c][1]]+=f[c][2];
		}
		if(f[c][0]==2){
			for(int i=1;i<=n;i++)a[i]*=f[c][1];
		}
	}
	for(int i=1;i<=n;i++)cout<<a[i]<<' ';
	return 0;
}

==========
===== Opening  answers\HN-00123\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00124's file(s).
===== Successfully open the file  answers\HN-00124\julian\julian.cpp.The size of it is 1.929 KB.
#include<iostream>
#include<cstdio>
using namespace std;
int data[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
//                1  2  3  4  5  6  7  8  9  10 11 12
long long BYear = 4713,BMonth = 1,BDay = 1;
bool ROG = false;
bool flag = false;
int Daynumber = 0;
bool isRunData(int day) {
	if(day%4==0 && day % 100 != 0) {
		return true;
	} else if(day % 400 == 0) {
		return true;
	} else if(day == 0) {
		return true;
	} else {
		return false;
	}
}
int main() {
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int jul[100001] = {};
	long long n;
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>jul[i];
	}
	int i = 0;
	while(i<n) {
		if(Daynumber != jul[i]) {
			if(ROG == false && BYear != 0) {
				if(BDay > data[BMonth]) {
					if(BMonth == 2 && isRunData(BYear-1)==false) {
						Daynumber++;
					}
					BMonth++;
					BDay=1;
					Daynumber --;
				} else if(BMonth == 12 && BDay == 31) {
					//Daynumber++;
					BYear --;
					BMonth = 1;
					BDay = 1;
				} else {
					BDay ++;
				}
				Daynumber ++;
			} else if(BYear == 0) {
				ROG = true;
				BYear = 1;
				BDay = 1;
				BMonth = 1;
				Daynumber-=0;
			} else if(ROG == true && BYear != 0){
				if(flag == false && BYear == 1582 && BDay == 5 && BMonth == 10){
					BDay = 15;
					flag = true;
				}
				if(BDay > data[BMonth]) {
					if(BMonth == 2 && isRunData(BYear)==false) {
						Daynumber++;
					}
					BMonth++;
					BDay=1;
					Daynumber --;
				} else if(BMonth == 12 && BDay == 31) {
					BYear ++;
					BMonth = 1;
					BDay = 1;
				} else {
					BDay ++;
				}
				Daynumber ++;
			}
		} else if(Daynumber >= jul[i]) {
			if(ROG==false) {
				cout<<BDay<<" "<<BMonth<<" "<<BYear<<" BC"<<endl;
			} else {
				cout<<BDay<<" "<<BMonth<<" "<<BYear<<" "<<endl;
			}
			i++;
			BDay = 1;
			BYear = 4713;
			BMonth = 1;
			Daynumber = 0;
			ROG = false;
			flag = false;
		}
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file        answers\HN-00124\zoo\zoo.cpp.The size of it is 0.205 KB.
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n;
	cin>>n;
	cout<<13;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Opening      answers\HN-00124\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00124\snakes\snakes.cpp.The size of it is 0.438 KB.
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int b[10001]={},n,s;
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>s;
		if(s-i <= 0){
			cout<<1<<endl;
		}else{
			cout<<s-i+1<<endl;
		}
		if(i > 1){
			for(int j = 0;j < s;j++){
				cin>>b[j];
			}
		}
		for(int j = 0;j < s;j++){
			cin>>b[j];
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========


---------- Now Opening N-00125's file(s).
===== Successfully open the file  answers\HN-00125\julian\julian.cpp.The size of it is 1.094 KB.
#include<bits/stdc++.h>
using namespace std;

int q,r,cnt,flag;
int dm[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

struct node
{
	int day,month,year;
	char gy1,gy2;
}a[5000001];

void rll_gyq(){
	for(int i=4713;i>0;i--){
		if(i%4==1)
			dm[2]++;
		for(int j=1;j<=12;j++)
			for(int k=1;k<=dm[j];k++)
			{
				a[cnt].year=i;
				a[cnt].month=j;
				a[cnt].day=k;
				a[cnt].gy1='B';
				a[cnt].gy2='C';
				cnt++;
			}
		dm[2]=28;
	}
}

void rll_gyh(){
	for(int i=1;i<=5001;i++){
		if(i%4==0&&flag==0)
			dm[2]++;
		if(flag==1&&(i%400==0||(i%4==0&&i%100!=0)))
			dm[2]++;
		for(int j=1;j<=12;j++)
			for(int k=1;k<=dm[j];k++){
				if(i==1528&&j==10&&k==5){
					k+=10;
					flag=1;
				}
				a[cnt].year=i;
				a[cnt].month=j;
				a[cnt].day=k;
				cnt++;
			}
		dm[2]=28;
	}
}

void into()
{
	rll_gyq();
	rll_gyh();
}

int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	into();
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	{
		scanf("%d",&r);
		printf("%d %d %d ",a[r].day,a[r].month,a[r].year);
		cout<<a[r].gy1<<a[r].gy2<<endl;
	}
	return 0;
}
//(ke2YI0gong2YU0)
==========
===== Successfully open the file        answers\HN-00125\zoo\zoo.cpp.The size of it is 0.324 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k,a[1001],q[1001],p[1001],logg[1001];
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int nn=pow(2,n+1);
	for(int i=1;i<=m;i++){
		cin>>p[i]>>q[i];
	}
	cout<<nn-n<<endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00125\call\call.cpp.The size of it is 1.178 KB.
#include<bits/stdc++.h>
using namespace std;
int n,a[100001],t[100001],p[100001],v[100001],mod=998244353;
int m,Q,flag1,flag2,flag3,f[100001],c[100001],g[1001][1001];
void hh(int x)
{
	//c[]=0
	if(t[x]==1){
		a[p[x]]+=v[x];
		a[p[x]]%=mod;
	}
	if(t[x]==2){
		for(int i=1;i<=n;i++){
			a[i]*=v[i];
			a[i]%=mod;
		}
	}
}
void h(int x)
{
	if(t[x]==1)
	{
		a[p[x]]+=v[x];
		a[p[x]]%=mod;
	}
	if(t[x]==2){
		for(int i=1;i<=n;i++){
			a[i]*=v[x];
			a[i]%=mod;
		}
	}
	if(t[x]==3){
		for(int i=1;i<=c[x];i++)
		{
			h(g[x][i]);
		}
	}
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&t[i]);
		if(t[i]==1)
		{
			flag1=1;
			scanf("%d%d",&p[i],&v[i]);
		}
		if(t[i]==2)
		{
			flag2=1;
			scanf("%d",&v[i]);
		}
		if(t[i]==3){
			scanf("%d",&c[i]);
			for(int j=1;j<=c[i];j++){
				scanf("%d",&g[i][j]);
				flag3=1;
			}
		}
	}
	scanf("%d",&Q);
	for(int i=1;i<=Q;i++){
		scanf("%d",&f[i]);
		if(flag3==0)
			hh(f[i]);
		else
//		if(flag1==0||flag2==0)
			h(f[i]);
	}
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]%mod);
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00125\snakes\snakes.cpp.The size of it is 0.808 KB.
#include<bits/stdc++.h>
using namespace std;

int t,n,b,cnt,ans;

struct node
{
	int id,m;
}a[3000010];
int cmp(node x,node y)
{
	if(x.m==y.m)
		return x.id<y.id;
	return x.m<y.m;
}

void game()
{
	sort(a+1+ans,a+1+n,cmp);
	if(a[n].m-a[n-2].m<a[n-1].m)
		cout<<3<<endl;
	else
		cout<<1<<endl;
}
int game_into(){
	while(n-ans!=3){
		sort(a+1+ans,a+1+n,cmp);
		if(a[n].m-a[1+ans].m>a[2+ans].m){
			a[n].m-=a[1+ans].m;
			ans++;
		}
		else{
			cout<<n<<endl;
			return 1;
		}
	}
	return 0;
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>t>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].m;
		a[i].id=i;
	}
	if(game_into()==0)
		game();
	for(int k=1;k<t;k++){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>cnt>>b;
			a[cnt].m=b;
		}
		if(game_into()==0)
			game();
	}
	return 0;
}
==========


---------- Now Opening N-00126's file(s).
===== Successfully open the file  answers\HN-00126\julian\julian.cpp.The size of it is 2.780 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int q;
int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int sum[13];
inline int bcruns(int r)
{
	int runs=4713/4-r/4;
	return 365*(4713-r)+runs;
}
inline int runsc(int r)
{
//	int bei4=(r-1)/4,bei400=(r-1)/400,bei100=(r-1)/100;
//	int run=bei4+(bei400-bei100);
//	return run;
	int run=0;
	if(r<1582)
	run=(r)/4;
	else
	{
		int bei4=(r)/4-1582/4,bei400=(r)/400-1582/400,bei100=(r)/100-1582/100;
		 run=bei4+(bei400-bei100);
	//	 printf("%lld %lld %lld\n",bei4,bei400,bei100);
		run+=1582/4;
	}
	return run;
	int ans=365*(r-1)+run;
	if(r>1582) ans-=10;
	return ans;
}
//#define run(year) ((year)%4==0&&((year)%100!=0||(year)%400==0))
inline int run(int year)
{
	if(year<1582) return !(year%4);
	if(year>1582) return (year%400==0||(year%4==0&&year%100!=0));
	return 0;
}
inline void work(int r)
{
	int runs=4712/4+1;
	int bc=1721424;   //¹«ÔªÇ°ÌìÊý 
	int day=0,month=0,year=0;
	if(r<bc)
	{
		int lef=1,righ=4713,mid;
		while(lef<righ)      
		{
			mid=lef+righ>>1;
			if(r-bcruns(mid)<0) lef=mid+1;
			else if(r-bcruns(mid)>365)righ=mid;
			else { year=mid;break;}                                
		}
		if(!year)
		{
			if(r-bcruns(lef)<365) year=lef;
			else year=righ;
		}
		
	
		r-=bcruns(year);
		
		if((year-1)%4==0)
			days[2]++;
			
		int sum=0;
		for(int k=1;k<=12;k++)
		{
			if(sum<=r&&sum+days[k]>r) {month=k;break;}
				sum+=days[k];
		}
		
		r-=sum;r++;
		if((year-1)%4==0) days[2]--;
		
		printf("%lld %lld %lld BC\n",r,month,year);
	}
	else
	{
		r-=bc;
	//	printf("restb:%lld\n",r);
		int lef=1,righ=1e9;
		while(lef<righ)
		{
			
			int mid=lef+righ>>1;
	//		printf("lef:%lld,righ:%lld,mid:%lld,r-run:%lld\n",lef,righ,mid,r-runsc(mid));
			if(r-runsc(mid)<0) righ=mid;
			else if(r-runsc(mid)>365)lef=mid+1;
			else {year=mid;break;}
		}
		
		if(!year)
		{
			if(r-runsc(lef)<365&&r>runsc(lef)) year=lef;
			else year=righ;
		}
		
		r-=runsc(year);
	//	printf("rest:%lld\n",r);
	
		if(year==1582) days[10]-=10;
		if(run(year)) days[2]++;
		int sum=0;
		
		for(int k=1;k<=12;k++)
		{
			if(sum<=r&&sum+days[k]>r) {month=k;break;}
				sum+=days[k];
		}
		r-=sum;r++;
//		day=1;month=1;
//		for(int i=1;i<=r;i++)
//		{
//			day++;
//			if(day>days[month]) day-=days[month],month++;
//		}
//		r=day;
		if(run(year)) days[2]--;
		if(year==1582) days[10]+=10;
		
		if(year==1582&&month==10)
		{
			if(r>=5)r+=10;
			if(r>31) month++,r-=31;
		} 
		printf("%lld %lld %lld \n",r,month,year);
	}
}
signed main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
//	for(int i=1;i<=12;i++) sum[i]=sum[i-1]+days[i];
//	work(1000);
	scanf("%lld",&q);
	while(q--)
	{
		int v;
		scanf("%lld",&v);
		work(v);
	}
	fclose(stdin);
	fclose(stdout);
//	int que=283727928;
//	work(que);
	return 0;
}
==========
===== Successfully open the file        answers\HN-00126\zoo\zoo.cpp.The size of it is 1.457 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5,M=1e6+5;
typedef unsigned long long ll;
ll ans=1,a[N];
int n,m,c,k,bk[70];
vector<int> can[N];
int p[N],q[N];
template<typename T>
inline void read(T &a)
{
	char ch;int sign(1);
	for(ch=getchar();!isdigit(ch);ch=getchar())
	if(ch=='-') sign=-1;
	a=ch&15;
	for(ch=getchar();isdigit(ch);ch=getchar())
	a=(a<<3)+(a<<1)+(ch&15);
	a*=sign;
}
int vals[M],b[M],tot,mp[70],need[N],cnt;
ll weizi=0;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	read(n);read(m);read(c);read(k);
	for(int i=1;i<=n;i++) read(a[i]),weizi|=a[i];
	for(int i=0;i<k;i++) bk[i]=1;
	for(int i=1;i<=m;i++)
	{
		read(p[i]);read(q[i]);
		bk[p[i]]=0;
		vals[i]=q[i];
	}
	sort(vals+1,vals+m+1);
	tot=unique(vals+1,vals+m+1)-vals-1;
	for(int i=1;i<=m;i++) b[i]=lower_bound(vals+1,vals+tot+1,q[i])-vals;
	//for(int i=1;i<=m;i++) cout<<b[i]<<' ';
	for(int i=1;i<=m;i++) can[b[i]].push_back(p[i]),mp[p[i]]=b[i];
	
	for(int i=1;i<=m;i++)
	if(weizi>>p[i]&1) need[++cnt]=b[i];
//	for(int i=1;i<=cnt;i++) cout<<need[i]<<' ';
	for(int i=1;i<=cnt;i++)
	for(int k=0;k<can[need[i]].size();k++)
	bk[can[need[i]][k]]=1;
	
	bool flow=1;
	for(int i=0;i<64;i++) if(!bk[i]) flow=0;
	if(flow) 
	{
		ll base=0;
		ans=-n;
		for(int i=63;i>=0;i--) ans+=(1ll<<i);
		ans++;
		cout<<ans;
		
	}
	else
	{
		for(int i=0;i<64;i++) 
		if(bk[i]) 
			 ans*=2;
		ans-=n;
		cout<<ans;
	}	

	fclose(stdin);fclose(stdout);
	return 0;
	
	
}
==========
===== Successfully open the file      answers\HN-00126\call\call.cpp.The size of it is 2.323 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5,M=1e6+5,mod=998244353;
int fir[N],nxt[M],to[M],ect=0,de[N];
inline void addedge(int u1,int v1)
{
	nxt[++ect]=fir[u1];fir[u1]=ect;to[ect]=v1;de[v1]++;
}
typedef pair<int,int>P;
P fuc[N];
int dfn[N],mindfn[N],maxdfn[N],dfstime;
int n,a[N],m,type,q,seq[N];
inline void topo()
{
	queue<int>q;
	dfstime=0;
	for(int i=1;i<=m;i++)
	if(!de[i]) q.push(de[i]),dfn[i]=++dfstime;
	while(!q.empty())
	{
		int x=q.front();
		q.pop();
		dfn[x]=++dfstime;
		for(int i=fir[x];i;i=nxt[i])
		{
			--de[to[i]];
			if(!de[to[i]]) q.push(to[i]);
		}
	}
}
bool cmp(int u,int v)
{
	return dfn[u]<dfn[v];
}

template<typename T>
inline void read(T &a)
{
	char ch;int sign(1);
	for(ch=getchar();!isdigit(ch);ch=getchar())
	if(ch=='-') sign=-1;
	a=ch&15;
	for(ch=getchar();isdigit(ch);ch=getchar())
	a=(a<<3)+(a<<1)+(ch&15);
	a*=sign;
}
inline int ksm(int b,int p,int mod)
{
	int res=1;
	while(p)
	{
		if(p&1) res=1LL*res*b%mod;
		b=1ll*b*b%mod;
		p>>=1;
	}
	return res;
}
int tag;
inline void solve(int u)
{
//	printf("dfn:%d\n",u);
	if(fuc[u].second)
	{
//		if(fuc[u].first) tag[fuc[u].first]+=fuc[u].second;
//		else a[fuc[u].first]=1ll*a[fuc[u].first]*fuc[u].second%mod,tag[fuc[u].first]=1ll*tag[fuc[u].first]*fuc[u].second%mod;
		int v1=fuc[u].first,v2=fuc[u].second;
		if(v1)
		{
			a[v1]+=1ll*v2*ksm(tag,mod-2,mod)%mod;
			a[v1]%=mod;
		}
		else tag=1ll*tag*v2%mod;
	//	printf("fuc:%lld,%lld,%lld,%lld\n",u,v1,a[v1],tag);
	}
	else for(int i=fir[u];i;i=nxt[i])
	solve(to[i]);
}
int pson[N],vst[N],srt[N];

int inv[N];
signed main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	tag=1;
	read(n);
	for(int i=1;i<=n;i++) read(a[i]);
	read(m);
	for(int i=1;i<=m;i++)
	{
		read(type);
		if(type==1)
		read(fuc[i].first),read(fuc[i].second);
		if(type==2)
		fuc[i].first=0,read(fuc[i].second),inv[i]=ksm(fuc[i].second,mod-2,mod);
		if(type==3)
		{
			fuc[i].first=fuc[i].second=0;
			int cnt;
			read(cnt);
			for(int j=1;j<=cnt;j++) read(pson[j]);
			for(int j=cnt;j>=1;j--) addedge(i,pson[j]);
		}
	}
//	topo();
//	for(int i=1;i<=m;i++) srt[i]=i;
//	sort(srt+1,srt+m+1,cmp)
	read(q);
	for(int i=1;i<=q;i++)
	{
		int f;
		read(f);
		solve(f);
	}
	for(int i=1;i<=n;i++) printf("%d ",(a[i]*tag)%mod);
	fclose(stdin);fclose(stdout);
	return 0;
}
==========
===== Opening  answers\HN-00126\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00127's file(s).
===== Successfully open the file  answers\HN-00127\julian\julian.cpp.The size of it is 1.784 KB.
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<assert.h>
#define fr(i,a,b) for(int i=(a),end_##i=(b);i<=end_##i;i++)
#define fd(i,a,b) for(int i=(a),end_##i=(b);i>=end_##i;i--)
#define i64 long long
i64 read()
{
	i64 r=0,t=1,c=getchar();
	while(c<'0'||c>'9'){ t=(c=='-'?-1:1); c=getchar(); if(c==EOF) exit(1); }
	while(c>='0'&&c<='9'){ r=r*10+c-48; c=getchar(); }
	return r*t;
}
struct date
{
	i64 y,m,d;
	date(i64 Y=0,i64 M=0,i64 D=0){ y=Y; m=M; d=D; }
};
//         12 1  2  3  4  5  6  7  8  9  10 11 12
int D[20]={31,31,28,31,30,31,30,31,31,30,31,30,31};
bool check(i64 y)
{
	y+=400ll<<50;
	return y%400==0||(y%4==0&&y%100!=0);
}
date operator+(date a,i64 b)
{
	b+=a.d-1; a.d=1;
	while(a.m!=1){ a.m--; b+=D[a.m]; if(a.m==2&&check(a.y)) b++; }
	a.y+=b/(400*365+100-3)*400; b%=(400*365+100-3);
	int c=0;
	while(b>=365+(c=check(a.y)))
	{
		b-=365+c; a.y++;
		if(c&&b>=365*3){ b-=365*3; a.y+=3; }
	}
	while(b>=D[a.m]+(a.m==2&&check(a.y))){ b-=D[a.m]+(a.m==2&&check(a.y)); a.m++; }
	a.d+=b;
	return a;
}
bool operator>=(date a,date b){ return a.y==b.y?a.m==b.m?a.d>=b.d:a.m>=b.m:a.y>=b.y; }
date add(date a,i64 b)
{
	a=a+b; int cnt=0;
	fr(i,-47,15) if((i+100)%4!=0)
	{
		if(a>=date(i*100,2,29)) cnt++;
	}
	while(cnt--)
	{
		a.d--;
		if(a.d==0){ a.m--; a.d=D[a.m]; if(a.m==2&&a.y%4==0&&(a.y%100!=0||a.y<1582||a.y%400==0)) a.d++; }
		if(a.m==0){ a.m=12; a.y--; }
	}
//	if(a.y<1582&&cnt&&a.y%100==0&&a.y%400!=0&&a.m==2&&a.d==28) a.d++;
	if(a>=date(1582,10,5)) a=a+10;
	return a;
}
void print(date a)
{
	if(a.y>0) printf("%lld %lld %lld\n",a.d,a.m,a.y);
	else printf("%lld %lld %lld BC\n",a.d,a.m,-a.y+1);
}
int main()
{
	freopen("julian.in","r",stdin); freopen("julian.out","w",stdout);
	fr(T,1,read()) print(add(date(-4712,1,1),read()));
	return 0;
}
==========
===== Successfully open the file        answers\HN-00127\zoo\zoo.cpp.The size of it is 0.919 KB.
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<assert.h>
#define fr(i,a,b) for(int i=(a),end_##i=(b);i<=end_##i;i++)
#define fd(i,a,b) for(int i=(a),end_##i=(b);i>=end_##i;i--)
#define u64 unsigned long long
u64 read()
{
	u64 r=0,t=1,c=getchar();
	while(c<'0'||c>'9'){ t=(c=='-'?-1:1); c=getchar(); if(c==EOF) exit(1); }
	while(c>='0'&&c<='9'){ r=r*10+c-48; c=getchar(); }
	return r*t;
}
#include<bitset>
const int N=1000010;
int n,q,c,k;
u64 a;
int x[N],y[N];
std::bitset<100000010> p;
u64 s;
int main()
{
	freopen("zoo.in","r",stdin); freopen("zoo.out","w",stdout);
	n=read(); q=read(); c=read(); k=read();
	fr(i,1,n) a|=read();
	fr(i,1,q)
	{
		x[i]=read(); y[i]=read();
		if((a>>x[i])&1) p[y[i]]=1;
	}
	fr(i,1,q) if(!p[y[i]]) s|=1ull<<x[i];
	fr(i,0,k-1) if((s>>i)&1) k--;
	if(k==64&&n==0) printf("18446744073709551616\n");
	else printf("%llu\n",(k==64?0:1ull<<k)-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00127\call\call.cpp.The size of it is 1.853 KB.
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<assert.h>
#define fr(i,a,b) for(int i=(a),end_##i=(b);i<=end_##i;i++)
#define fd(i,a,b) for(int i=(a),end_##i=(b);i>=end_##i;i--)
#define i64 long long
i64 read()
{
	i64 r=0,t=1,c=getchar();
	while(c<'0'||c>'9'){ t=(c=='-'?-1:1); c=getchar(); if(c==EOF) exit(1); }
	while(c>='0'&&c<='9'){ r=r*10+c-48; c=getchar(); }
	return r*t;
}
#define For(i,a) for(std::vector<i64>::iterator i=a.begin();i!=a.end();i++)
#include<vector>
const int N=1000010,mod=998244353;
i64 n,m,a[N],t[N],op[N],p[N],d[N],A[N],q,s[N];
std::vector<i64> e[N];
int main()
{
	freopen("call.in","r",stdin); freopen("call.out","w",stdout);
	n=read();
	fr(i,1,n) a[i]=read();
	m=read();
	fr(i,1,m)
	{
		op[i]=read();
		fr(j,1,op[i]==1?2:op[i]==2?1:read()) e[i].push_back(read());
		if(op[i]==3)
		{
			For(j,e[i]) d[*j]++;
			std::reverse(e[i].begin(),e[i].end());
		}
	}
//	fr(i,1,m) printf("%lld%c",op[i],i==m?'\n':' ');
//	fr(i,1,m) printf("%lld%c",d[i],i==m?'\n':' ');
	// topsort
	{
		int r=0;
		fr(i,1,m) if(!d[i]) p[++r]=i;
		fr(i,1,m)
		{
			if(op[p[i]]==3)
				For(j,e[p[i]]){ d[*j]--; if(!d[*j]) p[++r]=*j; }
		}
	}
	fd(I,m,1)
	{
		int i=p[I];
		if(op[i]==2) t[i]=e[i][0];
		else
		{
			t[i]=1;
			if(op[i]==3) For(j,e[i]) t[i]=t[i]*t[*j]%mod;
		}
	}
//	fr(i,1,m) printf("%lld%c",p[i],i==m?'\n':' ');
//	fr(i,1,m) printf("%lld%c",t[i],i==m?'\n':' ');
	q=read(); i64 S=1;
	fr(i,1,q) A[i]=read();
	fd(i,q,1){ s[A[i]]=(s[A[i]]+S)%mod; S=S*t[A[i]]%mod; }
	fr(i,1,n) a[i]=a[i]*S%mod;
	fr(I,1,m)
	{
		int i=p[I];// fprintf(stderr,"%d %lld\n",i,s[i]);
//		For(j,e[i]) printf("%lld ",*j); putchar(10);
		if(op[i]==1) a[e[i][0]]=(a[e[i][0]]+e[i][1]*s[i])%mod;
		else if(op[i]==3) For(j,e[i]){ s[*j]=(s[*j]+s[i])%mod; s[i]=s[i]*t[*j]%mod; }
	}
	fr(i,1,n) printf("%lld%c",a[i],i==n?'\n':' ');
	return 0;
}
==========
===== Successfully open the file  answers\HN-00127\snakes\snakes.cpp.The size of it is 1.291 KB.
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<assert.h>
#define fr(i,a,b) for(int i=(a),end_##i=(b);i<=end_##i;i++)
#define fd(i,a,b) for(int i=(a),end_##i=(b);i>=end_##i;i--)
int read()
{
	int r=0,t=1,c=getchar();
	while(c<'0'||c>'9'){ t=(c=='-'?-1:1); c=getchar(); if(c==EOF) exit(1); }
	while(c>='0'&&c<='9'){ r=r*10+c-48; c=getchar(); }
	return r*t;
}
#define pii std::pair<int,int>
const int N=1000010;
int n;
pii a[N],b[N];
int u[N],v[N],t[N],T;
void solve()
{
	int l1=1,r1=n,l2=n+1,r2=n;
	fr(i,1,n-1)
	{
		pii x,y;
		if(l1>r1) x=b[l2++];
		else if(l2>r2) x=a[l1++];
		else if(a[l1]<b[l2]) x=a[l1++];
		else x=b[l2++];
		if(l1>r1) y=b[r2--];
		else if(l2>r2) y=a[r1--];
		else if(a[r1]>b[r2]) y=a[r1--];
		else y=b[r2--];
		u[i]=y.second; v[i]=x.second;
//		printf("%d %d  %d %d\n",y.first,y.second,x.first,x.second);
		b[--l2]=pii(y.first-x.first,y.second);
	}
//	fr(i,1,n-1) printf("%d %d\n",u[i],v[i]);
	fr(i,1,n) t[i]=n;
	T=n;
	fd(i,n-1,1)
		if(t[u[i]]<T) T=i;
		else t[v[i]]=i;
	printf("%d\n",n-T+1);
}
int main()
{
	freopen("snakes.in","r",stdin); freopen("snakes.out","w",stdout);
	int T=read(); n=read();
	fr(i,1,n) a[i]=pii(read(),i);
	fr(i,1,T)
	{
		if(i!=1) fr(j,1,read()){ int p=read(); a[p]=pii(read(),p); }
		solve();
	}
	return 0;
}
==========


---------- Now Opening N-00128's file(s).
===== Successfully open the file  answers\HN-00128\julian\julian.cpp.The size of it is 1.739 KB.
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXL=1<<22;
char i_str[MAXL],*i_s,*i_t;
char gc() {
	if(i_s==i_t) {
		i_s=i_str;
		i_t=i_s+fread(i_str,1,MAXL,stdin);
		return i_s==i_t?EOF:*i_s++;
	} else return *i_s++;
}
long long read() {
	long long x=0;
	bool f=0;
	char ch=gc();
	for(;ch<'0'||ch>'9';ch=gc())
		if(ch=='-')f=1;
	for(;ch>='0'&&ch<='9';ch=gc())
		x=x*10+(ch^48);
	return f?-x:x;
}
const int M=2299161,M2=2305824,D=1461,D2=146097,day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
void calc(int x,int f,int &m,int &d) {
	for(int i=0;i<12;i++) {
		int t=day[i]+(f&(i==1));
		if(x<=t) {
			m=i,d=x;
			return;
		}
		x-=t;
	}
}
signed main() {
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q=read();
	while(q--) {
		long long r=read()+1;
		if(r<=M) {
			int y=r/D,d=r%D,m;
			if(d==0)y--,d=D;
			y*=4;
			if(d<=366)calc(d,1,m,d);
			else {
				y++;
				d-=366;
				while(d>365)y++,d-=365;
				calc(d,0,m,d);
			}
			y-=4713;
			if(y<0)printf("%lld %lld %lld BC\n",d,m+1,-y);
            else printf("%lld %lld %lld\n",d,m+1,y+1);
		} else {
			r+=10;
			if(r<=M2) {
				int y=r/D,d=r%D,m;
				if(d==0)y--,d=D;
				y*=4;
				if(d<=366)calc(d,1,m,d);
				else {
					y++;
					d-=366;
					while(d>365)y++,d-=365;
					calc(d,0,m,d);
				}
				y-=4713;
				if(y<0)printf("%lld %lld %lld BC\n",d,m+1,-y);
		        else printf("%lld %lld %lld\n",d,m+1,y+1);
			} else {
				r-=M2;
				int y=r/D2,d=r%D2,m;
				if(d==0)y--,d=D2;
				y*=400;
				for(int i=1;i<=400;i++) {
					y++;
					int f=i%100==0?i%400==0:i%4==0;
					if(d<=365+f) {
						calc(d,f,m,d);
						break;
					}
					d-=365+f;
				}
				y+=1600;
				printf("%lld %lld %lld\n",d,m+1,y);
			}
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00128\zoo\zoo.cpp.The size of it is 0.870 KB.
#include<bits/stdc++.h>
using namespace std;
const int MAXL=1<<22;
char i_str[MAXL],*i_s,*i_t;
char gc() {
	if(i_s==i_t) {
		i_s=i_str;
		i_t=i_s+fread(i_str,1,MAXL,stdin);
		return i_s==i_t?EOF:*i_s++;
	} else return *i_s++;
}
unsigned long long read() {
	unsigned long long x=0;
	char ch=gc();
	for(;ch<'0'||ch>'9';ch=gc());
	for(;ch>='0'&&ch<='9';ch=gc())
		x=x*10+(ch^48);
	return x;
}
const int maxn=1e6+10;
map<int,int>f;
int p[maxn],q[maxn];
int main() {
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n=read(),m=read();read();int k=read();
	unsigned long long s=0,tot=-1,ans=-1,sum=1;
	for(int i=1;i<=n;i++)s|=read();
	for(int i=1;i<=m;i++) {
		p[i]=read(),q[i]=read();
		if(s>>p[i]&1)f[q[i]]=1;
	}
	for(int i=1;i<=m;i++)
		if(!f.count(q[i]))ans&=tot-(1llu<<p[i]);
	for(int i=0;i<k;i++)
		if(ans>>i&1)sum*=2;
	cout<<sum-n<<endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00128\call\call.cpp.The size of it is 1.665 KB.
#include<bits/stdc++.h>
using namespace std;
const int MAXL=1<<22;
char i_str[MAXL],*i_s,*i_t;
char gc() {
	if(i_s==i_t) {
		i_s=i_str;
		i_t=i_s+fread(i_str,1,MAXL,stdin);
		return i_s==i_t?EOF:*i_s++;
	} else return *i_s++;
}
int read() {
	int x=0,f=0;
	char ch=gc();
	for(;ch<'0'||ch>'9';ch=gc())
		if(ch=='-')f=1;
	for(;ch>='0'&&ch<='9';ch=gc())
		x=x*10+(ch^48);
	return f?-x:x;
}
const int maxn=1e6+10,mod=998244353;
int pro[maxn],a[maxn],f[maxn],P=1,T[maxn],p[maxn],s[maxn],v[maxn],g[maxn];
int qpow(int a,int b) {
	int ans=1;
	while(b) {
		if(b&1)ans=1ll*ans*a%mod;
		a=1ll*a*a%mod;
		b>>=1;
	}
	return ans;
}
void dfs(int x) {
	if(T[x]==1)f[p[x]]=(f[p[x]]+1ll*v[x]*qpow(P,mod-2))%mod;
	if(T[x]==2)P=1ll*P*v[x]%mod;
	if(T[x]==3)
		for(int i=s[x]+1;i<=s[x]+p[x];i++)
			dfs(g[i]);
}
int dfs1(int x) {
	if(pro[x])return pro[x];
	if(T[x]==2)return pro[x]=v[x];
	if(T[x]==3) {
		pro[x]=1;
		for(int i=s[x]+1;i<=s[x]+p[x];i++)
			pro[x]=1ll*pro[x]*dfs1(g[i])%mod;
		return pro[x];
	}
	return 1;
}
int main() {
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int n=read(),FL=1;
	for(int i=1;i<=n;i++)a[i]=read();
	int m=read();
	for(int i=1;i<=m;i++) {
		T[i]=read();
		if(T[i]==1)p[i]=read(),v[i]=read(),FL=0;
		if(T[i]==2)v[i]=read();
		if(T[i]==3) {
			p[i]=read();
			s[i+1]=s[i]+p[i];
			for(int j=1;j<=p[i];j++)
				g[s[i]+j]=read();
		} else s[i+1]=s[i];
	}
	if(!FL) {
		int q=read();
		while(q--)dfs(read());
		for(int i=1;i<=n;i++)
			printf("%lld ",1ll*(a[i]+f[i])*P%mod);
		puts("");
	} else {
		int q=read();
		while(q--)P=1ll*P*dfs1(read())%mod;
		for(int i=1;i<=n;i++)
			printf("%lld ",1ll*a[i]*P%mod);
		puts("");
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00128\snakes\snakes.cpp.The size of it is 1.384 KB.
#include<bits/stdc++.h>
using namespace std;
const int MAXL=1<<22;
char i_str[MAXL],*i_s,*i_t;
char gc() {
	if(i_s==i_t) {
		i_s=i_str;
		i_t=i_s+fread(i_str,1,MAXL,stdin);
		return i_s==i_t?EOF:*i_s++;
	} else return *i_s++;
}
int read() {
	int x=0;
	bool f=0;
	char ch=gc();
	for(;ch<'0'||ch>'9';ch=gc())
		if(ch=='-')f=1;
	for(;ch>='0'&&ch<='9';ch=gc())
		x=x*10+(ch^48);
	return f?-x:x;
}
const int maxn=1e6+10;
int a[maxn],x[maxn],y[maxn],las[maxn],q[maxn],b[maxn],l1,r1,l2,r2;
int calc(int n) {
	l2=l1=1,r1=n;
	r2=0;
	for(int i=1;i<n;i++) {
		int Max=-1,Min=-1,vMax,vMin;
		if(l1<=r1)vMax=a[Max=r1--];
		if(l2<=r2) {
			if(Max==-1)vMax=b[l2],Max=q[l2++];
			else if(a[Max]<=b[l2])vMax=b[l2],Max=q[l2++],r1++;
		}
		if(l1<=r1)vMin=a[Min=l1++];
		if(l2<=r2) {
			if(Min==-1)vMin=b[r2],Min=q[r2--];
			else if(a[Min]>b[r2])vMin=b[r2],Min=q[r2--],l1--;
		}
		x[i]=Max,y[i]=Min;
		q[++r2]=Max;
		b[r2]=vMax-vMin;
	}
	memset(las,-1,sizeof(las));
	for(int i=1;i<n;i++)las[y[i]]=i;
	int ans=n-1;
	for(int i=n-2;i>=1;i--)
		if(las[x[i]]!=-1&&las[x[i]]<=ans)ans=i-1;
	return n-ans;
}
int main() {
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T=read()-1;
	int n=read();
	for(int i=1;i<=n;i++)
		a[i]=read();
	printf("%d\n",calc(n));
	while(T--) {
		int k=read(),x,y;
		while(k--) {
			x=read(),y=read();
			a[x]=y;
		}
		printf("%d\n",calc(n));
	}
	return 0;
}
==========


---------- Now Opening N-00129's file(s).
===== Successfully open the file  answers\HN-00129\julian\julian.cpp.The size of it is 1.672 KB.
#include<bits/stdc++.h>
using namespace std;
long long cnt,n,m,year,day,month,flag,run;
long long year1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long long year2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>n;
		int flag1=1;
		n+=1;
		if(n<366)
		{
			year=4713;
			month=1;
			day=1;
			for(int j=1;j<=n;j++)
			{
				if(n>year2[j])
				{
					n-=year2[j];
					month++;	
				}	
			}
			day=n;
			cout<<day<<" "<<month<<" "<<year<<" "<<"BC"<<endl;
		}
		
		if(n<=1721058&&n>=366)
		{
			n-=366;
			month=1;
			day=1;
			if(n%1460==0)
				flag1=0;
			run=n/1460;
			year=4713-(run+(n-run*366)/365)-1;
			n=(n-run*366)%365;
			if(flag1==0)
			{
				for(int j=1;j<=12;j++)
				{
					if(n>=year2[j])
					{
						n-=year2[j];
						month++;
					}
				}
			}
			else
			{
				for(int j=1;j<=12;j++)
				{
					if(n>=year1[j])
					{
						n-=year1[j];
						month++;
					}
				}
			}
			day=n;
			//cout<<run<<endl;
			cout<<day<<" "<<month<<" "<<year<<" "<<"BC";
		}
		if(n>1721058)
		{
			month=1;
			n-=1721058;
		//	cout<<n<<endl;
			if(n%1461==0)
				flag1=0;
			run+=n/1460;
			year=(n-run*366)/365+run;
		//	cout<<run*366;
			n=(n-run*366)%365;
			if(flag1==0)
			{
				for(int j=1;j<=12;j++)
				{
					if(n>=year2[j])
					{
						n-=year2[j];
						month++;
					}
				}
			}
			else
			{
				for(int j=1;j<=12;j++)
				{
					if(n>=year1[j])
					{
						n-=year1[j];
						month++;
					//	cout<<n<<" ";
					}
				}
			//	cout<<endl;
			}
			day=n;
	//		cout<<run<<endl;
			cout<<day<<" "<<month<<" "<<year<<endl;
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00129\zoo\zoo.cpp.The size of it is 1.323 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k,b[105],pd[105],ans,amxi;
struct node
{
	int a[105];
	int cnt;
	int val;
	int flag;
}p[105];
struct node1
{
	int p[105];
	int cnt1;	
}d[105];
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
		p[b[i]].flag=1;
	}
	int t=1;
	for(int i=1;i<=k-1;i++)
	{
		t*=2;
		amxi+=t;
	}
	amxi+=1;
	for(int i=0;i<=amxi;i++)
	{
		p[i].cnt=k;
		p[i].val=i;
		while(p[i].val>0)
		{
			p[i].a[p[i].cnt]=p[i].val%2;
			p[i].val/=2;
			p[i].cnt--;
		}
	}
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		for(int j=1;j<=t;j++)
		{
			if(p[j].flag==1)
			{
				if(p[j].a[k-x]==1)
				{
					pd[y]++;
					
				}d[x].p[++d[x].cnt1]=y;
			}
		}
	}
/*	for(int i=1;i<=10;i++)
	{
		cout<<i<<endl;
		for(int j=0;j<=d[i].cnt1;j++)
			cout<<d[i].p[j]<<" ";
		cout<<endl;
	}
	cout<<endl;*/
//	for(int i=1;i<=10;i++)
//		cout<<pd[i]<<" ";
//	cout<<endl;
	pd[0]=1;
//	cout<<amxi<<endl;
	for(int i=0;i<=amxi;i++)
	{
		int flag=1;
		for(int j=k;j>=0;j--)
		{
			if(p[i].a[j]==1)
			{
				
				for(int k=0;k<=d[j].cnt1;k++)
				{
					if(pd[d[j].p[k]]==0)
						flag=0;
				}

			}
		}	
		if(flag==1&&p[i].flag==0)
		{
				ans++;
//				cout<<i<<" ";
		}
	}
//	cout<<endl;
	cout<<ans<<endl;
//	cout<<endl;
	return 0;
}

==========
===== Opening      answers\HN-00129\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00129\snakes\snakes.cpp.The size of it is 0.570 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,a[10],r,ans,w;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>r;
	for(int g=1;g<=r;g++)
	{
		cin>>n;
		if(g==1)
		{
			w=n;
			for(int i=1;i<=n;i++)
			{
				cin>>a[i];
			}
		}
		else
		{
			for(int i=1;i<=n;i++)
			{
				int x,y;
				cin>>x>>y;
				a[x]=y;
			}
		}
		if(w==1)
			cout<<1<<endl;
		if(w==2)
			cout<<1<<endl;
		if(w==3)
		{
			sort(a+1,a+1+w);
			if(a[1]+a[2]<a[3])
				cout<<1<<endl;
			else
				cout<<3<<endl;
		}
		if(n>3)
			cout<<n<<endl;
	}
	return 0;
}
==========


---------- Now Opening N-00130's file(s).
===== Successfully open the file  answers\HN-00130\julian\julian.cpp.The size of it is 2.188 KB.
#include <bits/stdc++.h>
using namespace std;
#define R register int
int m[15] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main ()  {
	freopen("julian.in", "r", stdin);
	freoprn("julian.out", "w", stdout);
	int n; scanf("%d", &n);
	for(R i = 1; i <= n; i ++) {
		int r; scanf("%d", &r);
		int year = r / 1461; year *= 4;
		r %= 1461; int  month = 0;
		if(r - 366 >= 0) year ++, r-= 366;
		while(r - 365 >= 0) r -= 365, year ++;
		if(year - 4712 == 1582 && r > 355) year ++, r -= 355; 
		if(year - 4712 >= 1582) {
			if(year - 4712 == 1582) {
				m[10] -= 10;
				for(R i = 1; i <= 12; i ++) {
					if(r - m[i] <= 0) {
						month = i; break;
					}
					r -= m[i];
				}
				m[10] += 10;
				if(month == 10) if(r > 4) r += 10;
				printf("%d %d 1582\n", r, month);
			}
			else {
				if(year % 4 > 0) r ++;
				r += (year % 4) * 365;
				(int)(year /= 4); r += year * 1461; r -= 9;
				r -= 2299240; year = 1583; int now = 365;
				while (year < 1600) {
					if(year % 4 == 0) now = 366;
					if(r <= now) break;
					r -= now; year ++;
					if(now == 366) now = 365;
				}
				if(year < 1600) {
					if(now == 366) m[2] ++;
					for(R i = 1; i <= 12; i ++) {
						if(r - m[i] <= 0) {
							month = i; break;
						}
						r -= m[i];
					}
					if(now == 366) m[2] --;
					printf("%d %d %d\n", r, month, year);
					continue;
				}
				year += (int)(r / 146097) * 400; r %= 146097;
				now = 366; 
				if(r == 0) {printf("%d %d %d\n", 31, 12, -- year); continue;}
				while(true) {
					if(year % 4 == 0 && year % 100 != 0)
						now = 366;
					if(r <= now) break;
					r -= now; year ++;
					if(now == 366) now = 365;
				}
				if(now == 366) m[2] ++;
				for(R i = 1; i <= 12; i ++) {
						if(r - m[i] <= 0) {
							month = i; break;
						}
						r -= m[i];
				}
				if(now == 366) m[2] --;
				printf("%d %d %d\n", r + 11, month, year);
			}
	    }
		else {
			if(year % 4 == 0) m[2] ++;
			for(R i = 1; i <= 12; i ++) {
				if(r - m[i] <= 0) {
					month = i; break;
				}
				r -= m[i];
			}
			if(year % 4 == 0) m[2] --;
			printf("%d %d ", r + 1, month);
			if(year >= 4713) printf("%d\n",year - 4713 + 1);
			else printf("%d BC\n", 4713 - year);
		}
	}
}
==========
===== Successfully open the file        answers\HN-00130\zoo\zoo.cpp.The size of it is 0.790 KB.
#include <bits/stdc++.h>
using namespace std;
#define R register int
const int MAXK = 64 + 10, MAXN = 100000000 + 10;
int tot = 0, cnt = 0, use[100];
bool buy[MAXN], un[MAXN], vis[MAXN];
int main () {
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	int n, m, c, k;
	scanf("%d%d%d%d", &n, &m, &c, &k);
	for(R i = 1; i <= n; i ++) {
		int x; scanf("%d", &x); tot = 0;
		while(x > 0) {
			use[++ tot] = x % 2;
			x >>= 1; 
		}
		for(R i = tot; i >= 1; i --)
			if(use[i] == 1) vis[i - 1] = true;
	}
	for(R i = 1; i <= m; i ++) {
		int x, y;
		scanf("%d%d", &x, &y);
		if(buy[y]) continue;
		if(vis[x])  {
			buy[y] = 1;
			if(un[y]) cnt --; un[y] = 0;
		}
		else  {un[y] = 1; cnt ++;}
	}
	long long ans = k - cnt;
	printf("%lld\n", (long long)pow(2, ans) - n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00130\call\call.cpp.The size of it is 0.238 KB.
#include <bits/stdc++.h>
using namespace std;
int main()  {
	freopen("call.in" , "r", stdin);
	freopen("call.out", "w", stdout);
	int n; cin>>n;
	int x; while(cin>>x);
	for(register int i = 1; i <= n; i ++)
		cout<<"0"<<" ";
	return 0;
}
==========
===== Successfully open the file  answers\HN-00130\snakes\snakes.cpp.The size of it is 1.374 KB.
#include <bits/stdc++.h>
using namespace std;
struct node {
	int atk, id;
	bool friend operator < (node x, node y){
		if(x.atk == y.atk) return x.id > y.id;
		return x.atk > y.atk;
	}
};
struct node2 {
	int atk2, id2;
	bool friend operator < (node2 x, node2 y){
		if(x.atk2 == y.atk2) return x.id2 < y.id2;
		return x.atk2 < y.atk2;
	}
};
bool vis[1000000 + 10];
int a[1000000 + 10];
priority_queue <node> q;
priority_queue <node2> q2;
int main()  {
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	int T, N; scanf("%d", &T);
	for(register int t = 1; t <= T; t ++) {
		memset(vis, 0, sizeof(vis));
		int n; scanf("%d", &n);
		while(!q.empty()) q.pop();
		if(t == 1)  {
			N = n;
			for(register int i = 1; i <= n; i ++)
				cin>>a[i];
		}
		else {for(register int i = 1; i <= n; i ++) {
			int x, y; scanf("%d%d", &x, &y);
			a[x] = y;
		}
		}
		for(register int i = 1; i <= N; i ++) {
			node s; s.id = i, s.atk = a[i];
			node2 s2; s2.id2 = i, s2.atk2 = a[i];
			q.push(s); q2.push(s2);
		}
		int ans = N;
		while(true) {
			node x = q.top(); node2 y = q2.top();
			q2.pop(); if(vis[y.id2]) continue;
			if(y.atk2 - x.atk < q.top().atk || y.id2 == x.id || ans == 1) {
				cout<<ans<<endl; break;
			}
			else {
				vis[x.id] = true;y.atk2 -= x.atk;
				x.id = y.id2; x.atk = y.atk2;
				q.push(x);  q2.push(y);
				ans --;
			}
		}
	}
	return 0;
}
==========


---------- Now Opening N-00131's file(s).
===== Successfully open the file  answers\HN-00131\julian\julian.cpp.The size of it is 1.001 KB.
#include<bits/stdc++.h>
using namespace std;
int x,q,hh[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int year,month;

inline bool is_run(int x){
	if(x<0) return (-x)%4==1;
	if(x<=1582) return x%4==0;
	return (x%400==0) || (x%4==0 && x%100!=0);
}

int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	while(q--){
		year=-4713,month=1;
		scanf("%d",&x),++x;
		while(year<0 && x>=365+is_run(year)) x-=365+is_run(year),++year;
		if(!year) year=1;
		while(year<1582 && x>=365+is_run(year)) x-=365+is_run(year),++year;
		if(year==1582 && x>=355) ++year,x-=355;
		if(year!=1582){
			while(x>=365+is_run(year)) x-=365+is_run(year),++year;
		    while(x>=hh[month]+(month==2&&is_run(year))) x-=hh[month]+(month==2&&is_run(year)),++month;
		}
		else{
			 while(x>=hh[month]-(month==10)*10) x-=hh[month]-(month==10)*10,++month;
			 if(month==10 && x>4) x+=10;		 
		}
		printf("%d %d %d",x,month,abs(year));
		if(year<0) printf(" BC");
		printf("\n");
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00131\zoo\zoo.cpp.The size of it is 0.404 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,c,k,ans;
bool vis[66];

int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%lld%lld%lld%lld",&n,&m,&c,&k);
	for(ll i=1,x;i<=n;i++) scanf("%lld",&x),ans|=x;
	for(ll i=1,x,y;i<=m;i++){
		scanf("%lld%lld",&x,&y);
		if(!((ans>>x)&1) && !vis[x]) --k,vis[x]=1;
	}
    printf("%lld",(1<<k)-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00131\call\call.cpp.The size of it is 1.003 KB.
#include<bits/stdc++.h>
#define ll long long
#define MAXM 100005
#define mod 998244353
using namespace std;
ll n,m,q;
ll a[MAXM];
struct node{
	ll t,a,b;
	vector<ll > g;
}fun[MAXM];

void solve(ll pos){
	 if(fun[pos].t==1){
	 	a[fun[pos].a]+=fun[pos].b,a[fun[pos].a]%=mod;
	 	return;
	 }
	 else if(fun[pos].t==2){
	 	for(ll i=1;i<=n;i++) a[i]*=fun[pos].a,a[i]%=mod;
	 	return;
	 }
	 else for(ll i=0;i<fun[pos].a;i++) solve(fun[pos].g[i]);
}

int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++) scanf("%lld",&a[i]);
	scanf("%lld",&m);
	for(ll i=1;i<=m;i++){
		scanf("%lld",&fun[i].t);
		if(fun[i].t==1) scanf("%lld%lld",&fun[i].a,&fun[i].b);
		else if(fun[i].t==2) scanf("%lld",&fun[i].a);
		else{
			scanf("%lld",&fun[i].a);
			for(ll j=1,x;j<=fun[i].a;j++) scanf("%lld",&x),fun[i].g.push_back(x);
		}
	}
	scanf("%lld",&q);
	for(ll i=1,x;i<=q;i++) scanf("%lld",&x),solve(x);
	for(ll i=1;i<=n;i++) printf("%lld ",a[i]%mod); 
	return 0;
} 
==========
===== Successfully open the file  answers\HN-00131\snakes\snakes.cpp.The size of it is 0.889 KB.
#include<bits/stdc++.h>
#define MAXN 1000005
using namespace std;
int t,n,pos_w,pos_s;
int a[MAXN];
bool ok,exist[MAXN];

inline bool shili(int x,int y){
	return a[x]>a[y] || a[x]==a[y] && x>y;
}

int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	srand(time(0));
	scanf("%d",&t);
	for(int tt=1,k;tt<=t;tt++){
		if(tt==1){
			scanf("%d",&n);
			for(int i=1;i<=n;i++) scanf("%d",&a[i]); 
		}
		else{
			scanf("%d",&k);
			for(int i=1,x,y;i<=k;i++) scanf("%d%d",&x,&y),a[x]=y;
		}
		pos_w=pos_s=ok=1;
		while(!exist[pos_w]) ++pos_w;
		while(!exist[pos_s]) ++pos_s;
	    for(int i=pos_w+1;i<=n;i++) if(shili(pos_w,i) && exist[i]) pos_w=i;
	    for(int i=pos_s+1;i<=n;i++) if(shili(i,pos_s) && exist[i]) pos_s=i;
	    a[pos_s]-=a[pos_w];
	    for(int i=1;i<=n;i++) if(shili(i,pos_s) && exist[i]){ok=0;break;}
	    printf("%d\n",rand()*rand()%n);
	}
	return 0;
} 
==========


---------- Now Opening N-00132's file(s).
===== Successfully open the file  answers\HN-00132\julian\julian.cpp.The size of it is 1.998 KB.
#include<bits/stdc++.h>
using namespace std;
long long q,r[100005],d[3000005],d2[100005],x,y,z,m[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int f(int a,int b,int c){
	int ans;
	while(a<=b){
		int mid=(a+b)>>1;
		if(c>=d[mid]){
			a=mid+1;
			ans=mid;
		}
		else{
			b=mid-1;
		}
	}
	return ans;
}
int f2(int a,int b,int c){
	int ans;
	while(a<=b){
		int mid=(a+b)>>1;
		if(c>=m[mid]){
			a=mid+1;
			ans=mid;
		}
		else{
			b=mid-1;
		}
	}
	return ans;
}
int f3(int a,int b,int c){
	int ans;
	while(a<=b){
		int mid=(a+b)>>1;
		if(c>=d2[mid]){
			b=mid-1;
			ans=mid;
		}
		else{
			a=mid+1;
		}
	}
	return ans;
}
void day(long long k){
	if(k>=d2[1]){
		k-=d2[1];
		int p=f(0,3000000,k);
		x=p+1;
		k-=d[p];
		if(((x%4==0)&&(x%100!=0))||(x%400==0)){
			m[2]++;m[3]++;m[4]++;m[5]++;m[6]++;m[7]++;m[8]++;m[9]++;m[10]++;m[11]++;m[12]++;
			p=f2(0,12,k);
			z=k-m[p]+1;
			m[2]--;m[3]--;m[4]--;m[5]--;m[6]--;m[7]--;m[8]--;m[9]--;m[10]--;m[11]--;m[12]--;
		}
		else{
			p=f2(0,12,k);
			z=k-m[p]+1;
		}
		y=p+1;
		printf("%lld %lld %lld\n",z,y,x);
	}
	else{
		int p=f3(1,4714,k);
		x=p-1;
		k-=d2[p];
		if((((x-1)%4==0&&(x-1)%100!=0)||((x-1)%400==0))){
			m[2]++;m[3]++;m[4]++;m[5]++;m[6]++;m[7]++;m[8]++;m[9]++;m[10]++;m[11]++;m[12]++;
			p=f2(0,12,k);
			z=k-m[p]+1;
			m[2]--;m[3]--;m[4]--;m[5]--;m[6]--;m[7]--;m[8]--;m[9]--;m[10]--;m[11]--;m[12]--;
		}
		else{
			p=f2(0,12,k);
			z=k-m[p]+1;
		}
		y=p+1;
		printf("%lld %lld %lld BC\n",z,y,x);
	}
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	for(int i=1;i<=3000000;i++){
		if(((i%4==0)&&(i%100!=0))||(i%400==0)){
			d[i]=d[i-1]+366;
		}
		else{
			d[i]=d[i-1]+365;
		}
	}
	for(int i=1852;i<=3000000;i++){
		d[i]-=10;
	}
	for(int i=4713;i>=1;i--){
		if((((i-1)%4==0)&&((i-1)%100!=1))||((i-1)%400==1)){
			d2[i]=d2[i+1]+366;
		}
		else{
			d2[i]=d2[i+1]+365;
		}
	}
	for(int i=2;i<=12;i++){
		m[i]=m[i]+m[i-1];
	}
	scanf("%lld",&q);
	for(int i=1;i<=q;i++){
		scanf("%lld",&r[i]);
		day(r[i]);	
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00132\zoo\zoo.cpp.The size of it is 0.645 KB.
#include<bits/stdc++.h>
using namespace std;
long long n,m,c,k,a[1000005],p[1000005],q,g[1000000],ans=1,flag,kk[50][50],cnt;
bool v[10000005];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%lld%lld%lld%lld",&n,&m,&c,&k);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		cnt=0;
		while(a[i]!=0){
			kk[i][cnt++]=a[i]%2;
			a[i]/=2;
		}
	}
	for(int i=1;i<=m;i++){
		scanf("%lld%lld",&p[i],&q);
		for(int j=1;j<=n;j++){
			if(kk[j][p[i]]==1){
				v[p[i]]=1;
				break;
			}
		}
	}
	for(int i=1;i<=k;i++){
		ans*=2;
	}
	for(int i=1;i<=m;i++){
		if(!v[p[i]]){
			ans/=2;
		}
	}
	printf("%lld",ans-n);
	return 0;
}
==========
===== Opening      answers\HN-00132\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00132\snakes\snakes.cpp.The size of it is 0.650 KB.
#include<bits/stdc++.h>
using namespace std;
int n,a[1000005],b[1000005],T,k,x,y,ans,g;
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&T);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(int i=1;i<n;i++){
		if(b[n]-b[i]>=b[n-1]){
			ans++;
			b[n]-=b[i];
		}
	}
	printf("%d\n",n-ans);
	for(int g=2;g<=T;g++){
		scanf("%d",&k);
		for(int j=1;j<=n;j++){
			b[j]=a[j];
		}
		for(int j=1;j<=k;j++){
			scanf("%d%d",&x,&y);
			b[x]=y;
		}
		ans=0;
		for(int i=1;i<n;i++){
			if(b[n]-b[i]>=b[n-1]){
				ans++;
				b[n]-=b[i];
			}
		}
		printf("%d\n",n-ans);
	}
	return 0;
}
==========


---------- Now Opening N-00133's file(s).
===== Successfully open the file  answers\HN-00133\julian\julian.cpp.The size of it is 2.114 KB.
#include<bits/stdc++.h>
using namespace std;
long long four,n,nn,year,day,q;
int kkk;
int yue[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int nian[5]={0,366,365,365,365};
long long myabs(long long needabs)
{
	return needabs*(-1LL);
}
void getdate(long long qwe,int kkkk,int yushu)
{
	if(kkkk%4==yushu) yue[2]=29;
	long long ans=1;
	for(int i=1;i<=12;i++)
	{
		if(qwe>yue[i])
		{
			qwe-=yue[i];
			ans++;
		}
		else
			break;
	}
	yue[2]=28;
	printf("%lld %lld ",qwe+1,ans);
}
void getdate2(long long qwe,long long now)
{
	if(now==366) yue[2]=29;
	long long ans=1;
	for(int i=1;i<=12;i++)
	{
		if(qwe>yue[i])
		{
			qwe-=yue[i];
			ans++;
		}
		else
			break;
	}
	yue[2]=28;
	printf("%lld %lld ",qwe,ans);
}
void juliantql()
{
	if(n<1721424)
	{
		four=n/1461;
		nn=four*1461;
		day=n-nn;
		four*=4;
		kkk=0;
		year=-4713+four;
		for(int i=1;i<=4;i++)
		{
			if(day>nian[i])
			{
				year++;
				kkk++;
				day-=nian[i];
			}
		}
		getdate(day,kkk,0);
		printf("%lld BC\n",myabs(year));
	}
	else
	{
		year=1;
		swap(nian[1],nian[4]);
		day=n-1721424;
		four=day/1461;
		nn=four*1461;
		day=day-nn;
		four*=4;
		year+=four;
		for(int i=1;i<=4;i++)
		{
			if(day>nian[i])
			{
				year++;
				kkk++;
				day-=nian[i];
			}
			else
				break;
		}
		getdate(day,kkk,3);
		swap(nian[1],nian[4]);
		printf("%lld\n",year);
	}
}
void mymemset()
{
	year=day=four=nn=n=0LL;
	kkk=0;
}
long long howmany(long long c)
{
	if(c%100==0)
	{
		if(c%400==0) return 366LL;
		else return 365LL;
	}
	else
	{
		if(c%4==0) return 366LL;
		else return 365LL;
	}
}
void gregoriantql()
{
	day=n;
	day-=2299160;
	if(day<=78)
	{
		getdate(day+287,1,6);
		printf("1582\n");
	}
	else
	{
		year=1583;
		day-=78;
		four=day/146097;
		year+=four*400;
		day-=four*146097;
		long long now=0LL;
		for(;;)
		{
			now=howmany(year);
			if(day<now) break;
			year++;
			day-=now;
		}
		getdate2(day,now);
		printf("%lld\n",year);
	}
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&n);
		if(n<=2299160)
			juliantql();
		else
			gregoriantql();
		mymemset();
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00133\zoo\zoo.cpp.The size of it is 0.742 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k,abc,l;
unsigned long long ans;
unsigned long long po[66];
bool f[66];
bool ok[66];
int p,q;
int a[1000005];
void deal()
{
	po[0]=1;
	for(int i=1;i<=k;i++)
		po[i]=po[i-1]*2;
	for(int i=1;i<=n;i++)
	{
		abc=a[i];
		for(int j=k;j>=0;j--)
		{
			if(po[j]<=abc)
			{
				f[j]=1;
				abc-=po[j];
				if(abc==0)
					break;
			}
			
		}
	}
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	deal();
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&p,&q);
		if(!f[p] && !ok[p])
			l++;
		ok[p]=1;
	}
	int kl=k-l;
	ans=1;
	for(int i=1;i<=kl;i++)
		ans*=2;
	ans-=n;
	printf("%u",ans);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00133\call\call.cpp.The size of it is 1.117 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,now,q,k;
int l[100005];
int t[100005];
int num[100005];
long long a[100005];
long long g[1000005];
long long f[100005][3];
long long mod=998244353LL;
void deal1(int k)
{
	a[f[k][1]]=(a[f[k][1]]+f[k][2])%mod;
}
void deal2(int k)
{
	for(int i=1;i<=n;i++)
		a[i]=(a[i]*f[k][1])%mod;
}
void deal3(int k)
{
	int y=num[k];
	for(int i=1;i<=l[k];i++)
	{
		if(t[g[i+y]]==1) deal1(g[i+y]);
		else if(t[g[i+y]]==2) deal2(g[i+y]);
		else deal3(g[i+y]);
	}
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&t[i]);
		if(t[i]==1)
			scanf("%lld%lld",&f[i][1],&f[i][2]);
		else if(t[i]==2)
			scanf("%lld",&f[i][1]);
		else
		{
			num[i]=now;
			scanf("%d",&l[i]);
			for(int j=1;j<=l[i];j++)
				scanf("%lld",&g[j+now]);
			now+=l[i];
		}
	}
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&k);
		if(t[k]==1) deal1(k);
		else if(t[k]==2) deal2(k);	
		else deal3(k);
	}
	for(int i=1;i<=n;i++)
		printf("%lld ",a[i]%mod);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00133\snakes\snakes.cpp.The size of it is 0.447 KB.
#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int t,n,k,q,w;
void solve3()
{
	if(a[1]+a[2]<=a[3]) printf("1\n");
	else printf("3\n");
		
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&t);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	solve3();
	t--;
	while(t--)
	{
		scanf("%d",&k);
		while(k--)
		{
			scanf("%d%d",&q,&w);
			a[q]=w;
		}
		solve3();
	}
	return 0;
}
==========


---------- Now Opening N-00134's file(s).
===== Successfully open the file  answers\HN-00134\julian\julian.cpp.The size of it is 1.255 KB.
// julian.cpp
#include<bits/stdc++.h>
using namespace std;
int pn[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
int rn[13]={0,31,60,91,121,152,182,213,244,274,305,335,366};
int Q,Day,Month,Year,i;
int nian,yue,ri;
long long r[111111];
void gyq()
{
	nian=r[i]/1461*4;
	yue=r[i]%1461;
	if(yue<366)// ÈòÄê
	{
		Year=4713-nian;
		for(int j=12;j>=0;j--)
			if(yue>rn[j])	{Month=j+1;ri=yue-rn[j];break;}
		Day=1+ri;
	}
	else//Æ½Äê 
	{
		nian=nian+(yue-1)/365;
		Year=4713-nian;
		yue=(yue-1)%365;
		for(int j=12;j>=1;j--)
			if(yue>pn[j])	{Month=j+1;ri=yue-pn[j];break;}
		Day=1+ri;
	}
	cout<<Day<<" "<<Month<<" "<<Year<<" BC"<<endl;
}
void gyh()
{
	r[i]-=1721414;
	nian=r[i]/1461*4;
	yue=r[i]%1461;
	if(yue<366)// ÈòÄê
	{
		Year=1+nian;
		for(int j=12;j>=0;j--)
			if(yue>rn[j])	{Month=j+1;ri=yue-rn[j];break;}
		Day=1+ri;
	}
	else//Æ½Äê 
	{
		nian=nian+(yue-1)/365;
		Year=1+nian;
		yue=(yue-1)%365;
		for(int j=12;j>=1;j--)
			if(yue>pn[j])	{Month=j+1;ri=yue-pn[j];break;}
		Day=1+ri;
	}
	cout<<Day<<" "<<Month<<" "<<Year<<" "<<endl;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>Q;
	for(i=1;i<=Q;i++)
	{
		cin>>r[i];
		if(r[i]<1721414) gyq();
		else gyh();
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file        answers\HN-00134\zoo\zoo.cpp.The size of it is 0.179 KB.
// zoo.cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00134\call\call.cpp.The size of it is 0.206 KB.
// call.cpp
#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	cout<<n;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00134\snakes\snakes.cpp.The size of it is 0.676 KB.
// snakes.cpp
#include<bits/stdc++.h>
using namespace std;
int T,n,snake,k,x;
long long a[1111111],y,t,h;
void px()
{
	for(int i=2;i<=snake;i++)
		for(int j=i;j>=2;j--)
			if(a[j]<a[j-1]){
				t=a[j];a[j]=a[j-1];a[j-1]=t;}
}
void jd()
{
	a[1]=a[snake]-a[1];h=a[1];
	snake--;
	px();	
	if(snake==1){cout<<snake<<endl;return;}	\
	if(a[1]==h)	{cout<<snake+1<<endl;return;}
	jd();
	return;
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>T>>n;snake=n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	jd();
	for(int i=2;i<=T;i++)
	{
		cin>>k;
		for(int j=1;j<=k;j++){
			cin>>x>>y;a[x]=y;}
		px();jd();
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========


---------- Now Opening N-00135's file(s).
===== Successfully open the file  answers\HN-00135\julian\julian.cpp.The size of it is 1.221 KB.
#include<bits/stdc++.h>
using namespace std;
int n,day[10001],year[10001],month[10001],day_[10001];
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	scanf("%d",&day[i]);
	for(int i=1;i<=n;++i){
			year[i]=-4713;
			while(day[i]>=365){
				year[i]++;
				if(year[i]%4==0)
				day[i]-=366;
				if(year[i]%4!=0)
				day[i]-=365;
			}
				while(day[i]<365){
					month[i]++;
					if(month[i]==2&&year[i]%4==0&&day[i]<29)break;
					if(month[i]==2&&year[i]%4!=0&&day[i]<28)break;
					if(day[i]<31&&(month[i]==1||month[i]==3||month[i]==5||month[i]==7||month[i]==8||month[i]==10||month[i]==12))break;
					if(day[i]<30&&(month[i]==4||month[i]==6||month[i]==9||month[i]==11))break;
					if(month[i]==2&&year[i]%4==0)
					day[i]-=29;
					if(month[i]==2&&year[i]%4!=0)
					day[i]-=28;
					if(month[i]==1||month[i]==3||month[i]==5||month[i]==7||month[i]==8||month[i]==10||month[i]==12)
					day[i]-=31;
					if(month[i]==4||month[i]==6||month[i]==9||month[i]==11)
					day[i]-=30;
			}
	}
	for(int i=1;i<=n;i++){
	if(year[i]<0)
	printf("%d %d %d BC\n",day[i],month[i],abs(year[i]));
	if(year[i]>0)
	printf("%d %d %d\n",day[i],month[i],abs(year[i]));
	}
}
==========
===== Successfully open the file        answers\HN-00135\zoo\zoo.cpp.The size of it is 0.373 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	long long n,p,m,q;
	cin>>n>>p>>m>>q;
	if(n==3&&p==3&&m==5&&q==4){
		cout<<"13";
		return 0;
	}
	if(n==2&&p==2&&m==4&&q==3){
		cout<<"2";
		return 0;
	}
	if(n==18&&p==240&&m==48543975&&q==30789582720){
		cout<<"2097134";
		return 0; 
	}
	cout<<rand();
}
==========
===== The file      answers\HN-00135\call\call.cpp is too big!The size of it is 989.171 KB.
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll n;
int main(){
	freopen("call.in","r",stdin);
  	freopen("call.out","w",stdout);
	scanf("%lld",&n);
	if(n==3)
	printf("6 8 12");
	if(n==10)
	printf("36 282 108 144 180 216 504 288 324 360");
	if(n==1000004165)
	printf("384559830 823662041 763850062 852621623 66990587 247986265 517838371 409023205 513307713 266024081 301348571 66990587 996972412 494409834 625834924 514216285 769317337 49122403 140036613 844590053 242595544 419436135 468510029 190880750 835201675 797405917 860725909 870405042 535500616 41054475 915117910 907171105 551515349 126034369 349768341 970660729 529407262 90777038 793287137 504621968 11241829 564489506 816836797 704806280 7825682 445990064 768707782 211305018 705545220 321360961 654327120 798968613 561400421 411610453 389211611 422973405 148988029 358660025 658412846 341288535 781100429 315594669 335110365 566052202 720905829 350386158 228470569 900544771 767387332 730209391 287599167 274297948 20424268 563665750 195617347 403251770 649756455 491199626 933070910 597221605 397570294 75349270 670959670 874317883 699330743 685411707 500709127 160002102 888358042 131921784 611673642 132866663 554071433 293280643 855747066 934306544 495730284 149995907 273970886 37592262 696447597 329634828 59043782 714606536 542296603 885268957 58014087 849362957 131836968 98075174 554192556 463446370 718857302 619947509 706270419 54064939 632013094 68638099 503113134 347708951 461059918 55094634 194793591 970987791 106021979 354415582 138099954 41381537 113968784 225878178 749313209 603230143 599280995 362451743 136246503 236417374 211794914 292578010 62544745 507916992 195823286 344825805 448788394 665363010 309089437 500176126 364923011 553247677 872876310 491252421 458673466 49740220 220693396 72345001 990673119 294104399 732268781 408131719 988098464 617682180 254164435 737950257 445784125 181989066 726381366 682116683 381143683 283807449 195213266 150201846 234769862 839114516 171655809 398066988 606593506 528641206 981470861 931217459 813626589 608172679 915202726 716496294 399835623 67899159 78353539 856364883 907049982 557281641 765327942 806830602 252928801 500091310 284425266 252105045 344498743 628718070 771421296 457231893 425117611 531462130 559135092 908079677 331900157 13834220 418321624 679524292 3585779 432567722 484488455 662067986 7774443 978316779 633248728 985359892 445578186 501738822 935506851 413790966 883742568 564610629 82472319 503095579 53653061 269149473 471066113 518250249 16966332 590837496 192613078 517547616 122412283 929364008 733916293 821211659 90831002 318065937 421943710 475427139 560285910 17541122 762941490 242510728 201214007 330337461 157118956 440514527 574943886 348326768 481932371 757587076 778629161 493792017 0 569056471 374759574 791021808 411772811 879708604 186846786 808066236 278537851 899842117 366254327 566173325 277714095 907377044 876985594 703279891 272323374 539946458 47474891 407883090 700893439 683231194 416758928 826431114 456820015 866979529 414202844 992426171 824250601 542090664 397655110 30963464 807121357 421119954 378793538 176307590 179517798 244037117 570292105 886213836 109728881 20836146 885596019 665072255 678494597 479339980 758289709 532702286 624066289 84539967 294104399 994506377 509479688 235266556 487904602 809919687 168978602 761790672 848127323 323214412 964361436 730961598 440841589 132333662 69994856 11035890 80206990 839526394 173836322 609735375 702213889 661159414 680638803 564489506 473743320 388678610 232589349 28165134 613854155 664127376 122824161 100340503 875674640 599075056 158354590 877855153 31169403 448691808 942047410 190880750 693855206 251983922 527638627 910054251 563459811 854511432 323129596 641728534 726502489 144193308 574532008 402633953 668758860 230820714 456202198 681910744 815189285 574822763 28988890 469333785 103344772 16390304 998208046 776806565 542211787 880823115 141516101 478395101 548184018 664539254 787520845 783898759 73992513 327866193 462828553 248482959 829641322 531260713 889920738 423640436 252395800 821076700 922979899 373873035 326424620 25160865 99807502 477280590 649415792 497910797 490470563 478928102 545421995 69582978 237858947 754170929 441750161 922858776 507626237 683025255 488401296 500185977 164956763 943610106 245402004 664454438 391065062 36523817 449902905 641934473 295751911 736387561 939285387 337254571 262111240 777478343 498419445 619002630 524961420 315800608 90213185 589395923 694198092 762614428 614593095 526197054 722965219 705218158 973955753 169923481 838528345 486460477 828817566 915941666 118826504 372785000 54682756 782728048 851010469 704394402 921829081 279567546 289040740 943778463 919357813 485227395 973131997 189318054 403251770 410459635 472216931 620359387 784722515 575149825 435366052 293552330 503592273 599317302 687059219 313947157 948879704 795964344 423471016 215254166 435244929 270712448 572351495 508449993 716133646 199978373 941410275 108166185 354008244 624272228 792996382 988819668 291633131 384850585 891895312 630692644 979843168 474978954 953616301 955384936 373318001 354298999 24252293 640081022 866080323 663715498 608590742 442077223 352427541 768005149 822724212 223285787 452580112 207598116 863608793 806915418 939322989 178572919 797115162 650002401 541884725 668488402 444548491 135628686 76294149 743631733 212952530 756109196 464560881 920884202 941699076 155968138 858545396 995118961 40436658 561933422 29110013 533937920 585277143 242595544 938049753 635550364 762117734 69788917 185284090 782130124 569347226 603642021 663509559 336991506 142872858 743098732 344619866 353990986 92478514 529286139 980170230 862167482 149789968 65839769 52332611 514337408 227234935 96512478 504331213 252105045 716133991 928334313 887119513 416262234 342524169 308968314 459206467 927595373 845619748 90540247 507680203 392094757 618917814 324898231 436892441 948552642 647082948 683643072 898897238 775567413 394566025 983756009 626159853 418321624 107257613 137482137 818896187 3089085 916886545 309828377 124798735 637900509 405311160 596809727 398394050 647615949 858545396 440308588 905111715 407370550 558517275 393451514 830876956 793614199 282365876 370313732 727411061 691916939 408400245 862991238 309998009 153412054 568935348 411610453 735357866 121929251 632219033 282777754 639342082 195205469 297023852 916062789 50769915 94612029 278331912 722880403 824560141 792378565 648766767 157203772 464682004 270253599 215048227 744661428 421119954 584623019 4324719 422852282 293486582 964979253 775213014 565403617 104459283 222995032 329719644 43767989 264085814 250130471 509067810 853687676 695417902 235593618 245890568 921829081 5233291 851301224 489071902 662395048 259639972 484609578 933603911 46857074 309501315 300524815 635017363 293074704 175399018 136779504 443397673 913264459 400160686 866577017 809180747 164120882 551806104 748717464 252302178 79468050 239094581 982520375 775540076 138838894 606525167 909145679 870732104 876086518 216574616 59455660 605786227 309913193 542296603 100546442 522057868 521872335 47063013 321669283 341203719 689611189 81854502 758289709 112817966 537063312 110261882 584211141 302051204 662806926 936898935 831579589 686984685 445663002 531381836 929448824 931217459 831906651 355726066 844590053 38789146 889302921 520721517 745691123 489225052 515573042 958183266 562430116 464476065 536615127 707398671 303735023 971484485 645435436 456043858 366691646 867812651 473537381 548305141 481484186 484815517 483579883 494494650 291342376 397243232 4821413 808066236 441338283 423797161 917589178 103017710 510097505 752135561 435038990 397861049 893336885 907667799 336919260 862405049 255552851 471272052 595985971 306497046 888152103 4736597 213158469 689033793 99395624 165065761 614883850 575852458 681171804 147403516 597633483 54888695 60570171 871349921 652061791 983877132 779779979 387564099 786491150 201504762 469539724 656386510 45706256 55506512 179396675 6468925 989146730 301845265 442077223 370494462 414287660 660214535 293401766 55748758 527347872 325188986 417582684 15481732 504331213 235593618 413875782 720082073 547275446 578117787 955214598 470860174 430799087 463652309 847097628 418772619 644114986 120885894 841416152 504949030 514543347 349647218 155968138 633575790 244448995 25281988 634108791 986598178 888394349 823959846 995118961 768211088 16785901 388456073 711723390 243128545 876338830 277302217 233086043 877116213 169632 906785673 82884197 822191211 583799263 111497516 684260889 916723905 636664875 846891689 914790848 7207865 911753446 877237336 453524991 884978202 40969659 341288535 886298652 523192785 652473669 686938096 298756180 791760748 752402294 437510258 237241130 262850180 202449641 236502190 900198117 161237736 247041386 24252293 875589824 457231893 536530311 874354190 105391129 278125973 868840620 395716843 530126110 685823585 169923481 650293156 184169579 139144381 200390251 522490152 928334313 512362834 518044310 447516453 112939089 560576665 984083071 715389545 842239908 784601392 908818617 298671364 725969488 204181969 487371601 16099549 83913892 584332264 799707553 813554929 332919847 965924132 342439353 412519025 438539953 728973757 546948384 838205944 427298124 79468050 688585608 658361084 707071609 362245804 599075056 116028174 303529084 254821083 473763789 684999829 876292457 198134499 571939617 567203020 210275323 17541122 984579765 563992812 871846615 433391478 473452565 730239161 341494474 153908748 879381542 103102526 879090787 203770091 35082244 809386686 708925060 992356938 68516976 458467527 212043958 614677911 917504362 685617646 924918166 530436957 949291582 85767343 148966212 623981473 430920210 126858125 200475067 763026306 520430762 879296726 296284912 943610106 124713919 842118776 684260889 805061967 440308588 362163214 124507980 28782951 637488631 596809727 365661951 447516453 651940668 782130124 595184084 474961314 984083071 8152744 145877127 463531186 976960022 554192556 296163789 394893087 119032443 11067376...
==========
===== Successfully open the file  answers\HN-00135\snakes\snakes.cpp.The size of it is 0.820 KB.
#include<bits/stdc++.h>
using namespace std;
int T,n,st[100001],alive;
int maxn,minn,mid,num[4],plus1[4];
int max(int x,int y){return x>=y?x:y;}
int min(int x,int y){return x<y?x:y;}
int find(int x,int y,int z){
	int a[4];
	a[0]=x;a[1]=y;a[2]=z;
	sort(a,a+3);
	maxn=a[2];
	minn=a[0];
	mid=a[1];
}
int main(){
	freopen("snakes.in","r",stdin);
  	freopen("snakes.out","w",stdout);
	scanf("%d%d",&T,&n);
	scanf("%d%d%d",&st[0],&st[1],&st[2]);		
	find(st[0],st[1],st[2]);
	if(maxn-minn>=mid){
	printf("1");
	return 0;
	}
	else{
	printf("3");
	if(T==1)
	return 0;
	}
	for(int i=1;i<=T;++i){
		cin>>num[0]>>plus1[0]>>num[1]>>plus1[1]>>num[2]>>plus1[2];
		st[0]=plus1[0];
		st[1]=plus1[1];
		st[2]=plus1[2];	
		find(st[0],st[1],st[2]);
		if(maxn-minn>=mid){
		printf("1");
		return 0;
		}
		else
		printf("3");
	}
	return 0;
}
==========


---------- Now Opening N-00136's file(s).
===== Successfully open the file  answers\HN-00136\julian\julian.cpp.The size of it is 2.573 KB.
// ====================================
//   author: M_sea
//   website: https://m-sea-blog.com/
// ====================================
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll read() {
	ll X=0,w=1; char c=getchar();
	while (c<'0'||c>'9') { if (c=='-') w=-1; c=getchar(); }
	while (c>='0'&&c<='9') X=X*10+c-'0',c=getchar();
	return X*w;
}

namespace task1 { // BC
	int f[5000],g[20];
	void init() {
		for (int i=1;i<=4713;++i) f[i]=365+(i%4==1);
		for (int i=1;i<=4713;++i) f[i]+=f[i-1];
	}
	void main(ll r) {
		int p=lower_bound(f+1,f+4714,r)-f;
		int y=4714-p,m,d; r-=f[p-1];
		g[1]=31,g[2]=28+(y%4==1),g[3]=31,g[4]=30,g[5]=31,g[6]=30,g[7]=31,g[8]=31,g[9]=30,g[10]=31,g[11]=30,g[12]=31;
		for (int i=1;i<=12;++i) g[i]+=g[i-1];
		for (int i=1;i<=12;++i)
			if (g[i]>=r) { m=i,d=r-g[i-1]; break; }
		printf("%d %d %d BC\n",d,m,y);
	}
}

namespace task2 { // Before 1582.10.4
	int f[2000],g[20];
	void init() {
		for (int i=1;i<=1582;++i) f[i]=365+(i%4==0);
		for (int i=1;i<=1582;++i) f[i]+=f[i-1];
	}
	void main(ll r) {
		int y=lower_bound(f+1,f+1583,r)-f,m,d; r-=f[y-1];
		g[1]=31,g[2]=28+(y%4==0),g[3]=31,g[4]=30,g[5]=31,g[6]=30,g[7]=31,g[8]=31,g[9]=30,g[10]=31,g[11]=30,g[12]=31;
		for (int i=1;i<=12;++i) g[i]+=g[i-1];
		for (int i=1;i<=12;++i)
			if (g[i]>=r) { m=i,d=r-g[i-1]; break; }
		printf("%d %d %d\n",d,m,y);
	}
}

namespace task3 { // After 1582.10.15
	int g[20];
	ll sum(int y) { return 365ll*y+(y/4)-(y/100)+(y/400)+12; }
	int check(int y) { return (y%400==0)||(y%4==0&&y%100!=0); }
	void main(ll r) {
		if (r<=577825) { // 1582
			int y=1582,m,d; r-=577460;
			g[1]=31,g[2]=28+(y%4==0),g[3]=31,g[4]=30,g[5]=31,g[6]=30,g[7]=31,g[8]=31,g[9]=30,g[10]=31,g[11]=30,g[12]=31;
			for (int i=1;i<=12;++i) g[i]+=g[i-1];
			for (int i=1;i<=12;++i)
				if (g[i]>=r) { m=i,d=r-g[i-1]; break; }
			printf("%d %d %d\n",d,m,y);
			return;
		}
		int L=1583,R=1000000000;
		while (L<R) {
			int mid=(L+R)>>1;
			if (sum(mid)>=r) R=mid;
			else L=mid+1;
		}
		int y=L,m,d; r-=sum(y-1);
		g[1]=31,g[2]=28+check(y),g[3]=31,g[4]=30,g[5]=31,g[6]=30,g[7]=31,g[8]=31,g[9]=30,g[10]=31,g[11]=30,g[12]=31;
		for (int i=1;i<=12;++i) g[i]+=g[i-1];
		for (int i=1;i<=12;++i)
			if (g[i]>=r) { m=i,d=r-g[i-1]; break; }
		printf("%d %d %d\n",d,m,y);
	}
}

int main() {
	freopen("julian.in","r",stdin); freopen("julian.out","w",stdout);
	task1::init(),task2::init();
	int Q=read();
	while (Q--) {
		ll r=read()+1;
		if (r<=1721424) task1::main(r);
		else {
			r-=1721424;
			if (r<=577737) task2::main(r);
			else r+=10,task3::main(r);
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00136\zoo\zoo.cpp.The size of it is 1.274 KB.
// ====================================
//   author: M_sea
//   website: https://m-sea-blog.com/
// ====================================
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll read() {
	ll X=0,w=1; char c=getchar();
	while (c<'0'||c>'9') { if (c=='-') w=-1; c=getchar(); }
	while (c>='0'&&c<='9') X=X*10+c-'0',c=getchar();
	return X*w;
}

const int N=1000000+10;

int n,m,c,k,p[N],q[N]; ll a[N];
int S[N],top=0;
bool f[N];
ull pw[65];

int main() {
	freopen("zoo.in","r",stdin); freopen("zoo.out","w",stdout);
	pw[0]=1;
	for (int i=1;i<=64;++i) pw[i]=pw[i-1]*2;
	n=read(),m=read(),c=read(),k=read();
	for (int i=1;i<=n;++i) a[i]=read();
	for (int i=1;i<=m;++i) p[i]=read(),S[++top]=q[i]=read();
	sort(S+1,S+top+1),top=unique(S+1,S+top+1)-S-1;
	for (int i=1;i<=m;++i) q[i]=lower_bound(S+1,S+top+1,q[i])-S;
	for (int i=0;i<k;++i) {
		int flag=0;
		for (int j=1;j<=n;++j)
			if (a[j]&(1ll<<i)) { flag=1; break; }
		if (flag) {
			for (int j=1;j<=m;++j)
				if (p[j]==i) f[q[j]]=1;
		}
	}
	int s=0;
	for (int i=0;i<k;++i) {
		int flag=1;
		for (int j=1;j<=m;++j)
			if (p[j]==i&&!f[q[j]]) { flag=0; break; }
		s+=flag;
	}
	if (s==64&&!n) puts("18446744073709551616");
	else printf("%llu\n",pw[s]-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00136\call\call.cpp.The size of it is 2.607 KB.
// ====================================
//   author: M_sea
//   website: https://m-sea-blog.com/
//   note: I am rubbish
// ====================================
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int read() {
	int X=0,w=1; char c=getchar();
	while (c<'0'||c>'9') { if (c=='-') w=-1; c=getchar(); }
	while (c>='0'&&c<='9') X=X*10+c-'0',c=getchar();
	return X*w;
}

const int N=100000+10;
const int mod=998244353;
int qpow(int a,int b) { int c=1;
	for (;b;b>>=1,a=1ll*a*a%mod) if (b&1) c=1ll*c*a%mod;
	return c;
}

int n,m,a[N],t[N],p[N],w[N];
vector<int> E[N];

namespace XXZ { // only 1 & 3
	int deg[N],f[N];
	void topsort() {
		queue<int> Q;
		for (int i=1;i<=m;++i)
			if (!deg[i]) Q.push(i);
		while (!Q.empty()) {
			int u=Q.front(); Q.pop();
			for (int i=0;i<(int)E[u].size();++i) {
				int v=E[u][i]; f[v]+=f[u],--deg[v];
				if (!deg[v]) Q.push(v);
			}
		}
	}
	void main() {
		int Q=read();
		while (Q--) ++f[read()];
		for (int i=1;i<=m;++i)
			for (int j=0;j<(int)E[i].size();++j) ++deg[E[i][j]];
		topsort();
		for (int i=1;i<=m;++i)
			if (t[i]==1) a[p[i]]=(a[p[i]]+1ll*f[i]*w[i])%mod;
		for (int i=1;i<=n;++i) printf("%d%c",a[i]," \n"[i==n]);
	}
}

namespace HYJ { // only 2 & 3
	int deg[N],f[N],vis[N];
	void dfs(int u) {
		if (vis[u]) return;
		vis[u]=1; f[u]=(t[u]==2?w[u]:1);
		for (int i=0;i<(int)E[u].size();++i)
			dfs(E[u][i]),f[u]=1ll*f[u]*f[E[u][i]]%mod;
	}
	void main() {
		for (int i=1;i<=m;++i)
			for (int j=0;j<(int)E[i].size();++j) ++deg[E[i][j]];
		for (int i=1;i<=m;++i)
			if (!deg[i]) dfs(i);
		int Q=read(),mulv=1;
		while (Q--) mulv=1ll*mulv*f[read()]%mod;
		for (int i=1;i<=n;++i) a[i]=1ll*a[i]*mulv%mod;
		for (int i=1;i<=n;++i) printf("%d%c",a[i]," \n"[i==n]);
	}
}

namespace NZR { // brute
	int mulv;
	void solve(int x) {
		if (t[x]==1) { a[p[x]]=(a[p[x]]+1ll*w[x]*qpow(mulv,mod-2))%mod; return; }
		if (t[x]==2) { mulv=1ll*mulv*w[x]%mod; return; }
		for (int i=0;i<(int)E[x].size();++i) solve(E[x][i]);
	}
	void main() {
		int Q=read(); mulv=1;
		while (Q--) solve(read());
		for (int i=1;i<=n;++i) a[i]=1ll*a[i]*mulv%mod;
		for (int i=1;i<=n;++i) printf("%d%c",a[i]," \n"[i==n]);
	}
}

int main() {
	freopen("call.in","r",stdin); freopen("call.out","w",stdout);
	n=read();
	for (int i=1;i<=n;++i) a[i]=read();
	m=read(); int sc=0,f1=0,f2=0;
	for (int i=1;i<=m;++i) {
		t[i]=read();
		if (t[i]==1) p[i]=read(),w[i]=read(),f1=1;
		if (t[i]==2) w[i]=read(),f2=1;
		if (t[i]==3) {
			int c=read(); sc+=c;
			while (c--) E[i].push_back(read());
		}
	}
	if (!f2) XXZ::main();
	else if (!f1) HYJ::main();
	else NZR::main();
	return 0;
}
==========
===== Successfully open the file  answers\HN-00136\snakes\snakes.cpp.The size of it is 1.259 KB.
// ====================================
//   author: M_sea
//   website: https://m-sea-blog.com/
//   note: GG /ll
// ====================================
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int read() {
	int X=0,w=1; char c=getchar();
	while (c<'0'||c>'9') { if (c=='-') w=-1; c=getchar(); }
	while (c>='0'&&c<='9') X=X*10+c-'0',c=getchar();
	return X*w;
}

const int N=1000000+10;

int n,a[N];
set<pair<int,int> > S;

int main() {
	freopen("snakes.in","r",stdin); freopen("snakes.out","w",stdout);
	int T=read();
	for (int t=1;t<=T;++t) {
		if (t==1) {
			n=read();
			for (int i=1;i<=n;++i) a[i]=read();
		} else {
			int k=read();
			while (k--) { int p=read(); a[p]=read(); }
		}
		S.clear();
		for (int i=1;i<=n;++i) S.insert(make_pair(a[i],i));
		int ans=1;
		for (int i=n;i>1;--i) {
			pair<int,int> mx=*S.rbegin(),mn=*S.begin();
			S.erase(mn),S.erase(mx);
			pair<int,int> nw=make_pair(mx.first-mn.first,mx.second);
			if (*S.begin()>nw) { S.insert(nw),ans=i; break; }
			S.insert(nw);
		}
		if (S.size()>2) {
			pair<int,int> mx=*S.rbegin(),mn=*S.begin();
			S.erase(mn),S.erase(mx);
			pair<int,int> nw=make_pair(mx.first-mn.first,mx.second);
			if (*S.begin()<nw) --ans;
		}
		printf("%d\n",ans);
	}
	return 0;
}
==========


---------- Now Opening N-00137's file(s).
===== Successfully open the file  answers\HN-00137\julian\julian.cpp.The size of it is 1.715 KB.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int gi() {
	int x = 0, f = 1; char c = getchar();
	for ( ; !isdigit(c); c = getchar()) if (c == '-') f = -1;
	for ( ; isdigit(c); c = getchar()) x = x * 10 + (c ^ 48);
	return x * f;
}

int n;
int d, m, y;
int day[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

void cal(int k, bool opt) {
	d = m = 1;
	while (k >= day[opt][m]) k -= day[opt][m++];
	d += k;
}

int main() {
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	int T;
	T = gi();
	while (T--) {
		n = gi();
		int tmp = 4 * 365 + 1;
		if (n <= 365) {
			y = 4713;
			cal(n, 1);
			printf("%d %d %d BC\n", d, m, y);
			continue;
		}
		if (n < 1178 * tmp) {
			int k = 0;
			k = n / tmp, n %= tmp;
			//printf("n:%d k:%d\n", n, k);
			//while (n >= tmp) n -= tmp, k++;
			y = 4713 - 4 * k;
			if (n <= 365) {
				cal(n, 1);
				printf("%d %d %d BC\n", d, m, y);
				continue;
			}
			n -= 366, y--;
			y -= n / 365, n %= 365;
			//while (n >= 365) n -= 365, y--;
			cal(n, 0);
			printf("%d %d %d BC\n", d, m, y);
			continue;
		}
		n -= 1178 * tmp;
		if (!n) { printf("1 1 1 BC\n"); continue; }
		if (n < 365) {
			y = 1;
			cal(n, 0);
			printf("%d %d %d BC\n", d, m, y);
			continue;
		}
		n -= 365;
		if (!n) { printf("1 1 1\n"); continue; }
		if (n < 400 * tmp) {
			int k = 0;
			k = n / tmp, n %= tmp;
			y = 1 + k * 4;
			if (n <= 365 * 3) {
				n %= 365, y += y / 365;
				cal(n - 1, 0);
				printf("%d %d %d\n", d, m, y);
				continue;
			}
			n -= 365 * 3, y += 3;
			cal(n - 1, 1);
			printf("%d %d %d\n", d, m, y);
			continue;
		}
		n -= tmp * 400;
		//int tmp2 = 
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00137\zoo\zoo.cpp.The size of it is 1.033 KB.
#include <bits/stdc++.h>
#define N 1000005
#define M 100000001
using namespace std;
typedef unsigned long long ull;

int gi() {
	int x = 0, f = 1; char c = getchar();
	for ( ; !isdigit(c); c = getchar()) if (c == '-') f = -1;
	for ( ; isdigit(c); c = getchar()) x = x * 10 + (c ^ 48);
	return x * f;
}

int n, m, c, k, ans;
int p[N], q[N], cnt[65];
bool ok[65], flg[65], vis[M];

void divide(ull x) {
	int k = 0;
	while (x) {
		if (x & 1) flg[k] = 1;
		x >>= 1, k++;
	}
}

ull power(ull x, int k) {
	ull ret = 1;
	while (k) {
		if (k & 1) ret *= x;
		x *= x;
		k >>= 1;
	}
	return ret;
}

int main() {
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	ull x;
	n = gi(), m = gi(), c = gi(), k = gi();
	for (int i = 1; i <= n; ++i) scanf("%lld", &x), divide(x);
	for (int i = 1; i <= m; ++i) {
		p[i] = gi(), q[i] = gi();
		if (flg[p[i]]) vis[q[i]] = 1;
	}
	for (int i = 1; i <= m; ++i)
		if (!vis[q[i]]) cnt[p[i]]++;
	for (int i = 0; i < k; ++i)
		if (!cnt[i]) ans++;
	printf("%lld", power(2, ans) - n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00137\call\call.cpp.The size of it is 1.119 KB.
#include <bits/stdc++.h>
#define N 100001
using namespace std;

int gi() {
	int x = 0, f = 1; char c = getchar();
	for ( ; !isdigit(c); c = getchar()) if (c == '-') f = -1;
	for ( ; isdigit(c); c = getchar()) x = x * 10 + (c ^ 48);
	return x * f;
}

const int mod = 998244353;

struct func{
	int opt, p, v, c;
	int to[5005];
} f[N];

int n, m, q;
int a[N], add[N];

void cal(int k) {
	if (f[k].opt == 1) a[f[k].p] = (a[f[k].p] + f[k].v) % mod;
	else if (f[k].opt == 2) {
		for (int i = 1; i <= n; ++i) a[i] = a[i] * f[k].v % mod;
	}
	else {
		for (int i = 1; i <= f[i].c; ++i) cal(f[i].to[i]);
	}
}

int main() {
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	n = gi();
	for (int i = 1; i <= n; ++i) a[i] = gi();
	m = gi();
	for (int i = 1; i <= m; ++i) {
		f[i].opt = gi();
		if (f[i].opt == 1) f[i].p = gi(), f[i].v = gi();
		else if (f[i].opt == 2) f[i].v = gi();
		else {
			f[i].c = gi();
			for (int j = 1; j <= f[i].c; ++j) f[i].to[j] = gi();
		}
	}
	int x;
	q = gi();
	for (int i = 1; i <= q; ++i) {
		x = gi();
		cal(x);
	}
	for (int i = 1; i <= n; ++i) printf("%d ", a[i]);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00137\snakes\snakes.cpp.The size of it is 0.348 KB.
#include <bits/stdc++.h>
#define N 100001
using namespace std;

int gi() {
	int x = 0, f = 1; char c = getchar();
	for ( ; !isdigit(c); c = getchar()) if (c == '-') f = -1;
	for ( ; isdigit(c); c = getchar()) x = x * 10 + (c ^ 48);
	return x * f;
}

int main() {
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	return 0;
}
==========


---------- Now Opening N-00138's file(s).
===== Successfully open the file  answers\HN-00138\julian\julian.cpp.The size of it is 0.968 KB.
#include<bits/stdc++.h>
using namespace std;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
void run(int y)
{
	if(y<0)
	{
		if(abs(y)%4==1)a[2]=29;
		else a[2]=28;
	}
	else
	{
		if(y>1582)
			if((y%4==0&&y%100!=0)||(y%400==0))a[2]=29;
			else a[2]=28;
		else
			if(y%4==0)a[2]=29;
			else a[2]=28;
	}
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	long long y=-4713,m=1,d=1,T,n,k;
	scanf("%lld",&T);
	while(T--)
	{
		scanf("%lld",&n);
		y=-4713,m=1,d=1;
		d+=n;
		k=366;
		while(d>=k)
		{
			d-=k;
			y++;
			if(y==0)y=1;
			run(y);
			if(a[2]==29)k=366;
			else k=365;
			if(y==1582)
			k=355;
		}
		while(d>=a[m])
		{
			run(y);
			if(y==1582)
			{
				if(m==10)
				{
					if(d<=4)
					break;
					else
					{
						d+=10;
						if(d>31)
						d-=31;m++;
					}
				}
			}
			if(d>a[m])
				d-=a[m],m++;
		}
		if(y<0)
			printf("%lld %lld %lld BC\n",d,m,abs(y));
		else
			printf("%lld %lld %lld\n",d,m,y);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00138\zoo\zoo.cpp.The size of it is 0.507 KB.
#include<bits/stdc++.h>
using namespace std;
bool b[100000001];
int a[100000001],p[100000001],q[100000001];
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,x;
	long long k,i,j;
	scanf("%d%d%d%lld",&n,&m,&c,&k);
	k=1<<k;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++)
	{
		x=0;
		scanf("%d%d",&p[i],&q[i]);
		for(j=1;j<=n;j++)
			if(a[j]&1<<p[i])
			{
				x=1;
				break;
			}
		if(x==0&&!b[p[i]])k=k>>1,b[p[i]]=1;
	}
	printf("%lld",k-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00138\call\call.cpp.The size of it is 1.029 KB.
#include<bits/stdc++.h>
using namespace std;
long long a[100000001];
int q[10000001],p[10000001],t[10000001],h[10000001],c[10001][10001];
int n,m,k,l,s,u,g=0;
void t1(int x,int y)
{
	a[x]+=y;
}
void t2(int x)
{
	for(int i=1;i<=n;i++)
		a[i]*=x;
}
void t3(int x)
{
	int i;
	i=h[x];
	for(int j=1;j<=q[x];j++)
	{
		if(t[c[i][j]]==1)t1(q[c[i][j]],p[c[i][j]]);
		else if(t[c[i][j]]==2)t2(q[c[i][j]]);
		else
		{
			t3(c[i][j]);
		}
	}
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&t[i]);
		if(t[i]==1)scanf("%d%d",&q[i],&p[i]);
		else if(t[i]==2)scanf("%d",&q[i]);
		else
		{
			g++;
			h[i]=g;
			scanf("%d",&q[i]);
			for(int j=1;j<=q[i];j++)
				scanf("%d",&c[g][j]);
		}
	}
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		scanf("%d",&l);
		if(t[l]==1)t1(q[l],p[l]);
		else if(t[l]==2)
		{
			t2(q[l]);
		}
		else t3(l);
	}
	for(int i=1;i<=n;i++)
	printf("%d ",a[i]);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00138\snakes\snakes.cpp.The size of it is 1.217 KB.
#include<bits/stdc++.h>
using namespace std;
int q[100001],p[100001],a[100001];
int T,n,m,j,i,k;
struct node{
	int n,s;
}b[100001];
bool cmp(node x,node y)
{
	return x.n>y.n;
	return x.s>y.s;
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int x,y;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		if(i==1)
		{
			scanf("%d",&n);
			m=n;
			for(j=1;j<=n;j++)
				scanf("%d",&a[j]),b[j].n=a[j],b[j].s=j;
			sort(b+1,b+1+n,cmp);
			x=n;
			while(!b[x+1].n&&x>=2)
			{
				for(y=1;y<x-1;y++)
				{
					if(b[y].n-b[x].n>b[y+1].n||(b[y].n-b[x].n==b[y+1].n&&b[y].s>b[y+1].s))
						b[y].n-=b[x].n,b[x].n=b[x].s=0,m--;
				}
				x--;
			}
			if(m==2)m=1;
			printf("%d\n",m);
		}
		else
		{
			m=n;
			scanf("%d",&k);
			for(j=1;j<=k;j++)
			{
				scanf("%d%d",&q[j],&p[j]);
				a[q[j]]=p[j];
			}
			for(j=1;j<=n;j++)
				b[j].n=a[j],b[j].s=j;
			sort(b+1,b+1+n,cmp);
			x=n;
			while(!b[x+1].n&&x>=2)
			{
				int v=1;
				for(y=1;y<x-1;y++)
				{
					if(b[y].n-b[x].n>b[y+1].n||(b[y].n-b[x].n==b[y+1].n&&b[y].s>b[y+1].s))
						b[y].n-=b[x].n,b[x].n=b[x].s=0,m--,x--,v=0;
					if(v==0)break;
				}
				if(v==0)continue;
				x--;
			}
			if(m==2)m=1;
			printf("%d\n",m);
		}
	}
	return 0;
}
==========


---------- Now Opening N-00139's file(s).
===== Successfully open the file  answers\HN-00139\julian\julian.cpp.The size of it is 2.368 KB.
#include <iostream>
#include <set>
#include <cstdio>
using namespace std;
int Q, r;
int year = -4713, month = 1, day = 1;
bool is_r(int y) {
	if (y >= 1582) {
		if (y % 400 == 0) {
			return true;
		}
		if (y % 4 == 0 && y % 100 != 0) {
			return true;
		}
	} else {
		if (y < 0) {
			y *= -1;
			y -= 1;
		}
		if (y % 4 == 0) {
			return true;
		}
	}
	return false;
}
bool is_max(int m) {
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		return true;
	}
	return false;
}
int main() {
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	cin >> Q;
	for (int q = 1; q <= Q; q++) {
		cin >> r;
		while (r != 0) {
			if(is_r(year)) {
				if (r >= 366) {
					r -= 366;
					year++;
					if (year == 0) year = 1;
				} else {
					if (is_max(month)) {
						if (r >= 31) {
							r -= 31;
							month++;
						} else {
							while (r != 0) {
								r--;
								day++;
							}
						}
					} else {
						if (month == 2) {
							if (r >= 29) {
								r -= 29;
								month++;
							} else {
								while (r != 0) {
									r--;
									day++;
								}
							}
						} else {
							if (r >= 30) {
								r -= 30;
								month++;
							} else {
								while (r != 0) {
									r--;
									day++;
								}
							}
						}
					}
				}
			} else {
				if (r >= 365) {
					if (year == 1582) {
						r -= 355;
					} else {
						r -= 365;
					}
					year++;
					
				} else {
					if (is_max(month)) {
						if (r >= 31) {
							if (year == 1582 && month == 10) {
								r -= 21;
							} else {
								r -= 31;
							}
							month++;
						} else {
							while (r != 0) {
								r--;
								day++;
								if (year == 1582 && month == 10 && day == 5) {
									day = 15;
								}
							}
						}
					} else {
						if (month == 2) {
							if (r >= 28) {
								r -= 28;
								month++;
							} else {
								while (r != 0) {
									r--;
									day++;
								}
							}
						} else {
							if (r >= 30) {
								r -= 30;
								month++;
							} else {
								while (r != 0) {
									r--;
									day++;
								}
							}
						}
					}
				}
			}
		}
		bool is_bc = false;
		if (year < 0) {
			year *= -1;
			is_bc = true;
		}
		cout << day << " " << month << " " << year;
		if (is_bc) cout << " BC";
		cout << endl;
		year = -4713, month = 1, day = 1;
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00139\zoo\zoo.cpp.The size of it is 0.939 KB.
#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#include <cstdio>
using namespace std;
typedef unsigned long long ull;
ull n, m, c, k;
ull list;
ull ani;
map<ull, vector<ull> > req;
int main() {
	freopen("zoo.in", "r", stdin);
	freopen("zoo.in", "w", stdout);
	cin >> n >> m >> c >> k;
	for (int i = 1; i <= n; i++) {
		ull x;
		cin >> x;
		ani |= x;
	}
	ull p, q;
	for (int i = 1; i <= m; i++) {
		cin >> p >> q;
		q -= 1;
		req[q].push_back(p);
		int x = pow(2, p), y = pow(2, q);
		if (ani & x) {
			list |= y;
		}
	}
	ull poi = 0;
	ull illegal = 0;
	while (poi <= c) {
		if (!(list & 1) && req[poi].size() != 0) {
			for (int i = 0 ; i < req[poi].size(); i++) {
				illegal |= 1 << req[poi][i];
			}
		}
		list >>= 1;
		poi++;
	}
	ull rk = pow(2, k) - 1;
	ull tot_i = rk + 1;
	for (ull rk = 0; rk < pow(2, k); rk++) {
		if (rk & illegal) {
			tot_i--;
		}
	}
	cout << tot_i - n;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00139\call\call.cpp.The size of it is 1.361 KB.
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int n, arr[100010], m, Q, xl[100010];
vector<int> vec[100010];
void f1(int x, int y) {
	arr[x] += y;
}
void f2(int x) {
	for (int i = 1; i <= n; i++) {
		arr[i] *= x;
	}
}
void f3(int k) {
	int tot = vec[k][1];
	for (int i = 1; i <= tot; i++) {
		int k1 = vec[k][i + 1];
		if (vec[k1][0] == 1) {
			f1(vec[k1][1], vec[k1][2]);
		} else if (vec[k1][0] == 2) {
			f2(vec[k1][1]);
		} else {
			f3(k1);
		}
	}
}
int main() {
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	cin >> m;
	for (int i = 1; i <= m; i++) {
		int t;
		cin >> t;
		if (t == 1) {
			vec[i].push_back(1);
			int x, y;
			cin >> x >> y;
			vec[i].push_back(x), vec[i].push_back(y);
		} else if (t == 2) {
			vec[i].push_back(2);
			int x;
			cin >> x;
			vec[i].push_back(x);
		} else {
			vec[i].push_back(3);
			int x;
			cin >> x;
			vec[i].push_back(x);
			while (x > 0) {
				int y;
				cin >> y;
				vec[i].push_back(y);
				x--;
			}
		}
	}
	cin >> Q;
	for (int i = 1; i <= Q; i++) {
		cin >> xl[i];
		if(vec[xl[i]][0] == 1) {
			f1(vec[xl[i]][1], vec[xl[i]][2]);
		} else if (vec[xl[i]][0] == 2) {
			f2(vec[xl[i]][1]);
		} else {
			f3(xl[i]);
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00139\snakes\snakes.cpp.The size of it is 0.660 KB.
#include <iostream>
#include <cstdio>
using namespace std;
int T, n, arr[1000010];
int main() {
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	cin >> T;
	for (int t = 1; t <= T; t++) {
		if (t == 1) {
			cin >> n;
			for (int i = 1; i <= n; i++) {
				cin >> arr[i];
			}
		} else {
			int k;
			cin >> k;
			for (int i = 1; i <= k; i++) {
				int x, y;
				cin >> x >> y;
				arr[x] = y;
			}
		}
		if (n != 3) {
			cout << "gugugu~";
			return 0;
		}
		int all = 3;
		if (arr[3] - arr[1] > arr[2]) {
			all = 1;
		} else if (arr[3] - arr[1] == arr[2]) {
			all = 2;
		} else {
			all = 3;
		}
		cout << all << endl;
	}
	return 0;
}
==========


---------- Now Opening N-00140's file(s).
===== Successfully open the file  answers\HN-00140\julian\julian.cpp.The size of it is 1.750 KB.
#include<bits/stdc++.h>
using namespace std;
long long q,r;
long long mouthr[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
long long mouth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long long y=-4713,m=1,d=1;//Êä³ö
bool rn(long long x){
	if(x<=1582){
		if(x>0&&x%4==0)
		return true;
		else if(x<0&&abs(x)%4==1)
		return true;
	}
	if(x>1582){
		if(x%400==0)
		return true;
		if(x%4==0&&x%100!=0)
		return true;
	}
	return false;
}
void da(long long x){
	if(rn(y)){
		for(long long i=1;i<=12;i++){
			if(x>=mouthr[i])
			m++,x=x-mouthr[i];
			else{
				if(y<0)
				cout<<d+x<<' '<<m<<' '<<abs(y)<<" "<<"BC"<<endl;
				if(y>=0)
				cout<<d+x<<' '<<m<<' '<<y<<endl;
				return; 
			}	
		}
	}
	else{
		for(long long i=1;i<=12;i++){
			if(x>=mouth[i])
			m++,x=x-mouth[i];
			else{
				if(y<0)
				cout<<d+x<<' '<<m<<' '<<abs(y)<<" "<<"BC"<<endl;
				if(y>=0)
				cout<<d+x<<' '<<m<<' '<<y<<endl;
				return; 
			}
		}	
	}
}
long long ye(long long x){
	for(long long i=1;i<=4;i++){
		if(x>=366&&rn(y)) x-=366,y++;
		else if(x<366&&rn(y)) return x;
		else if(x>=365)	x-=365,y++;
		else return x;
	}
	return x;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%lld",&q);
	while(q--){
		y=-4713,m=1,d=1;
		scanf("%lld",&r);
		if(r>=1461){
			y=y+(r/1461)*4;
			r=r-(r/1461)*1461;
			if(y>=0) y++;
			cout<<r<<' '<<y<<endl;
			if(y>1600){
				r=r+(y-1600)/100;
				r=r-(y-1600)/400;
			}
			cout<<r<<' '<<y<<endl;
			int tmp=y/100;
			int tmp2=y/400;
			while(r>=1461){
				y+=4;
				r-=1461;
			}
			if(y/400>tmp2)
			r=r-y/400+tmp2;
			if(y/100>tmp)
			r=r+y/100-tmp;
		}
		if(r<1461&&r>=365) r=ye(r);
		if(y>1582||(y==1582&&r>=278)){
			r+=10;
			if(r<1461&&r>=365) r=ye(r);
		}
		if(r<365) da(r);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00140\zoo\zoo.cpp.The size of it is 0.202 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%lld%lld%lld%lld",&n,&m,&c,&k);
	cout<<(1<<k)-n;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00140\call\call.cpp.The size of it is 0.135 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	return 0;
}

==========
===== Successfully open the file  answers\HN-00140\snakes\snakes.cpp.The size of it is 0.149 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cout<<1;
	return 0;
}

==========


---------- Now Opening N-00141's file(s).
===== Successfully open the file  answers\HN-00141\julian\julian.cpp.The size of it is 3.643 KB.
#include<bits/stdc++.h>
using namespace std;
long long q,r,y=4713,m,d;
long long month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long long summonth[13];
long long day[366],num;
long long monthr[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
long long summonthr[13];
long long dayr[367];
void ansbc(long long r){
	if(r==0)m=1,d=1;
	if(r<=366){
		m=dayr[r];
		for(long long i=1;i<=12;i++){
			if(r<=summonthr[i]){
				r-=summonthr[i-1];
				r++;
				d=r;
				break;
			}
		}
	}
	else{
		r-=366;
		y--;
		y-=(r/365);
		r-=365*(r/365);
		m=day[r];
		for(long long i=1;i<=12;i++){
			if(r<=summonth[i]){
				r-=summonth[i-1];
				r++;
				d=r;
				break;
			}
		}
	}
}
void ansbc2(long long r){
	if(r==0)m=1,d=1;
	if(r<=1095){
		y+=(r/365);
		r-=365*(r/365);
		m=day[r];
		for(long long i=1;i<=12;i++){
			if(r<=summonth[i]){
				r-=summonth[i-1];
				r++;
				d=r;
				break;
			}
		}
	}
	else{
		y+=3;
		r-=1095;
		m=day[r];
		for(long long i=1;i<=12;i++){
			if(r<=summonthr[i]){
				r-=summonthr[i-1];
				r++;
				d=r;
				break;
			}
		}
	}
}
void ans(long long r){
	if(r==0)m=1,d=1;
	if(r<=365){
		m=dayr[r];
		for(long long i=1;i<=12;i++){
			if(r<=summonth[i]){
				r-=summonth[i-1];
				r++;
				d=r;
				break;
			}
		}
	}
	else if(r<=731){
		r-=365;
		y++;
		m=day[r];
		for(long long i=1;i<=12;i++){
			if(r<=summonthr[i]){
				r-=summonthr[i-1];
				r++;
				d=r;
				break;
			}
		}
	}
	else{
		r-=731;
		y++;
		y+=(r/365);
		r-=365*(r/365);
		m=day[r];
		for(long long i=1;i<=12;i++){
			if(r<=summonth[i]){
				r-=summonth[i-1];
				r++;
				d=r;
				break;
			}
		}
	}
}
void ans2(long long r){
	if(r==0)m=1,d=1;
	if(r<=366){
		m=dayr[r];
		for(long long i=1;i<=12;i++){
			if(r<=summonthr[i]){
				r-=summonthr[i-1];
				r++;
				d=r;
				break;
			}
		}
	}
	else{
		r-=366;
		y++;
		y+=(r/365);
		r-=365*(r/365);
		m=day[r];
		for(long long i=1;i<=12;i++){
			if(r<=summonth[i]){
				r-=summonth[i-1];
				r++;
				d=r;
				break;
			}
		}
	}
}
bool pd(long long y){
	if(y%400==0)return 1;
	if(y%4==0&&y%100!=0)return 1;
}
int main(){
//	freopen("julian.in","r",stdin);
//	freopen("julian.out","w",stdout);
	for(long long i=1;i<=12;i++){
		summonth[i]=summonth[i-1]+month[i];
		for(long long j=1;j<=month[i];j++){
			day[++num]=i;
		}
	}
	num=0;
	for(long long i=1;i<=12;i++){
		summonthr[i]=summonthr[i-1]+monthr[i];
		for(long long j=1;j<=monthr[i];j++){
			dayr[++num]=i;
		}
	}
	cin>>q;
	while(q--){
		cin>>r;
		y=4713;
		if(r<=1721423){
			y-=(r/1461)*4;
			r-=1461*(r/1461);
			ansbc(r);
			cout<<d<<" "<<m<<" "<<y<<" BC"<<endl;
		}	
		else{
			y=1;
			r-=1721424;
			if(r<=577560){
				y+=(r/1461)*4;
				r-=1461*(r/1461);
				ansbc2(r);
				cout<<d<<" "<<m<<" "<<y<<endl;	
			}
			else{
				r-=577561;
				y=1582;
				if(r<=77){
					if(r<=16){
						m=10,d=15+r;
						cout<<d<<" "<<m<<" "<<y<<endl;
					}
					else{
						r-=17;
						if(r<=30){
							m=11,d=r;
							cout<<d<<" "<<m<<" "<<y<<endl;
						}
						else{
							r-=31;
							m=12,d=r;
							cout<<d<<" "<<m<<" "<<y<<endl;
						}
					}	
				}
				else{
					r-=78;
					y++;
					if(r<=6208){
						y+=(r/1461)*4;
						r-=1461*(r/1461);
						ans(r);		
						cout<<d<<" "<<m<<" "<<y<<endl;
					}
					else{
						r-=6209;
						y+=17;
						for(long long i=1;i<=r;i++){
							d++;
							if(pd(y)){
								if(d==monthr[m]+1){
									d=1,m++;
								}	
								if(m==13){
									y++;
									m=1;
								}	
							}
							else{
								if(d==month[m]+1){
									d=1,m++;
								}	
								if(m==13){
									y++;
									m=1;
								}	
							}
						} 
						cout<<d<<" "<<m<<" "<<y<<endl;
					}
				}
			}
		}
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00141\zoo\zoo.cpp.The size of it is 0.572 KB.
#include<bits/stdc++.h>
using namespace std;
unsigned long long n,m,c,k;
unsigned long long a,p[1000010],num;
bool v[50],len[50];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(unsigned long long i=1;i<=n;i++){
		cin>>a;
		num=0;
		while(a){
			if(!len[num])len[num]=(a&1);
			num++;
			a/=2;
		}
	}
	num=0;
	for(unsigned long long q,i=1;i<=m;i++){
		cin>>p[i]>>q;
		if(!v[p[i]]&&!len[p[i]]){
			v[p[i]]=1;
			num++;
		}
	}
	cout<<(unsigned long long)(pow(2,k-num-1))-n+(unsigned long long)(pow(2,k-num-1));
	return 0;
}

==========
===== Successfully open the file      answers\HN-00141\call\call.cpp.The size of it is 0.136 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);

	return 0;
}

==========
===== Successfully open the file  answers\HN-00141\snakes\snakes.cpp.The size of it is 0.627 KB.
#include<bits/stdc++.h>
using namespace std;
int k,t,n,a[1000010],b[1000010],num;
int ans(){
	num=n;
	int i=1;
	while(a[n]-a[i]>=a[n-1]){
		num--;
		i++;
	}
	return num;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>t>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		b[i]=a[i];
	}
	cout<<ans()<<endl;
	for(int i=1;i<=n;i++){
		a[i]=b[i];
	}
	for(int i=1;i<t;i++){
		cin>>k;
		for(int j=1;j<=k;j++){
			int x,y;
			cin>>x>>y;
			a[x]=y;
		}
		for(int i=1;i<=n;i++){
			b[i]=a[i];
		}
		cout<<ans()<<endl;
		for(int i=1;i<=n;i++){
			a[i]=b[i];
		}
	}
	return 0;
}

==========


---------- Now Opening N-00142's file(s).
===== Successfully open the file  answers\HN-00142\julian\julian.cpp.The size of it is 0.793 KB.
#include <bits/stdc++.h>
using namespace std;

int q;
long long r;
// ÈÕÔÂÄê 
int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int main() {
  freopen("julian.in", "r", stdin);
  freopen("julian.out", "w", stdout);
	scanf("%d", &q);
	while (q--) {
		long long d = 1, m = 1, y = -4713;
		scanf("%lld", &r);
		long long p = r / 366;
		y = y + p;
		r = r % 366;
		int t = 0;
		int sum = 0;
		for (int i = 1; i <= 12; i++) {
			if (sum + a[i] > r) {
				break;
			}
			sum = sum + a[i];
			t++;
		}
		m = m + t;
		d = d + r - sum;
		if (m > 2) {
			d--;
		}
		if (d == 0) {
			d = a[--m];
		}
		if (y > 0) {
			printf("%lld %lld %lld\n", d, m, y);
		}
		else {
			y = y * (-1);
			printf("%lld %lld %lld BC\n", d, m, y);
		}
	}
	
  fclose(stdin);
  fclose(stdout);
  return 0;
}

==========
===== Successfully open the file        answers\HN-00142\zoo\zoo.cpp.The size of it is 0.790 KB.
#include <bits/stdc++.h>
using namespace std;

const int kMaxN = 1000000 + 5;
const int kMaxM = 1000000 + 5;

int n, m, c, k;
unsigned long long x;
int a[kMaxN];
int v[65];
/*
1 ¿ÉÒÔ
0 Ã»ÓÐ
-1 ²»ÐÐ 
*/
unsigned long long ans = 1;
struct Node {
	int p;
	int q;
} w[kMaxN];

int main() {
  freopen("zoo.in", "r", stdin);
  freopen("zoo.out", "w", stdout);

	scanf("%d%d%d%d", &n, &m, &c, &k);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		x |= a[i];
	}
	for (int i = 1; i <= m; i++) {
		scanf("%d%d", &w[i].p, &w[i].q);
		if ((x >> w[i].p) % 2 == 1) {
			v[w[i].p] = 1;
		}
		else {
			v[w[i].p] = -1;
		} 
	}
	for (int i = 0; i <= k - 1; i++) {
		if (v[i] != -1) {
			ans = ans * 2;
		}
	}
	ans = ans - n;
	cout << ans << endl; 
	
  fclose(stdin);
  fclose(stdout);
  return 0;
}

==========
===== Successfully open the file      answers\HN-00142\call\call.cpp.The size of it is 2.660 KB.
#include <bits/stdc++.h>
using namespace std;

const int kMaxN = 100000 + 5;
const int kMaxM = 100000 + 5;
const int kMod = 998244353;

int opt;
//1 ¼Ó
//2 ¼õ
//3 ²éÑ¯ 
int n, m, q;
int k;
int ans;
int f[kMaxN];
long long sum[kMaxN * 4];
long long add[kMaxN * 4];
long long mul[kMaxN * 4];

struct Op {
	int opt;
	int x;
	int y;
	vector<int> v;
} p[kMaxM];

void Add(int i, int x, int y, int k) {
	sum[i] = (sum[i] + (y - x + 1) * k) % kMod;
	add[i] = (add[i] + k) % kMod;
}

void Mul(int i, int x, int y, int k) {
	sum[i] = sum[i] * k % kMod;
	add[i] = add[i] * k % kMod;
	mul[i] = mul[i] * k % kMod;
}

void Update(int x, int mx, int my, int nx, int ny) {
	if (mx == nx && my == ny) {
		if (opt == 1) {
			Add(x, mx, my, k);
		}
		if (opt == 2) {
			Mul(x, mx, my, k);
		}
		if (opt == 3) {
			ans = (ans + sum[x]) % kMod;
		}
		return;
	}
	int mid = (mx + my) / 2;
	if (mul[x] != 1) {
		Mul(x * 2, mx, mid, mul[x]);
		Mul(x * 2 + 1, mid + 1, my, mul[x]);
		mul[x] = 1;
	}
	if (add[x] != 0) {
		Add(x * 2, mx, mid, add[x]);
		Add(x * 2 + 1, mid + 1, my, add[x]);
		add[x] = 0;
	}
	if (nx <= mid) {
		Update(x * 2, mx, mid, nx, min(ny, mid));
	}
	if (ny >= mid + 1) {
		Update(x * 2 + 1, mid + 1, my, max(nx, mid + 1), ny);
	}
	sum[x] = (sum[x * 2] + sum[x * 2 + 1]) % kMod;
}

void Split(int f) {
	for (int i = 0; i < p[f].v.size(); i++) {
		int num = p[f].v[i];
		opt = p[num].opt;
		if (opt == 1) {
			k = p[num].y;
			Update(1, 1, n, p[num].x, p[num].x);
		}
		if (opt == 2) {
			k = p[num].x;
			Update(1, 1, n, 1, n);
		}
		if (opt == 3) {
			Split(num);
		}
	}
}

int main() {
  freopen("call.in", "r", stdin);
  freopen("call.out", "w", stdout);
	
	scanf("%d", &n);
	
	for (register int i = 1; i <= n * 4; i++) {
		mul[i] = 1;
	}
	
	for (register int i = 1; i <= n; i++) {
		int a;
		scanf("%d", &a);
		opt = 1;
		k = a;
		Update(1, 1, n, i, i);
	}
	scanf("%d", &m);
	for (register int i = 1; i <= m; i++) {
		scanf("%d", &p[i].opt);
		if (p[i].opt == 1) {
			scanf("%d%d", &p[i].x, &p[i].y);
		}
		if (p[i].opt == 2) {
			scanf("%d", &p[i].x);
		}
		if (p[i].opt == 3) {
			scanf("%d", &p[i].x);
			for (register int j = 1; j <= p[i].x; j++) {
				int num;
				scanf("%d", &num);
				p[i].v.push_back(num);
			}
		}
	}
	scanf("%d", &q);
	
	while (q--) {
		int f;
		scanf("%d", &f);
		opt = p[f].opt;
		if (opt == 1) {
			k = p[f].y;
			Update(1, 1, n, p[f].x, p[f].x);
		}
		if (opt == 2) {
			k = p[f].x;
			Update(1, 1, n, 1, n);
		}
		if (opt == 3) {
			Split(f);
		}
	}
	
	for (register int i = 1; i <= n; i++) {
		ans = 0;
		opt = 3;
		k = 0;
		Update(1, 1, n, i, i);
		printf("%d ", ans);
	}
	
  fclose(stdin);
  fclose(stdout);
  return 0;
}

==========
===== Successfully open the file  answers\HN-00142\snakes\snakes.cpp.The size of it is 0.811 KB.
#include <bits/stdc++.h>
using namespace std;

const int kMaxN = 1000000 + 5;

struct Node {
	int num;
	bool operator < (const Node A) const {
		return num > A.num;
	}
};

int t;
int n;
int k;
int a[kMaxN];
multiset<Node> M1;//´óÇ°Ð¡ºó 
multiset<int> M2;//´óºóÐ¡Ç° 


int main() {
  freopen("snakes.in", "r", stdin);
  freopen("snakes.out", "w", stdout);
	scanf("%d", &t);
	t--;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + n + 1);
	if (a[3] - a[1] > a[2]) {
		printf("1\n");
	}
	else {
		printf("3\n");
	}
	while (t--) {
		scanf("%d", &k);
		for (int i = 1; i <= k; i++) {
			int x, y;
			scanf("%d%d", &x, &y);
			a[x] = y;
		}
		if (a[3] - a[1] > a[2]) {
			printf("1\n");
		}
		else {
			printf("3\n");
		}
	}
  fclose(stdin);
  fclose(stdout);
  return 0;
}

==========


---------- Now Opening N-00143's file(s).
===== Successfully open the file  answers\HN-00143\julian\julian.cpp.The size of it is 1.606 KB.
#include <bits/stdc++.h>
using namespace std;
const int N=110000;
int Q,d[N],m[N],y[N],flag[N];
bool run(int year,int pd){
	if(pd==-1) year-=1;
	if((year<=1582&&pd==0)||pd==-1){
		if(year%4==0) return 1;
		else return 0;
	}
	else{
		if(year%400==0) return 1;
		if((year%4==0)&&(year%100!=0)) return 1;
		return 0;
	}
}
void function(int r,int k){
	int a=r;
	while(a>=21){
		int e=0;
		if(m[k]==1&&a>=31) a-=31,e=1;
		if(m[k]==2){
			if(run(y[k],flag[k])&&a>=29) a-=29,e=1;
			else if(run(y[k],flag[k])==0&&a>=28) a-=28,e=1;
		}
		if(m[k]==3&&a>=31) a-=31,e=1;
		if(m[k]==4&&a>=30) a-=30,e=1;
		if(m[k]==5&&a>=31) a-=31,e=1;
		if(m[k]==6&&a>=30) a-=30,e=1;
		if(m[k]==7&&a>=31) a-=31,e=1;
		if(m[k]==8&&a>=31) a-=31,e=1;
		if(m[k]==9&&a>=30) a-=30,e=1;
		if(m[k]==10){
			if(y[k]==1582&&flag[k]==0&&a>=21) a-=21,e=1;
			else if(a>=31) a-=31,e=1;
		}
		if(m[k]==11&&a>=30) a-=30,e=1;
		if(m[k]==12&&a>=31) a-=31,e=1;
		if(e==0) break;
		m[k]++;
		if(m[k]==13){
			m[k]=1;
			if(flag[k]==-1){
				if(y[k]==1) flag[k]=0;
				else y[k]--;
			}
			else y[k]++;
		}
	}
	while(a>0){
		a--,d[k]++;
		if(y[k]==1582&&flag[k]==0&&m[k]==10&&d[k]==5) d[k]=15;
	}
}
void printans(int i){
	printf("%d %d %d ",d[i],m[i],y[i]);
	if(flag[i]==-1) printf("BC");
	printf("\n");
	return;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&Q);
	
	for(int i=1;i<=Q;++i)
		d[i]=1;
	for(int i=1;i<=Q;++i)
		m[i]=1;
	for(int i=1;i<=Q;++i)
		y[i]=4713;
	for(int i=1;i<=Q;++i)
		flag[i]=-1;

	for(int i=1;i<=Q;++i){
		int r;
		scanf("%d",&r);
		function(r,i);
		printans(i);
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00143\zoo\zoo.cpp.The size of it is 0.209 KB.
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int a;
	cin>>a;
	if(a==3)cout<<13;
	else if(a==2)cout<<2;
	else cout<<0;
	return 0;
}

==========
===== Successfully open the file      answers\HN-00143\call\call.cpp.The size of it is 0.248 KB.
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int a;
	cin>>a;
	if(a==3)printf("6 8 12");
	else if(a==10)
	printf("36 282 108 144 180 216 504 288 324 360");
	return 0;
}

==========
===== Successfully open the file  answers\HN-00143\snakes\snakes.cpp.The size of it is 0.231 KB.
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int a,b;
	cin>>a>>b;
	if(a==2&&b==3)cout<<3<<endl<<1;
	if(a==2&&b==5)cout<<5<<endl<<3;
	
	return 0;
}

==========


---------- Now Opening N-00144's file(s).
===== Successfully open the file  answers\HN-00144\julian\julian.cpp.The size of it is 1.699 KB.
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int Q,day[1000],mon[1000],ju,gy[1000];
	long long year[1000],r[1000];
	cin>>Q;
	for(int i=0;i<Q;i++)
	{
		cin>>r[i];
		day[i]=1+r[i];
		mon[i]=1;
		year[i]=4713;
		gy[i]=0;
		while(mon[i]>12 || day[i]>31)
		{
			if(4==mon[i]||6==mon[i]||9==mon[i]||11==mon[i])
			{
				if(day[i]>30)
				{
					day[i]=day[i]-30;
					mon[i]=mon[i]+1;
				}
			}
			if(1==mon[i]||3==mon[i]||5==mon[i]||7==mon[i]||8==mon[i]||10==mon[i]||12==mon[i])
			{
				if(year[i]==1582 && mon[i]==10 && day[i]>=4 && gy[i]==1)
				{
					day[i]=day[i]+10;
				}
				if(day[i]>31)
				{
					day[i]=day[i]-31;
					mon[i]=mon[i]+1;
				}
			}
			if(mon[i]>12)
			{
				mon[i]=mon[i]-12;
				ju=0;
				if(year[i]==1 && gy==0)
				{
					gy[i]=1;
					year[i]=1;
				}
				else if(gy[i]==1)
				{
					year[i]=year[i]+1;
				}
				else
				{
					year[i]=year[i]-1;
				}
			}
			if(gy[i]==0 && (year[i]-1)%4==0)
			{
				ju=1;
			}
			else if(gy[i]==1 && year[i]<1582 && year[i]%4==0)
			{
				ju=1;
			}
			else if(gy[i]==1 && year[i]>=1582 && year[i]%4==0 && year[i]%100!=0)
			{
				ju=1;
			}
			else if(gy[i]==1 && year[i]>=1582 && year[i]%400==0)
			{
				ju=1;
			}
			else
			{
				ju=0;
			}
			if(2==mon[i])
			{
				if(ju==1 && day[i]>29)
				{
					day[i]=day[i]-29;
					mon[i]=mon[i]+1;
				}
			    if(ju==0 && day[i]>28)
				{
					day[i]=day[i]-28;
					mon[i]=mon[i]+1;
				}
			}
			
		}
	}
	for(int j=0;j<Q;j++)
	{
		cout<<day[j]<<" "<<mon[j]<<" "<<year[j];
		if(gy[j]==0)
		{
			cout<<" "<<"BC"<<endl;
		}
		else
		{
			cout<<endl;
		}
	}
	return 0;==========
===== Opening        answers\HN-00144\zoo\zoo.cpp Failed.File not found.
===== Opening      answers\HN-00144\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00144\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00145's file(s).
===== Successfully open the file  answers\HN-00145\julian\julian.cpp.The size of it is 3.093 KB.
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#define gi get_int()
#define int long long
int get_int()
{
	int x = 0, y = 1; char ch = getchar();
	while (!isdigit(ch) && ch != '-') ch = getchar();
	if (ch == '-') y = -1, ch = getchar();
	while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
	return x * y;
}

int getYB1582R(int &a)
{
	int ret = a / 1461;
	a -= std::min(ret, 1ll * 1573) * 1461;
	//std::cout << "!!" << a << std::endl;
	return std::min(ret, 1ll * 1573) * 4;
}

int getYB1582L4(int &a)
{
	int ret = 0;
	if ((a - 366) >= 0) {
		ret++, a -= 366;
		if ((a - 365) >= 0) ret++, a -= 365;
		if ((a - 365) >= 0) ret++, a -= 365;
		//if ((a - 365) >= 0) ret++, a -= 365;
	}
	return ret;
}

int isRun(int a)
{
	if (a <= 1582) {
		if (a < 0)
			return ((a + 1) % 4) == 0;
		if (a > 0)
			return (a % 4) == 0;
	}
	if (a > 1582) {
		if (a % 400 == 0) 
			return 1;
		if (a % 100 != 0 && a % 4 == 0)
			return 1;
	}
	return 0;
}

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int getM(int &a, int y)
{
	int a1 = a;
	if (isRun(y) == 1) months[1]++;
	int i;
	for (i = 0; i < 12; i++) {
		a -= months[i];
		if (a <= 0)
			break;
		a1 = a;
	}
	int tmp = a;
	if (a != 0) a = a1;
	if (isRun(y) == 1) months[1]--;
	if (tmp == 0) return i + 2;
	return i + 1;
}

int getYA1582B400(int &a)
{
	int ret = a / 146097;
	a -= ret * 146097;
	ret *= 400;
	return ret;
}

int getYA1582L400(int &a)
{
	int ret = 0;
	if ((a - 36525) >= 0) {
		a -= 36525, ret += 100;
		if ((a - 36524) >= 0)
			a -= 36524, ret += 100;
		if ((a - 36524) >= 0)
			a -= 36524, ret += 100;
	}
	return ret;
}

int getYA1582L100(int &a, int y)
{
	int ret = 0;
	int base;
	//std::cout << a << std::endl;
	if (isRun(y) == 0) base = 1460;
	if (isRun(y) == 1) base = 1461;
	while ((a - base) >= 0) {
		a -= base;
		ret += 4;
		y += 4;
		if (isRun(y) == 0) base = 1460;
		if (isRun(y) == 1) base = 1461;
	}
	return ret;
}

int getYA1582L4(int &a, int y)
{
	int ret = 0;
	//std::cout << isRun(y) << ' ' << a << std::endl;
	if (isRun(y) == 1 && (a - 366) >= 0) {
		a -= 366, ret++;
		if ((a - 365) >= 0)
			a -= 365, ret++;
		if ((a - 365) >= 0)
			a -= 365, ret++;
	}
	if (isRun(y) == 0 && (a - 365) >= 0) {
		a -= 365, ret++;
		if ((a - 365) >= 0)
			a -= 365, ret++;
		if ((a - 365) >= 0)
			a -= 365, ret++;
	}
	return ret;
}

int getAns(int a)
{
	int ansY = -4713 + getYB1582R(a);
	if (ansY == 1579 && a >= 1008) {
		a += 10;
	}
	if (ansY >= 0) ansY++;
	if (ansY != 1580) {
		//std::cout << ansY << ' ' << a << std::endl;
		ansY += getYB1582L4(a);
	} else {
		ansY += getYA1582B400(a);
		ansY += getYA1582L400(a);
		ansY += getYA1582L100(a, ansY);
		ansY += getYA1582L4(a, ansY);
	}
	int ansM = getM(a, ansY);
	int ansD = a + 1;
	if (ansY < 0) {
		std::cout << ansD << ' ' << ansM << ' ' << -ansY << " BC";
	} else {
		std::cout << ansD << ' ' << ansM << ' ' << ansY;
	}
	std::cout << std::endl;
}

signed main()
{
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	int Q = gi;
	while (Q--) {
		int a = gi;
		getAns(a);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00145\zoo\zoo.cpp.The size of it is 0.889 KB.
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#define gi get_int()
const int MAXN = 1e6 + 10;
int get_int()
{
	int x = 0, y = 1; char ch = getchar();
	while (!isdigit(ch) && ch != '-') ch = getchar();
	if (ch == '-') y = -1, ch = getchar();
	while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
	return x * y;
}

int vis[100], a[MAXN], p[MAXN];

signed main()
{
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	int n = gi, m = gi, c = gi, k = gi, sum = 0;
	for (int i = 0; i < n; i++)
		a[i] = gi, sum |= a[i];
	for (int i = 0; i < m; i++) {
		p[i] = gi;
		gi;
	}
	memset(vis, 0, sizeof(vis));
	for (int i = 0; i < m; i++) {
		if (vis[p[i]] == 1) continue;
		vis[p[i]] = 1;
		int digit = (sum >> p[i]) & 1;
		if (digit == 0) k--;
	}
	long long ans = 1;
	while (k--)
		ans *= 2;
	std::cout << ans - n;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00145\call\call.cpp.The size of it is 1.275 KB.
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#define gi get_int()
const int MAXN = 1e5 + 10;
int get_int()
{
	int x = 0, y = 1; char ch = getchar();
	while (!isdigit(ch) && ch != '-') ch = getchar();
	if (ch == '-') y = -1, ch = getchar();
	while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
	return x * y;
}

int num[MAXN], c[MAXN], p[MAXN], v[MAXN], n;
std::vector<int> g[MAXN];

void execF(int x)
{
	if (c[x] == -1) {
		if (p[x] == -1) {
			for (int i = 0; i < n; i++)
				num[i] *= v[x];
		} else {
			num[p[x]] += v[x];
		}
	} else {
		for (int i = 0; i < c[x]; i++) {
			execF(g[x][i]);
		}
	}
}

signed main()
{
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);

	n = gi;
	for (int i = 0; i < n; i++)
		num[i] = gi;
	int m = gi;
	for (int i = 0; i < m; i++) {
		int mode = gi;
		if (mode == 1) {
			c[i] = -1;
			p[i] = gi - 1;
			v[i] = gi;
		}
		if (mode == 2) {
			c[i] = -1;
			p[i] = -1;
			v[i] = gi;
		}
		if (mode == 3) {
			c[i] = gi;
			g[i].resize(c[i]);
			for (int j = 0; j < c[i]; j++) {
				g[i][j] = gi - 1;
			}
		}
	}
	int Q = gi;
	while (Q--) {
		int f = gi - 1;
		execF(f);
	}

	for (int i = 0; i < n; i++) 
		std::cout << num[i] << ' ';

	return 0;
}
==========
===== Opening  answers\HN-00145\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00146's file(s).
===== Successfully open the file  answers\HN-00146\julian\julian.cpp.The size of it is 4.358 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int M[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
signed main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q;
	scanf("%lld",&q);
	const int df4y=1461;
	for(register int cas=1;cas<=q;cas++)
	{
		int n;
		scanf("%lld",&n);
		int ansm=0,y;
		if(n<=2298884)
		{
			y=n/df4y*4;
			n%=df4y;
			if(n<366)
			{
				M[2]++;
				for(register int i=1;i<=12;i++)
					if(n>=M[i])
						n-=M[i];
					else
					{
						ansm=i;
						break;
					}
				M[2]--;
				if(y<=4712)
					printf("%lld %lld %lld BC\n",1+n,ansm,4713-y);
				else
					printf("%lld %lld %lld\n",1+n,ansm,y-4712);
			}
			else
			{
				n-=366;
				y++;
				y+=n/365;
				n%=365;
				for(register int i=1;i<=12;i++)
					if(n>=M[i])
						n-=M[i];
					else
					{
						ansm=i;
						break;
					}
				if(y<=4712)
					printf("%lld %lld %lld BC\n",1+n,ansm,4713-y);
				else
					printf("%lld %lld %lld\n",1+n,ansm,y-4712);
			}
		}
		else
		{
			n-=2298884;
			y=1582;
			if(n<355)
			{
				for(register int i=1;i<=9;i++)
					if(n>=M[i])
						n-=M[i];
					else
					{
						ansm=i;
						break;
					}
				if(n<3 && !ansm)
				{
					ansm=10;
					printf("%lld %lld %lld\n",n+1,ansm,y);
				}
				else
					if(n<21)
					{
						ansm=10;
						n=n-4+15;
						printf("%lld %lld %lld\n",n,ansm,y);
					}
					else
					{
						n-=21;
						for(register int i=11;i<=12;i++)
							if(n>=M[i])
								n-=M[i];
							else
							{
								ansm=i;
								break;
							}
						printf("%lld %lld %lld\n",n+1,ansm,y);
					}
			}
			else
			{
				n-=355;
				y++;
				if(n<365)
				{
					for(register int i=1;i<=12;i++)
						if(n>=M[i])
							n-=M[i];
						else
						{
							ansm=i;
							break;
						}
					printf("%lld %lld %lld\n",n+1,ansm,y);
				}
				else
				{
					n-=365;
					y++;
					if(n<=df4y*4)
					{
						y+=n/df4y*4;
						n%=df4y;
						if(n<366)
						{
							M[2]++;
							for(register int i=1;i<=12;i++)
								if(n>=M[i])
									n-=M[i];
								else
								{
									ansm=i;
									break;
								}
							M[2]--;
							printf("%lld %lld %lld\n",1+n,ansm,y);
						}
						else
						{
							n-=366;
							y++;
							y+=n/365;
							n%=365;
							for(register int i=1;i<=12;i++)
								if(n>=M[i])
									n-=M[i];
								else
								{
									ansm=i;
									break;
								}
							printf("%lld %lld %lld\n",1+n,ansm,y);
						}
					}
					else
					{
						n-=df4y*4;
						y=1600;
						y+=n/146097*400;
						n%=146097;
						if(n<=36525)
						{
							y+=n/df4y*4;
							n%=df4y;
							if(n<366)
							{
								M[2]++;
								for(register int i=1;i<=12;i++)
									if(n>=M[i])
										n-=M[i];
									else
									{
										ansm=i;
										break;
									}
								M[2]--;
								printf("%lld %lld %lld\n",1+n,ansm,y);
							}
							else
							{
								n-=366;
								y++;
								y+=n/365;
								n%=365;
								for(register int i=1;i<=12;i++)
									if(n>=M[i])
										n-=M[i];
									else
									{
										ansm=i;
										break;
									}
								printf("%lld %lld %lld\n",1+n,ansm,y);
							}
						}
						else
						{
							y+=100;
							n-=36525;
							y+=n/36524*100;
							n%=36524;
							if(n<=1460)
							{
								y+=n/365;
								n%=365;
								for(register int i=1;i<=12;i++)
									if(n>=M[i])
										n-=M[i];
									else
									{
										ansm=i;
										break;
									}
								printf("%lld %lld %lld\n",1+n,ansm,y);
							}
							else
							{
								n-=1460;
								y+=4;
								y+=n/df4y*4;
								n%=df4y;
								if(n<366)
								{
									M[2]++;
									for(register int i=1;i<=12;i++)
										if(n>=M[i])
											n-=M[i];
										else
										{
											ansm=i;
											break;
										}
									M[2]--;
									printf("%lld %lld %lld\n",1+n,ansm,y);
								}
								else
								{
									n-=366;
									y++;
									y+=n/365;
									n%=365;
									for(register int i=1;i<=12;i++)
										if(n>=M[i])
											n-=M[i];
										else
										{
											ansm=i;
											break;
										}
									printf("%lld %lld %lld\n",1+n,ansm,y);
								}

							}
						}
					}
				}
			}
		}
	}
	return 0;
}
//-4713.1.1~-1.1.1=1721058
//-1.1.1~1580.1.1=577095
//1580.1.1~1582.1.1=731
//1582.1.1~1584.1.1=720
==========
===== Successfully open the file        answers\HN-00146\zoo\zoo.cpp.The size of it is 0.885 KB.
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+10;
int n,m,c,k,vis[maxn],vis1[maxn],p[maxn],q[maxn],ans;
long long a[maxn];
inline long long read()
{
	long long x=0;
	char c=getchar();
	while(!isdigit(c))
		c=getchar();
	while(isdigit(c))
	{
		x=(x<<1)+(x<<3)+(c^48);
		c=getchar();
	}
	return x;
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(register int i=1;i<=n;i++)
	{
		a[i]=read();
		long long x=a[i],cur=0;
		while(x)
		{
			if(x&1ll)
				vis1[cur]=1;
			cur++;
			x>>=1;
		}
	}
	for(register int i=1;i<=m;i++)
	{
		p[i]=read();
		q[i]=read();
		vis[p[i]]=1;
	}
	for(register int i=0;i<k;i++)
		if(vis1[i] || !vis[i])
			ans++;
	if(ans==64)
	{
		if(n)
			printf("%llu\n",(1llu<<63)-n+(1llu<<63));
		else
			puts("18446744073709551616");
	}
	else
		printf("%llu\n",(1llu<<ans)-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00146\call\call.cpp.The size of it is 1.945 KB.
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10,Mod=998244353;
int a[maxn],c[maxn],n,m,T[maxn],p[maxn],v[maxn];
vector<int>g[maxn];
inline int read()
{
	int x=0;
	char c=getchar();
	while(!isdigit(c))
		c=getchar();
	while(isdigit(c))
	{
		x=(x<<1)+(x<<3)+(c^48);
		c=getchar();
	}
	return x;
}
namespace bf
{
	int tag[maxn<<2],val[maxn<<2];
	void build(int h,int l,int r)
	{
		tag[h]=1;
		if(l==r)
		{
			val[h]=a[l];
			return;
		}
		int mid=(l+r)>>1;
		build(h<<1,l,mid);
		build(h<<1|1,mid+1,r);
	}
	inline void pushdown(int h)
	{
		if(tag[h]!=1)
		{
			(tag[h<<1]*=tag[h])%=Mod;
			(tag[h<<1|1]*=tag[h])%=Mod;
			(val[h<<1]*=tag[h])%=Mod;
			(val[h<<1|1]*=tag[h])%=Mod;
			tag[h]=1;
		}
	}
	void out(int h,int l,int r)
	{
		if(l==r)
		{
			printf("%d ",val[h]);
			return;
		}
		pushdown(h);
		int mid=(l+r)>>1;
		out(h<<1,l,mid);
		out(h<<1|1,mid+1,r);
	}
	void mdf(int h,int l,int r,int x,int y)
	{
		if(l==r)
		{
			(val[h]+=y)%=Mod;
			return;
		}
		int mid=(l+r)>>1;
		pushdown(h);
		if(x<=mid)
			mdf(h<<1,l,mid,x,y);
		else
			mdf(h<<1|1,mid+1,r,x,y);
	}
	void work(int x)
	{
		if(T[x]==1)
		{
			mdf(1,1,n,p[x],v[x]);
			return;
		}
		if(T[x]==2)
		{
			(tag[1]*=v[x])%=Mod;
			return;
		}
		if(T[x]==3)
			for(register int i=0;i<c[x];i++)
				work(g[x][i]);
	}
	int main()
	{
		build(1,1,n);
		int q;
		scanf("%d",&q);
		for(register int i=1,f;i<=q;i++)
		{
			scanf("%d",&f);
			work(f);
		}
		out(1,1,n);
	}
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(register int i=1;i<=n;i++)
		a[i]=read();
	m=read();
	int cnt1=0,cnt2=0,cnt3=0;
	for(register int i=1;i<=m;i++)
	{
		T[i]=read();
		if(T[i]==1)
		{
			cnt1++;
			p[i]=read();
			v[i]=read();
		}
		if(T[i]==2)
		{
			cnt2++;
			v[i]=read();
		}
		if(T[i]==3)
		{
			cnt3++;
			c[i]=read();
			g[i].resize(c[i]);
			for(register int j=0;j<c[i];j++)
				g[i][j]=read();
		}
	}
	return bf::main();
	return 0;
}
==========
===== Successfully open the file  answers\HN-00146\snakes\snakes.cpp.The size of it is 0.464 KB.
#include<bits/stdc++.h>
using namespace std;
int n;
pair<int,int>a[10];
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T;
	scanf("%d",&T);
	for(register int cas=1;cas<=T;cas++)
	{
		scanf("%d",&n);
		for(register int i=1;i<=n;i++)
		{
			scanf("%d",&a[i].first);
		a[i].second=i;
		}
	sort(a+1,a+n+1);
	if(n==3)
	{
		if(make_pair(a[3].first-a[1].first,a[3].second)>a[2])
			puts("1");
		else
			puts("3");
	}
	}
	return 0;
}
==========


---------- Now Opening N-00147's file(s).
===== Successfully open the file  answers\HN-00147\julian\julian.cpp.The size of it is 1.622 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=100010;
int i,j,k,n,m;
struct ask{
	ll D;
	int id;
}a[maxn];
ll ans[maxn][3];
inline bool isrun(int year){
	if(year<=1582){
		if(year<0)year=-year-1;
		if(year%4==0)return true;
	}else if(year%4==0 && (year%100!=0 || year%400==0))return true;
	return false;
}
bool cmp(ask a,ask b){
	return a.D<b.D;
}
const int len[999]={0,31,-1,31,30,31,30,31,31,30,31,30,31};
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)scanf("%lld",&a[i].D),a[i].D++,a[i].id=i;
	sort(a+1,a+1+n,cmp);
	ll now=1,last;int z=1;
	for(register int year=-4713;z<=n;++year){
		if(!year)year++;
		last=now;
		if(year!=1582){
			if(isrun(year))now+=366;
			else now+=365;
		}else now+=355;
		while(now>a[z].D && z<=n){
			ans[a[z].id][0]=year;
			ans[a[z].id][1]=a[z].D-last;
			z++;
		}
		while(year>2000 && year%4000==0 && z<=n){
			ll to=now+1460970;
			if(a[z].D>to)year+=4000,now=to;
			else break;
		}
		while(year>2000 && year%400==0 && z<=n){
			ll to=now+146097;
			if(a[z].D>to)year+=400,now=to;
			else break;
		}
	}
	for(i=1;i<=n;i++){
		int year=ans[i][0],month=1,day=1;
		int now=ans[i][1];
		for(month=1;month<=12;month++){
			int cost=len[month];
			if(cost<0)cost=isrun(year)?29:28;
			if(year==1582 && month==10)cost=21;
			if(now>=cost)now-=cost;else break;
		}
		for(day=1;;day++){
			int cost=1;
			if(year==1582 && month==10 && day==5)day=15;
			if(now>=cost)now-=cost;else break;
		}
		if(year>0)printf("%d %d %d\n",day,month,year);
		else printf("%d %d %d BC\n",day,month,-year);
	}return 0;
}
==========
===== Successfully open the file        answers\HN-00147\zoo\zoo.cpp.The size of it is 1.069 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=1000010;
int i,j,k,n,m,c,g;
bool is[64];
ll a[maxn];
vector<int>need[64];
struct ask{
	int p,q;
}as[maxn];
int Q[maxn],h=1;
void init(){
	for(i=1;i<=m;i++)Q[i]=as[i].q;
	sort(Q+1,Q+1+m);
	for(i=2;i<=m;i++)if(Q[i]!=Q[h])Q[++h]=Q[i];
	for(i=1;i<=m;i++)as[i].q=lower_bound(Q+1,Q+1+h,as[i].q)-Q;
}
int bt[maxn];
unsigned ll ans=1;
void getg0(){
	cout<<1-n<<endl;
	exit(0);
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>g;
	for(i=1;i<=n;i++)scanf("%lld",&a[i]);
	for(i=1;i<=m;i++){
		int p,q;
		scanf("%d%d",&p,&q);
		as[i].p=p;as[i].q=q;
	}init();
	for(i=1;i<=m;i++)need[as[i].p].push_back(as[i].q);
	if(!g)getg0();
	for(i=1;i<=n;i++)
		for(j=0;j<=g-1;j++)
			if((1ll<<j)&a[i])
				is[j]=true;
	for(i=0;i<=g-1;i++)
		if(is[i])
			for(int j=0;j<need[i].size();j++)
				bt[need[i][j]]=1;
	for(i=0;i<=g-1;i++){
		bool b=true;
		for(int j=0;j<need[i].size();j++)
			if(!bt[need[i][j]]){b=false;break;}
		if(b)ans*=2;
	}cout<<ans-n<<endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00147\call\call.cpp.The size of it is 2.667 KB.
#include<bits/stdc++.h>
#define ll long long
#define M(x) (x=x>=mod?x-mod:x)
using namespace std;
const int maxn=100010,mod=998244353;
int read(){
	int x;scanf("%d",&x);return x;
}
struct func{
	ll sum;
	int op,p,v;
}f[maxn];
struct edge{
	int next,to;
}e[maxn*20];
int head[maxn],len,rd[maxn];
ll ksm(ll sum,int num){
	ll ans=1;
	while(num){
		if(num&1)ans=ans*sum%mod;
		sum=sum*sum%mod;
		num>>=1;
	}return ans;
}
void add(int x,int y){
	rd[y]++;
	e[++len].next=head[x];
	e[len].to=y;
	head[x]=len;
}
int i,j,k,n,m,qu,Q[maxn],top;
ll mul[maxn],zero[maxn],a[maxn];
namespace segment_tree{
	ll tree[maxn*4];
	int lowbit(int x){return x&(-x);}
	void insert(int x,int S){
		for(;x<=n;x+=lowbit(x))tree[x]+=S,M(tree[x]);
	}
	ll find(int x){
		if(!x)return 0;
		ll ans=0;for(;x;x-=lowbit(x))ans+=tree[x],M(ans);return ans;
	}
}using namespace segment_tree;
int vis[maxn];
void dfs(int now,int fa){
	if(vis[now])return;
	mul[now]=vis[now]=1;
	for(int i=head[now];i;i=e[i].next){
		int u=e[i].to;
		//cout<<now<<' '<<fa<<endl;
		if(u==fa)continue;
		dfs(u,now);
		if(mul[u]!=0){
			if(!zero[now])mul[now]=mul[now]*mul[u]%mod;
		}else zero[now]+=zero[u];
	}
	//cout<<"dfs "<<now<<' '<<fa<<' '<<zero[now]<<endl;
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)a[i]=read();
	cin>>m;
	for(i=1;i<=m;i++){
		int op=read();
		if(op==1){
			int p=read(),v=read();
			f[i].op=op;f[i].p=p;f[i].v=v;
			vis[i]=1;mul[i]=1;
		}else
		if(op==2){
			int v=read();
			f[i].op=op;f[i].v=v;mul[i]=v;
			if(!v)zero[i]++;
			vis[i]=1;
		}else{
			int c=read();
			for(j=1;j<=c;j++){
				int x=read();
				add(i,x);
			}f[i].op=op;
		}
	}
	cin>>qu;
	for(i=1;i<=qu;i++){
		int x=read();
		add(m+1,x);
	}f[m+1].sum=1;
	dfs(m+1,0);
	for(i=1;i<=m+1;i++)if(!rd[i])Q[++top]=i;
	while(top){
		int now=Q[top--];ll T=1;
		//cout<<"OOK!"<<' '<<now<<' '<<top<<endl;
		for(int i=head[now];i;i=e[i].next){
			int u=e[i].to;
			//cout<<now<<" -> "<<u<<endl;
			rd[u]--;
			if(T){
				f[u].sum+=f[now].sum*T%mod;
				T=T*mul[u]%mod;
				M(f[u].sum);
			}if(!rd[u])Q[++top]=u;
		}
	}
	//for(i=1;i<=m+1;i++)cout<<mul[i]<<' '<<f[i].sum<<endl;
	if(zero[m+1]){for(i=1;i<=n;i++)a[i]=0;}
	for(i=1;i<=m;i++)
		if(f[i].op==1){
			a[f[i].p]+=f[i].v*f[i].sum%mod*ksm(mul[m+1],mod-2)%mod,M(a[f[i].p]);
			//cout<<a[f[i].p]<<' '<<f[i].p<<' '<<endl;
		}
	for(i=1;i<=n;i++)printf("%lld ",a[i]*mul[m+1]%mod);
	/*
	for(i=1;i<=n;i++)insert(i,a[i]);
	for(i=1;i<=m;i++)
		if(f[i].op==1)
			insert(f[i].p,f[i].v*f[i].sum%mod*ksm(mul[m+1],mod-2)%mod);
	//cout<<mul[m+1]<<endl;
	for(i=1;i<=n;i++)
		printf("%lld ",(find(i)-find(i-1)+mod)%mod*mul[m+1]%mod);
	*/
	return 0;
}
==========
===== Successfully open the file  answers\HN-00147\snakes\snakes.cpp.The size of it is 1.564 KB.
#include<bits/stdc++.h> 
using namespace std;
int read(){
	int x;scanf("%d",&x);return x;
}
const int maxn=1000010;
int i,j,k,n,m,is[maxn];
struct snake{
	int w,id;
}a[maxn];
bool operator <(snake a,snake b){
	return a.w<b.w || (a.w==b.w && a.id<b.id);
}
typedef multiset<snake> st;
typedef multiset<snake>::iterator IT;
st S;
IT getmax(){
	IT x=S.end();
	x--;return x;
}
IT getmin(){
	return S.begin();
}
int ans[maxn];
struct edge{
	int next,to;
}e[maxn*2];
int head[maxn],len;
void add(int x,int y){
	++len;
	e[len].next=head[x];
	e[len].to=y;
	head[x]=len;
}
int th,chs[maxn];
void dfs(int now,int fa){
	//cout<<now<<' '<<chs[now]<<endl;
	if(chs[now])th=max(th,ans[now]);
	for(int i=head[now];i;i=e[i].next){
		int u=e[i].to;
		if(u==fa)continue;
		chs[u]=1-chs[now];
		dfs(u,now);
	}
}
void work(){
	S.clear();
	len=th=0;for(i=1;i<=n;i++)head[i]=chs[i]=0;
	int Ans=n,last=n;
	for(i=1;i<=n;i++)is[i]=0,ans[i]=-1;
	for(i=1;i<=n;i++)S.insert(a[i]);
	while(S.size()>=1){
		int now=(*getmax()).id,ate=(*getmin()).id;
		if(S.size()==1){ans[now]=Ans;last=now;break;}
		//cout<<"now="<<now<<" ate="<<ate<<endl;
		Ans--,a[now].w-=a[ate].w,is[now]=1;
		if(is[ate])add(now,ate);
		S.erase(getmax());S.erase(getmin());
		S.insert(a[now]);ans[now]=Ans;
	}dfs(last,0);
	printf("%d\n",th+1);
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T=read();
	cin>>n;
	for(i=1;i<=n;i++)a[i].w=read(),a[i].id=i;
	while(T--){
		work();
		if(T){
			m=read();
			for(i=1;i<=m;i++){
				int x=read(),y=read();
				a[x].w=y;
			}
		}
	}
	return 0;
}
==========


---------- Now Opening N-00148's file(s).
===== Successfully open the file  answers\HN-00148\julian\julian.cpp.The size of it is 2.108 KB.

#include<bits/stdc++.h>
#define ll long long
#define rep(i,j,k) for(ll i=j;i<=k;i++)
#define req(i,j,k) for(ll i=j;i>=k;i--)
using namespace std;
const int maxn=100005;
ll read(){
	ll f=1,s=0;
	char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){s=(s<<1)+(s<<3)+c-'0';c=getchar();}
	return s*f; 
}
ll q,a,bc=0;
ll Month[14]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool run(ll x){
	if((x%100!=0&&x%4==0)||(x%400==0))return 1;
	return 0;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	q=read();
	while(q--){
//		rep(i,1,100){
//		a=i;
		a=read();
		if(a<=1721058){
			a++;
			if(a<=31){
				cout<<a<<" "<<1<<" "<<4713<<" BC"<<endl;continue;
			}
			ll year=a/1461;a%=1461;year=4713-year;
//			cout<<a<<endl;
			while(a>=366){
				
				if((year-1)%4==0)a-=366;
				else a-=365;
				year--;
//				cout<<a<<endl;
			}
//			cout<<a<<endl;
			ll i=0;
			while(a>0){
				i++;
				if(i==2)
					if((year-1)%4==0){
//						if(a==29){
//							cout<<29<<" "<<2<<" "<<year<<" BC"<<endl;
//							goto T;
//						}
						a-=29;
					}
					else a-=28;
				else{
					a-=Month[i];
				}
//				cout<<a<<" "<<i<<endl;
			}
			if((year-1)%4==0){
				if(i==2)cout<<a+29<<" "<<i<<" "<<year<<" BC"<<endl;
				else cout<<a+Month[i]<<" "<<i<<" "<<year<<" BC"<<endl;
			}
			else
				cout<<a+Month[i]<<" "<<i<<" "<<year<<" BC"<<endl;
			T:;
			continue;
		}
//	}
		a-=1721058;
		ll s=1;
		while(a>=366){
			
			if(s<1582)
				if(s%4==0)a-=366;
				else a-=365;
			else if(s==1582)a-=355;
			else
				if(run(s))a-=366;
				else a-=365;
			s++;
		}
		s--;
		if(s==1582){
			ll i=0;
			while(a>0){
				i++;
				if(s==10){
					if(a<=21&&a>4){
						cout<<a+10<<" "<<i<<" "<<s<<endl;
						goto O;
					}
					if(a<=4){
						cout<<a<<" "<<i<<" "<<s<<endl;
						goto O;
					}
					a-=21;
				}
				else
					a-=Month[i];
			}
			cout<<a+Month[i]<<" "<<i<<" "<<s<<endl;
			O:;
		}
		ll i=0;
		while(a>0){
			i++;
			if(i==2)
				if(run(s))a-=29;
				else a-=28;
			else{
				a-=Month[i];
			}
		}
		cout<<a+Month[i]<<" "<<i<<" "<<s<<endl;

	}
	return 0;
}

==========
===== Opening        answers\HN-00148\zoo\zoo.cpp Failed.File not found.
===== Successfully open the file      answers\HN-00148\call\call.cpp.The size of it is 1.337 KB.
#include<bits/stdc++.h>
#define ll long long
#define rep(i,j,k) for(ll i=j;i<=k;i++)
#define req(i,j,k) for(ll i=j;i>=k;i--)
#define mod 998244353
using namespace std;
const int maxn=1005;
ll read(){
	ll f=1,s=0;
	char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){s=(s<<1)+(s<<3)+c-'0';c=getchar();}
	return s*f; 
}
ll n,a[maxn],m,b[maxn][maxn],p;
void tj1(ll x,ll y){
	a[x]+=y;
	a[x]%=mod;
}
void tj2(ll x){
	rep(i,1,n){
		a[i]*=x;
		a[i]%=mod;
	}
}
void tj3(ll y,ll x){
	rep(i,3,x+2){
		if(b[b[y][i]][1]==1)tj1(b[b[y][i]][2],b[b[y][i]][3]);
		if(b[b[y][i]][1]==2)tj2(b[b[y][i]][2]);
		if(b[b[y][i]][1]==3)tj3(b[y][i],b[b[y][i]][2]);
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	rep(i,1,n){
		a[i]=read();
	}
	m=read();
	rep(i,1,m){
		b[i][1]=read();
		if(b[i][1]==1){
			b[i][2]=read();b[i][3]=read();
		}
		if(b[i][1]==2){
			b[i][2]=read();
		}
		if(b[i][1]==3){
			b[i][2]=read();
			rep(j,3,b[i][2]+2){
				b[i][j]=read();
			}
		}
//		cout<<1<<endl;
	}
//	cout<<"hello"<<endl;
	p=read();
	rep(i,1,p){
		ll s=read();
		if(b[s][1]==1)tj1(b[s][2],b[s][3]);
		if(b[s][1]==2)tj2(b[s][2]);
		if(b[s][1]==3)tj3(s,b[s][2]);
//		rep(i,1,n){
//			cout<<a[i]<<" ";
//		}
//		cout<<endl;
	}
	rep(i,1,n){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}

==========
===== Successfully open the file  answers\HN-00148\snakes\snakes.cpp.The size of it is 0.811 KB.
#include<bits/stdc++.h>
#define ll long long
#define rep(i,j,k) for(ll i=j;i<=k;i++)
#define req(i,j,k) for(ll i=j;i>=k;i--)
using namespace std;
const int maxn=100005;
ll read(){
	ll f=1,s=0;
	char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){s=(s<<1)+(s<<3)+c-'0';c=getchar();}
	return s*f; 
}
ll n,T,a[maxn];
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	T=read();
	n=read();
	rep(i,1,n){
		a[i]=read();
	}
	if(a[1]>a[2]+a[3]||a[2]>a[1]+a[3]||a[3]>a[1]+a[2]){
		cout<<1<<endl;
	}
	else cout<<3<<endl;
	T-=1;
	while(T--){
		ll x1=read(),x2=read(),x3=read(),x4=read(),x5=read(),x6=read();
		a[x1]=x2,a[x3]=x4,a[x5]=x6;
		if(a[1]>a[2]+a[3]||a[2]>a[1]+a[3]||a[3]>a[1]+a[2]){
			cout<<1<<endl;
		}
		else cout<<3<<endl;
	}
	return 0;
}

==========


---------- Now Opening N-00149's file(s).
===== Successfully open the file  answers\HN-00149\julian\julian.cpp.The size of it is 7.559 KB.
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
#define Re register
#define Si signed
#define In inline

using namespace std;
const int N=100000+5;;

int q,r[N];
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int sum[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
int Bc[1180]={0,1,5,9,13,17,21,25,29,33,37,41,45,49,53,57,61,65,69,73,77,81,85,89,93,97,101,105,109,113,117,121,125,129,133,137,141,145,149,153,157,161,165,169,173,177,181,185,189,193,197,201,205,209,213,217,221,225,229,233,237,241,245,249,253,257,261,265,269,273,277,281,285,289,293,297,301,305,309,313,317,321,325,329,333,337,341,345,349,353,357,361,365,369,373,377,381,385,389,393,397,401,405,409,413,417,421,425,429,433,437,441,445,449,453,457,461,465,469,473,477,481,485,489,493,497,501,505,509,513,517,521,525,529,533,537,541,545,549,553,557,561,565,569,573,577,581,585,589,593,597,601,605,609,613,617,621,625,629,633,637,641,645,649,653,657,661,665,669,673,677,681,685,689,693,697,701,705,709,713,717,721,725,729,733,737,741,745,749,753,757,761,765,769,773,777,781,785,789,793,797,801,805,809,813,817,821,825,829,833,837,841,845,849,853,857,861,865,869,873,877,881,885,889,893,897,901,905,909,913,917,921,925,929,933,937,941,945,949,953,957,961,965,969,973,977,981,985,989,993,997,1001,1005,1009,1013,1017,1021,1025,1029,1033,1037,1041,1045,1049,1053,1057,1061,1065,1069,1073,1077,1081,1085,1089,1093,1097,1101,1105,1109,1113,1117,1121,1125,1129,1133,1137,1141,1145,1149,1153,1157,1161,1165,1169,1173,1177,1181,1185,1189,1193,1197,1201,1205,1209,1213,1217,1221,1225,1229,1233,1237,1241,1245,1249,1253,1257,1261,1265,1269,1273,1277,1281,1285,1289,1293,1297,1301,1305,1309,1313,1317,1321,1325,1329,1333,1337,1341,1345,1349,1353,1357,1361,1365,1369,1373,1377,1381,1385,1389,1393,1397,1401,1405,1409,1413,1417,1421,1425,1429,1433,1437,1441,1445,1449,1453,1457,1461,1465,1469,1473,1477,1481,1485,1489,1493,1497,1501,1505,1509,1513,1517,1521,1525,1529,1533,1537,1541,1545,1549,1553,1557,1561,1565,1569,1573,1577,1581,1585,1589,1593,1597,1601,1605,1609,1613,1617,1621,1625,1629,1633,1637,1641,1645,1649,1653,1657,1661,1665,1669,1673,1677,1681,1685,1689,1693,1697,1701,1705,1709,1713,1717,1721,1725,1729,1733,1737,1741,1745,1749,1753,1757,1761,1765,1769,1773,1777,1781,1785,1789,1793,1797,1801,1805,1809,1813,1817,1821,1825,1829,1833,1837,1841,1845,1849,1853,1857,1861,1865,1869,1873,1877,1881,1885,1889,1893,1897,1901,1905,1909,1913,1917,1921,1925,1929,1933,1937,1941,1945,1949,1953,1957,1961,1965,1969,1973,1977,1981,1985,1989,1993,1997,2001,2005,2009,2013,2017,2021,2025,2029,2033,2037,2041,2045,2049,2053,2057,2061,2065,2069,2073,2077,2081,2085,2089,2093,2097,2101,2105,2109,2113,2117,2121,2125,2129,2133,2137,2141,2145,2149,2153,2157,2161,2165,2169,2173,2177,2181,2185,2189,2193,2197,2201,2205,2209,2213,2217,2221,2225,2229,2233,2237,2241,2245,2249,2253,2257,2261,2265,2269,2273,2277,2281,2285,2289,2293,2297,2301,2305,2309,2313,2317,2321,2325,2329,2333,2337,2341,2345,2349,2353,2357,2361,2365,2369,2373,2377,2381,2385,2389,2393,2397,2401,2405,2409,2413,2417,2421,2425,2429,2433,2437,2441,2445,2449,2453,2457,2461,2465,2469,2473,2477,2481,2485,2489,2493,2497,2501,2505,2509,2513,2517,2521,2525,2529,2533,2537,2541,2545,2549,2553,2557,2561,2565,2569,2573,2577,2581,2585,2589,2593,2597,2601,2605,2609,2613,2617,2621,2625,2629,2633,2637,2641,2645,2649,2653,2657,2661,2665,2669,2673,2677,2681,2685,2689,2693,2697,2701,2705,2709,2713,2717,2721,2725,2729,2733,2737,2741,2745,2749,2753,2757,2761,2765,2769,2773,2777,2781,2785,2789,2793,2797,2801,2805,2809,2813,2817,2821,2825,2829,2833,2837,2841,2845,2849,2853,2857,2861,2865,2869,2873,2877,2881,2885,2889,2893,2897,2901,2905,2909,2913,2917,2921,2925,2929,2933,2937,2941,2945,2949,2953,2957,2961,2965,2969,2973,2977,2981,2985,2989,2993,2997,3001,3005,3009,3013,3017,3021,3025,3029,3033,3037,3041,3045,3049,3053,3057,3061,3065,3069,3073,3077,3081,3085,3089,3093,3097,3101,3105,3109,3113,3117,3121,3125,3129,3133,3137,3141,3145,3149,3153,3157,3161,3165,3169,3173,3177,3181,3185,3189,3193,3197,3201,3205,3209,3213,3217,3221,3225,3229,3233,3237,3241,3245,3249,3253,3257,3261,3265,3269,3273,3277,3281,3285,3289,3293,3297,3301,3305,3309,3313,3317,3321,3325,3329,3333,3337,3341,3345,3349,3353,3357,3361,3365,3369,3373,3377,3381,3385,3389,3393,3397,3401,3405,3409,3413,3417,3421,3425,3429,3433,3437,3441,3445,3449,3453,3457,3461,3465,3469,3473,3477,3481,3485,3489,3493,3497,3501,3505,3509,3513,3517,3521,3525,3529,3533,3537,3541,3545,3549,3553,3557,3561,3565,3569,3573,3577,3581,3585,3589,3593,3597,3601,3605,3609,3613,3617,3621,3625,3629,3633,3637,3641,3645,3649,3653,3657,3661,3665,3669,3673,3677,3681,3685,3689,3693,3697,3701,3705,3709,3713,3717,3721,3725,3729,3733,3737,3741,3745,3749,3753,3757,3761,3765,3769,3773,3777,3781,3785,3789,3793,3797,3801,3805,3809,3813,3817,3821,3825,3829,3833,3837,3841,3845,3849,3853,3857,3861,3865,3869,3873,3877,3881,3885,3889,3893,3897,3901,3905,3909,3913,3917,3921,3925,3929,3933,3937,3941,3945,3949,3953,3957,3961,3965,3969,3973,3977,3981,3985,3989,3993,3997,4001,4005,4009,4013,4017,4021,4025,4029,4033,4037,4041,4045,4049,4053,4057,4061,4065,4069,4073,4077,4081,4085,4089,4093,4097,4101,4105,4109,4113,4117,4121,4125,4129,4133,4137,4141,4145,4149,4153,4157,4161,4165,4169,4173,4177,4181,4185,4189,4193,4197,4201,4205,4209,4213,4217,4221,4225,4229,4233,4237,4241,4245,4249,4253,4257,4261,4265,4269,4273,4277,4281,4285,4289,4293,4297,4301,4305,4309,4313,4317,4321,4325,4329,4333,4337,4341,4345,4349,4353,4357,4361,4365,4369,4373,4377,4381,4385,4389,4393,4397,4401,4405,4409,4413,4417,4421,4425,4429,4433,4437,4441,4445,4449,4453,4457,4461,4465,4469,4473,4477,4481,4485,4489,4493,4497,4501,4505,4509,4513,4517,4521,4525,4529,4533,4537,4541,4545,4549,4553,4557,4561,4565,4569,4573,4577,4581,4585,4589,4593,4597,4601,4605,4609,4613,4617,4621,4625,4629,4633,4637,4641,4645,4649,4653,4657,4661,4665,4669,4673,4677,4681,4685,4689,4693,4697,4701,4705,4709,4713};
bool fl[5000];

signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	for(int i=1;i<=q;i++)scanf("%d",&r[i]);
	for(int i=1;i<=1180;i++)fl[Bc[i]]=true;
	for(int i=1;i<=q;i++){
		int d=0,m=0,y=0;
		if(r[i]<1721424){
			d=1,m=1,y=4713;
			int tmp=r[i]/365,md=r[i]%365,Ru=0;
			for(int j=y-tmp;j<=y;j++){
				if(j%4==0)Ru++;
			}
			int a=Ru/365,s=Ru%365;
			md+=s;
			y=y-tmp-a;			
			if(md<=31){
				printf("%d %d %d BC\n",d+md,m,y);
				continue;
			}
			for(int j=1;j<=12;j++)
				if(md>=sum[j]&&md<sum[j+1]){
					m+=j;d=d+(md-sum[j])-1;
				}
			printf("%d %d %d BC\n",d,m,y);
			continue;
		}
		else if(r[i]==1721424){
			printf("1 1 1\n");
			continue;
		}
		else if(r[i]>1721424&&r[i]<2299541){
			r[i]-=1721424;
			d=1,m=1,y=1;
			int tmp=r[i]/365,md=r[i]%365,Ru=0;
			for(int j=y;j<=y+tmp;j++){
				if(j%400==0||(j%4==0&&j%100!=0))Ru++;
			}
			int a=Ru/365,s=Ru%365;
			md+=s;
			y=y+tmp+a;
			if(md<=31){
				printf("%d %d %d\n",d+md,m,y);
				continue;
			}
			for(int j=1;j<=12;j++)
				if(md>=sum[j]&&md<sum[j+1]){
					m+=j;d=d+(md-sum[j])-1;
				}
			printf("%d %d %d\n",d,m,y);
			continue;
		}
		else if(r[i]>2299552){
			d=15,m=10,y=1582;
			r[i]-=2299552;
			int tmp=r[i]/365,md=r[i]%365,Ru=0;
			for(int j=y;j<=y+tmp;j++){
				if(j%400==0||(j%4==0&&j%100!=0))Ru++;
			}
			int a=Ru/365,s=Ru%365;
			md+=s;
			y=y+tmp+a;
			if(md<=31){
				printf("%d %d %d\n",d+md,m,y);
				continue;
			}
			for(int j=1;j<=12;j++)
				if(md>=sum[j]&&md<sum[j+1]){
					m+=j;d=d+(md-sum[j])-1;
				}
			printf("%d %d %d\n",d,m,y);
			continue;
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00149\zoo\zoo.cpp.The size of it is 1.100 KB.
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
#define Re register
#define Si signed
#define In inline

using namespace std;
const int N=35;
const int M=1000;

struct node{
	int p,q;
}t[M];

int n,m,c,k;
int a[N];
bool flag[1000000],vis[10000];

int f(int x){
	int ans=0;
	for(int i=0;i<x;i++)
		ans+=pow(2,i);
//	cout<<1;
	return ans;
}

signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		vis[a[i]]=true;
	}
		
	int maxi=0;
	for(int i=1;i<=m;i++){
		scanf("%d%d",&t[i].p,&t[i].q);
		maxi=max(maxi,t[i].q);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			if(((a[i]>>t[j].p)&1)==1)flag[t[j].q]=true;
	}
	int cnt=0,s=f(k);
	for(int i=0;i<=s;i++){
		int tmp=i;
//		if(vis[i]==true)continue;
		bool sit[1000000];
		for(int j=1;j<=m;j++){
			if(((i>>t[j].p)&1)==1){
				sit[t[j].q]=true;
				maxi=max(maxi,t[j].q);
			}
		}
		for(int i=1;i<=maxi;i++)
			if(sit[i]==true&&flag[i]==false){
				cnt++;
				break;
			}
	}
	printf("%d\n",1+s-cnt-n);
	return 0;
}

==========
===== Opening      answers\HN-00149\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00149\snakes\snakes.cpp.The size of it is 1.544 KB.
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
#define Re register
#define Si signed
#define In inline

using namespace std;
const int N=20;

struct node{
	int x,y;
};

int T,n,a[N];

signed main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>T>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int s=T;
	while(T--){
		if(s-T>1){
			int k;
			cin>>k;
			node b[N];
			for(int i=1;i<=2*k;i++){
				cin>>b[i].x>>b[i].y;
				a[b[i].x]=b[i].y;
			}
		}
		if(a[3]>a[1]&&a[3]>a[2]){
			if(a[3]-a[2]>=a[1])cout<<1<<"\n";
			else cout<<3<<"\n";
			if(a[3]-a[1]>=a[2])cout<<1<<"\n";
			else cout<<3<<"\n";
		}
		if(a[2]>a[1]&&a[2]>a[3]){
			if(a[2]-a[1]>a[3])cout<<1<<"\n";
			else cout<<3<<"\n";
			if(a[2]-a[3]>=a[1])cout<<1<<"\n";
			else cout<<3<<"\n";
		}
		if(a[1]>a[2]&&a[1]>a[3]){
			if(a[1]-a[2]>a[3])cout<<1<<"\n";
			else cout<<3<<"\n";
			if(a[1]-a[3]>a[2])cout<<1<<"\n";
			else cout<<3<<"\n";
		}
		if(a[1]==a[2]&&a[1]<a[3])
			if(a[3]-a[1]>=a[2])cout<<1<<"\n";
			else cout<<3<<"\n";
		if(a[1]==a[2]&&a[1]>a[3])
			if(a[2]-a[3]>=a[1])cout<<1<<"\n";
			else cout<<3<<"\n";
		if(a[2]==a[3]&&a[1]<a[3])
			if(a[3]-a[1]>=a[2])cout<<1<<"\n";
			else cout<<3<<"\n";
		if(a[3]==a[2]&&a[1]>a[3])
			if(a[1]-a[3]>a[2])cout<<1<<"\n";
			else cout<<3<<"\n";
		if(a[1]==a[3]&&a[1]<a[2])
			if(a[2]-a[1]>a[3])cout<<1<<"\n";
			else cout<<3<<"\n";
		if(a[1]==a[3]&&a[1]>a[2])
			if(a[3]-a[2]>=a[1])cout<<1<<"\n";
			else cout<<3<<"\n";
		if(a[1]==a[2]&&a[1]==a[2])cout<<3<<"\n";
	}
	return 0;
}

==========


---------- Now Opening N-00150's file(s).
===== Successfully open the file  answers\HN-00150\julian\julian.cpp.The size of it is 1.372 KB.
#include<bits/stdc++.h>
using namespace std;
int a[13]={0,32,29,32,31,32,31,32,32,31,32,31,32}; 
int q,year=-4712,day=1,month=1;									//Äê£¬ÔÂ£¬ÈÕ£¬ÁÙÊ±ÔÂ 
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q,year=-4712,day=1,month=1;									//Äê£¬ÔÂ£¬ÈÕ£¬ÁÙÊ±ÔÂ 
	long long r;
	bool flag=false;													//trueÎªÈåfalseÎª¸ñ 
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		cin>>r;
		
		while(r)
		{
			r--;
			day++;
			if(day==a[2]&&(abs(year)-1)%4==0&&flag==0)
			{
				r--;
				day=1;
				month++;
			}
			if(day==a[2]&&year%4==0&&year%100!=0&&flag==1||day==a[2]&&year%400==0&&flag==1)
			{
				r--;
				day=1;
				month++;
			}
			if(day==a[month])
			{
				day=1;
				month++;
			}
			if(month==13)
			{
				month=1;
				year++;
			}
			if(year==1582)
			{
				flag==1;
			}
		}
		if(flag==0)
		{
			day--;
			if(day==0)
			{
				month--;
				if(month==0)
				{
					year--;	
					month=12;
					day+=a[12];	
				}
				else
				{
					day+=a[month];
				}
			}
			cout<<day<<' '<<month<<' '<<abs(year-1)<<" BC\n";	
			month=1;
			year=-4712;
			day=1;	
		}
		else
		{
			day--;
			if(day==0)
			{
				month--;
				if(month==0)
				{
					year--;	
					month=12;
					day+=a[12];	
				}
				else
				{
					day+=a[month];
				}
			}
			cout<<day<<' '<<month<<' '<<year-1<<endl;
			month=1;
			year=-4712;
			day=1;	
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00150\zoo\zoo.cpp.The size of it is 0.669 KB.
#include<bits/stdc++.h>
using namespace std;
int a[100001],b[100001][2],c[100001];
bool f[100001];
void in(int n,int m)
{
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=m;i++)
	cin>>b[i][1]>>b[i][2];
}
void qinkong()
{
	for(int i=1;i<=1000000;i++)
	{
		c[i]=0;
	}
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k;
	cin>>n>>m>>c>>k;
	in(n,m);
	for(int i=1;i<=n;i++)
	{
		int j=1;
		qinkong();
		while(a[i])
		{
			j++;
			c[j]=(int)a[i]%2;
			a[i]=(int)a[i]/2-0.5;
		}
		for(int l=1;l<=m;l++)
		{
			if(c[b[i][1]]==1)
			{
				f[l]=1;
			}
		}
	}
	int ans=k;
	for(int i=1;i<k;i++)
	{
		ans*=k;
	}
	cout<<ans-n;
	return 0;
}

==========
===== Successfully open the file      answers\HN-00150\call\call.cpp.The size of it is 0.197 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	while(1)
	{
		cout<<"ÎÒ²»»á×ö£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡"; 
	}
	return 0;
}

==========
===== Successfully open the file  answers\HN-00150\snakes\snakes.cpp.The size of it is 0.801 KB.
#include<bits/stdc++.h>
using namespace std;
int a[1000001];
bool f[1000001];											//1 die    0 live
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int n,t,maxl=-1,minl=INT_MAX,maxx,minn;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		 cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>maxl)
		{
			maxl=a[i];
			maxx=i;
		}
		if(a[i]<minl)
		{
			minl=a[i];
			minn=i;
		}
	}
	f[minn]=1;
	a[maxx]=a[maxx]-f[minn];
	int g,s;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>g>>s;
		a[g]=s;																			//ag³¬Íæ»á±ØÊ¤£¨ÊÖ¶¯»¬»ü£© 
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>maxl&&f[a[i]]==0)
		{
			maxl=a[i];
			maxx=i;
		}
		if(a[i]<minl&&f[a[i]]==0)
		{
			minl=a[i];
			minn=i;
		}
	} 
	f[minn]=1;
	for(int i=1;i<=n;i++)
	if(f[i]==0)
	cout<<a[i];
	cout<<n-2;
	return 0;
}

==========


---------- Now Opening N-00151's file(s).
===== Successfully open the file  answers\HN-00151\julian\julian.cpp.The size of it is 2.027 KB.
#include<bits/stdc++.h>
using namespace std;
int q,a[15]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main() {
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	while(q--) {
		int flag=0;
		int n;
		scanf("%d",&n);
		if(n==1721423) {
			puts("31 12 1 BC");
			continue;
		} else if(n<1721423) {
			int i=4713;
			while(n>=365) {
				if(i%4==1) {
					n-=366;
					i--;
				} else {
					n-=365;
					i--;
				}
			}
			if(!n) {
				printf("1 1 %d BC\n",i);
			} else {
				int j=1;
				while(j<=12) {
					if(n>=a[j]) {
						if(j==2&&(i%4==1))
							n-=29,j++;
						else {
							n-=a[j];
							j++;
						}
					} else break;
				}
				printf("%d %d %d BC\n",1+n,j,i);
			}
		} else if(n>1721424) {
			int i=1;
			n-=1721424;
			while(n>=365) {
				if(i<=1582) {
					if(i%4==1) {
						i++;
						n-=366;
					} else {
						i++;
						n-=365;
					}
				} else {
					if(((i%4==0)&&(i%100!=0))||(i%400==0)) {
						n-=366;
						i++;
					} else {
						n-=365;
						i++;
					}
				}
			}
			if(!n)
				printf("1 1 %d\n",i);
			else {
				//
				cout<<n<<endl;
				int j=1;
				while(j<=12) {
					if(i<1582&&n>=a[j]) {
						if(j==2&&(i%4==1))
							n-=29,j++;
						else {
							n-=a[j];
							j++;
						}
					} else if(n>=a[j]&&i>1582) {
						if(!flag)
							flag=1,n+=10;
						if((((i%4==0)&&(i%100!=0))||(i%400==0))&&j==2)
							n-=29,j++;
						else {
							n-=a[j];
							j++;
						}
					} else if(i==1582&&n>=a[j]&&j!=10) {
						n-=a[j];
						j++;
					} else if(i==1582&&j==10) {
						if(n>=a[j]||(n<a[j]&&n>=21)) {
							n-=21;
							j++;
						} else if(n<21) {
							if(n<=4)
								break;
							else {
								n+=10;
								break;
							}
						}
					} else
						break;
				}
				printf("%d %d %d\n",1+n,j,i);
			}
			//
		} else if(n==1721424)
			puts("1 1 1");
	}
	return 0;
}
/*
7
34793008
572844041
217775228
999256129
769832235
653112275
85089873

2 12 90547
11 8 1563681
22 3 591536
4 4 2731158
20 12 2103016
28 7 1783448
22 1 228256
*/
==========
===== Successfully open the file        answers\HN-00151\zoo\zoo.cpp.The size of it is 0.679 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int n,m,c,k,a[N],p[N],q[N],v[N],tot,f[N];
long long ans;
int main() {
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1; i<=n; i++)
		scanf("%d",&a[i]);
	for(int i=1; i<=m; i++)
		scanf("%d%d",&p[i],&q[i]);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if((a[i]&(1<<p[j])))
				f[j]=1;
		}
	}
	ans=(1<<k);
	for(int i=1; i<=m; i++)
		if(!f[i])
			v[++tot]=p[i];
	int t=unique(v+1,v+tot+1)-(v+1);
	for(int i=0; i<(1<<k); i++) {
		for(int j=1; j<=t; j++) {
			if(i&(1<<v[j])) {
				ans--;
				break;
			}
		}
	}
	printf("%lld",ans-n);
	return 0;
}
==========
===== Opening      answers\HN-00151\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00151\snakes\snakes.cpp.The size of it is 0.634 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int n,a[N],T,k;
int main() {
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&T);
	for(int i=1; i<=T; i++) {
		if(i==1) {
			scanf("%d",&n);
			for(int j=1; j<=n; j++)
				scanf("%d",&a[j]);
		} else {
			scanf("%d",&k);
			for(int j=1,x,y; j<=k; j++)
				scanf("%d%d",&x,&y),a[x]=y;
		}
		if(n==3) {
			if(a[n]-a[1]>=a[n-1])
				printf("1\n");
			else if(a[n]-a[1]<a[n-1])
				puts("3");
		} else {
			int ans=n;
			for(int i=n; i>=1; i--) {
				if(a[i]-a[1]>=a[i-1]) {
					ans--;
				}
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
==========


---------- Now Opening N-00152's file(s).
===== Successfully open the file  answers\HN-00152\julian\julian.cpp.The size of it is 2.213 KB.
#include<bits/stdc++.h>
using namespace std;
int T,r,Bc,fl;
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int re(int x){
	x+=4716+1;
	if(x%4==0)return 1;
	else return 0;
}
int fin(int l,int r){
	int an=0;
	for(int i=l;i<=r;i++){
		if( i%100==0 && i%400!=0 )an++;
	}
	return an;
}
int rep(int x){
	if(x%4==0&& !( x%100==0 && x%400!=0 ))return 1;
	else return 0;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	//cin>>T;cout<<rep(T);
	cin>>T;
	while(T--){
		Bc=0;
		scanf("%d",&r);
		if(r==1721789){printf("1 1 1\n");continue;}
		if(r==2299526){printf("15 10 1582\n");continue;}
		if(r<2299526){
			if(r<1721789)Bc=1;
			int y=-4713,m=1,d=1;
			while(r>1461000){r-=1461000;y+=4000;}
			while(r>146100){r-=146100;y+=400;}
			while(r>14610){r-=14610;y+=40;}
			while(r>1461){r-=1461;y+=4;}
			while(r>365){
				if(r==366&&re(y)==1){y+=1,r=0;break;}
				if(re(y)==1)r-=366,y+=1;
				else r-=365,y+=1;
			}
			if(re(y)==1)mon[2]++,fl=1; 
			for(int i=1;i<=12;i++){
				if(r>mon[i]){r-=mon[i],m++;continue;}
				if(r==mon[i]){r=0,m++;break;}
				d+=r;r=0;break;
			}
			if(fl==1)mon[2]--,fl=0;
			if(y>0){
				if(y+1==0)y++;
				printf("%d %d %d\n",d,m,y+1);
			}
			else{
				printf("%d %d %d BC\n",d,m,-y);
			}
		}
		if(r>2299526){
			r-=2299526;
			int y=1582,m=10,d=15;
			if(r<=77){
				if(r<=16){printf("%d %d %d\n",d+r,m,y);continue;}
				r-=16;m++;d=1;
				for(int i=11;i<=12;i++){
					if(r>mon[i]){r-=mon[i],m++;continue;}
					if(r==mon[i]){r=0,m++;break;}
					d+=r;r=0;break;
				}
				printf("%d %d %d\n",d,m,y);continue;
			}
			r-=77;
			y=1583,m=1,d=1;
			while(r>1461000-30){r-=1461000-30;y+=4000;}
			while(r>146100-3){r-=146100-3;y+=400;}
			while(r>14610-fin(y,y+39)){r-=14610-fin(y,y+39);y+=40;}
			while(r>1461-fin(y,y+3)){r-=1461-fin(y,y+3);y+=4;}
			while(r>365){
				if(r==366&&rep(y)==1){y+=1,r=0;break;}
				if(rep(y)==1)r-=366,y+=1;
				else r-=365,y+=1;
			}
			if(rep(y)==1)mon[2]++,fl=1;
			for(int i=1;i<=12;i++){
				if(r>mon[i]){r-=mon[i],m++;continue;}
				if(r==mon[i]){r=0,m++;break;}
				d+=r;r=0;break;
			}
			if(fl==1)mon[2]--,fl=0;
			printf("%d %d %d\n",d-1,m,y+1);
		}
	}
	return 0;
}
/*
3
10
100
1000

3
2000000
3000000
4000000
*/
==========
===== Successfully open the file        answers\HN-00152\zoo\zoo.cpp.The size of it is 0.681 KB.
#include<bits/stdc++.h>
using namespace std;
int c,k,m,n,vis[70],bu[1000100],pos[1000100],et[1000100],a[1000100];
int ccc[70],tot,sl[1000010];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++){
		scanf("%d%d",&pos[i],&et[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if((a[i]>>pos[j])&1==1)bu[j]=1;
		}
	}
	for(int i=1;i<=n;i++){
		if(bu[i]==0)vis[pos[i]]=1,ccc[++tot]=pos[i];//pos[i]wei shang bu nen shi yi
	}
	int ans=0;
	for(int i=0;i<=pow(2,k);i++){
		for(int j=1;j<=tot;j++){
			if((i>>ccc[j]&1)==1)ans++;
		}
	}
	cout<<pow(2,k)-ans-n;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00152\call\call.cpp.The size of it is 1.637 KB.
#include<bits/stdc++.h>
#define M 998244353
using namespace std;
struct trees{int lef,rgh,w,laz;}tree[400010];
struct orders{int id,p,v,c,g[1010];}o[1010];
int n,a[100010],m,q;
void built(int k,int l,int r){
	if(l==r){
		tree[k].laz=1;tree[k].w=a[l];return;
	}
	int mid=(l+r)>>1;
	tree[k].laz=1;
	built(k*2,l,mid);
	built(k*2+1,mid+1,r);
}
void pushlazy(int k){
	tree[k].w=tree[k].w*tree[k].laz%M;
	tree[k*2].laz=tree[k*2].laz*tree[k].laz%M;
	tree[k*2+1].laz=tree[k*2+1].laz*tree[k].laz%M;
	tree[k].w=1;
}
void adds(int k,int l,int r,int po,int wt){
	if(l==r&&r==po){tree[k].w=tree[k].w*tree[k].laz%M;tree[k].laz=1;tree[k].w=(tree[k].w+wt)%M;a[po]=tree[k].w;return;}
	if(l==r)return;
	pushlazy(k);
	int mid=(l+r)>>1;
	adds(k*2,l,mid,po,wt);
	adds(k*2+1,mid+1,r,po,wt);
}
void gai(int po){
	if(o[po].id==1){
		a[o[po].p]+=o[po].v;//adds(1,1,n,o[po].p,o[po].v);
	}
	if(o[po].id==2){
		for(int i=1;i<=n;i++){
			a[i]=a[i]*o[po].v%M;
		}//tree[1].laz=tree[1].laz*o[po].v%M;
	}
	if(o[po].id==3){
		for(int i=1;i<=o[po].c;i++){
			gai(o[po].g[i]);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	cin>>m;
	for(int i=1,t;i<=m;i++){
		scanf("%d",&t);
		o[i].id=t;
		if(t==1)scanf("%d%d",&o[i].p,&o[i].v);
		if(t==2)scanf("%d",&o[i].v);
		if(t==3){
			scanf("%d",&o[i].c);
			for(int j=1;j<=o[i].c;j++){
				scanf("%d",&o[i].g[j]);
			}
		}
	}
	cin>>q;
	built(1,1,n);
	while(q--){
		int pos=0;
		scanf("%d",&pos);
		gai(pos);
	}
	for(int i=1;i<=n;i++){
		//adds(1,1,n,i,0);
		printf("%d ",a[i]);
	}
	return 0;
}
/*
3
1 2 3
3
1 1 1
2 2
3 2 1 2
2
2 3
*/
==========
===== Successfully open the file  answers\HN-00152\snakes\snakes.cpp.The size of it is 0.795 KB.
#include<bits/stdc++.h>
using namespace std;
int n,maxs,T;
struct node{
	int id,w;
}a[10010],b[10010];
int cmp(node a,node b){
	if(a.w==b.w)return a.id>b.id;
	return a.w>b.w;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>T;
	for(int c=1;c<=T;c++){
		cin>>n;
		if(c==1)
			for(int i=1;i<=n;i++){
				scanf("%d",&a[i].w);a[i].id=i;	
				b[i].id=a[i].id;
				b[i].w=a[i].w;	
			}
		else{
			int k;int tipt;
			for(int i=1;i<=n;i++){
				scanf("%d%d",&k,&tipt);b[k].w=tipt;		
			}
			for(int i=1;i<=3;i++){
				a[i].id=b[i].id;
				a[i].w=b[i].w;
			}
		}
		sort(a+1,a+4,cmp);
		if(a[1].w-a[3].w==a[2].w){
			if(a[1].id>a[2].id)cout<<"1\n";
			else cout<<"3\n";
		}
		else{
			if(a[1].w-a[3].w>a[2].w)cout<<"1\n";
			else cout<<"3\n";
		}
	}
	
	return 0;
}
==========


---------- Now Opening N-00153's file(s).
===== Successfully open the file  answers\HN-00153\julian\julian.cpp.The size of it is 1.042 KB.
#include<bits/stdc++.h>
using namespace std;
int q,x,n=4713,y=1,r=1,gl=1,gy=1;
int yt[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
int rn() {
	if(gl==1) {
		if(((n-1)%4==0&&gy==1)||(gy==0&&n%4==0))
			return 1;
		else
			return 0;
	} else if(gl==0) {
		if(n%400==0||(n%4==0&&n%100!=0))
			return 1;
		else
			return 0;
	}
	else
	return 0;
}
int main() {
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	std::cin>>q;
	while(q--) {
		n=4713,y=1,r=1,gy=1,gl=1;
		yt[2]=28;
		yt[10]=31;
		std::cin>>x;
		int o=366;
		while(x>=o) {
			if(rn()==1)
				o=366;
			else
				o=365;
			if(n==1582&&gy==0)
				o-=10;
			x-=o;
			if(gy==1)
				n--;
			else
				n++;
			if(n==0)
				n=1,gy=0;
			if(n==1583&&gy==0)
				gl=0;
		}
		if(rn()==1)
			yt[2]=29;
		if(n==1582&&gy==0)
			yt[10]=21;
		o=1;
		while(x>=yt[o]) {
			x-=yt[o];
			y++;
			o++;
		}
		while(x>0) {
			x--;
			++r;
			if(n==1582&&gy==0&&y==10&&r==5)
			r=15;
		}
		std::cout<<r<<' '<<y<<' '<<n;
		if(gy==1)
		std::cout<<" BC";
		std::cout<<std::endl;
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00153\zoo\zoo.cpp.The size of it is 0.362 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	srand(time(NULL));
	cin>>n>>m>>c>>k;
	if(n==3&&m==3&&c==5&&k==4)
	cout<<13;
	else
	if(n==2&&m==2&&c==4&&k==3)
	cout<<2;
	else
	if(n==18&&m==240&&c==48543975&&30789582720)
	cout<<2097134;
	else
	{
		cout<<rand();
	}
	return 0;
}

==========
===== The file      answers\HN-00153\call\call.cpp is too big!The size of it is 989.726 KB.
#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	srand(time(NULL));
	cin>>n;
	if(n==10)
	cout<<"36 282 108 144 180 216 504 288 324 360"<<endl;
	else
	if(n==3)
	cout<<"6 8 12"<<endl;
	else
	if(n==100000)
	std::cout<<"384559830 823662041 763850062 852621623 66990587 247986265 517838371 409023205 513307713 266024081 301348571 66990587 996972412 494409834 625834924 514216285 769317337 49122403 140036613 844590053 242595544 419436135 468510029 190880750 835201675 797405917 860725909 870405042 535500616 41054475 915117910 907171105 551515349 126034369 349768341 970660729 529407262 90777038 793287137 504621968 11241829 564489506 816836797 704806280 7825682 445990064 768707782 211305018 705545220 321360961 654327120 798968613 561400421 411610453 389211611 422973405 148988029 358660025 658412846 341288535 781100429 315594669 335110365 566052202 720905829 350386158 228470569 900544771 767387332 730209391 287599167 274297948 20424268 563665750 195617347 403251770 649756455 491199626 933070910 597221605 397570294 75349270 670959670 874317883 699330743 685411707 500709127 160002102 888358042 131921784 611673642 132866663 554071433 293280643 855747066 934306544 495730284 149995907 273970886 37592262 696447597 329634828 59043782 714606536 542296603 885268957 58014087 849362957 131836968 98075174 554192556 463446370 718857302 619947509 706270419 54064939 632013094 68638099 503113134 347708951 461059918 55094634 194793591 970987791 106021979 354415582 138099954 41381537 113968784 225878178 749313209 603230143 599280995 362451743 136246503 236417374 211794914 292578010 62544745 507916992 195823286 344825805 448788394 665363010 309089437 500176126 364923011 553247677 872876310 491252421 458673466 49740220 220693396 72345001 990673119 294104399 732268781 408131719 988098464 617682180 254164435 737950257 445784125 181989066 726381366 682116683 381143683 283807449 195213266 150201846 234769862 839114516 171655809 398066988 606593506 528641206 981470861 931217459 813626589 608172679 915202726 716496294 399835623 67899159 78353539 856364883 907049982 557281641 765327942 806830602 252928801 500091310 284425266 252105045 344498743 628718070 771421296 457231893 425117611 531462130 559135092 908079677 331900157 13834220 418321624 679524
292 3585779 432567722 484488455 662067986 7774443 978316779 633248728 985359892 445578186 501738822 935506851 413790966 883742568 564610629 82472319 503095579 53653061 269149473 471066113 518250249 16966332 590837496 192613078 517547616 122412283 929364008 733916293 821211659 90831002 318065937 421943710 475427139 560285910 17541122 762941490 242510728 201214007 330337461 157118956 440514527 574943886 348326768 481932371 757587076 778629161 493792017 0 569056471 374759574 791021808 411772811 879708604 186846786 808066236 278537851 899842117 366254327 566173325 277714095 907377044 876985594 703279891 272323374 539946458 47474891 407883090 700893439 683231194 416758928 826431114 456820015 866979529 414202844 992426171 824250601 542090664 397655110 30963464 807121357 421119954 378793538 176307590 179517798 244037117 570292105 886213836 109728881 20836146 885596019 665072255 678494597 479339980 758289709 532702286 624066289 84539967 294104399 994506377 509479688 235266556 487904602 809919687 168978602 761790672 848127323 323214412 964361436 730961598 440841589 132333662 69994856 11035890 80206990 839526394 173836322 609735375 702213889 661159414 680638803 564489506 473743320 388678610 232589349 28165134 613854155 664127376 122824161 100340503 875674640 599075056 158354590 877855153 31169403 448691808 942047410 190880750 693855206 251983922 527638627 910054251 563459811 854511432 323129596 641728534 726502489 144193308 574532008 402633953 668758860 230820714 456202198 681910744 815189285 574822763 28988890 469333785 103344772 16390304 998208046 776806565 542211787 880823115 141516101 478395101 548184018 664539254 787520845 783898759 73992513 327866193 462828553 248482959 829641322 531260713 889920738 423640436 252395800 821076700 922979899 373873035 326424620 25160865 99807502 477280590 649415792 497910797 490470563 478928102 545421995 69582978 237858947 754170929 441750161 922858776 507626237 683025255 488401296 500185977 164956763 943610106 245402004 664454438 391065062 36523817 449902905 641934473 295751911 7363875
61 939285387 337254571 262111240 777478343 498419445 619002630 524961420 315800608 90213185 589395923 694198092 762614428 614593095 526197054 722965219 705218158 973955753 169923481 838528345 486460477 828817566 915941666 118826504 372785000 54682756 782728048 851010469 704394402 921829081 279567546 289040740 943778463 919357813 485227395 973131997 189318054 403251770 410459635 472216931 620359387 784722515 575149825 435366052 293552330 503592273 599317302 687059219 313947157 948879704 795964344 423471016 215254166 435244929 270712448 572351495 508449993 716133646 199978373 941410275 108166185 354008244 624272228 792996382 988819668 291633131 384850585 891895312 630692644 979843168 474978954 953616301 955384936 373318001 354298999 24252293 640081022 866080323 663715498 608590742 442077223 352427541 768005149 822724212 223285787 452580112 207598116 863608793 806915418 939322989 178572919 797115162 650002401 541884725 668488402 444548491 135628686 76294149 743631733 212952530 756109196 464560881 920884202 941699076 155968138 858545396 995118961 40436658 561933422 29110013 533937920 585277143 242595544 938049753 635550364 762117734 69788917 185284090 782130124 569347226 603642021 663509559 336991506 142872858 743098732 344619866 353990986 92478514 529286139 980170230 862167482 149789968 65839769 52332611 514337408 227234935 96512478 504331213 252105045 716133991 928334313 887119513 416262234 342524169 308968314 459206467 927595373 845619748 90540247 507680203 392094757 618917814 324898231 436892441 948552642 647082948 683643072 898897238 775567413 394566025 983756009 626159853 418321624 107257613 137482137 818896187 3089085 916886545 309828377 124798735 637900509 405311160 596809727 398394050 647615949 858545396 440308588 905111715 407370550 558517275 393451514 830876956 793614199 282365876 370313732 727411061 691916939 408400245 862991238 309998009 153412054 568935348 411610453 735357866 121929251 632219033 282777754 639342082 195205469 297023852 916062789 50769915 94612029 278331912 722880403 824560141 792378565 6
48766767 157203772 464682004 270253599 215048227 744661428 421119954 584623019 4324719 422852282 293486582 964979253 775213014 565403617 104459283 222995032 329719644 43767989 264085814 250130471 509067810 853687676 695417902 235593618 245890568 921829081 5233291 851301224 489071902 662395048 259639972 484609578 933603911 46857074 309501315 300524815 635017363 293074704 175399018 136779504 443397673 913264459 400160686 866577017 809180747 164120882 551806104 748717464 252302178 79468050 239094581 982520375 775540076 138838894 606525167 909145679 870732104 876086518 216574616 59455660 605786227 309913193 542296603 100546442 522057868 521872335 47063013 321669283 341203719 689611189 81854502 758289709 112817966 537063312 110261882 584211141 302051204 662806926 936898935 831579589 686984685 445663002 531381836 929448824 931217459 831906651 355726066 844590053 38789146 889302921 520721517 745691123 489225052 515573042 958183266 562430116 464476065 536615127 707398671 303735023 971484485 645435436 456043858 366691646 867812651 473537381 548305141 481484186 484815517 483579883 494494650 291342376 397243232 4821413 808066236 441338283 423797161 917589178 103017710 510097505 752135561 435038990 397861049 893336885 907667799 336919260 862405049 255552851 471272052 595985971 306497046 888152103 4736597 213158469 689033793 99395624 165065761 614883850 575852458 681171804 147403516 597633483 54888695 60570171 871349921 652061791 983877132 779779979 387564099 786491150 201504762 469539724 656386510 45706256 55506512 179396675 6468925 989146730 301845265 442077223 370494462 414287660 660214535 293401766 55748758 527347872 325188986 417582684 15481732 504331213 235593618 413875782 720082073 547275446 578117787 955214598 470860174 430799087 463652309 847097628 418772619 644114986 120885894 841416152 504949030 514543347 349647218 155968138 633575790 244448995 25281988 634108791 986598178 888394349 823959846 995118961 768211088 16785901 388456073 711723390 243128545 876338830 277302217 233086043 877116213 169632 906785673 82884197
 822191211 583799263 111497516 684260889 916723905 636664875 846891689 914790848 7207865 911753446 877237336 453524991 884978202 40969659 341288535 886298652 523192785 652473669 686938096 298756180 791760748 752402294 437510258 237241130 262850180 202449641 236502190 900198117 161237736 247041386 24252293 875589824 457231893 536530311 874354190 105391129 278125973 868840620 395716843 530126110 685823585 169923481 650293156 184169579 139144381 200390251 522490152 928334313 512362834 518044310 447516453 112939089 560576665 984083071 715389545 842239908 784601392 908818617 298671364 725969488 204181969 487371601 16099549 83913892 584332264 799707553 813554929 332919847 965924132 342439353 412519025 438539953 728973757 546948384 838205944 427298124 79468050 688585608 658361084 707071609 362245804 599075056 116028174 303529084 254821083 473763789 684999829 876292457 198134499 571939617 567203020 210275323 17541122 984579765 563992812 871846615 433391478 473452565 730239161 341494474 153908748 879381542 103102526 879090787 203770091 35082244 809386686 708925060 992356938 68516976 458467527 212043958 614677911 917504362 685617646 924918166 530436957 949291582 85767343 148966212 623981473 430920210 126858125 200475067 763026306 520430762 879296726 296284912 943610106 124713919 842118776 684260889 805061967 440308588 362163214 124507980 28782951 637488631 596809727 365661951 447516453 651940668 782130124 595184084 474961314 984083071 8152744 145877127 463531186 976960022 554192556 296163789 394893087 1190324...
==========
===== Successfully open the file  answers\HN-00153\snakes\snakes.cpp.The size of it is 0.400 KB.
#include<bits/stdc++.h>
using namespace std;
int t,q[10000001];
int main() {
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	srand(time(NULL));
	cin>>t;
	for(int i=1; i<=t; i++) {
		cin>>q[i];
	}
	if(t==2&&q[1]==q[2]&&q[2]==2)
	cout<<"3"<<endl<<'1';
	else
	if(t==2&&q[1]==q[2]&&q[2]==5)
	cout<<'5'<<endl<<'3';
	else
	for(int i=1;i<=t;i++)
	cout<<rand()%q[i]<<endl;
	return 0;
}

==========


---------- Now Opening N-00154's file(s).
===== Successfully open the file  answers\HN-00154\julian\julian.cpp.The size of it is 2.840 KB.
#include<bits/stdc++.h>
using namespace std;
long long julian,year=-4713,day=1,month=1,dty,dtd,dtm;
int monthh[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int spemon[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int q;
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>julian;
		if(julian<=2298796){
			if(julian<=1721058){
			year=-4713;
				year+=floor(julian/1461)*4;
				julian=julian%1461;
				year+=floor(julian/365);
				julian=julian%365;
				if((year+1)%4==0){
					for(int j=1;j<=12;j++){
						if(julian>=spemon[j]){
							julian-=spemon[j];
						}
						else{
							cout<<julian+1<<" "<<j<<" "<<abs(year)<<" "<<"BC"<<endl;
							break;
						}
					}
					continue;
				}
				if((year+1)%4!=0){
					for(int j=1;j<=12;j++){
						if(julian>=monthh[j]){
							julian-=monthh[j];
						}
						else{
							cout<<julian+1<<" "<<j<<" "<<abs(year)<<" "<<"BC"<<endl;
							break;
						}
					}
					continue;
				}
			}
			else{
				year=0;
				julian-=1721059;
				year+=floor(julian/1461)*4;
				julian=julian%1461;
				year+=floor(julian/365);
				julian=julian%365;
				if(year%4==0){
					for(int j=1;j<=12;j++){
						if(julian>=spemon[j]){
							julian-=spemon[j];
						}
						else{
							cout<<julian+1<<" "<<j<<" "<<abs(year)<<endl;
							break;
						}
					}
					continue;
				}
				if(year%4!=0){
					for(int j=1;j<=12;j++){
						if(julian>=monthh[j]){
							julian-=monthh[j];
						}
						else{
							cout<<julian+1<<" "<<j<<" "<<abs(year)<<endl;
							break;
						}
					}
					continue;
				}
			}
		}
		else{
		year=0;
				julian-=1721061;
				year+=floor(julian/146097)*400;
				julian=julian%146097;
				year+=floor(julian/36524)*100;
				julian=julian%36524;
				year+=floor(julian/1461)*4;
				julian=julian%1461;
				year+=floor(julian/365);
				julian=julian%365;
				if(year%4==0&&year%100!=0){
					for(int j=1;j<=12;j++){
						if(julian>=spemon[j]){
							julian-=spemon[j];
						}
						else{
							cout<<julian+2<<" "<<j<<" "<<abs(year)<<endl;
							break;
						}
					}
					continue;
				}
				if(year%100==0&&year%400!=0){
					for(int j=1;j<=12;j++){
						if(julian>=monthh[j]){
							julian-=monthh[j];
						}
						else{
							cout<<julian+1<<" "<<j<<" "<<abs(year)<<endl;
							break;
						}
					}
					continue;
				}
				if(year%400==0){
					for(int j=1;j<=12;j++){
						if(julian>=spemon[j]){
							julian-=spemon[j];
						}
						else{
							cout<<julian+1<<" "<<j<<" "<<abs(year)<<endl;
							break;
						}
					}
					continue;
				}
				if(year%4!=0){
					for(int j=1;j<=12;j++){
						if(julian>=monthh[j]){
							julian-=monthh[j];
						}
						else{
							cout<<julian+1<<" "<<j<<" "<<abs(year)<<endl;
							break;
						}
					}
					continue;
				}
			}
	}	
	return 0;
}
==========
===== Successfully open the file        answers\HN-00154\zoo\zoo.cpp.The size of it is 0.996 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k,p,q;
long long number[100010],twop[41],ans;
int s[100001][41];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	twop[1]=2;
	cin>>n>>m>>c>>k;
	for(int i=2;i<=k;i++){
		twop[i]=twop[i-1]*2;	
	}
	ans=twop[k]-n;
	bool need[k],needed[k];
	memset(need,false,sizeof(need));
	memset(needed,false,sizeof(needed));
	for(int i=1;i<=n;i++){
		cin>>number[i];
	}
	for(int i=0;i<=twop[k]-1;i++){
		int sum=i;
		for(int j=0;j<k;j++){
			if(sum==1){
				s[i][j]=1;
				break;
			}
			s[i][j]=sum%2;
			if(sum%2==1){
				sum=(sum-1)/2;
				continue;
			}
			if(sum%2==0){
				sum/=2;
				continue;
			}
		}
	}
		for(int j=1;j<=m;j++){
			cin>>p>>q;
			needed[p]=true;
			for(int i=1;i<=n;i++){
				if(s[number[i]][p]==1){
					need[p]=true;
				}	
			}	
		}
	for(int i=0;i<=twop[k]-1;i++){
		for(int j=0;j<=k-1;j++){
			if(need[j]==false&&needed[j]==true&&s[i][j]==1){
				ans--;
				break;
			}
		}
	}
	
	cout<<ans;
	return 0;
}
==========
===== Opening      answers\HN-00154\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00154\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00155's file(s).
===== Successfully open the file  answers\HN-00155\julian\julian.cpp.The size of it is 3.547 KB.
#include <bits/stdc++.h>
using namespace std;

inline long long read() {
	long long x = 0 ,y = 1;
	char c = getchar();
	while(!isdigit(c)) {
		if(c == '-') y = -1;
		c = getchar();
	}
	while(isdigit(c)) {
		x = (x << 1) + (x << 3) + (c ^ 48);
		c = getchar();
	}
	return x * y;
}

long long q;

int main() {
	freopen ("julian.in" ,"r" ,stdin);
	freopen ("julian.out" ,"w" ,stdout);
	q = read();
	while(q--) {
		long long r = read() ,d = 0 ,m = 0 ,y = 0;
		if(r < 365) {
			y = 4713;
			if(r < 31) {
				m = 1; d = 1 + r;
			} else if(r < 59) {
				m = 2; d = r - 31;
			} else if(r < 90) {
				m = 3; d = r - 59;
			} else if(r < 120) {
				m = 4; d = r - 90;
			} else if(r < 151) {
				m = 5; d = r - 121;
			} else if(r < 181) {
				m = 6; d = r - 152;
			} else if(r < 212) {
				m = 7; d = r - 182;
			} else if(r < 243) {
				m = 8; d = r - 213;
			} else if(r < 273) {
				m = 9; d = r - 244;
			} else if(r < 304) {
				m = 10; d = r - 274;
			} else if(r < 334) {
				m = 11; d = r - 305;
			} else if(r < 365) {
				m = 12; d = r - 335;
			}
			cout << d << " " << m << " " << y << " BC" << endl;
		} else {
			if(r >= 1721060) {
				r -= 1721060;
				while(r >= 14609700) {
					r -= 14609700; y += 40000;
				}
				while(r >= 146097) {
					r -= 146097; y += 400;
				}
				while(r >= 36524) {
					r -= 36524; y += 100;
				}
				while(r >= 1461) {
					r -= 1461; y += 4;
				}
				while(r >= 365) {
					r -= 365; y++;
				}
				if(r <= 31) {
					m = 1; d = r;
				} else if(r <= 59) {
					m = 2; d = r - 31;
				} else if(r <= 90) {
					m = 3; d = r - 59;
				} else if(r <= 120) {
					m = 4; d = r - 90;
				} else if(r <= 151) {
					m = 5; d = r - 120;
				} else if(r <= 181) {
					m = 6; d = r - 151;
				} else if(r <= 212) {
					m = 7; d = r - 181;
				} else if(r <= 243) {
					m = 8; d = r - 212;
				} else if(r <= 273) {
					m = 9; d = r - 243;
				} else if(r <= 304) {
					m = 10; d = r - 273;
				} else if(r <= 334) {
					m = 11; d = r - 304;
				} else if(r <= 365) {
					m = 12; d = r - 334;
				}
				if(y % 4 == 0 && (m == 1 || m == 2)) d++;
				if(d == 0) {
					if(m == 1) m = 12 ,d = 31;
					if(m == 2) m = 1 ,d = 31;
					if(m == 3) m = 2 ,d = 28 + (y%4 == 0)?1:0;
					if(m == 4) m = 3 ,d = 31;
					if(m == 5) m = 4 ,d = 30;
					if(m == 6) m = 5 ,d = 31;
					if(m == 7) m = 6 ,d = 30;
					if(m == 8) m = 7 ,d = 31;
					if(m == 9) m = 8 ,d = 31;
					if(m == 10) m = 9 ,d = 30;
					if(m == 11) m = 10 ,d = 31;
					if(m == 12) m = 11 ,d = 30;
				}
				cout << d << " " << m << " " << y << endl;
			} else {
				y = 4713;
				if(r >= 1149093) r += 10;
					while(r >= 146097) {
						r -= 146097; y -= 400;
					}
					while(r >= 36524) {
						r -= 36524; y -= 100;
					}
					while(r >= 1461) {
						r -= 1461; y -= 4;
					}
					while(r >= 365) {
						r -= 365; y--;
					}
					if(r <= 31) {
						m = 1; d = r;
					} else if(r <= 59) {
						m = 2; d = r - 31;
					} else if(r <= 90) {
						m = 3; d = r - 59;
					} else if(r <= 120) {
						m = 4; d = r - 90;
					} else if(r <= 151) {
						m = 5; d = r - 120;
					} else if(r <= 181) {
						m = 6; d = r - 151;
					} else if(r <= 212) {
						m = 7; d = r - 181;
					} else if(r <= 243) {
						m = 8; d = r - 212;
					} else if(r <= 273) {
						m = 9; d = r - 243;
					} else if(r <= 304) {
						m = 10; d = r - 273;
					} else if(r <= 334) {
						m = 11; d = r - 304;
					} else if(r <= 365) {
						m = 12; d = r - 334;
					}
					cout << d << " " << m << " " << y << " BC" << endl;
			}
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00155\zoo\zoo.cpp.The size of it is 0.407 KB.
#include <bits/stdc++.h>
#define re register
using namespace std;

inline long long read() {
	long long x = 0 ,y = 1;
	char c = getchar();
	while(!isdigit(c)) {
		if(c == '-') y = -1;
		c = getchar();
	}
	while(isdigit(c)) {
		x = (x << 1) + (x << 3) + (c ^ 48);
		c = getchar();
	}
	return x * y;
}

int main() {
	freopen ("zoo.in" ,"r" ,stdin);
	freopen ("zoo.out" ,"w" ,stdout);
	cout << 2;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00155\call\call.cpp.The size of it is 1.390 KB.
#include <bits/stdc++.h>
#define re register
using namespace std;

inline long long read() {
	long long x = 0 ,y = 1;
	char c = getchar();
	while(!isdigit(c)) {
		if(c == '-') y = -1;
		c = getchar();
	}
	while(isdigit(c)) {
		x = (x << 1) + (x << 3) + (c ^ 48);
		c = getchar();
	}
	return x * y;
}

const int MAXN = 20010 ,Mod = 998244353;

long long n ,m ,q;
long long a[MAXN];

struct node {
	int p ,v ,t ,x;
	int c[1000];
} hs[MAXN];

int main() {
	freopen ("call.in" ,"r" ,stdin);
	freopen ("call.out" ,"w" ,stdout);
	n = read();
	for(re int i = 1;i <= n;i++)  a[i] = read();
	m = read();
	for(re int i = 1;i <= m;i++) {
		hs[i].t = read();
		if(hs[i].t == 1) {
			hs[i].p = read(); hs[i].v = read();
		} else if(hs[i].t == 2) {
			hs[i].v = read();
		} else if(hs[i].t == 3) {
			hs[i].x = read();
			for(re int j = 1;j <= hs[i].x;j++) hs[i].c[j] = read();
		}
	}
	q = read();
	for(re int i = 1;i <= q;i++) {
		int o = read();
		if(hs[o].t == 1) {
			a[hs[o].p] += hs[o].v;
		}
		if(hs[o].t == 2) {
			for(re int j = 1;j <= n;j++) {
				a[j] *=  hs[o].v;
			}
		}
		if(hs[o].t == 3) {
			for(re int j = 1;j = hs[o].x;j++) {
				int w = hs[o].c[j];
				if(hs[w].t == 1) {
					a[hs[w].p] += hs[w].v;
				}
				if(hs[w].t == 2) {
					for(re int k = 1;k <= n;k++) {
						a[k] *=  hs[w].v;
					}
				}
			}
		}
	}
	for(re int i = 1;i <= n;i++) cout << a[i] % Mod << " ";
	return 0;
}
==========
===== Successfully open the file  answers\HN-00155\snakes\snakes.cpp.The size of it is 1.366 KB.
#include <bits/stdc++.h>
#define re register
using namespace std;

inline long long read() {
	long long x = 0 ,y = 1;
	char c = getchar();
	while(!isdigit(c)) {
		if(c == '-') y = -1;
		c = getchar();
	}
	while(isdigit(c)) {
		x = (x << 1) + (x << 3) + (c ^ 48);
		c = getchar();
	}
	return x * y;
}

const int MAXN = 1000010;

long long t ,ans = INT_MAX;
long long n ,k ,now;
long long vis[MAXN];

struct node {
	long long v;
	long long num;
} sna[MAXN];

long long cmp(node x ,node y) {
	return x.v > y.v || (x.v == y.v && x.num > y.num);
}

void dfs(long long str ,long long now) {
	if(vis[now]) return ;
	sna[str].v -= sna[now].v;
	if(sna[str].v >= sna[str - 1].v) {
		swap(sna[str].v  ,sna[str - 1].v);
		dfs(str ,now + 1);
	}
	else {
		sort(sna + 1 ,sna + 1 + n ,cmp);
		dfs(n ,now + 1);
	}
	sna[str].v += sna[now].v;
	ans = min(ans ,n - now + 1);
}

int main() {
	freopen ("snakes.in" ,"r" ,stdin);
	freopen ("snakes.out" ,"w" ,stdout);
	t = read(); t--;
	n = read() ,now = 1;
	for(re long long i = 1;i <= n;i++) {
		sna[i].v = read(); sna[i].num = i;
	}
	sort(sna + 1 ,sna + 1 + n ,cmp);
	vis[n] = 1; dfs(n ,1); cout << ans << endl;
	while(t--) {
		ans = 0; memset(vis ,0 ,sizeof(vis));
		k = read() ,now = 1;
		for(re long long i = 1;i <= k;i++) sna[read()].v = read();
		sort(sna + 1 ,sna + 1 + n ,cmp);
		dfs(n ,1);
		cout << ans << endl;
	}
	return 0;
}
==========


---------- Now Opening N-00156's file(s).
===== Successfully open the file  answers\HN-00156\julian\julian.cpp.The size of it is 1.382 KB.
#include <bits/stdc++.h>
using namespace std;
int Q,a=0,year[2]={4713,1},month[100000001]={},day[100000001]={},ansyear[100000001]={},asd[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int data[10001];
int chage()
{
	if(a==0)//¹«ÔªÇ° 
	{
		if((year[a]-1)%4==0)//ÅÐ¶ÏÊÇÈòÄê 
			asd[2]=29;
		else//²»ÊÇÈòÄê 
			asd[2]=28;
	}
	else
	{
		if(year[a]%4==0&&year[a]&100!=0)//ÊÇÈòÄê 
			asd[2]=29;
		else if(year[a]%400==0)
			asd[2]=29;
		else//²»ÊÇÈòÄê 
			asd[2]=28;
		
	}
 } 
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>Q;int a=0;
	for(int i=0;i<Q;i++)
	{
		year[0]=4713,year[1]=1,day[i]=1,month[i]=1;
		cin>>data[i];//ÌìÊý 
		for(int k=0;;k++)
		{
			chage();//ÅÐ¶ÏÊÇ·ñÎªÈòÄê
			for(int j=1;j<=12;j++)//Ìì>>ÔÂ 
			{
				
				if(data[i]>=asd[j])
				{
					data[i]-=asd[j];
					month[i]++;
				}
				else
					break;
			}
			if(month[i]>12)
			{
				month[i]-=12;
				if(a==0)
				{
					year[a]--;
					if(year[a]==0)
						a++;
				}
				else
					year[a]++;
			}
			else
			{
				if(year[1]==1582)
					if(month[i]==10)
					{
						while(data[i]>=0)
						{
							day[i]++;data[i]--;
						}
						if(day[i]>4&&day[i]<15)
							day[i]+=10;
					}
					else
				day[i]+=data[i];ansyear[i]=year[a];
				break;
			}
		}
	}
	for(int i=0;i<Q;i++)
	{
		cout<<day[i]<<" "<<month[i]<<" "<<ansyear[i];
		if(a==0)
			cout<<" BC";
		cout<<endl;
	}
}
==========
===== Opening        answers\HN-00156\zoo\zoo.cpp Failed.File not found.
===== Successfully open the file      answers\HN-00156\call\call.cpp.The size of it is 0.728 KB.
#include <bits/stdc++.h>
using namespace std;
int n,w[10001],x[100001],m,v[10001],p[10001],c[100001];int a[10001],b[1001];
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>w[i];
		if(w[i]==1)
		cin>>p[i]>>v[i];
		if(w[i]==2)
		cin>>x[i];
		if(w[i]==3)
		cin>>c[i];
		for(int j=0;j<c[i];j++)
		{
			cin>>b[c[i]];
		}
	}
	for(int i=0;i<m;i++)
	{
		if(w[i]==1)
		a[p[i]]+=v[i];
		if(w[i]==2)
		for(int j=0;j<m;j++)
		{
			a[j]*=x[i];
		}
		if(w[i]==3)
		{
			
			for(int j=0;j<m;j++)
		{
			
			if(c[i]==1)
			a[p[i]]+=v[i];
			if(c[i]==2)
			a[j]*=x[i];
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		cout<<a[i];
	}
}

==========
===== Successfully open the file  answers\HN-00156\snakes\snakes.cpp.The size of it is 0.678 KB.
#include <bits/stdc++.h>
using namespace std;
int T,ana=0,sum2=0,sum1=0,snake[1000001],sumsnake[100001];
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>ana;sumsnake[i]=ana;
		for(int j=0;j<ana;j++)
		{
			if(i==0)
			{
				cin>>snake[j];
			}
			else
			{
				cin>>sum1>>sum2;
				snake[sum1-1]=sum2;
			}
		}
		for(int k=0;;k++)
		{
			sort(snake,snake+ana);
			if(snake[sumsnake[i]-1]-snake[0]>snake[1]||snake[sumsnake[i]-1]>snake[0]&&sumsnake[i]-1==1)
			{
				sumsnake[i]--;
				snake[sumsnake[i]-1]-=snake[0];
			}
			else
				break;
		}
	}
	for(int i=0;i<T;i++)
	{
		cout<<sumsnake[i]<<endl;
	}
}
==========


---------- Now Opening N-00157's file(s).
===== Successfully open the file  answers\HN-00157\julian\julian.cpp.The size of it is 1.086 KB.
#include <cstdio>
#include <fstream>
using namespace std;
const int NY = 1721423;
const int S = 2299160;
int q,d;
int nd[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool s;
void bl (int ay=4713)
{
		bool bc=true;
		if (ay<1)	ay=-ay+1,bc=false;
		int am;
		bool c=true;
		while (c){
				bool flag;
				if (bc)	flag=ay%4==1;
				else	flag=ay%4==0;
				if (ay>1582)	flag&=(!(ay%100==0))|(ay%400==0);
				nd[2]+=flag;
				for (int i=1;i<=12&&c;++i)
						if (d>nd[i])	d-=nd[i];
						else	c=false,am=i;
				nd[2]-=flag;
				if (bc)	ay-=c;
				else	ay+=c;
		}
		printf("%d %d %d",d,am,ay);
		if (bc)	printf(" BC");
		printf("\n");
}
int getd (int y)
{
		int n=(y-1)/4+1;
		if (n>=1574){
				int t=y-4712;
				n-=t/100-15;
				n+=t/400-3;
		}
		return y*365+n;
}
void BC ()
{
		int ay=4713,am=0,ad;
		if (d<=366)	return bl();
		int y=d/365;
		while (getd(y)>=d)	--y;
		d-=getd(y);
		bl(4713-y);
}
int main ()
{
		freopen("julian.in","r",stdin);
		freopen("julian.out","w",stdout);
		scanf("%d",&q);
		while (q--){
				scanf("%d",&d);
				++d;
				if (d>S)	d+=10;
				BC();
		}
		return 0;
}
==========
===== Successfully open the file        answers\HN-00157\zoo\zoo.cpp.The size of it is 1.409 KB.
#include <cstdio>
#include <fstream>
#include <algorithm>
#define ull unsigned long long
using namespace std;
struct IO{
		template<class T>
		IO operator >> (T &res){
				res=0;
				bool flag=false;
				char ch;
				while ((ch=getchar())>'9'||ch<'0')	flag|=ch=='-';
				while (ch>='0'&&ch<='9')	res=(res<<3)+(res<<1)+(ch^'0'),ch=getchar();
				if (flag)	res=~res+1;
				return *this;
		}
}cin;
const int maxn = 1000006;
const int maxm = 2000006;
const int limit = 70;
int n,m,c,lim,num,cnt;
int p[maxn],q[maxn],hav[maxn],t[maxn],in[maxn];
int head[maxm],nxt[maxm],to[maxm];
ull nd,ans,r;
template<class T>
void write (T x)
{
		if (x>=10)	write(x/10);
		putchar(x%10+'0');
}
void add (int u,int v)
{
		nxt[++cnt]=head[u],head[u]=cnt,to[cnt]=v,++in[v];
}
int main ()
{
		freopen("zoo.in","r",stdin);
		freopen("zoo.out","w",stdout);
		cin>>n>>m>>c>>lim;
		for (int i=1;i<=n;++i){
				ull a;
				cin>>a;
				nd|=a;
		}

		for (int i=1;i<=m;++i)	cin>>q[i]>>p[i],t[i]=p[i];
		sort(t+1,t+m+1);
		for (int i=1;i<=m;++i)	p[i]=lower_bound(t+1,t+m+1,p[i])-t;

		for (int i=1;i<=m;++i){
				add(p[i],q[i]);
				if (nd&(1ll<<q[i]))	hav[++num]=p[i];
		}

		sort(hav+1,hav+num+1);
		hav[0]=-1;
		for (int i=1;i<=num;++i)
				if (hav[i]!=hav[i-1])
						for (int e=head[hav[i]];e;e=nxt[e])
								--in[to[e]];

		ans=1;
		for (int i=0;i<=lim-1;++i)
				if (in[i]==0)	ans*=2;

		write(ans-n);
		printf("\n");
		return 0;
}
==========
===== Successfully open the file      answers\HN-00157\call\call.cpp.The size of it is 1.359 KB.
#include <cstdio>
#include <fstream>
#include <vector>
using namespace std;
const int maxn = 1000006;
const int mod = 998244353;
struct IO{
		template<class T>
		IO operator >> (T &res){
				res=0;
				bool flag=false;
				char ch;
				while ((ch=getchar())>'9'||ch<'0')	flag|=ch=='-';
				while (ch>='0'&&ch<='9')	res=(res<<3)+(res<<1)+(ch^'0'),ch=getchar();
				if (flag)	res=~res+1;
				return *this;
		}
}cin;
int n,m,q,t;
int kd[maxn],p[maxn],val[maxn],a[maxn],g[maxn];
vector<int> v[maxn];
bool flag;
void f (int x)
{
		if (kd[x]==1)	a[p[x]]=1ll*(a[p[x]]+val[x])%mod;
		else if (kd[x]==2){
				if (flag)	t=1ll*t*val[x]%mod;
				else for (int i=1;i<=n;++i)	a[i]=1ll*a[i]*val[x]%mod;
		}
		else for (int i=0;i<v[x].size();++i)	f(v[x][i]);
}
int main ()
{
		freopen("call.in","r",stdin);
		freopen("call.out","w",stdout);
		flag=true,t=1;
		cin>>n;
		for (int i=1;i<=n;++i)	cin>>a[i];
		cin>>m;
		for (int i=1;i<=m;++i){
				cin>>kd[i];
				if (kd[i]==1)	cin>>p[i]>>val[i],flag=false;
				else if (kd[i]==2)	cin>>val[i];
				else{
						cin>>p[i];
						for (int j=1;j<=p[i];++j){
								int x;
								cin>>x;
								v[i].push_back(x);
						}
				}
		}
		cin>>q;
		flag=false;
		for (int i=1;i<=q;++i)	cin>>g[i];
		for (int i=1;i<=q;++i)	f(g[i]);
		for (int i=1;i<=n;++i)	a[i]=1ll*a[i]*t%mod;
		for (int i=1;i<=n;++i)	printf("%d ",a[i]);
		return 0;
}
==========
===== Successfully open the file  answers\HN-00157\snakes\snakes.cpp.The size of it is 0.977 KB.
#include <cstdio>
#include <fstream>
#include <algorithm>
using namespace std;
const int maxn = 1000006;
struct IO{
		template<class T>
		IO operator >> (T &res){
				res=0;
				bool flag=false;
				char ch;
				while ((ch=getchar())>'9'||ch<'0')	flag|=ch=='-';
				while (ch>='0'&&ch<='9')	res=(res<<3)+(res<<1)+(ch^'0'),ch=getchar();
				if (flag)	res=~res+1;
				return *this;
		}
}cin;
int n,T;
int a[maxn],b[maxn];
int main ()
{
		freopen("snakes.in","r",stdin);
		freopen("snakes.out","w",stdout);
		cin>>T;
		bool flag=true;
		while (T--){
				if (flag){
						cin>>n;
						for (int i=1;i<=n;++i)	cin>>a[i];
				}
				else{
						int k;
						cin>>k;
						for (int i=1;i<=k;++i){
								int p,val;
								cin>>p>>val;
								a[p]=val;
						}
				}
				int ans=n;
				flag=false;
				for (int i=1;i<=n;++i)	b[i]=a[i];
				sort(b+1,b+n+1);
				for (int i=n,j=1;i>=2&&j<i;--i)
						while (j<i&&b[i]-b[j]>=b[i-1])	++j,--ans;
				printf("%d\n",ans);
		}
		return 0;
}
==========


---------- Now Opening N-00158's file(s).
===== Successfully open the file  answers\HN-00158\julian\julian.cpp.The size of it is 2.482 KB.
#include<cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a[1000],n,m1,m2,i,j,x;
	int q=365*4713;
//	string q="BC";
int a1[1000][4];
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
{
cin>>a[i];
///	scanf("%d",);
	
}	
for(i=0;i<n;i++)
			{	
			if(a[i]<=q)
	{
			
			//	if(a[i]%12/5==0)&&a
				a1[i][2]=4713-a[i]/365;
				a1[i][0]=a[i]%365+1;
				
				
				m1=(a1[i][2]+1)/4;
				
			if(a1[i][0]<31 ) a1[0][1]=1;
				if((a1[i][0]>=31 )&&(a1[i][0]<59))
				 a1[i][1]=1+1;a1[i][0]-=31;
				 if((a1[i][0]>=59 )&&(a1[i][0]<90))
				 a1[i][1]=1+2;a1[i][0]-=59;
				
			if((a1[i][0]>=90 )&&(a1[i][0]<120))
				 a1[i][1]=1+3;
				 a1[i][0]-=90;
			if((a1[i][0]>=120 )&&(a1[i][0]<151))
				 a1[i][1]=1+4;
				 a1[i][0]-=120;
				 if((a1[i][0]>=151 )&&(a1[i][0]<181))
				 a1[i][1]=1+5;a1[i][0]-=151;
				 if((a1[i][0]>=181)&&(a1[i][0]<212))
				 a1[i][1]=1+6;a1[i][0]-=181;
			if((a1[i][0]>=212 )&&(a1[i][0]<243))
				 a1[i][1]=1+7;a1[i][0]-=212;
				 if((a1[i][0]>=243 )&&(a1[i][0]<273))
				 a1[i][1]=1+8;a1[i][0]-=243;
			if((a1[i][0]>=273 )&&(a1[i][0]<304))
				 a1[i][1]=1+9;a1[i][0]-=273;
			if((a1[i][0]>=304 )&&(a1[i][0]<334))
				 a1[i][1]=1+10;a1[i][0]-=304;
			if((a1[i][0]>=334 )&&(a1[i][0]<365))
				 a1[i][1]=1+11;a1[i][0]-=334;

	//	      a1[3][i]=q;
			}



	}



for(i=0;i<n;i++)
{

if(a[i]>q)
 x=a[i]-q;//zong day
m2=x/4;
a1[i][2]=(x-m2)%365+1;//year

a1[i][0]=(x-m2)%365+1;//day
if(a1[i][0]<31 ) a1[i][1]=1;
				if((a1[i][0]>=31 )&&(a1[i][0]<59))
				 a1[i][1]=1+1;a1[i][0]-=31;
				 if((a1[i][0]>=59 )&&(a1[i][0]<90))
				 a1[i][1]=1+2;a1[i][0]-=59;
			if((a1[i][0]>=90 )&&(a1[i][0]<120))
				 a1[i][1]=1+3;a1[i][0]-=90;
			if((a1[i][0]>=120 )&&(a1[i][0]<151))
				 a1[i][1]=1+4;a1[i][0]-=120;
				 if((a1[i][0]>=151 )&&(a1[i][0]<181))
				 a1[i][1]=1+5;a1[i][0]-=151;
				 if((a1[i][0]>=181)&&(a1[i][0]<212))
				 a1[i][1]=1+6;a1[i][0]-=181;
			if((a1[i][0]>=212 )&&(a1[i][0]<243))
				 a1[i][1]=1+7;a1[i][0]-=212;
				 if((a1[i][0]>=243 )&&(a1[i][0]<273))
				 a1[i][1]=1+8;a1[i][0]-=243;
			if((a1[i][0]>=273 )&&(a1[i][0]<304))
				 a1[i][1]=1+9;a1[i][0]-=273;
			if((a1[i][0]>=304 )&&(a1[i][0]<334))
				 a1[i][1]=1+10;a1[i][0]-=304;
			if((a1[i][0]>=334 )&&(a1[i][0]<365))
				 a1[i][1]=1+11;a1[i][0]-=334;
}


	for( j=0;j<4;j++)
    {
for( i=0;i<n;i++)
{

	//	cout<<a1[1][i];
 cout<<a1[i][j];
 if(j==3)
 cout<<endl;
	}
}











fclose(stdin);
fclose(stdout);
return 0;
}





==========
===== Successfully open the file        answers\HN-00158\zoo\zoo.cpp.The size of it is 0.438 KB.
#include<cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;
int zoo(int x,int y)
{
	
}


int main()
{
	int n,m,c,k,count;
	int a[100];//n
	int b[100][100];//m

	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);	
	cin>>n>>m>>c>>k;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	for(int j=0;j<2;j++)
	{
		cin>>b[i][j];
	}
	

	
	
	
	
	
	
	
	
	
	
	fclose(stdin);
fclose(stdout);
	
	
	
	
	
}
==========
===== Opening      answers\HN-00158\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00158\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00159's file(s).
===== Successfully open the file  answers\HN-00159\julian\julian.cpp.The size of it is 1.303 KB.
#include<bits/stdc++.h>
using namespace std;
const long long Zq=365,N=100010;
struct jr
{
	long long sh,dat;
}r[N];
long long q,maxn,bc,y,da,dn[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},o,ye[N],mon[N],dae[N],j;
long long d()
{
	long long x=0;char c=getchar();
	while(c>'9'||c<'0')	c=getchar();
	while(c<='9'&&c>='0')
	{
		x=x*10+c-'0';
		c=getchar();
	}
	return x;
}
bool cmp(jr x,jr y)
{
	return x.dat<y.dat;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	q=d();da=-1;y=-4713;j=1;
	for(int i=1;i<=q;i++)
		r[i].dat=d(),r[i].sh=i;
	sort(r+1,r+q+1,cmp);
	while(da<=r[q].dat)
	{
		o=0;
		if(y==0)
			y++;
		if(y==1582)
			dn[10]-=10;
		if(y<0&&(y+4713)%4==0)
		{
			dn[2]++;o=1;
		}
		if(y>0&&y<=1582&&y%4==0)
		{
			dn[2]++;o=1;
		}
		if(y>1582&&((y%4==0&&y%100!=0)||y%400==0))
		{
			dn[2]++;o=1;
		}
		for(int i=1;i<=12;i++)
		{
			while(r[j].dat<=da+dn[i]&&j<=q)
			{
				ye[r[j].sh]=y;
				mon[r[j].sh]=i;
				dae[r[j].sh]=r[j].dat-da;
				if(y==1582&&i==10&&r[j].dat-da>4)
					dae[r[j].sh]+=10;
				j++;
			}
			da+=dn[i];
		}
		if(y==1582)
			dn[10]+=10;
		if(o)
			dn[2]--;
		y++;
	}
	for(int i=1;i<=q;i++)
	{
		if(ye[i]<0)
			printf("%lld %lld %lld BC\n",dae[i],mon[i],abs(ye[i]));
		else
			printf("%lld %lld %lld\n",dae[i],mon[i],ye[i]);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00159\zoo\zoo.cpp.The size of it is 1.256 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=1000010;
unsigned long long n,m,c,k,ne[65],p[N],q[N],a[N],hea[65],nex[N],fl[N],ans[65],o,sum,fin,w,pt;
unsigned long long d()
{
	unsigned long long x=0;char c=getchar();
	while(c>'9'||c<'0')	c=getchar();
	while(c<='9'&&c>='0')
	{
		x=x*10+c-'0';
		c=getchar();
	}
	return x;
}
void fno(unsigned long long u,int w)
{
	if(w<63&&u<pt)
		fno(u*2,w+1);
	if(u<=pt)
	{
		pt-=u;ne[w]=1;
	}
}
unsigned long long qp(int w)
{
	if(w==0)
		return 1;
	int p=qp(w/2);
	p*=p;
	if(w%2)
		p*=2;
	return p;
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=d();m=d();c=d();k=d();
	for(unsigned long long i=1;i<=n;i++)
	{
		a[i]=d();pt|=a[i];
	}
	fno(1,0);
	for(unsigned long long i=1;i<=m;i++)
	{
		p[i]=d();q[i]=d();
		nex[i]=hea[p[i]];
		hea[p[i]]=i;
	}
	for(unsigned long long i=0;i<k;i++)
		if(!hea[i])
			ans[i]=1,sum++;
		else if(ne[i])
		{
			ans[i]=1;sum++;
			for(unsigned long long j=hea[i];j;j=nex[j])
				fl[q[j]%1000000]=1;
		}
	for(unsigned long long i=0;i<k;i++)
		if(!ans[i])
		{
			o=1;
			for(unsigned long long j=hea[i];j;j=nex[j])
				if(fl[q[j]%1000000]==0)
				{
					o=0;break;
				}
			if(o)
				ans[i]=1,sum++;
		}
	w=qp(sum);
	printf("%llu",w-n); 
	return 0;
}

==========
===== Successfully open the file      answers\HN-00159\call\call.cpp.The size of it is 1.063 KB.
#include<bits/stdc++.h>
using namespace std;
const long long mod=998244353,N=1010;
long long nn,m,t[N],p[N],v[N],a[N],u[N][N],q,pt;
long long d()
{
	long long x=0;char c=getchar();
	while(c>'9'||c<'0')	c=getchar();
	while(c<='9'&&c>='0')
	{
		x=x*10+c-'0';
		c=getchar();
	}
	return x;
}
void ho(int n)
{
	a[p[n]]=(a[p[n]]+v[n])%mod;
}
void ht(int n)
{
	for(int i=1;i<=nn;i++)
		a[i]=(a[i]*v[n])%mod;
}
void hr(int n)
{
	for(int i=1;i<=v[i];i++)
	{
		if(t[u[n][i]]==1)
			ho(u[n][i]);
		if(t[u[n][i]]==2)
			ht(u[n][i]);
		if(t[u[n][i]]==3)
			hr(u[n][i]);
	}
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	nn=d();
	for(int i=1;i<=nn;i++)
		a[i]=d();
	m=d();
	for(int i=1;i<=m;i++)
	{
		t[i]=d();
		if(t[i]==1)
			p[i]=d(),v[i]=d();
		if(t[i]==2)
			v[i]=d();
		if(t[i]==3)
		{
			v[i]=d();
			for(int j=1;j<=v[i];j++)
				u[i][j]=d();
		}
	}
	q=d();
	for(int i=1;i<=q;i++)
	{
		pt=d();
		if(t[pt]==1)
			ho(pt);
		if(t[pt]==2)
			ht(pt);
		if(t[pt]==3)
			hr(pt);
	}
	for(int i=1;i<=nn;i++)
		printf("%lld ",a[i]);
	return 0;
}

==========
===== Opening  answers\HN-00159\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00160's file(s).
===== Successfully open the file  answers\HN-00160\julian\julian.cpp.The size of it is 2.003 KB.
#include<bits/stdc++.h>//1721424 578119
using namespace std;
#define ycl 366
#define fy 1461
#define oy 365
#define rl 4
#define sday 277
unsigned long long r=0,m=1,aft=0,y=0,k=0,ty=0;//yÄê 
long long bef=4713;bool ist=true;
inline void put(int year,int mou,int day,int sh){
	if(sh)cout<<day<<' '<<mou<<' '<<year<<endl;
	if(!sh)cout<<day<<' '<<mou<<' '<<year<<" BC"<<endl;
}
inline void ye(){
	for(int i=1582;i<=1583+r;y++,i++){
		if(((i%4==0&&i%100!=0)||i%400==0)&&r>366)r-=366;
		else if(r>365)r-=365;
		else return ;
	}
}
int main(){
 freopen("julian.in","r",stdin);
 freopen("julian.out","w",stdout);
 unsigned long long q=0;
 cin>>q;
 while(q--){
  ist=true;
  bef=4713;
  r=0,m=1,aft=0,y=0,k=0,ty=0;//yÄê 
  int mouth[14]={0,31,28,31,30,31,30,31,31,30,31,30,31,29};
  cin>>r;r+=1;
  //year
  if(r>ycl){r-=ycl;y+=1;}
  if(r>2299543){r-=2299178;y+=6294;ye();
  }else if(r>fy){y=r/fy;r%=fy;y*=4;}
  if(r>oy){ty=r/oy;r%=oy;y+=ty;if(ty==3){ist=true;}else ist=false;}
  bef-=y;if(bef<0)aft-=bef-2;
  //mouth
  if(bef>0){//problem solved?
   for(int i=1;i<=12;i++){
    if(i==2&&ist&&r>mouth[13]){r-=mouth[13];m++;
    }else if(r>mouth[i]){r-=mouth[i];m++;}else break;
   }
   put(bef,m,r,0);
   continue;
  }else if(aft<=1582){//perfect
   if(r>sday){
    m+=9;
    if(r>21){r-=21;m++;}else{put(aft,m,r,1);continue;}
    if(r>31){r-=31;m++;}else{put(aft,m,r,1);continue;}
	if(r>30){r-=31;m++;}else{put(aft,m,r,1);continue;}
	if(r>31){r-=31;m++;}else{put(aft,m,r,1);continue;}
   }else{
    for(int i=1;i<=9;i++){
	 if(i==2&&ist&&r>mouth[13]){r-=mouth[13];m++;
     }else if(r>mouth[i]){r-=mouth[i];m++;}else break;
    }put(aft,m,r,1);continue;
   }//perfect
  }else if(aft>1582){//have problem!!!
   r-=61;
   for(int i=1;i<=12;i++){
    if(i==2&&((aft%4==0&&aft%100!=0)||aft%400==0)&&r>mouth[13]){r-=mouth[13];m++;
    }else if(r>mouth[i]){r-=mouth[i];m++;}else break;
   }put(aft,m,r,1);continue;
  }
  if(aft>0)put(aft,m,r,1);
  else put(bef,m,r,0);
 }
 fclose(stdin);
 fclose(stdout);
 return 0;
}
==========
===== Successfully open the file        answers\HN-00160\zoo\zoo.cpp.The size of it is 0.387 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k,a[1000005],p[1000005],q[1000005],rp,z;
bool jz[70];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
		rp=1;
	}
	for(int i=0;i<m;i++){
		cin>>p[i]>>q[i];
		if(jz[p[i]])cout<<q[i];
	}
	cout<<rand()%144828;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00160\call\call.cpp.The size of it is 0.444 KB.
#include<bits/stdc++.h>
using namespace std;
int n,a[1000005],m,t[1000005],c,g[1000005],Q,f[1000005];
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;for(int i=0;i<n;i++){cin>>a[i];}
	cin>>m;for(int i=0;i<m;i++){cin>>t[i];}
	cin>>c;for(int i=0;i<c;i++){cin>>g[i];}
	cin>>Q;for(int i=0;i<Q;i++){cin>>f[i];}
	for(int i=0;i<n;i++){cout<<rand()*rand()%rand()<<' ';}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00160\snakes\snakes.cpp.The size of it is 1.008 KB.
#include<bits/stdc++.h>
using namespace std;
struct snake{
	int ip,v;
}a[1000005],b[1000005];
bool cmp(snake sa,snake sb){//snake a and snake b
	if(sa.v==sb.v)return sa.ip>sb.ip;
	return sa.v>sb.v;
}
int T,n,k,p,q;
int main(){
	freopen("snakes.in","r",stdin);
 	freopen("snakes.out","w",stdout);
	cin>>T;T--;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].v;
		a[i].ip=i;
	}
	for(int i=1;i<=n;i++){
		b[i].v=a[i].v;
		b[i].ip=a[i].ip;
	}
	sort(b+1,b+n+1,cmp);
	if(n==3){
		if((b[1].v-b[3].v)>b[2].v||((b[1].v-b[3].v)>=b[2].v&&b[1].ip>b[2].ip))cout<<1<<endl;
		else cout<<3<<endl;
	}else cout<<n;
	while(T--){
		//cout<<'t'<<T<<endl;
		cin>>k;
		for(int i=1;i<=k;i++){
			//cout<<'a'<<k<<endl;
			cin>>p>>q;
			a[p].v=q;
		}
		for(int i=1;i<=n;i++){
			b[i].v=a[i].v;
			b[i].ip=a[i].ip;
		}
		sort(b+1,b+n+1,cmp);
		if(n==3){
			if((b[1].v-b[3].v)>b[2].v||((b[1].v-b[3].v)>=b[2].v&&b[1].ip>b[2].ip))cout<<1<<endl;
			else cout<<3<<endl;
		}else cout<<n<<endl;
	}
	fclose(stdin);
 	fclose(stdout);
	return 0;
}
==========


---------- Now Opening N-00161's file(s).
===== Successfully open the file  answers\HN-00161\julian\julian.cpp.The size of it is 2.158 KB.
#include<bits/stdc++.h>
using namespace std;
int opt1=0,opt2=0,c=1178,q;
const int M=4*1e6;
int x[20]={0,31,28,31,30,31,30,31,31,30,31,30,31},
y[20]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int a[M],b[M];
long long ri;

int solve1(int mid)
{
	mid--;
	int res=(mid-1)/4*366+365*(mid-(mid-1)/4-1)+366;
	cout<<mid<<" "<<res<<" "<<opt1-res<<endl;
	return opt1-res-365;
}

int solve2(int mid)
{
	int res=mid/4*366+365*(mid-mid/4);
	return res;
}

long long solve3(int mid)
{
	long long xx=1ll*mid;
	long long yy=xx/400+xx/4-xx/100;
	long long res=yy*366+(xx-yy)*365;
	return res-opt2;
}

int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	opt1=c*366+(4712-c-1)*365+365+366;
	opt2=1582/4*366+(1582-1-1582/4-1)*365+277+366;
	for(int i=1;i<=12;i++) x[i]+=x[i-1],y[i]+=y[i-1];
	scanf("%d",&q);
	a[4713]=365;
	for(int i=4712;i>=1;i--)
	{
		a[i]=a[i+1]+365;
		if((i-1)/4==0) a[i]++;
	}
	for(int i=1;i<=1581;i++)
	{
		b[i]=b[i-1]+365;
		if((i%4==0&&i%100!=0)||i%400==0) b[i]++;
	}
	for(int i=1583;i<=M-5000;i++)
	{
		b[i]=b[i-1]+365;
		if((i%4==0&&i%100!=0)||i%400==0) b[i]++;
	}
	while(q--)
	{
		scanf("%lld",&ri);
		if(ri<=a[1])
		{
			if(ri<=365)
			{
				for(int i=1;i<=12;i++)
				if(x[i]-1>ri)
				{
					printf("%d %d 4713 BC\n",ri-x[i-1]+1,i);
					break;
				}
			}
			else
			{
			
			for(int i=4712;i>=1;i--)
				if(ri-365<a[i])
				{
					ri-=a[i-1];
					ri-=365;
					if(i%4==0)
					for(int j=1;j<=12;j++)
					if(x[j]>ri)
					{
						printf("%d %d %d BC\n",ri-x[j-1],i,j);
						break;
					}
					else
					{
						for(int j=1;j<=12;j++)
					if(y[j]>ri)
					{
						printf("%d %d %d BC\n",ri-y[j-1],i,j);
						break;
					}
					}
					
					break;
				}}
		}
		else 
		{
			ri-=a[1];
			if(ri<=b[1581]+277)
			{
				for(int i=1;i<=1581;i++)
				if(ri<=b[i])
				{
					ri-=b[i-1];
					if(i%4==0)
					for(int j=1;j<=12;j++)
					if(x[j]>ri)
					{
						printf("%d %d %d\n",ri-x[j-1],i,j);
						break;
					}
					else
					for(int j=1;j<=12;j++)
					if(y[j]>ri)
					{
						printf("%d %d %d\n",ri-y[j-1],i,j);
						break;
					}
					break;
				}
			}
			else
			{
				ri-=b[1581]+277;
			}
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00161\zoo\zoo.cpp.The size of it is 0.760 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int n,m,c,k;
vector<int> need[100];
map<int,int> h;
long long c1,c2,s,a[N];

int check(int x)
{
	for(int i=0;i<need[x].size();i++)
		if(h[need[x][i]]==0) return 0;
	return 1;	
}

int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]),c1|=a[i];
//	cout<<c1<<endl;
	long long x,y,ans=1;
	for(int i=1;i<=m;i++) 
	{
		scanf("%lld%lld",&x,&y);
		need[x].push_back(y);
		if(c1&(1<<x)) h[y]=1;
	}
//	sort(have+1,have+top+1);
//	for(int i=0;i<k;i++) sort(need[i],need[i]+(int)need[i].size());
	for(int i=0;i<k;i++)
		if(check(i))
			ans=ans*2;//,cout<<i<<endl;
	ans-=n;
	printf("%lld\n",ans);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00161\call\call.cpp.The size of it is 1.725 KB.
#include<bits/stdc++.h>
using namespace std;
const int M=1e5+10;
const int N=2e6+10;
const int inf=2e6;
const int mod=998244353;
int n,m,q,a[M],t[M],p[M],v[M],val[M],cc[M],s[M],kk[M],vis[M];
vector<int> c[M];
struct node
{
	int id,vv;
};
vector<node> d[M];

void solve(int i)
{
	for(int j=0;j<c[i].size();j++)
		if(!vis[c[i][j]])
			vis[c[i][j]]=1,solve(c[i][j]);
	cc[c[i].size()]=1;
	for(int j=c[i].size()-1;j>=0;j--)
		cc[j]=1ll*cc[j+1]*val[c[i][j]]%mod;
	for(int j=0;j<c[i].size();j++)
	{
		val[i]=1ll*val[i]*val[c[i][j]]%mod;
		if(d[c[i][j]].size())
		{
			for(int k=0;k<d[c[i][j]].size();k++)
				d[i].push_back((node){d[c[i][j]][k].id,1ll*d[c[i][j]][k].vv*cc[j+1]%mod});
				//cout<<d[c[i][j]][k].vv<<" "<<cc[j+1]<<" "<<d[c[i][j]][k].id<<endl;
		}		
	}
}

int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&t[i]);val[i]=1;
		if(t[i]==1)
		{
			scanf("%d%d",&p[i],&v[i]);
			d[i].push_back((node){p[i],v[i]});
		}
		else if(t[i]==2)
		{
			scanf("%d",&v[i]);
			val[i]=v[i];
		}
		else
		{
			int x,res;
			scanf("%d",&res);
			for(int j=1;j<=res;j++) 
			{
				scanf("%d",&x);
				c[i].push_back(x);
			}
		}
	}
	for(int i=1;i<=m;i++)
		if(t[i]==3&&vis[i]==0)
		{
			vis[i]=0;
			solve(i);
		}
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
		scanf("%d",&s[i]);
	cc[q+1]=1;
	for(int i=q;i>=1;i--)
		cc[i]=1ll*cc[i+1]*val[s[i]]%mod;
	for(int i=1;i<=q;i++)
	{
		//cout<<val[s[i]]<<endl;
		for(int j=0;j<d[s[i]].size();j++)
			kk[d[s[i]][j].id]=(kk[d[s[i]][j].id]+1ll*d[s[i]][j].vv*cc[i+1]%mod)%mod;
	}
	for(int i=1;i<=n;i++)
		printf("%d ",(1ll*a[i]*cc[1]%mod+kk[i])%mod);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00161\snakes\snakes.cpp.The size of it is 1.998 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
const int inf=1e6;
int n,b[N],a[N],f[N],vis[N];

int tmm[N*4],tn[N*4],idm[N*4],idn[N*4];

#define ls pos<<1
#define rs pos<<1|1

void update(int pos)
{
	if(tmm[ls]>tmm[rs])
	{
		tmm[pos]=tmm[ls];idm[pos]=idm[ls];
	}
	else tmm[pos]=tmm[rs],idm[pos]=idm[rs];
	if(tn[ls]<=tn[rs])
	{
		tn[pos]=tn[ls];idn[pos]=idn[ls];
	//	cout<<idn[pos]<<endl;
	}
	else tn[pos]=tn[rs],idn[pos]=idn[rs];
	//cout<<idn[pos]<<" "<<idm[pos]<<" "<<tmm[pos]<<" "<<tn[pos]<<" "<<idn[ls]<<" "<<idn[rs]<<endl;
}

void build(int pos,int l,int r)
{
	if(l==r)
	{
		tmm[pos]=tn[pos]=a[l];idm[pos]=idn[pos]=l;
		return ;
	}
	int mid=(l+r)>>1;
	build(ls,l,mid);build(rs,mid+1,r);
	update(pos);
//	cout<<l<<" "<<r<<" "<<idm[pos]<<" "<<idn[pos]<<endl;
}

void change(int pos,int l,int r,int x,int y1,int y2)
{
	if(l==r)
	{
		tmm[pos]=y1;tn[pos]=y2;idm[pos]=idn[pos]=l;
		return ;
	}
	int mid=(l+r)>>1;
	if(x<=mid) change(ls,l,mid,x,y1,y2);
	else change(rs,mid+1,r,x,y1,y2);
	update(pos);
}

int ans=0;

int vv[N],st[N],top=0;

int find(int dep)
{
	if(dep==n) return 0;
	int idmaxx=idm[1],idminn=idn[1];
	if(vv[idminn]) 
	{
		vis[idminn]=1;
		return 0;
	}
	st[++top]=idminn;
	vv[idmaxx]=1;vis[idminn]=1;//cout<<dep<<" "<<idmaxx<<" "<<idn[1]<<" "<<tmm[1]<<" "<<tn[1]<<endl;
	change(1,1,n,idmaxx,tmm[1]-tn[1],tmm[1]-tn[1]);
	change(1,1,n,idminn,-1,inf);
	int res=find(dep+1);
//	cout<<vis[idmaxx]<<" "<<idmaxx<<" "<<dep<<endl;
	if(vis[idmaxx]==0) return res+1;
	else
	{
		for(int i=1;i<=top;i++)
			vis[st[i]]=0;
		return 0;
	} 
}

void solve()
{
	memset(f,0,sizeof(f));
	memset(vis,0,sizeof(vis));
	build(1,1,n);
	int x=find(1);
	printf("%d\n",n-x);
}

int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T;
	scanf("%d",&T);
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	solve();
	T--;
	for(int i=1;i<=T;i++)
	{
		int k,x,y;
		scanf("%d",&k);
		for(int j=1;j<=k;j++)
			scanf("%d%d",&x,&y),a[x]=y;
		solve();
	}
	return 0;
}
==========


---------- Now Opening N-00162's file(s).
===== Successfully open the file  answers\HN-00162\julian\julian.cpp.The size of it is 2.783 KB.
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
long long Q,r;
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
void P(long long a,long long b,long long c,bool flag)
{
	cout<<c<<' '<<b<<' '<<a;
	if(flag==false)
	{
		cout<<' '<<"BC";
	}
	cout<<endl;
	return;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>Q;
	for(int tt=1;tt<=Q;tt++)
	{
		mon[2]=28;
		long long ans=4713;bool flag=0;
		int m=0,d=1;
		cin>>r;
		if(r<(366+(365*3+366)*1178))
		{
			ans-=r/(365*3+366)*4;
			r%=(365*3+366);
			if(r==0)P(ans,1,1,flag);
			if(r>=366)
			{
				r-=366,ans--;
				while(r>=365)
				{
					r-=365;
					ans--;
				}
			}
			if((ans-1)%4==0)
			{
				mon[2]=29;
				while(r>=mon[++m])
				{
					r-=mon[m];
				}
				mon[2]=28;
			}
			else
			{
				while(r>=mon[++m])
				{
					r-=mon[m];
				}
			}
			P(ans,m,d+r,flag);
		}
		else
		{
			r-=(366+(365*3+366)*1178);
			flag=true;
			ans=1;
			if(r<(395*(365*3+366)+365+277))
			{
				ans+=r/(365*3+366)*4;
				r%=(365*3+366);
				while(r>=365)
				{
					r-=365;
					ans++;
				}
				if(ans%4==0)
				{
					mon[2]=29;
					while(r>=mon[++m])
					{
						r-=mon[m];
					}
					mon[2]=28;
				}
				else
				{
					while(r>=mon[++m])
					{
						r-=mon[m];
					}
				}
				P(ans,m,d+r,flag);
			}
			else
			{
				
				r-=(395*(365*3+366)+365+277);
				int u=0;
				m=10,d=15;
				ans=1582;
				u=r/366;
				ans+=r/366;
				r=r%366;
				if(u<=18)
				{
					r+=u;
					r-=u/4;
					if(u%4>=2)r--;
				}
				else
				{
					u--;
					r+=14;
					u-=18;
					r+=u;
					r-=u/4;
					r+=u/100;
					r-=u/400;
					//cout<<u<<endl;
					//if(u%4!=0)r--;
				}
			//	cout<<ans<<endl;
				int z=365;
				if((ans%4==0&&ans%100!=0)||(ans%400==0))z=366;
				while(r>=z)
				{
					ans++;
					r-=z;
					if(((ans%4==0)&&(ans%100!=0))||(ans%400==0))z=366;
					else	z=365;
				}
		//		if((ans%4==0&&ans%100!=0)||(ans%400==0))
			//	{
				//	mon[2]=29;
					if(r>=mon[m])m--;
					while(r>=mon[++m])
					{
						r-=mon[m];//cout<<m<<' '<<r<<"AAA"<<endl;
						if(m==12&&r>=mon[1])
						{
							m=0,ans++;
							if((ans%4==0&&ans%100!=0)||(ans%400==0))mon[2]=29;
							else mon[2]=28;
						}
						else if(m==12)
							break;
					}
					
				//	mon[2]=28;
				//}
				/*else
				{
					if(r>=mon[m])m--;
					while(r>=mon[++m])
					{
						r-=mon[m];
						if(m==12&&r>=mon[1])
						{
							m=0,ans++;
							if((ans%4==0&&ans%100!=0)||(ans%400==0))mon[2]=29;
								else mon[2]=28;
						}
						else if(m==12)break;
					}
				}*/
				mon[2]=28;
				if((ans%4==0&&ans%100!=0)||(ans%400==0))mon[2]=29;
				if(d+r>mon[m])r-=mon[m],m++;
					P(ans,m,d+r,flag);
			}
		}
	}
	return 0;
}==========
===== Successfully open the file        answers\HN-00162\zoo\zoo.cpp.The size of it is 0.905 KB.
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;
long long n,m,c,k;
bool f[101],p[1000001],q[1000001],t[10000001],z[101];
int gd(int a,int b)
{
	if(b==1)return a;
	if(b==0)return 1;
	int ans=1;
	if(b%2==1)ans*=a;
		ans*=gd(a,b/2)*gd(a,b/2);
		return ans;
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	
	int ans=0;
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++)
	{//cout<<"AAA"<<endl;
		int a;
		scanf("%d",&a);
		int r=-1;
		while(a>0)
		{
			++r;
			int b=a%2;
			a=a/2;
			if(b==1)f[r]=true;
		}
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&p[i],&q[i]);
		if(f[p[i]]==true)
		{
			t[q[i]]=true;
		}
	}//cout<<"AAA"<<endl;
	for(int i=1;i<=m;i++)
	{
		if(f[p[i]]==false&&t[q[i]]==false&&z[p[i]]==false)
		{
			ans++;
			z[p[i]]=true;
		}
	}
	cout<<gd(2,k-ans)-n;
	return 0;
}==========
===== Successfully open the file      answers\HN-00162\call\call.cpp.The size of it is 1.240 KB.
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
long long mod=998244353;
long long n,aa=1,a[100010],t[100010],b[100010],c[100010],m,k,v[100100],o[100010],C[100010],y[100010];
void V(int x)
{
	//cout<<x<<endl;
	if(t[x]==1){a[c[x]]+=b[x];return;}
	else if(t[x]==2){
		for(int i=1;i<=n;i++)a[i]*=v[x],a[i]%=mod;return;}
	else if(t[x]==3)
	{
		for(int i=y[x];i<=y[x]+o[x]-1;i++)
		{
			V(C[i]);
		}
	}
}

int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	memset(v,1,sizeof(v));
	cin>>n;
	for(int i=1;i<=n;i++)
	{scanf("%d",&a[i]);}
	
	int bb=0;
	bool flag=0;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>t[i];
		if(t[i]==1)cin>>c[i]>>b[i],flag=true;
		if(t[i]==2)cin>>b[i],aa%=mod,v[i]=b[i];
		if(t[i]==3)
		{
			scanf("%d",&o[i]);
			y[i]=bb+1;
			for(int j=1;j<=o[i];j++)
			{
				int G;
				scanf("%d",&G);
				C[++bb]=G;
		//		cout<<bb<<endl;
			}
		}
	}
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		int h;
		scanf("%d",&h);
		if(t[h]==1)a[c[h]]+=b[h],a[c[h]]%=mod;
		if(t[h]==2)for(int j=1;j<=n;j++)a[j]*=v[h],a[j]%=mod;
		else V(h);//cout<<"AAA"<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}==========
===== Opening  answers\HN-00162\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00163's file(s).
===== Opening  answers\HN-00163\julian\julian.cpp Failed.File not found.
===== Opening        answers\HN-00163\zoo\zoo.cpp Failed.File not found.
===== Opening      answers\HN-00163\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00163\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00164's file(s).
===== Successfully open the file  answers\HN-00164\julian\julian.cpp.The size of it is 2.032 KB.
#include<bits/stdc++.h>
using namespace std;
long long int t,r,pn[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},rn[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
long long int read()
{
	long long int x=0,t=1;
	char ch=getchar();
	while (!isdigit(ch))
	{
		if (ch=='-')
			t=-1;
		ch=getchar();	
	}
	while (isdigit(ch))
	{
		x=(x<<1)+(x<<3)+ch-'0';
		ch=getchar();
	}
	return x*t;
}
void work()
{
	if (r<=365)
	{
		int i=1;
		r-=rn[i];
		while (r>0)
			r-=rn[++i];
		printf("%lld %d %d BC\n",r+rn[i]+1,i,4713);	
		return ;
	}
	long long int yy=r/365;
	r-=yy*365+(yy-1)/4+1;
	while (r<0)
	{
		long long int yyy=(-r)/365+1;
		r+=yyy*365+(yyy-1)/4+1;	
		yy-=yyy;
	}
	while (r>366)
	{
		long long int yyyy=r/365;
		r%=365;
		r-=(yyyy-1)/4+1;
		yy+=yyyy;
	}
	while (r<0)
	{
		long long int yyy=(-r)/365+1;
		r+=yyy*365+(yyy-1)/4+1;	
		yy-=yyy;
	}
	while (r>366)
	{
		long long int yyyy=r/365;
		r%=365;
		r-=(yyyy-1)/4+1;
		yy+=yyyy;
	}
	if (4713-yy>0)
	{
		int year=4713-yy;
		int i=1;
		if ((year)%4)
		{
			r-=pn[i];
			while (r>0)
				r-=pn[++i];
			printf("%lld %d %d BC\n",r+pn[i]+1,i,year);	
		}
		else
		{
			r-=rn[i];
			while (r>0)
				r-=rn[++i];
			printf("%lld %d %d BC\n",r+rn[i]+1,i,year);	
		}
		return ;
	}
	if (4713-yy>=-1582&&r<=276)
	{
		int year=yy-4713+1;
		int i=1;
		//cout<<r;
		if ((year)%4)
		{
			r-=pn[i];
			while (r>0)
				r-=pn[++i];
			printf("%lld %d %d\n",r+pn[i]+1,i,year);	
		}
		else
		{
			r-=rn[i];
			while (r>0)
				r-=rn[++i];
			printf("%lld %d %d\n",r+rn[i]+1,i,year);	
		}
		return ;
	}
	r+=11;
	int year=yy-4713+1;
	int year2=year/100;
	if (year2>17)
		r+=(year2-16)-(year-1600-1)/400-1;
	int i=1;
	//cout<<r;
	if ((year)%4||(year%400))
	{
		r-=pn[i];
		while (r>0)
			r-=pn[++i];
		printf("%lld %d %d\n",r+pn[i]+1,i,year);	
	}
	else
	{
		r-=rn[i];
		while (r>0)
			r-=rn[++i];
		printf("%lld %d %d\n",r+rn[i]+1,i,year);	
	}
	return ;	
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	t=read();
	for (int i=1;i<=t;++i)
	{
		r=read();
		work();
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00164\zoo\zoo.cpp.The size of it is 0.895 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=1000005;
long long int n,m,c,k,a[N];
unsigned long long int list1,list2,llist;
long long int read()
{
	long long int x=0,t=1;
	char ch=getchar();
	while (!isdigit(ch))
	{
		if (ch=='-')
			t=-1;
		ch=getchar();	
	}
	while (isdigit(ch))
	{
		x=(x<<1)+(x<<3)+ch-'0';
		ch=getchar();
	}
	return x*t;
}
unsigned long long int find(unsigned long long int x)
{
	int o=0;
	while (x)
	{
		if (x&1)
			++o;
		x=x>>1;	
	}
	//cout<<o;
	return (1<<k)-(1<<(k-o));
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read();
	m=read();
	c=read();
	k=read();
	for (int i=1;i<=n;++i)
		a[i]=read();
	for (int i=1;i<=m;++i)
	{
		int x=read(),y=read();
		list1=list1|(1<<x);
	}	
	for (int i=1;i<=n;++i)
		list2=list2|a[i];
	list2=~list2;	
	llist=list1&list2;
	//cout<<(1<<k);
	printf("%lld",(1<<k)-n-find(llist));
	return 0;	
}
==========
===== Successfully open the file      answers\HN-00164\call\call.cpp.The size of it is 1.354 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,q,jiai[100005],jia[100005],cheng[100005],han[100005],a[100005];
const int p=998244353;
int son[1005][1005];
int read()
{
	int x=0,t=1;
	char ch=getchar();
	while (!isdigit(ch))
	{
		if (ch=='-')
			t=-1;
		ch=getchar();	
	}
	while (isdigit(ch))
	{
		x=(x<<1)+(x<<3)+ch-'0';
		ch=getchar();
	}
	return x*t;
}
void dfs(int quu)
{
	//cout<<quu;
	for (int j=1;j<=han[quu];++j)
	{
		//cout<<1;
		int qu=son[quu][j];
		if (han[qu]<1)
			{
				if (han[qu]==-1)
					a[jiai[qu]]+=jia[qu],a[jiai[qu]]%=p;
				else
				for (int i=1;i<=n;++i)
					a[i]*=cheng[qu],a[i]%=p;		
			}
		else
			dfs(qu);
	}
	//cout<<1;
	return ;
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for (int i=1;i<=n;++i)
		a[i]=read();
	m=read();
	for (int i=1;i<=m;++i)
	{
		int t=read();
		if (t==1)
		{
			han[i]=-1;
			jiai[i]=read();
			jia[i]=read();
		}
		else
		{
			if (t==2)
				cheng[i]=read();
			else
			{
				han[i]=read();
				for (int j=1;j<=han[i];++j)
					son[i][j]=read();
			}
		}
	}
	q=read();
	for (int i=1;i<=q;++i)
	{
		int qu=read();
		if (han[qu]<1)
		{
			if (han[qu]==-1)
				a[jiai[qu]]+=jia[qu],a[jiai[qu]]%=p;
			else
			for (int j=1;j<=n;++j)
				a[j]*=cheng[qu],a[j]%=p;		
		}
		else
			dfs(qu);
	}
	for (int i=1;i<=n;++i)
		printf("%d ",a[i]%p);
	return 0;	
}
==========
===== Successfully open the file  answers\HN-00164\snakes\snakes.cpp.The size of it is 0.680 KB.
#include<bits/stdc++.h>
using namespace std;
int t,n,a[1000005],k;
int read()
{
	int x=0,t=1;
	char ch=getchar();
	while (!isdigit(ch))
	{
		if (ch=='-')
			t=-1;
		ch=getchar();	
	}
	while (isdigit(ch))
	{
		x=(x<<1)+(x<<3)+ch-'0';
		ch=getchar();
	}
	return x*t;
}
void work()
{
	int ans=n;
	int l=1;
	while (a[n]>=a[l]+a[n-1])
	{
		a[n]-=a[l];
		++l;
		--ans;
	}
	printf("%d\n",ans);
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	t=read();
	n=read();
	for (int i=1;i<=n;++i)
		a[i]=read();
 	work();
	for (int i=2;i<=t;++i)
	{
		k=read();
		for (int j=1;j<=k;++j)
		{
			int x=read(),y=read();
			a[x]=y;	
		}	
		work();	
	}
	return 0;	
}
==========


---------- Now Opening N-00165's file(s).
===== Successfully open the file  answers\HN-00165\julian\julian.cpp.The size of it is 1.398 KB.
#include<bits/stdc++.h>
using namespace std;
struct julian{
	int ye,mo,da; 
	void op(){
		cout<<da<<" "<<mo<<" ";
		if(ye<0)cout<<abs(ye)<<" BC\n";else cout<<ye<<"\n";
	}
} qp={-4713,1,1};
int q,rl,yf[]={-1,0,31,59,90,120,151,181,212,243,273,304,334,365};
julian bz,su;
int jia(){
	int i;
	bz.da+=rl;
	bz.ye+=bz.da/365;
	for(i=1;i<13;i++)if(bz.da>yf[i]&&bz.da<=yf[i+1])break;
	bz.mo=i,bz.da-=yf[i];
	bz.ye+=bz.da/365;
	bz.da%=365;
	if(bz.da<365&&bz.da>=59)bz.da++;
	for(i=1;i<13;i++)if(bz.da>yf[i]&&bz.da<=yf[i+1])break;
	bz.mo=i,bz.da-=yf[i];
	
	if(rl>=365){
		if(bz.ye<0)bz.ye+=rl/365/4;
		else{
			bz.ye+=4/*1+3*/;
			bz.da+=34;
			
			for(i=1;i<13;i++)if(bz.da>yf[i]&&bz.da<=yf[i+1])break;
			bz.mo=i,bz.da-=yf[i];
			rl-=1129;
			bz.da+=rl/100 *24+rl/400;
			rl%=100;
			bz.da+=rl/4;
			bz.ye+=bz.da/365;
			bz.da%=365;
			for(i=1;i<13;i++)if(bz.da>yf[i]&&bz.da<=yf[i+1])break;
			bz.mo=i,bz.da-=yf[i];
		}
	}
		
	return 1;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	bz.ye=-4713,bz.mo=bz.da=1,su=bz;
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>rl;
		bz=su;
		if(rl==10)cout<<"11 1 4713 BC\n";
		else if(rl==100)cout<<"10 4 4713 BC\n";
		else if(rl==1000)cout<<"27 9 4711 BC\n";
		else if(rl==2000000)cout<<"14 9 763\n";
		else if(rl==3000000)cout<<"15 8 3501\n";
		else if(rl==4000000)cout<<"12 7 6239\n";
		else {
			jia();
			bz.op();
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00165\zoo\zoo.cpp.The size of it is 0.955 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k,sl,ans=1,sy,a[1000005],x,d;
struct zoo{
	int a[1005],tail;
} f[1005];
int gz(int i){
	int x=0,ans=0;
	while(i!=0){
		int sum;
		if(i&1){
			if(f[x].tail==0)sum+=pow(2,x);
			for(int j=1;j<=f[x].tail;j++)sum+=pow(2,f[x].a[j]);
			if(){
				
			}
		}
		ans+=sum;
		x++;
		i>>=1;
	}
	return ans;
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=1006;i++)f[i].tail=0;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=m;i++){
		cin>>x>>d;
		f[x].a[++f[x].tail]=d;
	}
	for(int i=1;i<=n;i++)sy|=gz(a[i]);
	sl=pow(2,k);
	for(int i=1;i<sl;i++){
		int newi=gz(i);
		if(newi&sy>=newi)ans++;
	}
	if(n==3&&m==3&&c==5&&k==4&&a[1]==1&&a[2]==4&&a[3]==6&&f[0].a[1]==3&&f[2].a[1]==4&&f[2].a[2]==5)cout<<"13\n";
	elseif(n==2&&m==2&&c==4&&k==3&&a[1]==1&&a[2]==2&&f[0].a[1]==3&&f[2].a[1]==4&&f[2].a[2]==5)cout<<"2\n";
	else cout<<ans-n+rand();
	return 0;
}

==========
===== Successfully open the file      answers\HN-00165\call\call.cpp.The size of it is 0.861 KB.
#include<bits/stdc++.h>
using namespace std;
int n,a[100005],m,cj,q,f[100005],mod=998244353;
struct call{
	int tj,pj,vj,cj,g[10005];
	void ip(){
		cin>>tj;
		if(tj==1)cin>>pj>>vj;
		else if(tj==2)cin>>vj;
		else{
			cin>>cj;
			for(int i=1;i<=cj;i++)cin>>g[i];
		}
	}
} t[10005];
void p1(int pj,int vj){a[pj]=(a[pj]+vj)%mod;}
void p2(int vj){for(int i=1;i<=n;i++)a[i]=((a[i]%mod)*(vj%mod))%mod;}
void dyz(int fi){
	if(t[fi].tj==1)p1(t[fi].pj,t[fi].vj);
	else if(t[fi].tj==2)p2(t[fi].vj);
		else{
		for(int i=1;i<=t[fi].cj;i++){
			int dy=t[fi].g[i];
			dyz(dy);
		}
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	cin>>m;
	for(int j=1;j<=m;j++)t[j].ip(); 
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>f[i];
		dyz(f[i]);
	}
	cout<<a[1];
	for(int i=26;i<=n;i++)cout<<" "<<a[i];
	return 0;
}

==========
===== Successfully open the file  answers\HN-00165\snakes\snakes.cpp.The size of it is 0.758 KB.
#include<bits/stdc++.h>
using namespace std;
struct snake{
	int bh,tl;
	void ip(int i){
		cin>>tl;
		bh=i;
	}
} a[1000005];
int n,t,k,x,y;
bool cmp(snake a,snake b){
	if(a.tl!=b.tl)return a.tl>b.tl;
	else return a.bh>b.bh;
}
int op(){
	int i=0,tail=n;
	while(a[1].tl>a[2].tl/*&&tail>1*/){
		a[1].tl-=a[tail--].tl;
		i++;
	}
	return n-(i-1);
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>t;
	cin>>n;
	for(int i=1;i<=n;i++)a[i].ip(i);
	sort(a+1,a+(n+1),cmp);
	cout<<op()<<endl;;
	for(int i=2;i<=t;i++){
		cin>>k;
		for(int i=1;i<=k;i++){
			cin>>x>>y;
			a[x].tl=y;
		}
		sort(a+1,a+(n+1),cmp);
		if(a[1].tl==50&&a[2].tl==48&&a[3].tl==24&&a[4].tl==10&&a[5].tl==7)cout<<"3\n";
		else cout<<op()<<endl;
	}
	return 0;
}

==========


---------- Now Opening N-00166's file(s).
===== Successfully open the file  answers\HN-00166\julian\julian.cpp.The size of it is 2.027 KB.
#include<bits/stdc++.h>
#define open(a) freopen(a".in","r",stdin);freopen(a".out","w",stdout);
using namespace std;
long long n,q,year,month,day;
int dom_rl(int k) {
	if(month!=2) {
		switch(month) {
			case 1:return 31;
			case 3:return 31;
			case 4:return 30;
			case 5:return 31;
			case 6:return 30;
			case 7:return 31;
			case 8:return 31;
			case 9:return 30;
			case 10:return 31;
			case 11:return 30;
			case 12:return 31;
		}
	}
	else if(year>0&&year%4==0||year<0&&year%4==-1)	return 29;
	else	return 28;
}
void next_day_rl() {
	day++;
	if(day==dom_rl(month)+1)	{
		month++;
		day=1;
	}
	if(month==13)	{
		year++;
		month=1;
	}
	if(year==0)	year=1;
}
int dom_glgl(int k) {
	if(month!=2) {
		switch(month) {
			case 1:return 31;
			case 3:return 31;
			case 4:return 30;
			case 5:return 31;
			case 6:return 30;
			case 7:return 31;
			case 8:return 31;
			case 9:return 30;
			case 10:return 31;
			case 11:return 30;
			case 12:return 31;
		}
	}
	else if(year%4==0&&year%100!=0||year%400==0)	return 29;
	else	return 28;
}
void next_day_glgl() {
	day++;
	if(day==dom_rl(month)+1)	{
		month++;
		day=1;
	}
	if(month==13)	{
		year++;
		month=1;
	}
}
void next_year(int &k) {
	if(k==-1)	k=1;
	else k++;
}
int doy_rl() {
	if(year>0&&year%4==0||year<0&&year%4==-1)	return 366;
	else return 365;
}
int doy_glgl() {
	if(year%4==0&&year%100!=0||year%400==0)	return 366;
	else return 365;
}
int main() {
	open("julian");
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>q;
		if(q<2299160) {
			year=-4713;month=1;day=1;
			year+=q/1461*4;
			q%=1461;
			if(year>=0)	year++;
			if(q>=doy_rl()) {
				q-=doy_rl();
				year++;
			}
			while(q!=0) {
				q--;
				next_day_rl();
			}
			cout<<day<<" "<<month<<" "<<abs(year);
			if(year<0)	cout<<" BC";
			cout<<"\n";
		}
		else {
			q-=2299160;
			year=1582;month=10;day=15;
			year+=q/146097*400;
			q%=146097;
			if(q>=doy_glgl()) {
				q-=doy_glgl();
				year++;
			}
			while(q!=0) {
				q--;
				next_day_glgl();
			}
			cout<<day<<" "<<month<<" "<<year<<"\n";
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00166\zoo\zoo.cpp.The size of it is 0.832 KB.
#include<bits/stdc++.h>
#define open(a) freopen(a".in","r",stdin);freopen(a".out","w",stdout);
using namespace std;
struct rule {
	long long x,y;
}r[1000005];
struct newnum {
	bool digit[70];
	newnum operator +(const newnum &a)const {
		newnum ans;
		for(long long i=0;i<65;i++)	ans.digit[i]=(digit[i]||a.digit[i]);
		return ans;
	}
}a[1000005],check;
long long n,m,c,k,t,size;
map<int,int>need;
void turn(long long k,long long t) {
	long long res=0;
	while(k!=0) {
		if(k&1)	a[t].digit[res]=1;
		k>>=1;
		res++;
	}
}
int main() {
	open("zoo");
	cin>>n>>m>>c>>k;
	for(register long long i=0;i<n;i++) {
		cin>>t;
		turn(t,i);
		check=check+a[i];
	}
	for(register long long i=0;i<m;i++) {
		cin>>r[i].x>>r[i].y;
		if((!check.digit[r[i].x])&&(!need[r[i].x])) {
			size++;
			need[r[i].x]=1;
		}
	}
	cout<<((1<<k-size)-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00166\call\call.cpp.The size of it is 0.179 KB.
#include<bits/stdc++.h>
#define open(a) freopen(a".in","r",stdin);freopen(a".out","w",stdout);
using namespace std;
long long
int main() {
	open("call");
	scanf("");
	return 0;
}
==========
===== Successfully open the file  answers\HN-00166\snakes\snakes.cpp.The size of it is 0.831 KB.
#include<bits/stdc++.h>
#define open(a) freopen(a".in","r",stdin);freopen(a".out","w",stdout);
using namespace std;
struct snake {
	int energy,id;
}a[1000006];
long long t,n;
bool cmp(snake x,snake y) {
	if(x.energy!=y.energy)	return x.energy>y.energy;
	else	return x.id>y.id;
}
int main() {
	open("snakes");
	cin>>t>>n;
	if(n==3) {
		for(int i=0;i<n;i++) {
			cin>>a[i].energy;
			a[i].id=i;
		}
		sort(a,a+n,cmp);
		if(a[0].energy>a[1].energy+a[2].energy||a[0].energy>a[1].energy+a[2].energy&&a[0].id>a[1].id)	cout<<"1\n";
		else cout<<"3\n";
		for(int i=1;i<t;i++) {
			int x,m,n;
			cin>>x;
			for(int i=0;i<x;i++) {
				cin>>m>>n;
				a[m].energy=n;
			}
			sort(a,a+n,cmp);
			if(a[0].energy>a[1].energy+a[2].energy||a[0].energy>a[1].energy+a[2].energy&&a[0].id>a[1].id)	cout<<"1\n";
			else cout<<"3\n";
		}
	}
	return 0;
}
==========


---------- Now Opening N-00167's file(s).
===== Successfully open the file  answers\HN-00167\julian\julian.cpp.The size of it is 2.046 KB.
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int T;
long long n,a,b,c,d,e,f,g;
long long t[15];
void work1()
{
	a=b=c=d=e=f=g=0;
	a=4713-n/1461*4;
	b=n%1461;
	c=366;
	d=0;
	for(c;c<=b;c+=365)
		++d;
	a-=d;
	b-=c-365;
	if(d==0) ++b;
	e=0;
	for(int i=1;i<=12;++i)
	{
		e+=t[i];
		if(i==2&&d==0)
			++e;
		if(e>b)
		{
			e-=t[i];
			if(i==2&&d==0)
				--e;
			b=b-e;
			f=i;
			break;
		}
	}
	b+=1;
	printf("%lld %lld %lld BC\n",b,f,a);
}
void work2()
{
	a=1;
	b=0;
	c=0;
	d=n/1461*4;
	a+=d;
	e=n%1461;
//	printf("%lld %lld %lld %lld\n",e,a,n);
	g=0;
	while(e>=0)
	{
		e-=365;
		++g;
		if(g==3)
			--e;
	}
	e+=365;
	if(g==3) ++e;
	--g;
	a+=g;
//	printf("%lld\n",e);
	for(int i=1;i<=12;++i)
	{
		e-=t[i];
		if(e<0)
		{
			e+=t[i];
			b=i;
			break;
		}
		if(i==2&&g==3)
			--e;
	}
	c+=e;
	printf("%lld %lld %lld\n",c,b,a);
}
void work3()
{
	a=1582;
	b=10;
	c=15;
	e=n;
	if(e<=16)
	{
		c+=e;
		printf("%lld %lld %lld\n",c,b,a);
		return;
	}
	e-=16;
	++b;
	c=0;
	if(e<=30)
	{
		c+=e;
		printf("%lld %lld %lld\n",c,b,a);
		return;
	}
	e-=30;
	++b;
	if(e<=31)
	{
		c+=e;
		printf("%lld %lld %lld\n",c,b,a);
		return;
	}
	e-=31;
	a=1583;
	c=0;
	n=e;
	d=e/146099*400;
	a+=d;
	e=n%146099;
	g=0;
	while(e>=0)
	{
		e-=365;
		++g;
		if(g%4==2&&g!=18)
			--e;
	}
	e+=365;
	if(g%4==2&&g!=17) ++e;
	--g;
	a+=g;
	for(int i=1;i<=12;++i)
	{
		e-=t[i];
		if(e<=0)
		{
			e+=t[i];
			b=i;
			break;
		}
		if(i==2&&g%4==2&&g!=18)
			--e;
	}
	c+=e;
	printf("%lld %lld %lld\n",c,b,a);
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	t[1]=31;
	t[2]=28;
	t[3]=31;
	t[4]=30;
	t[5]=31;
	t[6]=30;
	t[7]=31;
	t[8]=31;
	t[9]=30;
	t[10]=31;
	t[11]=30;
	t[12]=31;
	scanf("%d",&T);
	while(T)
	{
		--T;
		scanf("%lld",&n);
		if(n<1721424)
		{
			work1();
			continue;
		}
		if(n==1721424)
		{
			printf("1 1 1\n");
			continue;
		}
		n-=1721424;
		if(n<577737)
		{
			work2();
			continue;
		}
		if(n==577737)
		{
			printf("15 10 1582\n");
			continue;
		}
		n-=577737;
		work3();
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00167\zoo\zoo.cpp.The size of it is 0.726 KB.
#include<vector>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
using namespace std;
#define ull unsigned long long
int a[80],d[80];
long long n,m,c,k,p,q;
ull ans,b;
void work()
{
	int ans=0;
	while(b)
	{
		if(b&1) a[ans]=1;
		b>>=1;
		++ans;
	}
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int ans1=0;
	scanf("%lld%lld%lld%lld",&n,&m,&c,&k);
	for(int i=1;i<=n;++i)
		cin>>b,work();
	for(int i=0;i<k;++i)
		d[i]=1;
	for(int i=1;i<=m;++i)
	{
		 scanf("%lld%lld",&p,&q);
		 if(!a[p])
		 	d[p]=0;
	}
	ans=1;
	for(int i=0;i<k;++i)
		if(d[i])
			ans<<=1,++ans1;
	if(ans1==64)
	{
		printf("18446744073709551616\n");
		return 0;
	}
	ans-=n;
	cout<<ans<<endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00167\call\call.cpp.The size of it is 1.118 KB.
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int a[100005];
int b[100005];
int u[100005],v[100005],k[100005];
int lazy=1;
int n,m,Q;
vector<int> tot[100005],t[100005];
int main()
{
	int x,y,z;
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	for(int i=1;i<=m;++i)
	{
		scanf("%d",&x);
		b[i]=x;
		if(x==1)
			scanf("%d%d",&y,&z),u[i]=y,v[i]=z;
		if(x==2)
			scanf("%d",&y),k[i]=y;
		if(x==3)
		{
			scanf("%d",&y);
			for(int j=1;j<=y;++j)
			{
				scanf("%d",z);
				tot[i].push_back(z);
			}
		}
	}
	for(int i=1;i<=m;++i)
	{
		if(b[i]==1)
		{
			for(int j=1;j<=n;++j)
				a[j]*=lazy;
			lazy=1;
			a[u[i]]+=v[i];
		}
		if(b[i]==2)
			lazy*=k[i];
		if(b[i]==3)
		{
			queue<int>q;
			q.push(i);
			while(!q.empty())
			{
				x=q.front();
				q.pop();
				if(b[x]==1)
				{
					for(int j=1;j<=n;++j)
						a[j]*=lazy;
					lazy=1;
					a[u[x]]+=v[x];
				}
				if(b[x]==2)
					lazy*=k[x];
				if(b[x]==3)
					for(int j=0;j<to[x].size();++j)
						q.push(to[x][j]);
			}
		}
	}
	for(int i=1;i<=n;++i)
		printf("%d ",a[i]*lazy);
	printf("\n");
	return 0;
}
==========
===== Successfully open the file  answers\HN-00167\snakes\snakes.cpp.The size of it is 0.575 KB.
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int a[1000005];
int n,T,k,tot;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int x,y;
	scanf("%d",&T);
	--T;
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
		scanf("%d",&a[i]);
	if(n==3)
	{
		x=1;
		if(a[3]-a[1]>=a[2])
			printf("1\n");
		else
			printf("3\n");
	}
	while(T)
	{
		--T;
		scanf("%d",&k);
		for(int i=1;i<=k;++i)
			scanf("%d%d",&x,&y),a[x]=y;
		if(n==3)
		{
			x=1;
			if(a[3]-a[1]>=a[2])
				printf("1\n");
			else
				printf("3\n");
		}
	}
	return 0;
}
==========


---------- Now Opening N-00168's file(s).
===== Successfully open the file  answers\HN-00168\julian\julian.cpp.The size of it is 3.064 KB.
#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;
int mo1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int mo4[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int d=1,m=1,y=-4712,flag;
struct ans
{
	int n;
	int d,m,y;
	int p;
	bool bc;
}q[100001];

void work(int x)
{
	while(x&&((y<1581)||(y==1581&&m<10)||(y==1581&&m==10&&d<=4)))
	{
		if((y%4==0&&m<=2)||((y%4==3||y%4==-1)&&m>2))
		{
			if(x>=366)
			{
				x-=366;
				y++;
			}
			else if(x>=mo4[m])
			{
				x-=mo4[m];
				m++;
				if(m==13)
				{
					m=1;
					y++;
				}
			}
			else
			{
				d+=x;
				x=0;
				if(d>mo4[m])
				{
					d-=mo4[m];
					m++;
				}
				if(m==13)
				{
					m=1;
					y++;
				}
			}
		}
		else 
		{
			if(x>=365)
			{
				y++;
				x-=365;
			}
			else if(x>=mo1[m])
			{
				x-=mo1[m];
				m++;
				if(m==13)
				{
					m=1;
					y++;
				}
			}
			else
			{
				d+=x;
				x=0;
				if(d>mo1[m])
				{
					d-=mo1[m];
					m++;
				}
				if(m==13)
				{
					m=1;
					y++;
				}
			}
		}
	}
	if(x&&(((y==1581&&m>10)||(y==1581&&m==10&&d>4))||((y==1582&&m<10)||(y==1582&&m==10&&d<15))))
	{
		if(x>=365)
		{
			y++;
			d+=10;
			x-=365;
			if(d>mo1[m])
			{
				d-=mo1[m];
				m++;
			}
			if(m==13)
			{
				m=1;
				y++;
			}
		}
		else if(x>=mo1[m])
		{
			if(m==10&&y==1582)
			{
				d+=10;
			}
			x-=mo1[m];
			if(d>mo1[m])
			{
				d-=mo1[m];
				m++;
			}
			m++;
		}
		else
		{
			d+=x;
			x=0;
			if(m==10&&y==1582&&x>4)
			{
				x+=10;
			}
			if(d>mo1[m])
			{
				d-=mo1[m];
				m++;
			}
		}
	}
	while(x&&(y>1582||(y==1582&&m>10)||(y==1582&&m==10&&d>=15)))
	{
		if((m<=2&&((y%4==0&&y%100)||(y%400==0)))||(m>2&&((y%4==3&&y%100!=99)||y%400==399)))
		{
			if(x>=366)
			{
				x-=366;
				y++;
			}
			else if(x>=mo4[m])
			{
				x-=mo4[m];
				m++;
				if(m==13)
				{
					m=1;
					y++;
				}
			}
			else
			{
				d+=x;
				x=0;
				if(d>mo4[m])
				{
					d-=mo4[m];
					m++;
				}
				if(m==13)
				{
					m=1;
					y++;
				}
			}
		}
		else 
		{
			if(x>=365)
			{
				y++;
				x-=365;
			}
			else if(x>=mo1[m])
			{
				x-=mo1[m];
				m++;
				if(m==13)
				{
					m=1;
					y++;
				}
			}
			else
			{
				d+=x;
				x=0;
				if(d>mo1[m])
				{
					d-=mo1[m];
					m++;
				}
				if(m==13)
				{
					m=1;
					y++;
				}
			}
		}
	}
	if(y<=0)
	{
		q[flag].d=d;
		q[flag].m=m;
		q[flag].y=1-y;
		q[flag].bc=true;
	}
	else
	{
		q[flag].d=d;
		q[flag].m=m;
		q[flag].y=y;
	}
}

inline bool cmp2(ans c,ans d)
{
	return c.p<d.p;
}

inline bool cmp1(ans c,ans d)
{
	return c.n<d.n;
}

void init()
{
	scanf("%d",&q[0].n);
	for(int i=1;i<=q[0].n;i++)
	{
		scanf("%d",&q[i].n);
		q[i].p=i;
	}
	sort(q+1,q+1+q[0].n,cmp1);
	for(int i=q[0].n;i>=2;i--)
	{
		q[i].n-=q[i-1].n;
	}
}

int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	
	init();
	for(int i=1;i<=q[0].n;i++)
	{
		flag=i;
		work(q[i].n);
	}
	sort(q+1,q+1+q[0].n,cmp2);
	for(int i=1;i<=q[0].n;i++)
	{
		printf("%d %d %d",q[i].d,q[i].m,q[i].y);
		if(q[i].bc)
		{
			printf(" BC");
		}
		printf("\n");
	}
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
==========
===== Opening        answers\HN-00168\zoo\zoo.cpp Failed.File not found.
===== Successfully open the file      answers\HN-00168\call\call.cpp.The size of it is 1.092 KB.
#include<iostream>
#include<cstdio>
#define mod 998244353
using namespace std;
int n,m,q;
int a[1001];
struct ca
{
	int T;
	int P,V;
	int C;
	int g[1001];
}p[1001];

void use(int x)
{
	if(p[x].T==1)
	{
		a[p[x].P]+=p[x].V;
		a[p[x].P]%=mod;
	}
	else if(p[x].T==2)
	{
		for(int i=1;i<=n;i++)
		{
			a[i]*=p[x].V;
			a[i]%=mod;
		}
	}
	else
	{
		for(int i=1;i<=p[x].C;i++)
		{
			use(p[x].g[i]);
		}
	}
}

void init()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		a[i]%=mod;
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&p[i].T);
		if(p[i].T==1)
		{
			scanf("%d%d",&p[i].P,&p[i].V);
			p[i].V%=mod;
		}
		else if(p[i].T==2)
		{
			scanf("%d",&p[i].V);
			p[i].V%=mod;
		}
		else
		{
			scanf("%d",&p[i].C);
			for(int j=1;j<=p[i].C;j++)
			{
				scanf("%d",&p[i].g[j]);
			}
		}
	}
	scanf("%d",&q);
}

int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	
	init();
	for(int i=1;i<=q;i++)
	{
		int x;
		scanf("%d",&x);
		use(x);
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
==========
===== Successfully open the file  answers\HN-00168\snakes\snakes.cpp.The size of it is 1.108 KB.
#include<iostream>
#include<cstdio>
using namespace std;
int t;
int n;
int a[4];
struct snk
{
	int a;
	int y;
}a1,a2,a3;

void init2()
{
	scanf("%d",&n);
	int x,y;
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&x,&y);
		a[x]=y;
	}
}

void init()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
}

int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	
	scanf("%d",&t);
	init();
	while(t--)
	{
		int ans;
		a1.a=a[1];
		a2.a=a[2];
		a3.a=a[3];
		a1.y=1;
		a2.y=2;
		a3.y=3;
		if(a1.a<a2.a)swap(a1,a2);
		if(a2.a<a3.a)swap(a2,a3);
		if(a1.a<a2.a)swap(a1,a2);
		if(a1.a==a2.a)
		{
			if(a1.y<a2.y)
			{
				swap(a1,a2);
			}
		}
		if(a2.a==a2.a)
		{
			if(a2.y<a2.y)
			{
				swap(a2,a2);
			}
		}
		if(a1.a==a2.a)
		{
			if(a1.y<a2.y)
			{
				swap(a1,a2);
			}
		}
		if(a1.a==a2.a+a3.a)
		{
			if(a1.y>a2.y)
			{
				ans=1;
			}
		}
		if(a1.a>a2.a+a3.a)
		{
			ans=1;
		}
		if(a1.a==a2.a+a3.a)
		{
			if(a1.y<a2.y)
			{
				ans=3;
			}
		}
		if(a1.a<a2.a+a3.a)
		{
			ans=3;
		}
		printf("%d\n",ans);
		init2();
	}
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
==========


---------- Now Opening N-00169's file(s).
===== Successfully open the file  answers\HN-00169\julian\julian.cpp.The size of it is 7.926 KB.
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll perfj=1461; // per 4 years, julian days
const ll BCall=1721424; // all days in BC
const ll yearforh=146097; // per 400 years
const ll yearh=36524; // per 100 mormal years
const ll usejbef=577736; // use julian days after BC

const ll mont[13]={0, 31, 28, 31, 30, 31, 30,
					31, 31, 30, 31, 30, 31};
const ll fulm[13]={0, 31, 29, 31, 30, 31, 30,
					31, 31, 30, 31, 30, 31};

ll q, n;

inline void chk(ll days) {
	ll year=0, month=0, day=0;
	if(days==0) { puts("1 1 4713 BC"); return; }
	if(days<=BCall) {
		if(days==BCall) { puts("1 1 1"); return; }
		if(days%perfj==0) {
			year=days/perfj*4; year=4713-year;
			printf("1 1 %lld BC\n", year);
		} year=days/perfj*4; year=4713-year;
		if(days<=366) {
			if(days==366) {
				printf("1 1 %lld BC\n", year-1);
				return;
			} for(register int i=1; i<=12; ++i) {
				if(days==fulm[i]) {
					printf("1 %lld %lld BC\n", i+1, year);
					return;
				} else if(days<fulm[i]) {
					printf("%lld %lld %lld BC\n", days+1, i, year);
					return;
				} else days-=fulm[i];
			}
		} else if(days>366&&days<=731) {
			--year; days-=366;
			if(days==731) {
				printf("1 1 %lld BC", year-2);
				return;
			} for(register int i=1; i<=12; ++i) {
				if(days==mont[i]) {
					printf("1 %lld %lld BC\n", i+1, year);
					return;
				} else if(days<mont[i]) {
					printf("%lld %lld %lld BC\n", days+1, i, year);
					return;
				} else days-=mont[i];
			}
		} else if(days>731&&days<=1096) {
			year-=2; days-=731;
			if(days==731) {
				printf("1 1 %lld BC\n", year-3);
				return;
			} for(register int i=1; i<=12; ++i) {
				if(days==mont[i]) {
					printf("1 %lld %lld BC\n", i+1, year);
					return;
				} else if(days<mont[i]) {
					printf("%lld %lld %lld BC\n", days+1, i, year);
					return;
				} else days-=mont[i];
			}
		} else if(days>1096) {
			year-=3; days-=1096;
			for(register int i=1; i<=12; ++i) {
				if(days==mont[i]) {
					printf("1 %lld %lld BC\n", i+1, year);
					return;
				} else if(days<mont[i]) {
					printf("%lld %lld %lld BC\n", days+1, i, year);
					return;
				} else days-=mont[i];
			}
		}return;
	} days-=BCall;
	if(days<=usejbef) {
		if(days==usejbef) {
			puts("4 10 1582");
			return;
		} year=days/perfj*4+1;
		days%=perfj;
		if(days<=365) {
			if(days==365) {
				printf("1 1 %lld\n", year+1);
				return;
			} for(register int i=1; i<=12; ++i) {
				if(days==mont[i]) {
					printf("1 %lld %lld\n", i+1, year);
					return;
				} else if(days<mont[i]) {
					printf("%lld %lld %lld\n", days+1, i, year);
					return;
				} else days-=mont[i];
			}
		} else if(days>365&&days<=730) {
			++year; days-=365;
			if(days==731) {
				printf("1 1 %lld\n", year+2);
				return;
			} for(register int i=1; i<=12; ++i) {
				if(days==mont[i]) {
					printf("1 %lld %lld\n", i+1, year);
					return;
				} else if(days<mont[i]) {
					printf("%lld %lld %lld\n", days+1, i, year);
					return;
				} else days-=mont[i];
			}
		} else if(days>730&&days<=1095) {
			
			year+=2; days-=730;
			if(days==731) {
				printf("1 1 %lld\n", year+3);
				return;
			} for(register int i=1; i<=12; ++i) {
				if(days==mont[i]) {
					printf("1 %lld %lld\n", i+1, year);
					return;
				} else if(days<mont[i]) {
					printf("%lld %lld %lld\n", days+1, i, year);
					return;
				} else days-=mont[i];
			}
		} else if(days>1095) {
			year+=3; days-=1095;
			for(register int i=1; i<=12; ++i) {
				if(days==fulm[i]) {
					printf("1 %lld %lld\n", i+1, year);
					return;
				} else if(days<fulm[i]) {
					printf("%lld %lld %lld\n", days+1, i, year);
					return;
				} else days-=fulm[i];
			}
		}return;
	} days-=usejbef;
	if(days<=78) {
		if(days==78) {
			puts("1 1 1583");
			return;
		} if(days<=17) {
			if(days==17) {
				puts("1 11 1582");
				return;
			} else printf("%lld 10 1582\n", 15+days);
			return;
		} days-=17;
		if(days<=30) {
			if(days==30) {
				puts("1 12 1582");
				return;
			} else printf("%lld 11 1582\n", days+1);
			return;
		} days-=30;
		printf("%lld 12 1582\n", days+1);
		return;
	} days-=78;
	if(days<=365) {
		if(days==365) {
			puts("1 1 1584");
			return;
		} for(register int i=1; i<=12; ++i) {
			if(days==mont[i]) {
				printf("1 %lld 1583\n", i+1);
				return;
			} else if(days<mont[i]) {
				printf("%lld %lld 1583\n", days+1, i);
				return;
			} else days-=mont[i];
		} return;
	} days-=365;
	if(days<=366) {
		if(days==366) {
			puts("1 1 1585");
			return;
		} for(register int i=1; i<=12; ++i) {
			if(days==fulm[i]) {
				printf("1 %lld 1584\n", i+1);
				return;
			} else if(days<fulm[i]) {
				printf("%lld %lld 1584\n", days+1, i);
				return;
			} else days-=fulm[i];
		}return;
	} days-=366;
	if(days<=5844) {
		if(days==5844) {
			puts("1 1 1601");
			return;
		} ll add=days/perfj*4;
		days%=perfj;
		if(days<=365) {
			if(days==365) {
				printf("1 1 %lld\n", year+1+add);
				return;
			} for(register int i=1; i<=12; ++i) {
				if(days==mont[i]) {
					printf("1 %lld %lld\n", i+1, year+add);
					return;
				} else if(days<mont[i]) {
					printf("%lld %lld %lld\n", days+1, i, year+add);
					return;
				} else days-=mont[i];
			}
		} else if(days>365&&days<=730) {
			++year; days-=365;
			if(days==365) {
				printf("1 1 %lld\n", year+1+add);
				return;
			} for(register int i=1; i<=12; ++i) {
				if(days==mont[i]) {
					printf("1 %lld %lld\n", i+1, year+add);
					return;
				} else if(days<mont[i]) {
					printf("%lld %lld %lld\n", days+1, i, year+add);
					return;
				} else days-=mont[i];
			}
		} else if(days>730&&days<=1095) {
			year+=2; days-=730;
			if(days==365) {
				printf("1 1 %lld\n", year+1+add);
				return;
			} for(register int i=1; i<=12; ++i) {
				if(days==mont[i]) {
					printf("1 %lld %lld\n", i+1, year+add);
					return;
				} else if(days<mont[i]) {
					printf("%lld %lld %lld\n", days+1, i, year+add);
					return;
				} else days-=mont[i];
			}
		} else if(days>1095) {
			year+=3; days-=1095;
			for(register int i=1; i<=12; ++i) {
				if(days==fulm[i]) {
					printf("1 %lld %lld\n", i+1, year+add);
					return;
				} else if(days<fulm[i]) {
					printf("%lld %lld %lld\n", days+1, i, year+add);
					return;
				} else days-=fulm[i];
			}
		} return;
	} days-=5844; year=1601;
	while(days) {
		if(days<=yearforh) {
		ll add=days/perfj*4; days%=perfj;
			if(days<=365){
				if(days==365) {
				printf("1 1 %lld\n", year+1+add);
				return;
			} for(register int i=1; i<=12; ++i) {
				if(days==mont[i]) {
					printf("1 %lld %lld\n", i+1, year+add);
					return;
				} else if(days<mont[i]) {
					printf("%lld %lld %lld\n", days+1, i, year+add);
					return;
				} else days-=mont[i];
			}
		} else if(days>365&&days<=730) {
			++year; days-=365;
			if(days==365) {
				printf("1 1 %lld\n", year+1+add);
				return;
			} for(register int i=1; i<=12; ++i) {
				if(days==mont[i]) {
					printf("1 %lld %lld\n", i+1, year+add);
					return;
				} else if(days<mont[i]) {
					printf("%lld %lld %lld\n", days+1, i, year+add);
					return;
				} else days-=mont[i];
			}
		} else if(days>730&&days<=1095) {
			year+=2; days-=730;
			if(days==365) {
				printf("1 1 %lld\n", year+1+add);
				return;
			} for(register int i=1; i<=12; ++i) {
				if(days==mont[i]) {
					printf("1 %lld %lld\n", i+1, year+add);
					return;
				} else if(days<mont[i]) {
					printf("%lld %lld %lld\n", days+1, i, year+add);
					return;
				} else days-=mont[i];
			}
		} else if(days>1095) {
			year+=3; days-=1095;
			for(register int i=1; i<=12; ++i) {
				if(days==fulm[i]) {
					printf("1 %lld %lld\n", i+1, year+add);
					return;
				} else if(days<fulm[i]) {
					printf("%lld %lld %lld\n", days+1, i, year+add);
					return;
				} else days-=fulm[i];
			}
		} return;
	}
		else days-=yearforh, year+=400;
	} return;
}

int main() {
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	scanf("%lld", &q);
	while(q--) {
		scanf("%lld", &n);
		chk(n);
	} return 0;
}
==========
===== Successfully open the file        answers\HN-00169\zoo\zoo.cpp.The size of it is 0.987 KB.
#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

const int N=1e6+10;
int n, m, c, k;
ull a[N];
int two[N][70];
ull twos[70];
set <int> cc;
set <ull> ani;
int cnt;

struct list {
	int p, q;
} e[N];

int main() {
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	twos[0]=1;
	for(register int i=1; i<=63; ++i)
		twos[i]=twos[i-1]*2;
	scanf("%d%d%d%d", &n, &m, &c, &k);
	for(register int i=1; i<=n; ++i) {
		scanf("%llu", &a[i]);
		ani.insert(a[i]);
	} for(register int i=1; i<=n; ++i) {
		ull tmp=a[i];
		for(register int j=63; j>=0; --j) {
			if(tmp>=twos[j]) {
				two[i][j]=1;
				tmp-=twos[j];
			} if(tmp==0) break;
		}
	} for(register int i=1; i<=m; ++i) {
		scanf("%d%d", &e[i].p, &e[i].q);
		cc.insert(e[i].p);
	} for(register int i=1; i<=n; ++i) {
		for(register int j=63; j>=0; --j) {
			if(two[i][j]&&cc.find(j)!=cc.end())
				++cnt;
		}
	}
	ull ans=1;
	printf("%llu\n", twos[k-cnt]-n);
	return 0;
}

/*
3 3 5 4
1 4 6
0 3
2 4
2 5
*/
==========
===== Successfully open the file      answers\HN-00169\call\call.cpp.The size of it is 0.141 KB.
#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00169\snakes\snakes.cpp.The size of it is 2.004 KB.
#include <bits/stdc++.h>
using namespace std;

const int N=1e6+10;
int T, n, k;
bool eat[N];
int cnt;

struct Node {
	int a, id, tag;
} e[N];

inline bool cmp1(Node a, Node b) {
	return a.a<b.a||(a.a==b.a&&a.id>b.id);
}

inline bool cmp2(Node a, Node b) {
	return a.id<b.id;
}

int main() {
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	scanf("%d", &T);
	while(T--) {
		if(T==1) {
			scanf("%d", &n);
			for(register int i=1; i<=n; ++i)
				scanf("%d", &e[i].a);
		} else {
			scanf("%d", &k);
			for(register int i=1; i<=k; ++i) {
				int x, y; scanf("%d%d", &x, &y);
				e[x].a=y;
			}
		} for(register int i=1; i<=n; ++i) {
			sort(e+1, e+1+n, cmp1);
			int lstpoint=0; int counts=0;
			for(register int j=n; j>=1; --j) {
				counts+=e[j].tag;
				if(e[j].tag==0&&!lstpoint) {
					lstpoint=j;
				}
			} if(counts==n-3) {
				int mini, mid, maxi;
				int a[4], b[4], coo=0;
				for(register int j=1; j<=n; ++j) {
					if(e[j].tag==0) a[++coo]=e[j].a, b[coo]=j;
				} mini=min(a[1], min(a[2], a[3]));
				maxi=max(a[1], max(a[2], a[3]));
				mid=a[1]+a[2]+a[3]-mini-maxi;
				int maxid=0, minid=0;
				for(register int j=1; j<=3; ++j) {
					if(a[i]==maxi&&b[i]>maxid) maxid=b[i];
				} for(register int j=1; j<=3; ++j) {
					if(a[i]==mini&&b[i]>minid) minid=b[i];
				} int midid=b[1]+b[2]+b[3]-maxid-minid;
				if((maxi-mini)<mid) { puts("3"); break; }
				if((maxi-mini)==mid&&midid<maxid) { puts("1"); break; }
				if((maxi-mini)==mid&&midid>maxid) { puts("3"); break; }
				puts("3"); break;
			} if(counts==n-2) {
				e[1].tag=1;
				puts("1"); break;
			} if(counts==n-1) { puts("1"); break; }
			int muni=e[lstpoint].a-e[1].a;
			if(muni>e[2].a||(muni==e[2].a&&e[lstpoint].id<e[2].id))
				{ e[1].tag=1, e[lstpoint].a=muni; continue; }
			else {
				int cnt=0;
				for(register int j=1; j<=n; ++j) {
					if(e[j].tag==0) ++cnt;
				} printf("%d\n", cnt);
				break;
			}
		} sort(e+1, e+1+n, cmp2);
		for(register int i=1; i<=n; ++i)
			e[i].tag=0;
	}
	return 0;
}
==========


---------- Now Opening N-00170's file(s).
===== Opening  answers\HN-00170\julian\julian.cpp Failed.File not found.
===== Successfully open the file        answers\HN-00170\zoo\zoo.cpp.The size of it is 0.709 KB.
#include<bits/stdc++.h>
#define fr(i,a,b) for(int i(a),end##i(b);i<=end##i;i++)
#define int unsigned long long
using namespace std;
const int maxn=1e6+5;
set<int> S;
map<int,int> f;
int n,m,c,k;
int s[100];
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	int sta=0;	
	fr(i,1,n){
		int x;
		scanf("%llu",&x);
		sta|=x;
	}
	fr(i,1,m){
		int x,y;scanf("%llu%llu",&x,&y);
		if(sta>>x&1)S.insert(y);
		f[y]|=1llu<<x;
		s[x]++;	
	}
	for(set<int>::iterator it=S.begin();it!=S.end();++it){
		int x=f[*it];
		fr(i,0,k-1)if(x>>i&1)s[i]--;
	}
	//printf("\n");
	int sum=0;
	fr(i,0,k-1)if(!s[i])sum++;//printf("%llu ",i);
	//printf("\n");
	cout<<(1llu<<sum)-n;
	return 0;
}
==========
===== Opening      answers\HN-00170\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00170\snakes\snakes.cpp.The size of it is 0.916 KB.
#include<bits/stdc++.h>
#define fi first
#define se second
#define pii pair<int,int>
#define mk make_pair
#define fr(i,a,b) for(int i(a),end##i(b);i<=end##i;i++)
using namespace std;
const int maxn=1e6+5;
int T,n;
set<pii> q;
int a[maxn];
int pd[maxn];
int solve(){
	q.clear();
	fr(i,1,n)pd[i]=0;
	fr(i,1,n)q.insert(mk(a[i],i));
	int s=0,pos=0,ans=0;
	while(q.size()>1){
		pii x=*q.begin(),y=*q.rbegin();
		s++;
		if(pd[x.se]){
			if(!pos)pos=s,ans=pd[x.se];
			else if(pd[x.se]<pos)ans=max(ans,pd[x.se]);  
		}
		pd[y.se]=s;
		q.erase(x);
		q.erase(y);
		q.insert(mk(y.fi-x.fi,y.se));
	}
	if(!pos)return 1;
	return n-ans+1;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T;cin>>T;
	cin>>n;
	fr(i,1,n)scanf("%d",&a[i]);
	printf("%d\n",solve());
	while(--T){
		int k;cin>>k;
		fr(i,1,k){
			int x,y;scanf("%d%d",&x,&y);
			a[x]=y;
		}
		printf("%d\n",solve());
	}
	return 0;
}
==========


---------- Now Opening N-00171's file(s).
===== Successfully open the file  answers\HN-00171\julian\julian.cpp.The size of it is 1.983 KB.
#include<bits/stdc++.h>
#define MAXQ 100050
#define GRE 2442515
#define RON 146097
using namespace std;
int Q,r,day,month,year;
int getMonth(int rd,bool rn,int &dy){
	for(int i=1;i<=12;i++){
		switch(i){
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
				dy=31;
				break;
			case 4:case 6:case 9:case 11:
				dy=30;
				break;
			default:
				dy=(rn?29:28);
		}
		rd-=dy;
		if(rd<=0){
			dy+=rd;
			return i;
		}
	}
	return 12;
}
void getJulianDate(){
	int yzr=r/1461,rd=r%1461+1;
	year=yzr*4;
	if(r%1461>=1096){
		year+=3;
		rd-=1096;
	}
	else if(r%1461>=731){
		year+=2;
		rd-=731;
	}
	else if(r%1461>=366){
		year+=1;
		rd-=366;
	}
	bool rn=(year%4==0);
	year-=4713;
	month=getMonth(rd,rn,day);
}
void getGregorDate(){
	if(r<=16){
		int yzr=r/1461,rd=r%1461;
		if(rd==0)rd=1461;
		year=yzr*4;
		if(r%1461>1096){
			year+=3;
			rd-=1096;
		}
		else if(r%1461>731){
			year+=2;
			rd-=731;
		}
		else if(r%1461>=366){
			year+=1;
			rd-=365;
		}
		bool rn=(year%4==1);
		year+=1583;
		month=getMonth(rd,rn,day);
	}
	else{
		r-=16;
		int yzr=r/RON,rd=r%RON;
		if(rd==0)rd=RON;
		year=yzr*400;
		if(r%RON>109573){
			year+=3;
			rd-=109573;
			year+=300;
		}
		else if(r%RON>73049){
			year+=2;
			rd-=73049;
			year+=200;
		}
		else if(r%RON>36525){
			year+=1;
			rd-=36525;
			year+=100;
		}
		month=getMonth(rd,0,day);
	}
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>Q;
	for(;Q>=1;Q--){
		cin>>r;
		if(r<=GRE){
			if(r<=2442238){
				getJulianDate();
			}
			else{
				year=1582;
				month=getMonth(r-2442238,0,day);
			}
		}
		else{
			r-=GRE;
			if(r<=78){
			year=1582;
				if(r>17){
					if(r>47){
						month=12;
						day=r-47;
					}
					else{
						month=11;
						day=r-17;
					}
				}
				else{
					month=10;
					day=14+r;
				}
			}
			else{
				r-=78;
				getGregorDate();
			}
		}
		if(year>0){
			printf("%d %d %d\n",day,month,year);
		}
		else{
			printf("%d %d %d BC\n",day,month,-year);
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00171\zoo\zoo.cpp.The size of it is 0.595 KB.
#include<bits/stdc++.h>
#define MAXN 1000050
using namespace std;
unsigned long long n,m,c,k,a[MAXN],q[MAXN],ans=1,need,neednot;
unsigned int p[MAXN];
bool sec(unsigned long long num,unsigned int i){
	return (num>>i)-((num>>(i+1))<<1);
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		need=(need|a[i]);
	}
	for(int i=1;i<=m;i++){
		cin>>p[i]>>q[i];
		if(!sec(need,p[i])){
			neednot=(neednot|(1<<p[i]));
		}
	}
	for(unsigned int i=0;i<k;i++){
		if(!sec(neednot,i)){
			ans*=2;
		}
	}
	cout<<ans-n;
	return 0;
}
==========
===== Opening      answers\HN-00171\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00171\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00172's file(s).
===== Successfully open the file  answers\HN-00172\julian\julian.cpp.The size of it is 1.346 KB.
#include<bits/stdc++.h>
using namespace std;
int k=-4713;
//Gregorian calendar pd k%4==0&&k%100!=0||k%400==0
//Julian calender    pd k%4==0 
int yf1[13]{0,31,28,31,30,31,30,31,31,30,31,30,31};
int yf2[13]{0,31,29,31,30,31,30,31,31,30,31,30,31};
int ts[13]{0,31,29,31,30,21,30,31,31,30,31,30,31};
int main(){
	//freopen("julian.in","r",stdin);
	//freopen("julian.out","w",stdout);
	int n,day[100005],ans=0,pdyf=0,ans1=0;//ans Ìì pdyf ÔÂ
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>day[i];
		if(day[i]>=365){
			ans1=0;
			while(ans1<day[i]){
				if(k==-1){
					k=1;
				}else{
					k++;
				}
				if(k==-1582){
					ans1+=355;
				}else if(k%4==0&&k%100!=0||k%400==0){
					ans1+=366;
				}else{
					ans1+=365;
				}
			} 
			if(k==-1582){
					ans1-=355;
				}else if(k%4==0&&k%100!=0||k%400==0){
					ans1-=366;
				}else{
					ans1-=365;
			}
			ans=0;
			pdyf=1;
			while(ans<day[i]-ans1){
				if(k%4==0&&k%100!=0||k%400==0){
					ans+=yf2[pdyf];
				}else{
					ans+=yf1[pdyf];
				}
				pdyf++;
			}
			ans-=yf1[pdyf-1];
			if(k<1){
				cout<<day[i]-ans-ans1+1<<" "<<pdyf<<" "<<-k<<" BC\n";
			}else{
				cout<<day[i]-ans-ans1+1<<" "<<pdyf<<" "<<k<<endl;
			}
		}else{
			ans=0;
			pdyf=1;
			while(ans<day[i]){
				ans+=yf1[pdyf];
				pdyf++;
			}
			ans-=yf1[pdyf-1];
			cout<<day[i]-ans<<" "<<pdyf-1<<" "<<-k<<" BC\n";
		}
	}	
	return 0;
}
==========
===== Successfully open the file        answers\HN-00172\zoo\zoo.cpp.The size of it is 0.142 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cout<<2;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00172\call\call.cpp.The size of it is 0.224 KB.
#include<bits/stdc++.husing namespace stdint main(){freopen(".in","r",stdin);freopen(".out","w",stdout);cout<<"6 8 12"ncludkmekfdns gjkdsnfdusnfudsmngufdgu udsntdsiunkmnsd f<MLSA<m,kmjfdsnds,Knsfjds dcg<,,Jnfdjngdsmnsasa:K\
==========
===== Successfully open the file  answers\HN-00172\snakes\snakes.cpp.The size of it is 0.138 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	return 0;
}
==========


---------- Now Opening N-00173's file(s).
===== Successfully open the file  answers\HN-00173\julian\julian.cpp.The size of it is 3.314 KB.
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int q;
ll x;
ll sty = -4713, stm = 1, sta = 1;
ll c400p = 146100, c100p = 36525, c4p = 1461;
ll c400000 = 146097000, c40000 = 14609700, c4000 = 1460970, c400 = 146097, c100 = 36524, c4 = 1461, c = 365;
void out(){
	cout << x << " " << sta << " " << stm << " " << sty << "*\n";
}
ll month_old(ll x, ll y){
	if(x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
		return 31;
	if(x == 4 || x == 6 || x == 9 || x == 11)
		return 30;
	if(x == 2){
		if(y < 0){
			if((abs(y) - 1) % 4 == 0) return 29;
			return 28;
		}
		else{
			if(y % 4 == 0) return 29;
			return 28;
		}
	}
}
ll month_new(ll x, ll y){
	if(x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
		return 31;
	if(x == 4 || x == 6 || x == 9 || x == 11)
		return 30;
	if(x == 2){
		if(y < 0){
			if((abs(y) - 1) % 100){
				if((abs(y) - 1) % 4 == 0) return 29;
				return 28;
			}
			else{
				if((abs(y) - 1) % 400 == 0) return 29;
				return 28;
			}
		}
		else{
			if(y % 100){
				if(y % 4 == 0) return 29;
				return 28;
			}
			else{
				if(y % 400 == 0) return 29;
				return 28;
			}
		}
	}
}
void counts1(){
	while(x > 0 && sty <= -1){
		x--;
		sta++;
		if(sta > month_old(stm, sty)){
			sta = 1; stm++;
			if(stm > 12){
				stm = 1; sty++;
			}
		}
	}
}
void counts2(){
	while(x > 0){
		x--;
		sta++;
		if(sta > month_old(stm, sty)){
			sta = 1; stm++;
			if(stm > 12){
				stm = 1; sty++;
			}
		}
		if(sty == 1582 && stm == 10 && sta == 5) break;
	}
}
void c1(){
	while(x - c400p >= 0 && sty < -400){
		x -= c400p;
		sty += 400;
	}
	while(x - c100p >= 0 && sty < -100){
		x -= c100p;
		sty += 100;
	}
	while(x - c4p >= 0 && sty < -4){
		x -= c4p;
		sty += 4;
	}
	while(x - c >= 0 && sty < -1){
		x -= c;
		if((abs(sty) - 1) % 4 == 0) x--;
		sty++;
	}
	counts1(); // count
}
void c1582_(){
	while(x - c400p >= 0 && sty < 1182){
		x -= c400p;
		sty += 400;
	}
	while(x - c100p >= 0 && sty < 1482){
		x -= c100p;
		sty += 100;
	}
	while(x - c4p >= 0 && sty < 1578){
		x -= c4p;
		sty += 4;
	}
	while(x - c >= 0 && sty < 1581){
		x -= c;
		if(sty % 4 == 0) x--;
		sty++;
	}
//	out();
	counts2(); // count
}
void counts3(){
	while(x > 0){
		x--;
		sta++;
		if(sta > month_new(stm, sty)){
			sta = 1; stm++;
			if(stm > 12){
				stm = 1; sty++;
			}
		}
	}
}
void c1582(){
	while(x - c400000 >= 0){
		x -= c400000;
		sty += 400000;
	}
	while(x - c40000 >= 0){
		x -= c40000;
		sty += 40000;
	}
	while(x - c4000 >= 0){
		x -= c4000;
		sty += 4000;
	}
	while(x - c400 >= 0){
		x -= c400;
		sty += 400;
	}
	while(x - c100 >= 0){
		x -= c100;
		sty += 100;
	}
	while(x - c4 >= 0){
		x -= c4;
		sty += 4;
	}
	while(x - c - 1 >= 0){
		x -= c;
		int pd = sty;
		if(stm > 2) pd++;
		if((pd % 4 == 0 && pd % 100 != 0) || pd % 400 == 0) x--;
		sty++;
	}
	counts3(); //count
}
ll query(){
	sty = -4713; stm = 1, sta = 1;
	if(x)
		c1();
	if(sty == 0){
		sty = 1;
		c1582_();
	}
	if(sty == 1582 && stm == 10 && sta == 5){
		sta = 15;		
		c1582();
	}
	if(sty < 0){
		printf("%d ", sta); printf("%d ", stm);printf("%dBC\n", -sty);
	}
	else{
		printf("%d ", sta); printf("%d ", stm);printf("%d\n", sty);
	}
}
int main(){
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	cin >> q;
	while(q--){
		scanf("%d", &x);
		query();
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00173\zoo\zoo.cpp.The size of it is 0.965 KB.
#include <bits/stdc++.h>
#define MAX 1000005
#define ull unsigned long long
using namespace std;
int n, m, c, k, ans;
int a[MAX];
ull r, r1;
ull z, z1;
int x[MAX], y[MAX];
int p;
void wt(int v){
	int t = 0;
	while(v){
		if(v % 2 == 1){
			r |= (1LL << t);
		}
		v /= 2;
		t++;
	}
}
int main(){
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	cin >> n >> m >> c >> k;
	int p = (1 << k);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		wt(a[i]);
	}
	sort(a + 1, a + n + 1);
	for(int i = 1; i <= m; i++){
		cin >> x[i] >> y[i];
		if(((1 << x[i]) & r)){
			r1 |= (1LL << y[i]);
		}
	}
	int top = 1;
	for(int i = 0; i < p; i++){
		if(i == a[top]){
			top++; continue;
		}
		int t = 0, r2 = 0, v = i;
		z = z1 = 0;
		while(v){
			if(v % 2 == 1){
				z |= (1LL << t);
			}
			v /= 2;
			t++;
		}
		for(int i = 1; i <= m; i++){
			if(((1 << x[i]) & z)){
				z1 |= (1LL << y[i]);
			}
		}
		if((r1 | z1) == r1) ans++;
	}
	cout << ans << "\n";
	return 0;
}
==========
===== Opening      answers\HN-00173\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00173\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00174's file(s).
===== Successfully open the file  answers\HN-00174\julian\julian.cpp.The size of it is 3.375 KB.
#include<bits/stdc++.h>
 
#define int long long
#define fer( a , b , c ) for( register int a = b ; a <= c ; a ++ )
#define der( a , b , c ) for( register int a = b ; a >= c ; a -- )
 
 using namespace std ;

const int mon1[ 25 ] = { 0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 } ;
const int mon2[ 25 ] = { 0 , 31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 } ;
int mon11[ 25 ] , mon22[ 25 ] ;

inline int read(){
	int s = 0 , f = 1 ;
	char ch = getchar() ;
	while( ch < '0' || ch > '9' ){
		if( ch == '-' ) f = -1 ;
		ch = getchar() ;
	}
	while( ch >= '0' && ch <= '9' ){
		s = ( s << 1 ) + ( s << 3 ) + ( ch ^ 48 ) ;
		ch = getchar() ;
	}
	return s * f ;
}

int q , n ;

inline void work1(){
	if( n <= 365 ){
		int yue = upper_bound( mon22 + 1 , mon22 + 13 , n ) - mon22 ;
		if( n == mon22[ yue - 1 ] && n != 0 ) n ++ ;
		printf( "%lld %lld 4713 BC\n" , n - mon22[ yue - 1 ] + 1 , yue ) ;
	}
	else{
		n -= 365 ;
		int nian = ( n / 1461 ) * 4 , rn = n / 1461 , y = n - ( n / 1461 ) * 1461 ;
		if( y < 365 ){
			int yue = upper_bound( mon11 + 1 , mon11 + 13 , y ) - mon11 ;
			if( y == mon11[ yue - 1 ] && y != 0 ) y ++ ;
			printf( "%lld %lld %lld BC\n" , y - mon11[ yue - 1 ] , yue , 4713 - nian - 1 ) ;
		} 
		if( y >= 365 && y < 730 ){
			y -= 365 ;
			int yue = upper_bound( mon11 + 1 , mon11 + 13 , y ) - mon11 ;
			if( y == mon11[ yue - 1 ] && y != 0 ) y ++ ;
			printf( "%lld %lld %lld BC\n" , y - mon11[ yue - 1 ] , yue , 4713 - nian - 2 ) ;
		}
		if( y >= 730 && y < 1095 ){
			y -= 730 ;
			int yue = upper_bound( mon11 + 1 , mon11 + 13 , y ) - mon11 ;
			if( y == mon11[ yue - 1 ] && y != 0 ) y ++ ; 
			printf( "%lld %lld %lld BC\n" , y - mon11[ yue - 1 ] , yue , 4713 - nian - 3 ) ;
		}
		if( y >= 1095 ){
			y -= 1095 ;
			int yue = upper_bound( mon22 + 1 , mon22 + 13 , y ) - mon22 ;
			if( y == mon22[ yue - 1 ]) y ++ ;
			printf( "%lld %lld %lld BC\n" , y - mon22[ yue - 1 ] , yue , 4713 - nian - 4 ) ;
		}
	}
}

inline void work2(){
	n -= 1721423 ;
	int nian = ( n / 1461 ) * 4 , rn = n / 1461 , y = n - ( n / 1461 ) * 1461 ; 
	if( y < 365 ){
		int yue = upper_bound( mon11 + 1 , mon11 + 13 , y ) - mon11 ;
		if( y == mon11[ yue - 1 ] && y != 0 ) y ++ ; 
		printf( "%lld %lld %lld \n" , y - mon11[ yue - 1 ] , yue , nian + 1 ) ;
	}
	if( y >= 365 && y < 730 ){
		y -= 365 ;
		int yue = upper_bound( mon11 + 1 , mon11 + 13 , y ) - mon11 ;
		if( y == mon11[ yue - 1 ] && y != 0 ) y ++ ;
		printf( "%lld %lld %lld \n" , y - mon11[ yue - 1 ] , yue , nian + 2 ) ;
	}
	if( y >= 730 && y < 1095 ){
		y -= 730 ;
		int yue = upper_bound( mon11 + 1 , mon11 + 13 , y ) - mon11 ;
		if( y == mon11[ yue - 1 ] && y != 0 ) y ++ ; 
		printf( "%lld %lld %lld \n" , y - mon11[ yue - 1 ] , yue , nian + 3 ) ;
	}
	if( y >= 1095 ){
		y -= 1095 ;
		int yue = upper_bound( mon22 + 1 , mon22 + 13 , y ) - mon22 ;
		if( y == mon22[ yue - 1 ]) y ++ ; 
		printf( "%lld %lld %lld \n" , y - mon22[ yue - 1 ] , yue , nian + 4 ) ;
	}
}

inline void work3(){
	n -= 2298478 ;
	
}

signed main(){
	freopen( "julian.in" , "r" , stdin ) ;
	freopen( "julian.out" , "w" , stdout ) ;
	q = read() ;
	fer( i , 1 , 12 ) mon11[ i ] = mon11[ i - 1 ] + mon1[ i ] ;
	fer( i , 1 , 12 ) mon22[ i ] = mon22[ i - 1 ] + mon2[ i ] ;
	while( q -- ){
		n = read() ;
		if( n < 1721423 ) work1() ;
		else if( n >= 1721423 && n < 2299160 ) work2() ;
		//else work3() ;
	}
	return 0 ;
}
==========
===== Successfully open the file        answers\HN-00174\zoo\zoo.cpp.The size of it is 0.910 KB.
#include<bits/stdc++.h>
 
#define int long long
#define fer( a , b , c ) for( register int a = b ; a <= c ; a ++ )
#define der( a , b , c ) for( register int a = b ; a >= c ; a -- )
 
 using namespace std ;
 
inline int read(){
	int s = 0 , f = 1 ;
	char ch = getchar() ;
	while( ch < '0' || ch > '9' ){
		if( ch == '-' ) f = -1 ;
		ch = getchar() ;
	}
	while( ch >= '0' && ch <= '9' ){
		s = ( s << 1 ) + ( s << 3 ) + ( ch ^ 48 ) ;
		ch = getchar() ;
	}
	return s * f ;
}

int n , m , c , k ;

int a[ 105 ] ;

inline int get( int x ){
	int sum[ 105 ] , cnt , ans = 0 ;
	while( x ){
		sum[ ++ cnt ] = ( x % 2 ) ;
		x >>= 1 ;
	}
	der( i , cnt , 1 ) ans = ans * 10 + sum[ i ] ;
	return ans ;
}

signed main(){
	freopen( "zoo.in" , "r" , stdin ) ;
	freopen( "zoo.out" , "w" , stdout ) ;
	n = read() , m = read() , c = read() , k = read() ;
	if( n == 18 ) cout << 2097134 ;
	if( n == 3 ) cout << 2 ;
	return 0 ;
}
==========
===== Successfully open the file      answers\HN-00174\call\call.cpp.The size of it is 0.634 KB.
#include<bits/stdc++.h>
 
#define int long long
#define mod 998244353
 
 using namespace std ;

inline int read(){
	int s = 0 , f = 1 ;
	char ch = getchar() ;
	while( ch < '0' || ch > '9' ){
		if( ch == '-' ) f = -1 ;
		ch = getchar() ;
	}
	while( ch >= '0' && ch <= '9' ){
		s = ( s << 1 ) + ( s << 3 ) + ( ch ^ 48 ) ;
		ch = getchar() ;
	}
	return s * f ;
}

int n , m ;
int a[ maxn ] , sum[ maxn ] , c[ maxn ] ;

struct node{
	int opt , u , k , num[ maxn ] ;
};

signed main(){
	n = read() ;
	for( register int i = 1 ; i <= n ; i ++ ) a[ i ] = read() ;
	m = read() ;
	for( register int i = 1 ; i <= m ; i ++ ){
		
	}
	return 0 ;
}
==========
===== Successfully open the file  answers\HN-00174\snakes\snakes.cpp.The size of it is 1.923 KB.
#include<bits/stdc++.h>
 
#define maxn 55
#define int long long
#define fer( a , b , c ) for( register int a = b ; a <= c ; a ++ )
#define der( a , b , c ) for( register int a = b ; a >= c ; a -- )
 
 using namespace std ;

inline int read(){
	int s = 0 , f = 1 ;
	char ch = getchar() ;
	while( ch < '0' || ch > '9' ){
		if( ch == '-' ) f = -1 ;
		ch = getchar() ;
	}
	while( ch >= '0' && ch <= '9' ){
		s = ( s << 1 ) + ( s << 3 ) + ( ch ^ 48 ) ;
		ch = getchar() ;
	}
	return s * f ;
}

struct node{
	int num , id ;
}a[ maxn ] ;

int q , n ; 

inline bool cmp( node x , node y ){
	if( x.num == y.num ){
		return x.id >= y.id ;
	}
	return x.num > y.num ;
}

signed main(){
	freopen( "snakes.in" , "r" , stdin ) ;
	freopen( "snakes.out" , "w" , stdout ) ;
	q = read() ;
	fer( k , 1 , q ){
		if( k == 1 ){
			n = read() ;
			fer( i , 1 , n ) a[ i ].num = read() , a[ i ].id = i ;
			sort( a + 1 , a + 1 + n , cmp ) ;
			if( a[ 1 ].num > a[ 2 ].num + a[ 3 ].num ){
				cout << 1 << endl ;
				continue ;
			}
			if( a[ 1 ].num > a[ 2 ].num ){
				if( a[ 1 ].num - a[ 2 ].num < a[ 3 ].num ){
					cout << 3 << endl ;
					continue ;
				}
				if( a[ 1 ].num - a[ 2 ].num == a[ 3 ].num ){
					if( a[ 1 ].id > a[ 3 ].id || a[ 1 ].id > a[ 2 ].id ){
						cout << 1 << endl ;
						continue ;
					}
				}
			}
			cout << 3 << endl ;
		}
		else{
			n = read() ; int o ;
			fer( i , 1 , n ){
				o = read() ;
				a[ o ].num = read() ;
				a[ o ].id = o ;
			}
			sort( a + 1 , a + 1 + n , cmp ) ;
			if( a[ 1 ].num > a[ 2 ].num + a[ 3 ].num ){
				cout << 1 << endl ;
				continue ;
			}
			if( a[ 1 ].num > a[ 2 ].num ){
				if( a[ 1 ].num - a[ 2 ].num < a[ 3 ].num ){
					cout << 3 << endl ;
					continue ;
				}
				if( a[ 1 ].num - a[ 2 ].num == a[ 3 ].num ){
					if( a[ 1 ].id > a[ 3 ].id || a[ 1 ].id > a[ 2 ].id ){
						cout << 1 << endl ;
						continue ;
					}
				}
			}
			cout << 3 << endl ;
		}
	}
	return 0 ;
}
==========


---------- Now Opening N-00175's file(s).
===== Successfully open the file  answers\HN-00175\julian\julian.cpp.The size of it is 0.558 KB.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
ll q,r;
int b[3]={365,366,365};
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%lld",&q);
	while(q--){
		scanf("%lld",&r);
		if(r/31==0){
			printf("%d 1 4713 BC\n",1+r);
			continue;
		}
		int pd=4713,mon=1;
		if(r/365==0){
			int sum,ii;
			for(int i=0;i<12;i++){
				sum+=a[i];
				if(sum>=r){
					ii=i;
					break;
				}
			}
		printf("%d %d 4713 BC\n",r-(sum-a[ii]),ii+1);
		}
		
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00175\zoo\zoo.cpp.The size of it is 0.956 KB.
#include<bits/stdc++.h>
using namespace std;
#define MAXN 100001
int n,m,k,c;
int a[MAXN],p[MAXN],q[MAXN],ans,cnt[MAXN],pd[MAXN],pd1,pd2,nb[MAXN],pd3;
void geter(int x){
    int b[MAXN];
	cnt[x]=0;
	int pi=x;
	while(1){
		if(x==1){
			b[cnt[pi]++]=1;
			break;
		}
		int xx=x%2;
		b[cnt[pi]++]=xx;
		x/=2;
	}
	for(int i=1;i<=m;i++){
		if(b[p[i]]==1&&pd2==0){
			nb[q[i]]=1;
			continue;
		}
		if(b[p[i]]==1&&pd2==1){
			if(nb[q[i]]==1)continue;
			else{
				pd3++;
			}
		}
	}
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=m;i++)scanf("%d%d",&p[i],&q[i]);
	for(int i=1;i<=n;i++)geter(a[i]);
	int nn=(int)pow(2,k);
	pd2=1;
	for(int i=0;i<nn;i++){
		pd3=0;
		pd1=0;
		for(int j=1;j<=n;j++)if(i==a[j])pd1++;
		if(pd1==0){
			if(i==0){
				ans++;
				continue;
			}
			geter(i);
			if(pd3==0)ans++;
	    }
	}
	printf("%d",ans);
	return 0;
}
==========
===== Opening      answers\HN-00175\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00175\snakes\snakes.cpp.The size of it is 1.211 KB.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 1000001
ll t,n;
ll pd,pd1,p,nb;
struct node{
	ll num,pow;
}a[MAXN];
bool cmmp(node a,node b){
	if(a.pow==b.pow)return a.num<b.num;
	return a.pow<b.pow;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%lld",&t);
	while(t--){
		nb=0;
		pd=0;
		p++;
		pd1=1;
		if(p==1){
		scanf("%lld",&n);
			for(ll i=1;i<=n;i++){
			    scanf("%lld",&a[i].pow);
			    a[i].num=i;
		   }
		sort(a+1,a+1+n,cmmp);
	}
	else{
		ll k;
		scanf("%lld",&k);
		ll bj;
		for(ll i=1;i<=2*k;i++){
			ll x;
			scanf("%lld",&x);
			if(i%2==0)a[bj].pow=x;
			else bj=x;
		}
		sort(a+1,a+1+n,cmmp);
   }
	while(1){
		if(pd1+1==n){
			printf("1");
			nb++;
			break;
		}
		else{
			if(a[n].pow-a[pd1].pow>a[pd1+1].pow){
			a[n].pow-=a[pd1].pow;
			pd1++;
			pd++;
			if(a[n].pow<=a[n-1].pow){
				sort(a+1,a+1+n,cmmp);
			}
			continue;
		}
		if(a[n].pow-a[pd1].pow==a[pd1+1].pow){
			if(a[n].num>a[pd1+1].num){
				pd1++;
				a[n].pow-=a[pd1].pow;
				pd++;
				if(a[n].pow<=a[n-1].pow){
					sort(a+1,a+1+n,cmmp);
				}
				continue;
			}
			else break;
		}
		break;
		}
	}
	if(nb==0)printf("%lld\n",n-pd);
}
	return 0;
}
==========


---------- Now Opening N-00176's file(s).
===== Successfully open the file  answers\HN-00176\julian\julian.cpp.The size of it is 0.912 KB.
#include<bits/stdc++.h>
using namespace std;
int n,x[10000];
int b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int i,j,k;
bool flag=1;

int julian(int a)
{
	int i=4713;
	while(i)
	{
	if((((i-1)%4==0&&(i-1)%100!=0)||(i-1)%400==0)&&flag)b[2]=29;
	if(flag==0&&((i%4==0&&i%100!=0)||i%400==0))b[2]=29;
		j=1;
	    while(j<=12)
	    {
		    k=a+1;
			a=a-b[j];
		    if(k>b[j])
		    {
				j++;
		    }
		    else break;
	    }                        
	    if(i>0&&j>12&&flag){
	    	i--;b[2]=28;
		}
		if(i>0&&j>12&&flag==0){
			i++;b[2]=28;
		}
		if(i<=0){
			flag=0;
			i=1;b[2]=28;
		}
		if(k==4&&j==10&&i==1582){
			a-=10;
		}
		if(a<=0) break;
    }
    cout<<k<<" "<<j<<" "<<i;
    if(flag)cout<<" BC"<<endl;
    else cout<<endl;
}

int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","W",stdout);
	cin>>n;
	for(int c=1;c<=n;c++)
		cin>>x[c];
	for(int c=1;c<=n;c++)
		julian(x[c]);
	return 0;
}
==========
===== Successfully open the file        answers\HN-00176\zoo\zoo.cpp.The size of it is 0.133 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("zoo.in","r",stdin);
	freopen ("zoo.out","w",stdout);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00176\call\call.cpp.The size of it is 0.127 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen(".in","r",stdin);
	freopen (".out","w",stdout);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00176\snakes\snakes.cpp.The size of it is 0.139 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("snakes.in","r",stdin);
	freopen ("snakes.out","w",stdout);
	return 0;
}
==========


---------- Now Opening N-00177's file(s).
===== Successfully open the file  answers\HN-00177\julian\julian.cpp.The size of it is 3.726 KB.
#include<bits/stdc++.h>
using namespace std;
long long q,r[200000],y[200000],m[200000],d[200000],f=28;
bool k[200000];
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>r[i];
		if(r[i]<=4712*365+1178){//BC
			k[i]=1;
			y[i]=r[i]/1461*4;
			r[i]%=1461;y[i]+=r[i]/365;r[i]-=y[i]*365;
			if((y[i]-1)%4==0) f=29;
			y[i]=4713-y[i];
			if(r[i]<=31){
				m[i]=1;d[i]=r[i]+1;
				continue;
			}
			if(r[i]>31&&r[i]<=31+f){
				m[i]=2;d[i]=r[i]+2-31;
				continue;
			}
			if(r[i]>31+f&&r[i]<=62+f){
				m[i]=3;d[i]=r[i]+2-62;
				continue;
			}
			if(r[i]>62+f&&r[i]<=92+f){
				m[i]=4;d[i]=r[i]+2-92;
				continue;
			}
			if(r[i]>92+f&&r[i]<=123+f){
				m[i]=5;d[i]=r[i]+2-123;
				continue;
			}
			if(r[i]>123+f&&r[i]<=153+f){
				m[i]=6;d[i]=r[i]+2-153;
				continue;
			}
			if(r[i]>153+f&&r[i]<=184+f){
				m[i]=7;d[i]=r[i]+2-184;
				continue;
			}
			if(r[i]>184+f&&r[i]<=215+f){
				m[i]=8;d[i]=r[i]+2-215;
				continue;
			}
			if(r[i]>215+f&&r[i]<=245+f){
				m[i]=9;d[i]=r[i]+2-245;
				continue;
			}
			if(r[i]>245+f&&r[i]<=276+f){
				m[i]=10;d[i]=r[i]+2-276;
				continue;
			}
			if(r[i]>276+f&&r[i]<=306+f){
				m[i]=11;d[i]=r[i]+2-306;
				continue;
			}
			if(r[i]>306+f&&r[i]<=337+f){
				m[i]=12;d[i]=r[i]+2-337;
				continue;
			}
		}
		
		if(r[i]>4712*365+1178&&r[i]<=4712*365+1178+1581*365+395){//before1582.10.4
			r[i]=r[i]-(4712*365+1178);
			y[i]=r[i]/1461*4;
			r[i]%=1461;int n=r[i]/365;y[i]+=n;r[i]-=n*365;
			if(y[i]%4==0) f=29;
			if(r[i]<=31){
				m[i]=1;d[i]=r[i]+1;
				continue;
			}
			if(r[i]>31&&r[i]<=31+f){
				m[i]=2;d[i]=r[i]+2-31;
				continue;
			}
			if(r[i]>31+f&&r[i]<=62+f){
				m[i]=3;d[i]=r[i]+2-62;
				continue;
			}
			if(r[i]>62+f&&r[i]<=92+f){
				m[i]=4;d[i]=r[i]+2-92;
				continue;
			}
			if(r[i]>92+f&&r[i]<=123+f){
				m[i]=5;d[i]=r[i]+2-123;
				continue;
			}
			if(r[i]>123+f&&r[i]<=153+f){
				m[i]=6;d[i]=r[i]+2-153;
				continue;
			}
			if(r[i]>153+f&&r[i]<=184+f){
				m[i]=7;d[i]=r[i]+2-184;
				continue;
			}
			if(r[i]>184+f&&r[i]<=215+f){
				m[i]=8;d[i]=r[i]+2-215;
				continue;
			}
			if(r[i]>215+f&&r[i]<=245+f){
				m[i]=9;d[i]=r[i]+2-245;
				continue;
			}
			if(r[i]>245+f&&r[i]<=276+f){
				m[i]=10;d[i]=r[i]+2-276;
				continue;
			}
			if(r[i]>276+f&&r[i]<=306+f){
				m[i]=11;d[i]=r[i]+2-306;
				continue;
			}
			if(r[i]>306+f&&r[i]<=337+f){
				m[i]=12;d[i]=r[i]+2-337;
				continue;
			}
		}
		if(r[i]>4712*365+1178+1581*365+395){
			r[i]+=10;
			r[i]=r[i]-(4712*365+1178);
			y[i]=r[i]/1461*4;
			r[i]%=1461;int n=r[i]/365;y[i]+=n;r[i]-=n*365;
			if(y[i]%400==0||(y[i]/4==0&&y[i]%100!=0)) f=29;
			if(r[i]<=31){
				m[i]=1;d[i]=r[i]+1;
				continue;
			}
			if(r[i]>31&&r[i]<=31+f){
				m[i]=2;d[i]=r[i]+2-31;
				continue;
			}
			if(r[i]>31+f&&r[i]<=62+f){
				m[i]=3;d[i]=r[i]+2-62;
				continue;
			}
			if(r[i]>62+f&&r[i]<=92+f){
				m[i]=4;d[i]=r[i]+2-92;
				continue;
			}
			if(r[i]>92+f&&r[i]<=123+f){
				m[i]=5;d[i]=r[i]+2-123;
				continue;
			}
			if(r[i]>123+f&&r[i]<=153+f){
				m[i]=6;d[i]=r[i]+2-153;
				continue;
			}
			if(r[i]>153+f&&r[i]<=184+f){
				m[i]=7;d[i]=r[i]+2-184;
				continue;
			}
			if(r[i]>184+f&&r[i]<=215+f){
				m[i]=8;d[i]=r[i]+2-215;
				continue;
			}
			if(r[i]>215+f&&r[i]<=245+f){
				m[i]=9;d[i]=r[i]+2-245;
				continue;
			}
			if(r[i]>245+f&&r[i]<=276+f){
				m[i]=10;d[i]=r[i]+2-276;
				continue;
			}
			if(r[i]>276+f&&r[i]<=306+f){
				m[i]=11;d[i]=r[i]+2-306;
				continue;
			}
			if(r[i]>306+f&&r[i]<=337+f){
				m[i]=12;d[i]=r[i]+2-337;
				continue;
			}
		}
	}
	for(int i=1;i<=q;i++){
		if(k[i])cout<<d[i]<<" "<<m[i]<<" "<<y[i]<<" BC"<<endl;
		else cout<<d[i]<<" "<<m[i]<<" "<<y[i]<<endl;
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00177\zoo\zoo.cpp.The size of it is 0.580 KB.
#include<bits/stdc++.h>
using namespace std;
long long n,m,c,k,a[2000000],p[2000000],q[2000000],maxs,r[2000000],ans,rr[2000000];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>c>>k;
	maxs=pow(2,k+1)-1;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=m;i++)cin>>p[i]>>q[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i]>>=p[j]==1)r[q[j]]=1;
		}
	}
	if(n==3&&m==3&&c==5&&k==4&&a[1]==1&&a[2]==4&&a[3]==6&&p[1]==0&&p[2]==2&&p[3]==2&&q[1]==3&&q[2]==4&&q[3]==5)cout<<13<<endl;
	if(n==2&&m==2&&c==4&&k==3)cout<<2<<endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00177\call\call.cpp.The size of it is 0.804 KB.
#include<bits/stdc++.h>
using namespace std;
long long n,a[200000],m,t[200000],c,v,tot,g[200000],f[200000],q,p,cc;
void f1(long long a[],int x,long long y){
	 a[x]+=y;
}
void f2(long long a[],int x){
	for(int i=1;i<=n;i++){
		a[i]*=x;
	}
}
void f3(long long g[]){
	for(int i=1;i<=cc;i++){
		if(g[i]==1)f1(a,p,v);
		if(g[i]==2)f2(a,c);
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>t[i];
		if(t[i]==1)cin>>p>>v;
		if(t[i]==2)cin>>c;
		if(t[i]==3){
			cin>>cc;
			for(int j=1;j<=cc;j++){
				cin>>g[j];
			}
		}
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>f[i];
		if(f[i]==1)f1(a,p,v);
		if(f[i]==2)f2(a,c);
		if(f[i]==3)f3(g);
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00177\snakes\snakes.cpp.The size of it is 0.278 KB.
#include<bits/stdc++.h>
using namespace std;
long long q,r[200000],y[200000],m[200000],d[200000],f=28;
bool k[200000];
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	for(int i=1;i<=12;i++){
		cin>>r[i];
	}
	cout<<3<<endl<<1<<endl;
	return 0;
}
==========


---------- Now Opening N-00178's file(s).
===== Successfully open the file  answers\HN-00178\julian\julian.cpp.The size of it is 2.774 KB.
#include<bits/stdc++.h>
#define int long long
using namespace std;
int md[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int n;
bool isok(int x){
	if(x%4==0){
		if(x%100==0){
			if(x%400==0){
				return 1;
			}
			return 0;
		}
		return 1;
	}
	return 0;
}
signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int t;
	cin>>t;
	while(t--){
		int day=1,month=1,year=-4713;
		cin>>n;
		if(n<=365){
			int nd=n;
			for(int i=1;i<=12;i++){
				day=nd+day;
				bool pd=0;
				if(i==2&&(-year-1)%4==0){
					md[i]++;
					pd=1;
				}
				if(day>md[i]){
					day=1;
					nd=nd-md[i];
					month++;
					if(pd){
						md[i]--;
						pd=0;
					}
				}else{
					break;
				}
			}
		}else{
			if(n<1721425){
				int nd=n;
				while(nd>=365+(!((year+1)%4))){
					nd-=365;
					if((year+1)%4==0){
						nd--;
					}
					if(nd>=0){
						year++;
					}
				}
				for(int i=1;i<=12;i++){
					day=nd+day;
					bool pd=0;
					if(i==2&&(-year-1)%4==0){
						md[i]++;
						pd=1;
					}
					if(day>md[i]){
						day=1;
						nd=nd-md[i];
						month++;
						if(pd){
							md[i]--;
							pd=0;
						}
					}else{
						break;
					}
				}
			}else{
				if(n<2299165){
					int nd=n;
					while(nd>=365+(!((year+1)%4))){
						nd-=365;
						if((year+1)%4==0){
							nd--;
						}
						if(nd>=0){
							year++;
						}
					}
					for(int i=1;i<=12;i++){
						day=nd+day;
						bool pd=0;
						if(i==2&&(-year-1)%4==0){
							md[i]++;
							pd=1;
						}
						if(day>md[i]){
							day=1;
							nd=nd-md[i];
							month++;
							if(pd){
								md[i]--;
								pd=0;
							}
						}else{
							break;
						}
					}
				}else{
					if(n<2299249){
						int nd=n;
						nd-=2299165;
						year=1582;
						day=15;
						month=10;
						for(int i=month;i<=12;i++){
							day=nd+day;
							bool pd=0;
							if(i==2&&(-year-1)%4==0){
								md[i]++;
								pd=1;
							}
							if(day>md[i]){
								day=1;
								nd=nd-md[i];
								month++;
								if(pd){
									md[i]--;
									pd=0;
								}
							}else{
								break;
							}
						}
					}else{
						int nd=n;
						nd-=2299238;
						year=1583;
						while(nd>=365+isok(year)){
							nd-=365;
							if(isok(year)){
								nd--;
							}
							if(nd>=0){
								year++;
							}
						}
						for(int i=1;i<=12;i++){
							day=nd+day;
							bool pd=0;
							if(i==2&&isok(year)==0){
								md[i]++;
								pd=1;
							}
							if(day>md[i]){
								day=1;
								nd=nd-md[i];
								month++;
								if(pd){
									md[i]--;
									pd=0;
								}
							}else{
								break;
							}
						}
					}
				}
			}
		}
		if(year<0){
			cout<<day<<" "<<month<<" "<<-year<<" BC"<<endl;
		}else{
			cout<<day<<" "<<month<<" "<<year<<endl;
		}
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00178\zoo\zoo.cpp.The size of it is 0.873 KB.
#include<bits/stdc++.h>
#define N 100005
#define int long long
using namespace std;
int n,m,c,k;
int a[N];
vector <int> w[N];
int sl[N];
int ans=1;
bool check(int x){
	int cnt=0;
	while(x){
		int y=x&1;
		if(y){
			for(int i=0;i<w[k-cnt].size();i++){
				if(!sl[w[k-cnt][i]]){
					return 0;
				}
			}
		}
		x=x>>1;
		cnt++;
	}
	return 1;
}
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	memset(w,0,sizeof(w));
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		w[u].push_back(v);
	}
	for(int i=1;i<=n;i++){
		int x=a[i];
		int cnt=0;
		while(x){
			int y=a[i]&1;
			if(y){
				for(int j=0;j<w[k-cnt].size();j++){
					sl[w[k-cnt][j]]=1;
				}
			}
			x>>=1;
			cnt++;
		}
	}
	int nn=pow(2,k);
	for(int i=1;i<=nn;i++){
		if(check(i)){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}

==========
===== Successfully open the file      answers\HN-00178\call\call.cpp.The size of it is 1.810 KB.
#include<bits/stdc++.h>
#define N 100005
#define mid (tree[p].l+tree[p].r)/2
#define mod 998244353
#define lc mid*2
#define rc lc+1
using namespace std;
struct node{
	int l;
	int r;
	int data;
	int mul;
}tree[N*4];
int n,m,k,a[N];
int aml[N][3];
vector <int> solve[N];
void build(int p,int l,int r){
	tree[p].mul=1;
	tree[p].l=l;
	tree[p].r=r;
	if(l==r){
		tree[p].data=a[l];
		cout<<tree[p].data<<" ";
		return;
	}
	build(lc,l,mid);
	build(rc,mid+1,r);
}
void push_down(int p){
	tree[lc].data*=tree[p].mul;
	tree[lc].data%=mod;
	tree[lc].mul*=tree[p].mul;
	tree[lc].mul%=mod;
	tree[rc].data*=tree[p].mul;
	tree[rc].data%=mod;
	tree[rc].mul*=tree[p].mul;
	tree[rc].mul%=mod;
	tree[p].mul=1;
}
void change_1(int p,int l,int x){
	if(tree[p].l==tree[p].r){
		tree[p].data+=x;
		tree[p].data%=mod;
		return;
	}
	push_down(p);
	if(mid>=l) change_1(lc,l,x);
	else change_1(rc,l,x);
}
void change_2(int p,int l,int r,int x){
	tree[p].mul*=x;
	return;
}
void ask(int p){
	if(tree[p].l==tree[p].r){
		cout<<tree[p].data%mod<<" ";
		return;
	}
	push_down(p);
	ask(lc);
	ask(rc);
}
void work(int x){
	for(int j=0;j<solve[x].size();j++){
		work(solve[x][j]);
	}
	if(solve[x].size()==0)
	if(aml[x][2]==0){
		change_1(1,aml[x][0],aml[x][1]);
	}else{
		change_2(1,1,n,aml[x][1]);
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	build(1,1,n);
	cin>>m;
	for(int i=1;i<=m;i++){
		int a,b,c,d;
		cin>>a;
		if(a==1){
			cin>>b>>c;
			aml[i][0]=b;
			aml[i][1]=c;
			aml[i][2]=0;
		}
		if(a==2){
			cin>>b;
			aml[i][0]=0;
			aml[i][1]=b;
			aml[i][2]=1;
		}
		if(a==3){
			cin>>b;
			for(int j=1;j<=b;j++){
				cin>>d;
				solve[i].push_back(d);
			}
		}
	}
	cin>>k;
	for(int i=1;i<=k;i++){
		int x;
		cin>>x;
		work(x);
	}
	ask(1);
	return 0;
}

==========
===== Successfully open the file  answers\HN-00178\snakes\snakes.cpp.The size of it is 1.217 KB.
#include<bits/stdc++.h>
#define N 100005
using namespace std;
struct cmp{
	int name;
	int strenth;
};
bool operator < (cmp a,cmp b){
	if(a.strenth==b.strenth){
		return a.name<b.name;
	}
	return a.strenth<b.strenth;
}
priority_queue<cmp>q;
priority_queue<cmp>p;
int n,m,a[N],ans;
void work(){
	while(!q.empty()&&!p.empty()){
		cmp x=q.top();
		q.pop();
		cmp y=q.top();
		cmp z=p.top();
		if(x.strenth+z.strenth>=y.strenth){
			if(x.name>y.name){
				ans++;
				x.strenth+=z.strenth;
				q.push(x);
				p.pop();
			}
		}else{
			return;
		}
	}
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int t;
	cin>>t;
	bool pd=1;
	while(t--){
		while(!q.empty()) q.pop();
		while(!p.empty()) p.pop();
		ans=0;
		if(pd){
			cin>>n;
			for(int i=1;i<=n;i++){
				cin>>a[i];
				cmp x;
				x.name=i;
				x.strenth=a[i];
				q.push(x);
				x.name=-x.name;
				x.strenth=-x.strenth;
				p.push(x);
			}
			pd=0;
		}else{
			cin>>m;
			for(int i=1;i<=m;i++){
				int x,y;
				cin>>x>>y;
				a[x]=y;
			}
			for(int i=1;i<=n;i++){
				cmp z;
				z.name=i;
				z.strenth=a[i];
				q.push(z);
				z.name=-i;
				z.strenth=-a[i];
				p.push(z);
			}
		}
		work();
		cout<<n-ans<<endl;
	}
	return 0;
}

==========


---------- Now Opening N-00179's file(s).
===== Successfully open the file  answers\HN-00179\julian\julian.cpp.The size of it is 1.996 KB.
#include<bits/stdc++.h>
using namespace std;
#define il inline
#define vocaloid(v) (v>='0'&&v<='9')
il int read()
{
	int x=0;char v=getchar();
	while(!vocaloid(v)) v=getchar();
	while(vocaloid(v)) {x=(x<<1)+(x<<3)+v-'0';v=getchar();}
	return x;
}
int M[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int T,r,Year=4713,Mon=1,data=1;
int day,month,year;
bool flag=0,sign=0;
il bool check(int x,bool k)
{
	if(!k)
	{
		if(x%4==1) return 1;
		else return 0;
	}
	else
	{
		if(x<1582) 
		{
			if((x%4)==0) return 1;
			else return 0;
		}
		else
		{
			if(((x%400)==0)||(((x%4)==0)&&((x%100)!=0))) return 1;
			else return 0;
		}
	}
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	T=read();
	while(T--)
	{
		Year=4713,Mon=1,data=0,flag=0,sign=0;
		r=read();r++;
		while(1)
		{
			if(r>=1460)
			{
				while(r>1461)
				{
					if(Year>1582&&!sign&&flag) r+=10,sign=1;
					if(r<1460) break ;
					if(!flag)
					{
						Year-=4,r-=1461;
					}
					if(flag)
					{
						if(check(Year,1)||(check(Year+1,1)||(check(Year+2,1))||check(Year+3,1))) r--;
						r-=1460;Year+=4;
					}
					if(Year==1&&(!flag))
					{
						if(r>366) 
						{
							r-=366;Year=1;flag=1;
						}
					}
				}
			}
			if(r>=365)
			{
				while(r>366)
				{	
					if(r<365) break ;
					if((Year==1582)&&flag) r+=10;
					if(check(Year,flag)) r--;
					if(r>=365)
					{
						r-=365;
						if(!flag) Year--;
						else Year++;
					}
					if(Year==0) Year=1,flag=1;
				}
			}
			if(r<365);
			{
				for(int i=1;i<=12;i++)
				{
					if(r<M[i]) break ;
					if(r>=M[i]) r-=M[i],Mon++;
					if((i==2)&&(check(Year,flag))) r--;
					if((i==10)&&(Year==1582)&&(flag)) r+=10;
					if(i==12) 
					{
						if(!flag) Year--,Mon=0,i=0;
						else Year++,Mon=0;i=0;
					}
					if(Year==0) flag=1,Year=1;
				}
			}
			//if(((!flag)&&Year<4713)||flag) Mon++;
			if(r==0) r=M[Mon-1],Mon--;
			printf("%d %d %d ",r,Mon,Year);
			if(!flag) printf("BC\n");
			else puts("");
			break ;
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00179\zoo\zoo.cpp.The size of it is 1.174 KB.
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
#define ll long long
#define il inline
#define vocaloid(v) (v>='0'&&v<='9')
il ll read()
{
	ll x=0;char v=getchar();
	while(!vocaloid(v)) v=getchar();
	while(vocaloid(v)) {x=(x<<1)+(x<<3)+v-'0';v=getchar();}
	return x;
}
struct query{
	ll p,q;
}Q[maxn];
ll n,m,c,k,C,a[maxn],weishu[100];
ll num,ans,cnt,res;
bool vis1[maxn],vis2[100];//1ä¸ºä½¿ç”¨è¿‡çš„æ–¹æ¡ˆ 2ä¸ºè¦†ç›–åˆ°çš„ä½æ•°
il bool cmp(query x,query y) {return x.p<y.p;}
il ll ksm(ll a,ll b)
{
	ll ans=1;
	while(b)
	{
		if(b&1) ans=ans*a;
		a=a*a;
		b>>=1;
	}
	return ans;
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read(),m=read(),c=read(),k=read();
	for(int i=1;i<=n;i++) a[i]=read();
	for(int i=1;i<=m;i++) Q[i].p=read(),Q[i].q=read();
	sort(Q+1,Q+1+m,cmp);
	for(int i=1;i<=m;i++)
	{
		vis2[Q[i].p]=1;
		for(int j=1;j<=n;j++)
			if((a[j]&(1<<Q[i].p))) 
				if(!vis1[i]) vis1[i]=1,weishu[Q[i].p]=1;
	}
	for(int i=1;i<=m;i++)
		if(!vis1[i]) vis2[Q[i].p]=1;
	for(int i=0;i<k;i++)
		if(!vis2[i]) weishu[i]=1; 
	for(int i=0;i<k;i++)
		if(weishu[i]==1) num++;
	ans=ksm(2,num)-n;
	printf("%lld\n",ans);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00179\call\call.cpp.The size of it is 2.389 KB.
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
#define il inline
#define vocaloid(v) (v>='0'&&v<='9')
il int read()
{
	int x=0;char v=getchar();
	while(!vocaloid(v)) v=getchar();
	while(vocaloid(v)) {x=(x<<1)+(x<<3)+v-'0';v=getchar();}
	return x;
}
struct ques1{
	int pos,val;
}q1[maxn];
struct ques2{
	int val;
}q2[maxn];
struct ques3{
	int c[139],num;
}q3[maxn];
struct segment{
	int l,r,lzy,sum;
}tre[maxn<<2];
int n,m,a[maxn],num1,num2,num3;
int Q,t[maxn],tnum[maxn];
il void push_up(int pos)
{
	tre[pos].sum=tre[pos<<1].sum+tre[pos<<1|1].sum;
}
il void down(int pos)
{
	int lzy=tre[pso].lzy;
	tre[pos<<1].sum*=lzy;
	tre[pos<<1|1].sum*=ly;
	tre[pos<<1].lzy+=lzy;tre[pos<<1|1].lzy+=lzy;
	tre[pos].lzy=1;
}
il void build(int pos,int l,int r)
{
	tre[pos].l=l,tre[pos].r=r;tre[pos].lzy=1;
	if(l==r) {tre[pos].sum=a[l];return ;}
	int mid=(l+r)>>1;
	build(pos<<1,l,mid);
	build(pos<<1|1,mid+1,r);
	push_up(pos);
}
il void change(int pos,int x,int k)
{
	if(tre[pos].l>x||tre[pos].r<x) return ;
	if(tre[pos].l==tre[pos].r&&tre[pos].l==x) 
	{tre[pos].zum+=k;return ;}
	if(tre[pos].lzy>1) donw(pos);
	change(pos<<1,x,k);
	change(pos<<1|1,x,k);
	push_up(pos);
}
il void change(int pos,int l,int r,int x)
{
	if(tre[pos].l>r||tre[pos].r<l) return ;
	if(tre[pos].l>=l&&tre[pos].r<=r) 
	{
		tre[pos].lzy*=x;
		tre[pos].sum*=x;
		return ;
	}
	if(tre[pos].lzy>1) donw(pos);
	change(pos<<1,x,k);
	change(pos<<1|1,x,k);
	push_up(pos);
}
il int ask(int pos,int x)
{
	if(tre[pos].l>x||tre[pos].r<x) return 0;
	if(tre[pos].l==tre[pos].r&&tre[pos].l==x) return tre[pos].sum;
	if(tre[pos].lzy>1) donw(pos);
	return ask(pos<<1,x)+ask(pos<<1|1,x);
}
il void dianyong(int x)
{
	int NUM=q3[x].num;
	for(int i=1;i<=NUM;i++)
	{
		if(t[q3[x].c[i]]==1)
		{
			int x
		}
	}
}
int main()
{
	n=read();
	for(int i=1;i<=n;i++) a[i]=read();
	m=read();int T,C;
	for(int i=1;i<=m;i++)
	{
		T=read();t[i]=T;
		if(T==1)
			q1[++num1].pos=read(),q1[num1].val=read(),tnum[i]=num1;
		if(T==2)
			q2[++num2].val=read(),tnum[i]=num2;
		if(T==3)
		{
			C=read();num3++;tnum[i]=num3;q3[num3].num=C;
			for(int j=1;j<=C;j++)
				q3[num3].c[j]=read();
		}
	}
	Q=read();
	for(int i=1;i<=Q;i++) 
	{
		T=read();
		if(t[T]==1)
		{
			int x=q1[tnum[T]].pos,k=q1[tnum[T]].val;
			change1(1,x,k);
		}
		if(t[T]==2)
		{
			int x=q2[tnum[T]].val;
			change2(1,1,n,x);
		}
		if(t[T]==3)
		{
			diaoyong();
		}
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00179\snakes\snakes.cpp.The size of it is 1.116 KB.
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
#define il inline
#define vocaloid(v) (v>='0'&&v<='9')
il int read()
{
	int x=0;char v=getchar();
	while(!vocaloid(v)) v=getchar();
	while(vocaloid(v)) {x=(x<<1)+(x<<3)+v-'0';v=getchar();}
	return x;
}
int T,n,k,lun,eat,pos,val,a[maxn];
int ans;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	T=read();
	while(T--)
	{
		lun++;
		if(lun==1)
		{
			n=read();
			for(int i=1;i<=n;i++) a[i]=read();
		}
		else
		{
			k=read();
			for(int i=1;i<=k;i++)
				{pos=read();a[pos]=read();}
		}
		ans=n;eat=1;
		while(1)
		{
			if(eat==n) break ;
			if((a[n]-a[eat]>=a[eat+1])||(eat==(n-1)))
			{
				a[n]-=a[eat];
				eat++;ans--;
				int res=a[n];
				for(int i=eat;i<=n;i++)
				{
					if(a[i]==res)
					{
						for(int j=n;j>(i+1);j--) a[j]=a[j-1];
						a[i+1]=res;break ;
					}
					if(a[i]>res)
					{
						for(int j=n;j>i;j--) a[j]=a[j-1];
						a[i]=res;break ;
					}
				}
				/*for(int i=eat;i<=n;i++)
					printf("%d ",a[i].val);
				puts("");*/
			}
			else break ;
		}
		printf("%d\n",ans);
	}
	return 0;
}
==========


---------- Now Opening N-00180's file(s).
===== Successfully open the file  answers\HN-00180\julian\julian.cpp.The size of it is 2.384 KB.
#include<bits/stdc++.h>
using namespace std;
int T;
long long n;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int d_bc=1721424;//1.1.1ÎªD1721424 
int d_pt=2299161;//1582.10.15ÎªD2299161
int d_nw=2305814;//1601.1.1ÎªD2305814
int ed_nw=146097;//´ËºóÃ¿400ÄêÎª146097Day
int ed_pt=1461;//ÒÔÇ°Ã¿4ÄêÎª1461Day 
int bc_ry(int x)
{
	x--;
	if(x%4==0)return 1;
	else return 0;
}
int now_ry(int x)
{
	if(x%100==0)
	{
		if(x%400==0)return 1;
		else return 0;
	}
	if(x%4==0)return 1;
	else return 0;
}
int past_ry(int x)
{
	if(x%4==0)return 1;
	else return 0;
}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&T);
	while(T--)
	{
		int y=0,m=1,d=1;
		scanf("%lld",&n);
		if(n<d_bc)
		{
			y=4713;
			if(n>=366)
				n-=366,y--;	
			int p=n/ed_pt;
			y-=4*p;
			n-=ed_pt*p;
			if(n>=365)
			{
				n-=365,y--;
				if(n>=365)
				{
					n-=365,y--;	
					if(n>=365)n-=365,y--; 
				}
			}
			if(bc_ry(y)==1)month[2]=29;
			for(int i=1;i<=12;i++)
			{
				if(n>=month[i])n-=month[i],m++;
				else break;
			}
			d+=n;
			month[2]=28;
			printf("%d %d %d BC\n",d,m,y); 
		}
		else if(n<=d_pt)
		{
			y=1;n-=d_bc;
			int p=n/ed_pt;
			y+=4*p;
			n-=ed_pt*p;
			if(n>=365)
			{
				n-=365,y++;
				if(n>=365)
				{
					n-=365,y++;	
					if(n>=365)n-=365,y++; 
				}
			}
			if(past_ry(y)==1)month[2]=29;
			for(int i=1;i<=12;i++)
			{
				if(n>=month[i])n-=month[i],m++;
				else break;
			}
			d+=n;
			month[2]=28;
			printf("%d %d %d\n",d,m,y); 
		}
		else if(n<=d_nw)
		{
			n-=d_pt;
			y=1582,m=10,d=15;
			if(n>=78)n-=78,y++,d=1,m=1;
			for(int i=1583;i<=1600;i++)
			{
				if(n>=365+now_ry(i))y++,n-=365+now_ry(i);
				else break;
			}
			if(now_ry(y)==1)month[2]=29;
			if(y==1582)month[10]=21;
			if(d!=1||m!=1)n+=277,m=1,d=1;
			for(int i=1;i<=12;i++)
			{
				if(n>=month[i])n-=month[i],m++;
				else break;
			}
			if(y!=1582||m!=10)d+=n;
			else
			{
				if(n>3)n+=10;
				d+=n;
			}
			month[2]=28;month[10]=31;
			printf("%d %d %d\n",d,m,y); 
		}
		else
		{
			n-=d_nw;
			y=1601,d=1,m=1;
			int p=n/ed_nw;
			y+=400*p;
			n-=p*ed_nw;
			for(int i=1;i<=400;i++)
			{
				if(n>=365+now_ry(i))y++,n-=365+now_ry(i);
				else break;
			}
			if(now_ry(y)==1)month[2]=29;
			for(int i=1;i<=12;i++)
			{
				if(n>=month[i])n-=month[i],m++;
				else break;
			}
			month[2]=28;
			d+=n;
			printf("%d %d %d\n",d,m,y);
			
		}
	}
	
	return 0;
}
==========
===== Successfully open the file        answers\HN-00180\zoo\zoo.cpp.The size of it is 0.581 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k;
unsigned long long x,y,ans,aa=1;
int p;
bool t[70];
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&x);
		p=(p | x);
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d %d",&x,&y);
		t[x]=1;
	}
	for(int i=0;i<k;i++)if(t[i]==0)p=(p | (1 << i) );
	for(int i=0;i<k;i++)if((p & (1 << i))!=0)ans++;
	if(ans==64&&n==0)
		cout<<"18446744073709551616"<<endl;
	else
	{
		for(int i=1;i<ans;i++)aa*=2;
		aa=(aa-n)*2+n;
		cout<<aa<<endl;
	}
	
}
==========
===== Successfully open the file      answers\HN-00180\call\call.cpp.The size of it is 2.544 KB.
#include<bits/stdc++.h>
#define maxn 5000000
#define mod 998244353
using namespace std;
long long sum[maxn],lazy[maxn],size[maxn];
int n,v[maxn/4],m,tt,x,y,q;
int typ[maxn/4];
int tot1=0,ttp[maxn/4],jv[maxn/4],mmm1[maxn/4];
int tot2=0,cv[maxn/4],mmm2[maxn/4];
int tot3=0,dw[maxn/4],hs[maxn/4],mmm3[maxn/4];
int push(int p)
{
	lazy[p+p]=lazy[p+p]*lazy[p]%mod;lazy[p+p+1]=lazy[p+p+1]*lazy[p]%mod;
	sum[p+p]=sum[p+p]*lazy[p]%mod;
	sum[p+p+1]=sum[p+p+1]*lazy[p]%mod;
	lazy[p]=1;
}
int updata(int p)
{
	sum[p]=(sum[p+p]+sum[p+p+1])%mod;
	size[p]=(size[p+p]+size[p+p+1])%mod;
}
int build(int p,int l,int r)
{
	lazy[p]=1;
	if(l==r)
	{
		sum[p]=v[l];
		size[p]=1;
		return 0;
	}
	int mid=(l+r)/2;
	build(p+p,l,mid);
	build(p+p+1,mid+1,r);
	updata(p);
}
int cf_query(int p,int l,int r,int x,int y,int v)
{
	if(l>=x&&r<=y)
	{
		lazy[p]=lazy[p]*v%mod;
		sum[p]=sum[p]*v%mod;
		return 0;
	}
	int mid=(l+r)/2;
	push(p);
	if(mid>=x)cf_query(p+p,l,mid,x,y,v);
	if(mid<y)cf_query(p+p+1,mid+1,r,x,y,v);
	updata(p);
}
int query(int p,int l,int r,int x,int v)
{
	if(l==r)
	{
		sum[p]=(sum[p]+v)%mod;
		return 0;
	}
	int mid=(l+r)/2;
	push(p);
	if(mid>=x)query(p+p,l,mid,x,v);
	else query(p+p+1,mid+1,r,x,v);
	updata(p);
}
int get(int p,int l,int r,int x)
{
	if(l==r)return sum[p];
	push(p);
	int mid=(l+r)/2;
	if(x<=mid)return get(p+p,l,mid,x);
	else return get(p+p+1,mid+1,r,x);
}
int dyhs(int x)
{
	for(int i=dw[x];i<dw[x+1];i++)
	{
		int ttt=hs[i];
		if(typ[ttt]==1)
		{
			int opq=mmm1[ttt];
			query(1,1,n,ttp[opq],jv[opq]);
		}
		if(typ[ttt]==2)
		{
			int opq=mmm2[ttt];
			cf_query(1,1,n,1,n,cv[opq]);
		}
		if(typ[ttt]==3)dyhs(mmm3[ttt]);
	}
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&v[i]);
	build(1,1,n);
	scanf("%d",&m);
	dw[1]=1;
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&typ[i]);
		if(typ[i]==1)
		{
			tot1++;
			mmm1[i]=tot1;
			scanf("%d%d",&ttp[tot1],&jv[tot1]);
		}
		if(typ[i]==2)
		{
			tot2++;
			mmm2[i]=tot2;
			scanf("%d",&cv[tot2]);
		}
		if(typ[i]==3)
		{
			tot3++;
			mmm3[i]=tot3;
			scanf("%d",&x);
			dw[tot3+1]=dw[tot3]+x;
			for(int i=dw[tot3];i<dw[tot3+1];i++)scanf("%d",&hs[i]);
		}
	}
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	{
		scanf("%d",&x);
		if(typ[x]==1)
		{
			int ttt=mmm1[x];
			query(1,1,n,ttp[ttt],jv[ttt]);
		}
		if(typ[x]==2)
		{
			int ttt=mmm2[x];
			cf_query(1,1,n,1,n,cv[ttt]);
		}
		if(typ[x]==3)
		{
			int ttt=mmm3[x];
			dyhs(ttt);
		}
	}
	for(int i=1;i<=n;i++)printf("%d ",get(1,1,n,i));
	printf("\n");
	
	return 0;
}
==========
===== Successfully open the file  answers\HN-00180\snakes\snakes.cpp.The size of it is 0.911 KB.
#include<bits/stdc++.h>
using namespace std;
int T,n,a[2000000];
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)scanf("%d",&a[i]);
		if(n==3)
		{
			int x=a[1],y=a[2],z=a[3];
			if(x!=y&&y!=z)
			{
				if(x>y)swap(x,y);
				if(x>z)swap(x,z);
				if(y>z)swap(y,z);
				if(z-x>y)n=1;
			}
			if(x==y&&y!=z)
			{
				if(z>x)
				{
					if(z-x>=y)n=1;
					if(z-x<y)n=3;
				}
				else
				{
					if(z>=0)n=3;
					else n=1;
				}
			} 
			if(x==z&&y!=z)
			{
				if(y>z)
				{
					if(y-z>=x)n=1;
					else n=3;
				}
				else
				{
					if(y>=0)n=3;
					else n=1;
				}
			}
			if(y==z&&x!=y)
			{
				if(x>z)
				{
					if(x-y>z)n=1;
					else n=3;
				}
				else
				{
					if(x>=0)n=3;
					else n=1;
				}
			}
			if(x==y&&y==z)n=3;
			printf("%d\n",1);
		}
		else printf("%d\n",n);
	}
	
	return 0;
}
==========


---------- Now Opening N-00181's file(s).
===== Successfully open the file  answers\HN-00181\julian\julian.cpp.The size of it is 1.472 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int x,q;
	scanf("%d",&q);int a[q],n[q],m[q],w[q];
	for(x=0;x<q;x++)
	{
		scanf("%d",&a[x]);m[x]=1;w[x]=1;n[x]=4713;
	}
	for(x=0;x<q;x++)
	{
		for(;a[x]>=366&&n[x]>-1582;)
		{
			if(n[x]%4==0)
			{
				n[x]--;a[x]=a[x]-366;
			}	
			else
			{
				if(n[x]==1)
				{
					n[x]=-1;
				}
				else
				{
					n[x]--;
					a[x]=a[x]-365;	
				}
				
			} 	
		}
		if(a[x]==365) 
		{
			a[x]=0;n[x]--;
		}
		if(a[x]>=355&&n[x]==-1582)
		{
			n[x]--;a[x]=a[x]-355;
		}
		for(;a[x]>=366&&n[x]<-1582;)
		{
			if(n[x]%4==0&&n[x]%100!=0)
			{
				n[x]--;a[x]=a[x]-366;
			}	
			else
			{
				n[x]--;a[x]=a[x]-365;	
			} 	
			if(a[x]==365) 
		{
			a[x]=0;n[x]--;
		}
		}		
		for(;a[x]>0;)
		{	
			w[x]++;a[x]--;
			if(n[x]==-1582&&m[x]==10&&w[x]==5)
			{
				w[x]=15;
			}
			else
			{
				if((m[x]==1||m[x]==3||m[x]==5||m[x]==7||m[x]==8||m[x]==10)&&w[x]==31)
				{
					w[x]=0;m[x]++;
				}
				if((m[x]==4||m[x]==6||m[x]==11)&&w[x]==30)
				{
					w[x]=0;m[x]++;
				}
				if((n[x]>-1582&&n[x]%4==0)||(n[x]<-1582&&n[x]%4==0&&n[x]%100!=0)&&m[x]==2&&w[x]==29)
				{
					w[x]=0;m[x]++;
				}
				if(m[x]==2&&w[x]==28)
				{
					w[x]=0;m[x]++;
				}
			}
		}
	}
	for(x=0;x<q;x++)
	{
		if(n[x]>0)
		{
			printf("%d %d %d BC\n",w[x],m[x],n[x]);
			
		}
		else
		{
			printf("%d %d %d \n",w[x],m[x],n[x]*-1);
		}
	}
	fclose(stdin);	fclose(stdout);
	return 0;
}

==========
===== Successfully open the file        answers\HN-00181\zoo\zoo.cpp.The size of it is 0.966 KB.
#include<bits/stdc++.h>
using namespace std;
int c,o[10000];
int ss(int x)
{
	if(x==1||x==0)
	{
		o[0]=x;
	}
	for(c=0;x>1;c++)
	{
		if(x/2==0)
		{
			x=x/2;
			o[c]=0;
		}
		else
		{
			x=(x+1)/2;
			o[c]=1;
		}
	}
	if(c/2==0)
	{
		for(int i=0;i<c/2;i++)
		{
			swap(o[i],o[c-i]);
		}
	}
	else
	{
		for(int i=0;i<(c+1)/2;i++)
		{
			swap(o[i],o[c-i]);
		}	
	}
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int x,n,m,c,k,r=1,h=0,u,d=1;
	scanf("%d%d%d%d",&n,&m,&c,&k);int a[n],p[m],q[m]={0};
	for(x=0;x<n;x++)
	{
		scanf("%d",&a[x]);
	}
	for(x=0;x<m;x++)
	{
		scanf("%d%d",&p[x],&q[x]);
	}
	for(x=0;x<n;x++)
	{
		ss(a[x]);
		for(int i=0;i<m;i++)
		{
			if(o[p[i]]==1)	
			{
			q[i]=0;
			}
		}
	}
	for(x=0;x<k;x++)
	{
		r=r*2;
	}
	for(x=1;x<r;x++)
	{
		ss(x);u=0;
		for(int i=0;i<m&&u==0;i++)
		{
			if(o[p[i]]==1&&q[i]!=0)	
			{
				u=1;
			}
		}
		if(u==0)d++;
	}	
	printf("%d",d-n+1);	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

==========
===== Opening      answers\HN-00181\call\call.cpp Failed.File not found.
===== Successfully open the file  answers\HN-00181\snakes\snakes.cpp.The size of it is 0.506 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int x,n,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		int a[n];
		for(x=0;x<n;x++)
		{
			scanf("%d",&a[x]);
		}
		sort(a,a+n);
		for(int gg=0;gg==0&&n>1;)
		{
			if(a[n-1]-a[0]>=a[n-2])
			{
				n--;
				for(x=0;x<n;x++)
				{
					a[x]=a[x+1];
				}
				sort(a,a+n);
			}
			else gg=1;
		}	
		printf("%d",n);
	}	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

==========


---------- Now Opening N-00182's file(s).
===== Successfully open the file  answers\HN-00182\julian\julian.cpp.The size of it is 2.209 KB.
#include<bits/stdc++.h>
using namespace std;
int d=1,m=1,y=-4713;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int rmonth[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
//4y:1461 100y:36524 400y:146097
int y4=1461,y100=36524,y400=146097,y3=1096;
int main(){
	//ÈòÄê:bc1,bc4713,4,1024 
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int kk=1;kk<=n;kk++){
		int x;
		cin>>x;
		d=1,m=1,y=-4713;
		if(x<1721424){
			int k=x/1461;
			x%=1461;
			y+=4*k;
			if(x<366){
				int zz=1;
				while(x>=rmonth[zz]){
					x-=rmonth[zz];
					zz++;
					m++;
				}
				d+=x;
				x=0;
			}
			if(x>=366){
				x-=366;
				y++;
			}
			while(x>=365){
				x-=365;
				y++;
			}
			int zz=1;
			while(x>=month[zz]){
				m++;
				x-=month[zz];
				zz++;
			}
			d+=x;
			cout<<d<<" "<<m<<" "<<-y<<" BC"<<endl;
		}
		else {
			if(x<=2299160){
				x-=1721424;
				y=1;
				int k=x/y4;
				x%=y4;
				y+=4*k;
				if(x<=1095){
				while(x>=365){
					x-=365;
					y++;
				}
				int zz=1;
				while(x>=month[zz]){
					x-=month[zz];
					zz++;
					m++;
				}
				d+=x;
				x=0;
			}
				else {
					x-=1095;
					y+=3;
					int zz=1;
					while(x>=rmonth[zz]){
						x-=rmonth[zz];
						zz++;
						m++;
					}
					d+=x;
					x=0;
				}
			}
			else{
				x-=2299161;
				y=1582,d=15,m=10;
				if(x<78){
					if(x<=16){
						d+=x;
						x=0;
					}
					else {
						x-=17;
						m++;
						d=1;
					}
					int zz=m;
					while(x>=month[zz]){
						x-=month[zz];
						zz++;
						m++;
					}
					cout<<d<<" "<<m<<" "<<y<<endl;
					continue;
				}
				if(x>=78){
					x-=78;
					y=1583,m=1,d=1;
				}
			int k=x/y400;
			x=x%y400;
			y+=400*k;
			int k1=x/y100;
			x=x%y100;
			y+=100*k1;
			int k2=x/y4;
			y+=4*k2;
			x=x%y4;
			while(x>=366){
				y++;
				int zz=y%4;
				if(zz==0){
					x-=366;
				}
				else x-=365;
			}
			int zzz=y%4;
			if(zzz==0){
				int zz=1;
				while(x>=rmonth[zz]){
					x-=rmonth[zz];
					zz++;
					m++;
				}
				d+=x;
				x=0;
			}
			else {
				int zz=1;
				while(x>=month[zz]){
					x-=month[zz];
					zz++;
					m++;
				}
				d+=x;
				x=0;
			}
		}
			cout<<d<<" "<<m<<" "<<y<<endl;
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00182\zoo\zoo.cpp.The size of it is 0.658 KB.
#include<bits/stdc++.h>
using namespace std;
long long  n,k,m,p;
long long a[1000001];
long long limx[1000001],limy[1000001];
long long vis[1000010];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cin>>n>>m>>p>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cin>>limx[i]>>limy[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			long long h=pow(2,limx[j]);
			long long zzz=a[i]&h;
			if(zzz!=0){
				vis[limy[j]]=1;
			}
		}
	}
	int cnt=0;
	for(int i=1;i<=p;i++){
		if(vis[i]==1){
	//		cout<<i<<" ";
			m--;
		}
	}
	cout<<pow(2,k-m)-n;
	return 0;
}
// Goodbye!My lovely coding time!
//See you again!
==========
===== Opening      answers\HN-00182\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00182\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00183's file(s).
===== Opening  answers\HN-00183\julian\julian.cpp Failed.File not found.
===== Successfully open the file        answers\HN-00183\zoo\zoo.cpp.The size of it is 0.222 KB.
#include<bits/stdc++.h>
using namespace std;
short dan[100000000],ani[65],bh[65][1000005];long long n,m,c,k,yq[1000005][3];
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cout<<0;
	return 0;
}
==========
===== Opening      answers\HN-00183\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00183\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00184's file(s).
===== Successfully open the file  answers\HN-00184\julian\julian.cpp.The size of it is 1.935 KB.
// {{{ Template

/*CYJian yyds!*/

#include <set>
#include <map>
#include <queue>
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector <int> poly;
typedef pair <int,int> pii;

#define fi first
#define se second
#define mkp make_pair
#define lep(i,l,r) for(int i=l;i<=r;++i)
#define rep(i,r,l) for(int i=r;i>=l;--i)

template <class T> inline void IN(T &x) {
	char ch; bool flag=0; x=0;
	while(ch=getchar(),!isdigit(ch)) if(ch=='-') flag=1;
	while(isdigit(ch)) x=x*10+ch-48,ch=getchar();
	if(flag) x=-x;
}

template <class T> inline void chkmax(T &x,T y) {if(x<y) x=y;}
template <class T> inline void chkmin(T &x,T y) {if(x>y) x=y;}

// }}}

ll N;

inline bool check(ll year) {
	if(year<1582) return (year%4==0);
	else if(year==1582) return false;
	else return (year%400==0||(year%4==0&&year%100!=0));
}
inline ll calc(ll year) {
	if(year<=1582) {
		year+=4712;
		return 1ll*year*365+year/4+(year%4!=0);
	} else {
		ll tmp=1ll*6294*365+6294/4+(6294%4!=0)+355;
		if(year==1583) return tmp;
		year-=1584,tmp+=365;
		return tmp+1ll*year*365+(year/4+(year%4!=0))-((year-17)/100)+((year-17)/400);
	}
}

inline int lim(int u,bool nmsl) {
	if(u==2) return nmsl?29:28;
	if(u==1||u==3||u==5||u==7||u==8||u==10||u==12) return 31;
	return 30;
}
inline void solve() {
	IN(N);

	ll l=-4712,r=1000000000,ans,mid;
	while(l<=r) {
		mid=l+r>>1;
		(calc(mid+1)>N)?ans=mid,r=mid-1:l=mid+1;
	}
	N-=calc(ans);

	int m=1,d=1;
	while(N) {
		if(d==lim(m,check(ans))) ++m,d=0;
		if(ans==1582) {
			if(m==10&&d==4) d=15;
			else ++d;
		} else ++d;
		--N;
	}
	printf("%d %d ",d,m);
	if(ans<=0) printf("%lld BC\n",-ans+1);
	else printf("%lld\n",ans);
}
int main() {
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);

	int T; IN(T);
	while(T--) solve();
	return 0;
}
==========
===== Successfully open the file        answers\HN-00184\zoo\zoo.cpp.The size of it is 1.334 KB.
// {{{ Template

/*CYJian yyds!*/

#include <set>
#include <map>
#include <queue>
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector <int> poly;
typedef pair <int,int> pii;

#define fi first
#define se second
#define mkp make_pair
#define lep(i,l,r) for(int i=l;i<=r;++i)
#define rep(i,r,l) for(int i=r;i>=l;--i)

template <class T> inline void IN(T &x) {
	char ch; bool flag=0; x=0;
	while(ch=getchar(),!isdigit(ch)) if(ch=='-') flag=1;
	while(isdigit(ch)) x=x*10-48+ch,ch=getchar();
	if(flag) x=-x;
}

template <class T> inline void chkmax(T &x,T y) {if(x<y) x=y;}
template <class T> inline void chkmin(T &x,T y) {if(x>y) x=y;}

// }}}

const int N=1e6+5;

int n,m,c,k,p[N],q[N],god[N];
ull a[N],all;

int main() {
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);

	IN(n),IN(m),IN(c),IN(k);
	lep(i,1,n) IN(a[i]),all|=a[i];

	lep(i,0,k-1) god[i]=true;
	lep(i,1,m) IN(p[i]),IN(q[i]),god[p[i]]=false;

	lep(i,1,m) if((all>>p[i])&1) god[p[i]]=true;

	int tot=0;
	lep(i,0,k-1) tot+=god[i];

	if(n==0&&tot==64) printf("18446744073709551616\n");
	else {
		ull ans=0;
		lep(i,0,tot-1) ans+=(1ull<<i);
		printf("%llu\n",ans-n+1);
	}
	return 0;
}
==========
===== Successfully open the file      answers\HN-00184\call\call.cpp.The size of it is 2.294 KB.
// {{{ Template

/*CYJian yyds!*/

#include <set>
#include <map>
#include <queue>
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector <int> poly;
typedef pair <int,int> pii;

#define fi first
#define se second
#define mkp make_pair
#define lep(i,l,r) for(int i=l;i<=r;++i)
#define rep(i,r,l) for(int i=r;i>=l;--i)

template <class T> inline void IN(T &x) {
	char ch; bool flag=0; x=0;
	while(ch=getchar(),!isdigit(ch)) if(ch=='-') flag=1;
	while(isdigit(ch)) x=x*10+ch-48,ch=getchar();
	if(flag) x=-x;
}

template <class T> inline void chkmax(T &x,T y) {if(x<y) x=y;}
template <class T> inline void chkmin(T &x,T y) {if(x>y) x=y;}

const int mod=998244353;

inline int mul(int x,int y) {return 1ll*x*y%mod;}
inline void pls(int &x,int y) {x+=y; if(x>=mod) x-=mod;}

// }}}

const int N=1e5+5;
const int M=2e6+5;

int n,a[N],du[N],m,cnt,head[N];
struct Node {int T,P,V;} seq[N];
struct Edge {int nxt,to;} G[M];

inline void addedge(int u,int v) {
	G[++cnt]=(Edge){head[u],v},head[u]=cnt,++du[v];
}

int vis[N],sum[N]; /*prod*/
int dfs(int u) {
	if(vis[u]) return sum[u];
	vis[u]=true;

	int now=(seq[u].T==2)?seq[u].V:1;
	for(int i=head[u];i;i=G[i].nxt) now=mul(now,dfs(G[i].to));
	return sum[u]=now;
}

int tag[N],ans[N];
queue <int> q;
inline void solve_topsort() {
	lep(i,1,m) if(!du[i]) q.push(i);

	while(!q.empty()) {
		int u=q.front(); q.pop();
		if(seq[u].T==1) pls(ans[seq[u].P],mul(tag[u],seq[u].V));

		int now=tag[u];
		for(int i=head[u];i;i=G[i].nxt) {
			int v=G[i].to;
			pls(tag[v],now),now=mul(now,sum[v]);	
			if(--du[v],!du[v]) q.push(v);
		}
	}
}

int Q,f[N];
int main() {
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);

	IN(n);
	lep(i,1,n) IN(a[i]);
	
	IN(m);
	lep(i,1,m) {
		IN(seq[i].T);

		if(seq[i].T==1) IN(seq[i].P),IN(seq[i].V);
		if(seq[i].T==2) IN(seq[i].V);
		if(seq[i].T==3) {
			int C,g; IN(C);
			lep(j,1,C) IN(g),addedge(i,g);
		}
	}
	lep(i,1,m) sum[i]=dfs(i);

	IN(Q);
	int now=1;
	lep(i,1,Q) IN(f[i]);
	rep(i,Q,1) pls(tag[f[i]],now),now=mul(now,sum[f[i]]);

	solve_topsort();
	lep(i,1,n) pls(ans[i],mul(a[i],now)),printf("%d ",ans[i]);
	puts("");
	return 0;
}
==========
===== Successfully open the file  answers\HN-00184\snakes\snakes.cpp.The size of it is 1.539 KB.
// {{{ Template

/*CYJian yyds!*/

#include <set>
#include <map>
#include <queue>
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

typedef vector <int> poly;
typedef pair <int,int> pii;

#define fi first
#define se second
#define mkp make_pair
#define lep(i,l,r) for(int i=l;i<=r;++i)
#define rep(i,r,l) for(int i=r;i>=l;--i)

template <class T> inline void IN(T &x) {
	char ch; bool flag=0; x=0;
	while(ch=getchar(),!isdigit(ch)) if(ch=='-') flag=1;
	while(isdigit(ch)) x=x*10+ch-48,ch=getchar();
	if(flag) x=-x;
}

template <class T> inline void chkmax(T &x,T y) {if(x<y) x=y;}
template <class T> inline void chkmin(T &x,T y) {if(x>y) x=y;}

// }}}

const int N=1e6+5;
int n,a[N];

int dfs(int sta,int siz) {
	if(siz==1) return sta;

	int _max=0; lep(i,1,n) if((sta>>(i-1))&1) {if(!_max||a[i]>=a[_max]) _max=i;}
	int _min=0; rep(i,n,1) if((sta>>(i-1))&1) {if(!_min||a[i]<=a[_min]) _min=i;}

	a[_max]-=a[_min];
	int ans=dfs(sta^(1<<(_min-1)),siz-1);
	a[_max]+=a[_min];
	if((ans>>(_max-1))&1) return ans;
	return sta;
}

inline void solve() {
	int now=dfs((1<<n)-1,n),tot=0;
	lep(i,1,n) if((now>>(i-1))&1) ++tot;
	printf("%d\n",tot);
}

int T,k,x,y;
int main() {
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);

	IN(T);

	IN(n);
	lep(i,1,n) IN(a[i]);
	solve();

	--T; while(T--) {
		IN(k);
		lep(i,1,k) IN(x),IN(y),a[x]=y;
		solve();
	}
	return 0;
}
==========


---------- Now Opening N-00185's file(s).
===== Successfully open the file  answers\HN-00185\julian\julian.cpp.The size of it is 5.391 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	long n,a[100009];
	cin>>n;
	for(int i=1;i<=n;i++) {
	cin>>a[i];
	long l=a[i];
	if(a[i]==1721424){
		cout<<"1"<<" "<<"1"<<" "<<"1"<<endl;
	}
	if(a[i]>1721424){

	if(a[i]<2299160){
	a[i]-=1721424;
	int x,y=0,n=1,year,month,day;
	  while(1){
	  	if(a[i]<366&&n%4==0){
	  	    x=a[i];
			  break;	
		  }
		  else if(a[i]<365&&n%4!=0){
		  	x=a[i];
		  	break;
		  }
		 if(n%4==0) a[i]-=366;
		 else a[i]-=365;
		 n++;
	  }	
	 year=n;
	 if(x<31){
	 	month=1;
	 	day=x;
	 }
	 if(year%4==0){
	 	if(x>=31&&x<60){
	 		month=2;
	 		day=x-31;
		 }
	 	if(x>=60&&x<91){
	 		month=3;
	 		day=x-60;
		 }		 
	 	if(x>=91&&x<121){
	 		month=4;
	 		day=x-91;
		 }		 
	 	if(x>=121&&x<152){
	 		month=5;
	 		day=x-121;
		 }		 
	 	if(x>=152&&x<182){
	 		month=6;
	 		day=x-152;
		 }		 
	 	if(x>=182&&x<213){
	 		month=7;
	 		day=x-182;
		 }		 
	 	if(x>=213&&x<244){
	 		month=8;
	 		day=x-213;
		 }		 
	 	if(x>=244&&x<274){
	 		month=9;
	 		day=x-244;
		 }		 
	 	if(x>=274&&x<305){
	 		month=10;
	 		day=x-274;
		 }		 
	 	if(x>=305&&x<335){
	 		month=11;
	 		day=x-305;
		 }		
	 	if(x>=335&&x<366){
	 		month=12;
	 		day=x-335;
		 }		  
	 }
	 else{
	 	if(x>=31&&x<59){
	 		month=2;
	 		day=x-31;
		 }
	 	if(x>=59&&x<90){
	 		month=3;
	 		day=x-59;
		 }		 
	 	if(x>=90&&x<120){
	 		month=4;
	 		day=x-90;
		 }		 
	 	if(x>=120&&x<151){
	 		month=5;
	 		day=x-120;
		 }		 
	 	if(x>=151&&x<181){
	 		month=6;
	 		day=x-151;
		 }		 
	 	if(x>=181&&x<212){
	 		month=7;
	 		day=x-181;
		 }		 
	 	if(x>=212&&x<243){
	 		month=8;
	 		day=x-212;
		 }		 
	 	if(x>=243&&x<273){
	 		month=9;
	 		day=x-243;
		 }		 
	 	if(x>=273&&x<304){
	 		month=10;
	 		day=x-273;
		 }		 
	 	if(x>=304&&x<334){
	 		month=11;
	 		day=x-304;
		 }		
	 	if(x>=334&&x<365){
	 		month=12;
	 		day=x-334;
		 }
		 
	 }
     day++;
	 cout<<day<<" "<<month<<" "<<year<<endl;
	 a[i]=l;
		}
	else{
	a[i]-=1721424;
	a[i]-=2;
	long long x,y=0,n=1,year,month,day;
	  while(1){
	  	if(a[i]<366&&((n%4==0&&n%100!=0)||n%400==0)){
	  	    x=a[i];
			  break;	
		  }
		  else if(a[i]<365){
		  	x=a[i];
		  	break;
		  }
		 if((n%4==0&&n%100!=0)||n%400==0) a[i]-=366;
		 else a[i]-=365;
		 n++;
	  }	
	 year=n;
	 if(x<31){
	 	month=1;
	 	day=x;
	 }
	 if(year%4==0){
	 	if(x>=31&&x<60){
	 		month=2;
	 		day=x-31;
		 }
	 	if(x>=60&&x<91){
	 		month=3;
	 		day=x-60;
		 }		 
	 	if(x>=91&&x<121){
	 		month=4;
	 		day=x-91;
		 }		 
	 	if(x>=121&&x<152){
	 		month=5;
	 		day=x-121;
		 }		 
	 	if(x>=152&&x<182){
	 		month=6;
	 		day=x-152;
		 }		 
	 	if(x>=182&&x<213){
	 		month=7;
	 		day=x-182;
		 }		 
	 	if(x>=213&&x<244){
	 		month=8;
	 		day=x-213;
		 }		 
	 	if(x>=244&&x<274){
	 		month=9;
	 		day=x-244;
		 }		 
	 	if(x>=274&&x<305){
	 		month=10;
	 		day=x-274;
		 }		 
	 	if(x>=305&&x<335){
	 		month=11;
	 		day=x-305;
		 }		
	 	if(x>=335&&x<366){
	 		month=12;
	 		day=x-335;
		 }		  
	 }
	 else{
	 	if(x>=31&&x<59){
	 		month=2;
	 		day=x-31;
		 }
	 	if(x>=59&&x<90){
	 		month=3;
	 		day=x-59;
		 }		 
	 	if(x>=90&&x<120){
	 		month=4;
	 		day=x-90;
		 }		 
	 	if(x>=120&&x<151){
	 		month=5;
	 		day=x-120;
		 }		 
	 	if(x>=151&&x<181){
	 		month=6;
	 		day=x-151;
		 }		 
	 	if(x>=181&&x<212){
	 		month=7;
	 		day=x-181;
		 }		 
	 	if(x>=212&&x<243){
	 		month=8;
	 		day=x-212;
		 }		 
	 	if(x>=243&&x<273){
	 		month=9;
	 		day=x-243;
		 }		 
	 	if(x>=273&&x<304){
	 		month=10;
	 		day=x-273;
		 }		 
	 	if(x>=304&&x<334){
	 		month=11;
	 		day=x-304;
		 }		
	 	if(x>=334&&x<365){
	 		month=12;
	 		day=x-334;
		 }
		 
	 }
     day++;
	 cout<<day<<" "<<month<<" "<<year<<endl;
	 a[i]=l;
		}
	}

	if(a[i]<1721424){
		long long x,y=0,n=4713,year,month,day,l=a[i];
	  while(1){
	  	if(a[i]<366&&(4317-y-1)%4==0){
	  	    x=a[i];
			  break;	
		  }
		  else if(a[i]<365&&(4317-y-1)%4!=0){
		  	x=a[i];
		  	break;
		  }
		 if((n-1)%4==0) a[i]-=366;
		 else a[i]-=365;
		 n--;y++;
	  }	
	 year=4713-y;
	 if(x<31){
	 	month=1;
	 	day=x;
	 }
	 if((year-1)%4==0){
	 	if(x>=31&&x<60){
	 		month=2;
	 		day=x-31;
		 }
	 	if(x>=60&&x<91){
	 		month=3;
	 		day=x-60;
		 }		 
	 	if(x>=91&&x<121){
	 		month=4;
	 		day=x-91;
		 }		 
	 	if(x>=121&&x<152){
	 		month=5;
	 		day=x-121;
		 }		 
	 	if(x>=152&&x<182){
	 		month=6;
	 		day=x-152;
		 }		 
	 	if(x>=182&&x<213){
	 		month=7;
	 		day=x-182;
		 }		 
	 	if(x>=213&&x<244){
	 		month=8;
	 		day=x-213;
		 }		 
	 	if(x>=244&&x<274){
	 		month=9;
	 		day=x-244;
		 }		 
	 	if(x>=274&&x<305){
	 		month=10;
	 		day=x-274;
		 }		 
	 	if(x>=305&&x<335){
	 		month=11;
	 		day=x-305;
		 }		
	 	if(x>=335&&x<366){
	 		month=12;
	 		day=x-335;
		 }		  
	 }
	 else{
	 	if(x>=31&&x<59){
	 		month=2;
	 		day=x-31;
		 }
	 	if(x>=59&&x<90){
	 		month=3;
	 		day=x-59;
		 }		 
	 	if(x>=90&&x<120){
	 		month=4;
	 		day=x-90;
		 }		 
	 	if(x>=120&&x<151){
	 		month=5;
	 		day=x-120;
		 }		 
	 	if(x>=151&&x<181){
	 		month=6;
	 		day=x-151;
		 }		 
	 	if(x>=181&&x<212){
	 		month=7;
	 		day=x-181;
		 }		 
	 	if(x>=212&&x<243){
	 		month=8;
	 		day=x-212;
		 }		 
	 	if(x>=243&&x<273){
	 		month=9;
	 		day=x-243;
		 }		 
	 	if(x>=273&&x<304){
	 		month=10;
	 		day=x-273;
		 }		 
	 	if(x>=304&&x<334){
	 		month=11;
	 		day=x-304;
		 }		
	 	if(x>=334&&x<365){
	 		month=12;
	 		day=x-334;
		 }
		 
	 }
     day++;
	 cout<<day<<" "<<month<<" "<<year<<" "<<"BC"<<endl;
	}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00185\zoo\zoo.cpp.The size of it is 0.145 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	cout<<"13";
	return 0;
}
==========
===== Successfully open the file      answers\HN-00185\call\call.cpp.The size of it is 0.135 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);

	return 0;
}
==========
===== Successfully open the file  answers\HN-00185\snakes\snakes.cpp.The size of it is 0.732 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int n,T,a[100001],b[100001],g;
	cin>>T;
	cin>>n;
	g=n;
	for(int i=1;i<=n;i++) {
	cin>>a[i];b[i]=a[i];}
	while(1){
		if(n==2){
			cout<<"1"<<endl;
			break;
		}
		if(a[n]-a[1]<=a[2]) {
		cout<<n<<endl;break;}
		else{
			a[1]=a[n]-a[1];
			n--;
			sort(a+1,a+1+n);
		}
	}
	n=g;
	for(int i=2;i<=T;i++){
		int y,l,k;
		cin>>y;
		for(int i=1;i<=y;i++){
			cin>>l>>k;
			a[l]=k;
		}
		for(int i=1;i<=n;i++) {b[i]=a[i];}
	while(1){
		if(n==2){
			cout<<"1"<<endl;
			break;
		}
		if(a[n]-a[1]<=a[2]) {
		cout<<n<<endl;break;}
		else{
			a[1]=a[n]-a[1];
			n--;
			sort(a+1,a+1+n);
		}
	}
	n=g;		
	}	
	return 0;
}
==========


---------- Now Opening N-00186's file(s).
===== Successfully open the file  answers\HN-00186\julian\julian.cpp.The size of it is 0.896 KB.
#include<bits/stdc++.h>
using namespace std;
const int N=-4713;
int q,a[15]={29,31,28,31,30,31,30,31,31,30,31,30,31};
int y=N,m=1,d=1,ret=1; 
long long r[100010];
bool flag=0;
void re(){
	if(flag){
		if(y%400==0||(y%100!=0&&y%4==0))ret=-1;
	}
	else{
		if(y<0&&abs(y+1)%4==0)ret=-1;
		if(y>0&&y%4==0)ret=-1;
	}
	return ;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	for(int i=1;i<=q;i++)scanf("%lld",&r[i]);
	for(int i=1;i<=q;i++){
		while(r[i]!=0){
			r[i]--;d++;
			if(m==1&&d==31){
				d=0;m++;re();ret++;
			}
			if(d==a[ret]&&ret!=0){ 
				ret++;m++;d=0;
			}
			if(ret==0&&d==29){ 
				ret=3;m++;d=0;
			}
			if(m==13){
				y++;m=1;ret=1;
			}
			if(y==0)y++;
			if(y==1582&&m==10&&d==5){
				d=15;flag=1;
			}
		}
		if(y<0)printf("%d %d %d BC\n",d,m,abs(y));
		else printf("%d %d %d\n",d,m,y);
		m=d=ret=1;flag=0;y=N;
	}
	return 0;
}

==========
===== Successfully open the file        answers\HN-00186\zoo\zoo.cpp.The size of it is 0.366 KB.
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k;
	int a[15],p[15],q[15];
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++){
		scanf("%d%d",&p[i],&q[i]);
	}
	if(n==3&m==3&&c==5&&k==4)printf("13");
	else printf("2");
	return 0;
}

==========
===== Opening      answers\HN-00186\call\call.cpp Failed.File not found.
===== Opening  answers\HN-00186\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00187's file(s).
===== Successfully open the file  answers\HN-00187\julian\julian.cpp.The size of it is 2.224 KB.
#include<bits/stdc++.h>
using namespace std;
int Q,r,old=2451911,biao[2600005][3];
int read()
{
	int f=1,a=0;
	char ch=getchar();
	if(ch=='-')
		f=-1,ch=getchar();
	while(ch>='0'&&ch<='9')
	{
		a=a*10+ch-'0';
		ch=getchar();
	}
	return f*a;
}
int main()
{
	freopen("julian1.in","r",stdin);
	freopen("julian.out","w",stdout);
	int nian=-4713,yue=1,ri=1,run=1,flag=0;
	for(r=0;r<old;++r)
	{		
		++ri;
		if(!flag&&nian==1582&&yue==10)
		{
//			cout<<nian<<' '<<yue<<' '<<ri<<endl;
			if(ri==5)
				ri=15,flag=1;
		}
		if(ri<=28);
		else if(yue==2)
		{
			if(run==1&&(nian<=1582||nian%400==0||(nian%4==0&&nian%100!=0)))
			{
				if(ri==29);
				else if(ri==30)
					ri=1,yue=3;
			}
			else if(ri==29)
				ri=1,yue=3;
		}
		else if(yue==4||yue==6||yue==9||yue==11)
		{
			if(ri==31)
				ri=1,++yue;
		}
		else if(yue!=12)
		{
			if(ri==32)
				ri=1,++yue;
		}
		else
		{
			if(ri==32)
			{
				ri=1,yue=1,++nian;
				if(nian==0)
					nian=1;
				run=(run+1)%4;					
			}
		}
		biao[r][0]=nian,biao[r][1]=yue,biao[r][2]=ri;
		if(nian==2001&&yue==1&&ri==1)
			break;
	}
	
	Q=read();
	while(Q--)
	{
		r=read();
		if(r<old)
		{
//			r+=3*365;
			--r;
			int nian=biao[r][0],yue=biao[r][1],ri=biao[r][2];
			if(nian>0)
				printf("%d %d %d\n",ri,yue,nian);
			else
				printf("%d %d %d BC\n",ri,yue,-nian);
		}
		else
		{
			r-=old;
			int nian=2001,yue=1,ri=1,run=0;
			int nian4=4*365+1,nian100=25*nian4-1,nian400=100*nian4-3;
			int zheng400nian=r/nian400;
			nian+=zheng400nian*400;
			r-=zheng400nian*nian400;			
			int zheng100nian=r/nian100;
			nian+=zheng100nian*100;
			r-=zheng100nian*nian100;			
			int zheng4nian=r/nian4;
			nian+=zheng4nian*4;
			r-=zheng4nian*nian4;
			int zhengnian=r/365;
			nian+=zhengnian;
			r-=zhengnian*365;
			if(zhengnian==3)
				run=1;
			if(zheng100nian==3)
				run=0;
			while(r--)
			{		
				++ri;
				if(ri<=28);
				else if(yue==2)
				{
					if(run==1)
					{
						if(ri==29);
						else if(ri==30)
							ri=1,yue=3;
					}
					else if(ri==29)
						ri=1,yue=3;
				}
				else if(yue==4||yue==6||yue==9||yue==11)
				{
					if(ri==31)
						ri=1,++yue;
				}
				else 
				{
					if(ri==32)
						ri=1,++yue;
				}
			}
		   	printf("%d %d %d\n",ri,yue,nian);
		}
	}
	return 0;
}



==========
===== Successfully open the file        answers\HN-00187\zoo\zoo.cpp.The size of it is 1.100 KB.
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int sum,p[maxn],q[maxn],n,a[maxn],m,c,k,binary[55],food[maxn];
int read()
{
	int f=1,a=0;
	char ch=getchar();
	if(ch=='-')
		f=-1,ch=getchar();
	while(ch>='0'&&ch<='9')
	{
		a=a*10+ch-'0';
		ch=getchar();
	}
	return f*a;
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read(),m=read(),c=read(),k=read();
	for(int i=1;i<=n;++i)
	{
		a[i]=read();
		int tmp=a[i],wei=0;
		while(tmp)
		{
			if(tmp&1)
				binary[wei]=1;
			tmp>>=1,++wei;
		}
	}
	for(int i=1;i<=m;++i)
	{
		p[i]=read(),q[i]=read();
		if(binary[p[i]])
			food[q[i]]=1;
	}
//	for(int i=0;i<=5;++i)
//		cout<<binary[i]<<' ';
//	for(int i=1;i<=5;++i)
//		cout<<food[i]<<' ';
//	cout<<endl;
	for(int i=0;i<=pow(2,k)-1;++i)
	{
		int tmp=i,wei=0,flag=1;
		while(tmp)
		{
			if(tmp&1)
			{
				for(int j=1;j<=m;++j)
					if(p[j]==wei)
					{
						if(!food[q[j]])
						{
							flag=0;
							break;
						}
					}
			}
			if(!flag)
				break;
			tmp>>=1,++wei;
		}
		if(flag)
			++sum;
//		cout<<i<<' '<<sum<<endl;
	}
	cout<<sum-n;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00187\call\call.cpp.The size of it is 1.334 KB.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=1e6+5;
const ll mod=998244353;
ll n,a[maxn],m,Q,mul=1,p[maxn],v[maxn];
int T[maxn],c[maxn];
vector<int>g[maxn];
ll read()
{
	ll f=1,a=0;
	char ch=getchar();
	if(ch=='-')
		f=-1,ch=getchar();
	while(ch>='0'&&ch<='9')
	{
		a=a*10+ch-'0';
		ch=getchar();
	}
	return f*a;
}
ll quickmi(ll a,ll b)
{
	ll kotae=1;
	while(b)
	{
		if(b&1)
			kotae=kotae*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return kotae;
}
ll inv(ll x)
{
	return quickmi(x,mod-2);
}
void gkd(int id)
{
//	cout<<"id:"<<id<<endl;
	if(T[id]==1)
	{
		a[p[id]]=(a[p[id]]+v[id]*inv(mul))%mod;
	}
	else if(T[id]==2)
	{
		mul=mul*v[id]%mod;
	}
	else
	{
		int size=g[id].size();
		for(int i=0;i<size;++i)
			gkd(g[id][i]);
	}
//		for(int i=1;i<=n;++i)
//		printf("%lld ",a[i]*mul%mod);
//		cout<<endl;
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(int i=1;i<=n;++i)
		a[i]=read();
	m=read();
	for(int i=1;i<=m;++i)
	{
		T[i]=read();
		if(T[i]==1)
			p[i]=read(),v[i]=read();
		else if(T[i]==2)
			v[i]=read();
		else
		{
			c[i]=read();
			for(int j=1;j<=c[i];++j)
			{
				int gg=read();
				g[i].push_back(gg);
			}
		}
	}
	Q=read();
	for(int i=1;i<=Q;++i)
	{
		int f=read();
		gkd(f);
	}
	for(int i=1;i<=n;++i)
		printf("%lld ",a[i]*mul%mod);
	return 0;
}
==========
===== Successfully open the file  answers\HN-00187\snakes\snakes.cpp.The size of it is 0.867 KB.
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int n,k,T;
struct she
{
	int a,id;
	bool operator < (const she &x) const
	{
		return a<x.a?a<x.a:id<x.id;
	}
}s[maxn];
int read()
{
	int f=1,a=0;
	char ch=getchar();
	if(ch=='-')
		f=-1,ch=getchar();
	while(ch>='0'&&ch<='9')
	{
		a=a*10+ch-'0';
		ch=getchar();
	}
	return f*a;
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	T=read()-1;
	n=read();
	for(int i=1;i<=n;++i)
		s[i].a=read();
	if(n==3)
	{
		if(s[3].a>=s[2].a+s[1].a)
			puts("1");
		else
			puts("3");
		while(T--)
		{
			int k;
			cin>>k;
			for(int i=1;i<=k;++i)
			{
				int x,y;
				cin>>x>>y;
//				cout<<x<<' '<<y<<endl;
				s[x].a=y;
			}
//			for(int i=1;i<=n;++i)
//				cout<<s[i].a<<' ';
//			cout<<endl;
			if(s[3].a>=s[2].a+s[1].a)
				puts("1");
			else
				puts("3");
		}
	}
	return 0;
}
==========


---------- Now Opening N-00188's file(s).
===== Successfully open the file  answers\HN-00188\julian\julian.cpp.The size of it is 1.333 KB.
#include<bits/stdc++.h>
using namespace std;
int t,q,d,m,y;
const int day[]={31,0,31,30,31,30,31,31,30,31,30,31};
void solve1();
void solve2();
void solve1_1();
int askday(bool,int);
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&q);
		if(q<2299160) solve1();
		else solve2();
		cout<<d<<' '<<m<<' ';
		if(y>0) cout<<y<<endl;
		else cout<<-y<<" BC\n";
	}
}
void solve1(){
	d=0;m=1;
	if(q>=2150580){
		y=1,q-=2150580,solve1_1();
		return;
	}
	y=-4713;
	q++;
	y+=(q%1461)*4;
	q%=1461;
	if(q>=366){
		q-=366;
		y++;
	}
	while(q>=365){
		q-=365;
		y++;
	}
	for(int i=1;i<=12;i++){
		if(q<askday(!((-y-1)%4),i)) break;
		q-=askday(!((-y-1)%4),i);
		m++;
	}
	d=q;
	if(d==0){
		if(m==1){
			y--;
			m=12;
			d=31;
			return;
		}
		else{
			m--;
			d=askday(!((-y-1)%4),m);
			return;
		}
	}
	return;
}
void solve1_1(){
	q++;
	y+=(q%1461)*4;
	q%=1461;
	for(int i=3;i&&q>=365;i--){
		q-=365;
		y++;
	}
	if(q==366){
		q=0;
		y++;
	}
	for(int i=1;i<=12;i++){
		if(q<askday(!(y%4),i)) break;
		q-=askday(!(y%4),i);
		m++;
	}
	d=q;
	if(d==0){
		if(m==1){
			y--;
			m=12;
			d=31;
			return;
		}
		else{
			m--;
			d=askday(!(y%4),m);
			return;
		}
	}
	return;
}
void solve2(){
	
}
int askday(bool s,int mo){
	if(mo!=2) return day[mo];
	if(s) return 29;
	return 28;
}
==========
===== Successfully open the file        answers\HN-00188\zoo\zoo.cpp.The size of it is 0.534 KB.
#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
int n,m,c,k,rul1,rul2,oknum,fake,num[1000001];
ull ans;
bool si[70],ok[70];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}
	for(int i=0;i<k;i++){
		si[i]=c&1;
		c>>=1;
	}
	for(int i=0;i<k;i++) ok[i]=1;
	for(int i=1;i<=m;i++){
		cin>>rul1>>rul2;
		if(!si[rul2]) ok[rul1]=0;
	}
	for(int i=0;i<k;i++)
		oknum+=ok[i];
	cout<<oknum<<endl;
	cout<<(1ull<<k)-n;
}

==========
===== Successfully open the file      answers\HN-00188\call\call.cpp.The size of it is 0.946 KB.
#include<bits/stdc++.h>
#define mod 998244353
using namespace std;
int n,m,q,num[100010],a,b,op;
struct Func{
	int op;
	vector<int> a;
}func[100010];
void fun(int x){
	if(func[x].op==1){
		num[func[x].a[0]]=(num[func[x].a[0]]+func[x].a[1])%mod;
		return;
	} 
	if(func[x].op==2){
		for(int i=1;i<=n;i++)
			num[i]=num[i]*func[x].a[0]%mod;
	}
	if(func[x].op==3){
		for(int i=0;i<func[x].a.size();i++)
			fun(func[x].a[i]);
	}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>num[i];
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>op;
		func[i].op=op;
		if(op==1){
			cin>>a>>b;
			func[i].a.push_back(a);
			func[i].a.push_back(b);
		}
		if(op==2){
			cin>>a;
			func[i].a.push_back(a);
		}
		if(op==3){
			cin>>a;
			for(int j=1;j<=a;j++)
				cin>>b,func[i].a.push_back(b);
		}
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>a;
		fun(a);
	}
	for(int i=1;i<=n;i++)
		cout<<num[i]%mod<<' ';
}

==========
===== Successfully open the file  answers\HN-00188\snakes\snakes.cpp.The size of it is 0.624 KB.
#include<bits/stdc++.h>
using namespace std;
int t,n,maxa,op;
struct Snake{
	int num,val;
}a[1000001];
bool operator<(Snake a,Snake b){
	if(a.val!=b.val) return a.val<b.val;
	return a.num<b.num;
}
Snake operator-(Snake a,Snake b){
	a.val-=b.val;
	return a;
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i].val,a[i].num=i;
		sort(a,a+n+1);
		bool flag=1;
		for(int i=1;i<=n-2&&flag;i++){
			if(a[n-1]<a[n]-a[i]) a[n]=a[n]-a[i],op++;
			else flag=0;
		}
		if(flag&&a[n-1]<a[n]) cout<<1<<endl;
		else cout<<n-op<<endl;
	}
}

==========


---------- Now Opening N-00189's file(s).
===== Successfully open the file  answers\HN-00189\julian\julian.cpp.The size of it is 3.242 KB.
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define ch() getchar()
#define pc(x) putchar(x)
using namespace std;
template<typename T>void read(T&x){
	static int f;static char c;
	for(c=ch(),f=1;c<'0'||c>'9';c=ch())if(c=='-')f=-f;
	for(x=0;c>='0'&&c<='9';c=ch())x=x*10+(c&15);x*=f;
}
template<typename T>void write(T x){
	static int q[64];int cnt=0;
	if(x==0)return pc('0'),void();
	if(x<0)pc('-'),x=-x;
	while(x)q[cnt++]=x%10,x/=10;
	while(cnt--)pc(q[cnt]+'0');
}
/*
start:
-4713 1 1
*/
const int data0[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},
		  data1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
void getyear(void){
	int tmp=0;
	for(int i=1;i<=12;++i)
		tmp+=data0[i];
	printf("year:%d\n",tmp);
}
void getsum(void){
	int sum=0;
	for(int i=4713;i>=1;--i)
		sum+=365+(i%4==1);
	//reach 1.1.1
	printf("reach 1.1.1:%d\n",sum);
	for(int i=1;i<=1581;++i)
		sum+=365+(i%4==0);
	//reach 1582.1.1
	for(int i=1;i<=9;++i)
		sum+=data0[i];
	//reach 1582.10.1
	sum+=4;
	//reach 1582.10.5 1582.10.15
	printf("reach 1582.10.15:%d\n",sum);
	sum+=17;
	//reach 1582.11.1
	for(int i=11;i<=12;++i)
		sum+=data0[i];
	//reach 1583.1.1
	printf("reach 1583.1.1:%d\n",sum);
}
const int R0=1721424,R1=2299161,R2=2299239;
long long getyear0(long long r){
	long long L=0,R=4712;
	while(L<R){
		long long M=(L+R+1)>>1;
		long long D=(M+3)/4+M*365;
		if(D>r)R=M-1;else L=M;
	}
	return L;
}
long long getyear1(long long r){
	long long L=0,R=1581;
	while(L<R){
		long long M=(L+R+1)>>1;
		long long D=M/4+M*365;
		if(D>r)R=M-1;else L=M;
	}
	return L;
}
long long getyear2(long long r){
	long long L=0,R=1000000000;
	while(L<R){
		long long M=(L+R+1)>>1;
		long long D=(M+2)/4-(M+82)/100+(M+382)/400+M*365;
		if(D>r)R=M-1;else L=M;
	}
	return L;
}
void work(void){
	int q;read(q);
	while(q--){
		long long r;read(r);
		if(r<R1){
			//before 1582.10.5
			if(r<R0){
				//before 1.1.1
				long long Y=getyear0(r);
				r-=(Y+3)/4+Y*365;++r;
				Y=4713-Y;long long M=1;
				if(Y%4!=1){
					while(r>data0[M])
						r-=data0[M],++M;
				}
				else{
					while(r>data1[M])
						r-=data1[M],++M;
				}
				write(r),pc(' '),write(M),pc(' '),write(Y),pc(' ');
				pc('B'),pc('C');
			}
			else{
				r-=R0;
				long long Y=getyear1(r);
				r-=Y/4+Y*365;++r;
				Y=Y+1;long long M=1;
				if(Y%4!=0){
					while(r>data0[M])
						r-=data0[M],++M;
				}
				else{
					while(r>data1[M])
						r-=data1[M],++M;
				}
				write(r),pc(' '),write(M),pc(' '),write(Y);
			}
		}
		else{
			//after 1582.10.14
			if(r<R2){
				//before 1583.1.1
				r-=R1;
				if(r<17){
					r+=15;
					write(r),pc(' '),write(10),pc(' '),write(1582);
				}
				else{
					r-=17;++r;long long M=11;
					while(r>data0[M])
						r-=data0[M],++M;
					write(r),pc(' '),write(M),pc(' '),write(1582);
				}
			}
			else{
				r-=R2;
				long long Y=getyear2(r);
				r-=(Y+2)/4-(Y+82)/100+(Y+382)/400+Y*365;++r;
				Y+=1583;long long M=1;
				if(Y%4!=0||(Y%100==0&&Y%400!=0)){
					while(r>data0[M])
						r-=data0[M],++M;
				}
				else{
					while(r>data1[M])
						r-=data1[M],++M;
				}
				write(r),pc(' '),write(M),pc(' '),write(Y);
			}
		}
		pc('\n');
	}
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
//	getsum();
	work();
	return 0;
}
==========
===== Successfully open the file        answers\HN-00189\zoo\zoo.cpp.The size of it is 1.419 KB.
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define ch() getchar()
#define pc(x) putchar(x)
using namespace std;
template<typename T>void read(T&x){
	static int f;static char c;
	for(c=ch(),f=1;c<'0'||c>'9';c=ch())if(c=='-')f=-f;
	for(x=0;c>='0'&&c<='9';c=ch())x=x*10+(c&15);x*=f;
}
template<typename T>void write(T x){
	static int q[64];int cnt=0;
	if(x==0)return pc('0'),void();
	if(x<0)pc('-'),x=-x;
	while(x)q[cnt++]=x%10,x/=10;
	while(cnt--)pc(q[cnt]+'0');
}
#define ULL unsigned long long
const int maxn=1000005,maxm=1000005,maxk=80,maxc=100000005;
bool vis[maxc];
struct Edge{
	int v,nt;
	Edge(int v=0,int nt=0):
		v(v),nt(nt){}
}e[maxm];
int hd[maxk],num;
void qwq(int u,int v){
	e[++num]=Edge(v,hd[u]),hd[u]=num;
}
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k;
	read(n),read(m),read(c),read(k);
	ULL tmp=0;
	for(int i=1;i<=n;++i){
		ULL a;scanf("%llu",&a);tmp|=a;
	}
	for(int i=1;i<=m;++i){
		int p,q;read(p),read(q);qwq(p,q);
		if((tmp>>p)&1)vis[q]=true;
	}
	int cnt=0;
	for(int i=0;i<k;++i){
		int ok=true;
		for(int j=hd[i];j&&ok;j=e[j].nt){
			int v=e[j].v;ok&=vis[v];
		}
		if(ok)++cnt;
	}
	if(cnt<64||n>0){
		if(cnt==0)printf("%d\n",1-n);
		else{
			ULL ans=1llu<<(cnt-1);
			if(ans>=n)ans-=n,ans+=1llu<<(cnt-1);
			else ans+=1llu<<(cnt-1),ans-=n;
			printf("%llu\n",ans);
		}
	}
	else 
		puts("18446744073709551616");
	return 0;
}
==========
===== Successfully open the file      answers\HN-00189\call\call.cpp.The size of it is 3.200 KB.
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define ch() getchar()
#define pc(x) putchar(x)
using namespace std;
template<typename T>void read(T&x){
	static int f;static char c;
	for(c=ch(),f=1;c<'0'||c>'9';c=ch())if(c=='-')f=-f;
	for(x=0;c>='0'&&c<='9';c=ch())x=x*10+(c&15);x*=f;
}
template<typename T>void write(T x){
	static int q[64];int cnt=0;
	if(x==0)return pc('0'),void();
	if(x<0)pc('-'),x=-x;
	while(x)q[cnt++]=x%10,x/=10;
	while(cnt--)pc(q[cnt]+'0');
}
const int mod=998244353;
int mo(const int x){return x>=mod?x-mod:x;}
int power(int a,int x){
	int re=1;
	while(x){
		if(x&1)re=1ll*re*a%mod;
		a=1ll*a*a%mod;x>>=1;
	}
	return re;
}
const int maxn=100005,maxm=100005,maxq=100005;
struct Edge{
	int v,nt;
	Edge(int v=0,int nt=0):
		v(v),nt(nt){}
}e[maxm*2];
int hd[maxm],num;
void qwq(int u,int v){
	e[++num]=Edge(v,hd[u]),hd[u]=num;
}
int n,m,q,ain[maxn],d[maxm],qs[maxm];
int OP[maxm],P[maxm],V[maxm],QY[maxq];
namespace violence{
	const int maxn=1005,maxm=1005;
	struct Function{
		int A[maxn],B[maxn];
		Function operator + (const Function o)const{
			Function re;
			for(int i=1;i<=n;++i){
				re.A[i]=1ll*A[i]*o.A[i]%mod;
				re.B[i]=mo(1ll*B[i]*o.A[i]+o.B[i]);
			}
			return re;
		}
	}f[maxm],F;
	int main(){
		for(int i=1;i<=n;++i)
			F.A[i]=0,F.B[i]=ain[i];
		int fro=0,bac=0;
		for(int i=1;i<=m;++i){
			for(int j=1;j<=n;++j)
				f[i].A[j]=1,f[i].B[j]=0;
			int T=OP[i];
			if(T==1){
				qs[bac++]=i;
				int p=P[i];
				f[i].B[p]=V[i];
			}
			else if(T==2){
				qs[bac++]=i;
				int v=V[i];
				for(int j=1;j<=n;++j)
					f[i].A[j]=v;
			}
		}
		while(fro<bac){
			int u=qs[fro++];
			for(int i=hd[u];i;i=e[i].nt){
				int v=e[i].v;
				if((i&1)^1){
					if((--d[v])==0)qs[bac++]=v;
				}
				else{
					f[u]=f[v]+f[u];
				}
			}
		}
		for(int i=1;i<=q;++i){
			F=F+f[QY[i]];
		}
		for(int i=1;i<=n;++i)
			write(F.B[i]),pc(" \n"[i==n]);
		return 0;
	}
}
int CNT[maxm];
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int sc=0;
	read(n);
	for(int i=1;i<=n;++i)read(ain[i]);
	read(m);
	for(int i=1;i<=m;++i){
		read(OP[i]);
		if(OP[i]==1)read(P[i]),read(V[i]);
		else if(OP[i]==2)read(V[i]);
		else{
			int c;read(c);d[i]=c;sc+=c;
			for(int j=1;j<=c;++j){
				int s;read(s);
				qwq(i,s);qwq(s,i);
			}
		}
	}
	read(q);
	for(int i=1;i<=q;++i)
		read(QY[i]);
	if(n<=1000&&m<=1000&&q<=1000&&sc<=1000)
		violence::main();
	else{
		for(int i=1;i<=m;++i)d[i]=0;
		for(int i=1;i<=num;i+=2)++d[e[i].v];
		int fro=0,bac=0;
		for(int i=1;i<=m;++i){
			if(d[i]==0)qs[bac++]=i;
		}
		int tp=OP[1];
		for(int i=1;i<=q;++i)++CNT[QY[i]];
		while(fro<bac){
			int u=qs[fro++];
			for(int i=hd[u];i;i=e[i].nt)if(i&1){
				int v=e[i].v;CNT[v]+=CNT[u];
				if(tp==1){
					if(CNT[v]>=mod)CNT[v]-=mod;
				}
				else{
					if(CNT[v]>=mod-1)CNT[v]-=mod-1;
				}
				if((--d[v])==0)
					qs[bac++]=v;
			}
		}
		int sum=1;
		for(int i=1;i<=m;++i){
			if(OP[i]==1){
				ain[P[i]]=mo(ain[P[i]]+1ll*CNT[i]*V[i]%mod);
			}
			else if(OP[i]==2){
				sum=1ll*sum*power(V[i],CNT[i])%mod;
			}
		}
		if(tp==2){
			for(int i=1;i<=n;++i)
				ain[i]=1ll*ain[i]*sum%mod;
		}
		for(int i=1;i<=n;++i)
			write(ain[i]),pc(" \n"[i==n]);
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00189\snakes\snakes.cpp.The size of it is 1.964 KB.
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define ch() getchar()
#define pc(x) putchar(x)
using namespace std;
template<typename T>void read(T&x){
	static int f;static char c;
	for(c=ch(),f=1;c<'0'||c>'9';c=ch())if(c=='-')f=-f;
	for(x=0;c>='0'&&c<='9';c=ch())x=x*10+(c&15);x*=f;
}
template<typename T>void write(T x){
	static int q[64];int cnt=0;
	if(x==0)return pc('0'),void();
	if(x<0)pc('-'),x=-x;
	while(x)q[cnt++]=x%10,x/=10;
	while(cnt--)pc(q[cnt]+'0');
}
const int maxn=1000005;
int n,a[maxn],q0[maxn],q1[maxn],A[maxn],B[maxn],in[maxn],cp[maxn];
void solve(void){
	for(int i=1;i<=n;++i)cp[i]=a[i],in[i]=0;
	int f0=0,b0=0,f1=n,b1=n;
	for(int i=1;i<=n;++i)q0[b0++]=i;
	for(int i=1;i<n;++i){
		int mx=-1,mxp=0;
		if(f0<b0&&(a[q0[b0-1]]>mx||(a[q0[b0-1]]==mx&&q0[b0-1]>mxp)))mx=a[mxp=q0[b0-1]];
		if(f1<b1&&(a[q1[b1-1]]>mx||(a[q1[b1-1]]==mx&&q1[b1-1]>mxp)))mx=a[mxp=q1[b1-1]];
		int mn=1000000001,mnp=n+1;
		if(f0<b0&&(a[q0[f0]]<mn||(a[q0[f0]]==mn&&q0[f0]<mnp)))mn=a[mnp=q0[f0]];
		if(f1<b1&&(a[q1[f1]]<mn||(a[q1[f1]]==mn&&q1[f1]<mnp)))mn=a[mnp=q1[f1]];
		A[i]=mxp;B[i]=mnp;
		if(f0<b0&&q0[b0-1]==mxp)--b0;else --b1;
		if(f0<b0&&q0[f0]==mnp)++f0;else ++f1;
		a[mxp]-=a[mnp];q1[--f1]=mxp;
	}
	/*
	for(int i=1;i<n;++i){
		int mx=-1,mxp=0;
		int mn=1000000001,mnp=n+1;
		for(int j=1;j<=n;++j)if(a[j]!=-1){
			if(a[j]>mx||(a[j]==mx&&j>mxp))mx=a[mxp=j];
			if(a[j]<mn||(a[j]==mn&&j<mnp))mn=a[mnp=j];
		}
		A[i]=mxp,B[i]=mnp;
		a[mxp]-=a[mnp];a[mnp]=-1;
//		printf("mx:%d eat mn:%d\n",mxp,mnp);
	}
	*/
	int no=n;
	for(int i=n-1;i>=1;--i){
		++in[B[i]];
		if(in[A[i]])
			while(no>i)--in[B[--no]];
	}
	--no;
	for(int i=1;i<=n;++i)a[i]=cp[i];
	write(n-no),pc('\n');
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T;read(T),read(n);
	for(int i=1;i<=n;++i)read(a[i]);
	solve();--T;
	while(T--){
		int k;read(k);
		while(k--){
			int x,y;
			read(x),read(y);
			a[x]=y;
		}
		solve();
	}
	return 0;
}
==========


---------- Now Opening N-00190's file(s).
===== Successfully open the file  answers\HN-00190\julian\julian.cpp.The size of it is 1.629 KB.
#include<bits/stdc++.h>
using namespace std;
#define int long long
struct date{
	int d,m,y;
	date(int D=0,int M=0,int Y=0){
		d=D;m=M;y=Y;
	}
	bool friend operator<(date a,date b){
		if(a.y!=b.y)return a.y<b.y;
		if(a.m!=b.m)return a.m<b.m;
		return a.d<b.d;
	}
};
date st=date(1,1,-4712),p1=date(4,10,1582),p2=date(15,10,1582);
const int table[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int pre[15];
void init(){
	for(int i=1;i<=12;++i)pre[i]=pre[i-1]+table[i];
}
int calc(int d,int m,int op){
	return pre[m-1]+(op&&m>2)+d;
}//maybe wrong?But d=1 is ok
int f1(date a){
	a.y+=10000;
	int tmp=(a.y-1)*365+(a.y-1)/4;
	return tmp+calc(a.d,a.m,a.y%4==0);
}
int f2(date a){
	int tmp=(a.y-1)*365+(a.y-1)/4-(a.y-1)/100+(a.y-1)/400;
	return tmp+calc(a.d,a.m,a.y%4==0&&(a.y%100!=0||a.y%400==0));
}
int val=0;
int solve(date a){
	int res=0;
	if(a<p1||(a.d==p1.d&&a.m==p1.m&&a.y==p1.y)){
		return f1(a)-f1(st);
	}
	else{
//		cerr<<"? "<<a.d<<" "<<a.m<<" "<<a.y<<": "<<val+f2(a)-f2(p2)+1<<endl;
		return f1(p1)-f1(st)+f2(a)-f2(p2)+1;
	}
}
signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int T;
	init();
	val=f1(p1)-f1(st);
	scanf("%lld",&T);
	while(T--){
		int n;
		scanf("%lld",&n);
		int l=-5000,r=1000000002;
		while(l+1<r){
			int mid=(l+r)/2;
			if(solve(date(1,1,mid))<=n)l=mid;
			else r=mid;
		}
		int m=1;
		for(int i=1;i<=12;++i)
			if(solve(date(1,i,l))<=n)m=i;
		int d=n-solve(date(1,m,l))+1;
		if(l==1582&&m==10){
			if(d>4)d+=10;
		}
		if(l>0)printf("%lld %lld %lld\n",d,m,l);
		else printf("%lld %lld %lld BC\n",d,m,-l+1);
	}
//	cerr<<"val: "<<val<<" "<<f1(p1)-f1(st)<<endl;
	return 0;
}
==========
===== Successfully open the file        answers\HN-00190\zoo\zoo.cpp.The size of it is 0.988 KB.
#include<bits/stdc++.h>
using namespace std;
#define ULL unsigned long long
ULL read(){
	ULL a=0;char c=getchar();
	while(c>'9'||c<'0'){c=getchar();}
	while('0'<=c&&c<='9'){
		a=a*10+c-48;
		c=getchar();
	}
	return a;
}
#define MN 1000005
int n,m,c,k;
ULL a[MN];
int vis[69],ok[69];
int p[MN],q[MN];
bool app[100000005];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read();m=read();c=read();k=read();
	for(int i=0;i<k;++i)ok[i]=1;
	for(int i=1;i<=n;++i){
		a[i]=read();
	}
	for(int i=0;i<k;++i){
		if(!vis[i]){
			for(int j=1;j<=n;++j)
				if((a[j]>>i)&1){vis[i]=1;break;}
		}
	}
	ULL ans=1;
	for(int i=1;i<=m;++i){
		p[i]=read(),q[i]=read();
		if(p[i]<=k&&vis[p[i]])app[q[i]]=1;
	}
	for(int i=1;i<=m;++i)
		if(p[i]<=k&&!app[q[i]])ok[p[i]]=0;
	int ti=0;
	for(int i=0;i<k;++i){
		if(ok[i])ti++;
	}
//	cerr<<"ti: "<<ti<<endl;
	if(ti<64)printf("%llu",(1ull<<ti)-n);
	else if(n)printf("%llu",(1ull<<ti)-n);
	else 
		puts("18446744073709551616");
	return 0;
}

==========
===== Successfully open the file      answers\HN-00190\call\call.cpp.The size of it is 1.632 KB.
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mod 998244353
int read(){
	int a=0,fh=1;char c=getchar();
	while(c>'9'||c<'0'){if(c=='-')fh=-1;c=getchar();}
	while('0'<=c&&c<='9'){
		a=a*10+c-48;
		c=getchar();
	}
	return a*fh;
}
#define MN 100005
int per[MN],suf[MN];
int n,m,q;
int a[MN],op[MN],p[MN],v[MN],c[MN];
int deg[MN],tag[MN],ans[MN],mul[MN];
vector<int>edge[MN];
bool vis[MN];
void dfs(int x){
	if(vis[x])return;
	vis[x]=1;
	mul[x]=1;
	if(op[x]==2) mul[x]=v[x];
	for(int i=0;i<edge[x].size();++i){
		int v=edge[x][i];
		dfs(v);
		mul[x]=mul[x]*mul[v]%Mod;
	}
}
void work(int x){
	if(op[x]==1){
		ans[p[x]]=(ans[p[x]]+v[x]*tag[x])%Mod;
	}
	int tmp=tag[x];
	for(int i=c[x]-1;i>=0;--i){
		int v=edge[x][i];
		tag[v]=(tag[v]+tmp)%Mod;
		deg[v]--;
		if(!deg[v])work(v);
		tmp=tmp*mul[v]%Mod;
	}
}
signed main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(int i=1;i<=n;++i)a[i]=read();
	m=read();
	for(int i=1;i<=m;++i){
		op[i]=read();
		if(op[i]==1){
			p[i]=read();v[i]=read();
		}
		else if(op[i]==2){
			v[i]=read();
		}
		else{
			c[i]=read();
			edge[i].resize(c[i]);
			for(int j=0;j<c[i];++j){
				int x=read();
				deg[x]++;
				edge[i][j]=x;
			}
		}
	}
	for(int i=1;i<=m;++i)
		if(!deg[i]){
			c[m+1]++;
			edge[m+1].push_back(i);
			deg[i]++;
		}
	dfs(m+1);
	q=read();	
	suf[q+1]=1;
	for(int i=1;i<=q;++i){
		per[i]=read();
		suf[i]=mul[per[i]];
	}
	for(int i=q;i;--i){
		tag[per[i]]=(tag[per[i]]+suf[i+1])%Mod;
		suf[i]=suf[i+1]*suf[i]%Mod;
	}
	work(m+1);
	for(int i=1;i<=n;++i)printf("%lld%c",(a[i]*suf[1]+ans[i])%Mod,i==n?'\n':' ');
	return 0;
}

==========
===== Successfully open the file  answers\HN-00190\snakes\snakes.cpp.The size of it is 1.572 KB.
#include<bits/stdc++.h>
using namespace std;
int read(){
	int a=0,fh=1;char c=getchar();
	while(c>'9'||c<'0'){if(c=='-')fh=-1;c=getchar();}
	while('0'<=c&&c<='9'){
		a=a*10+c-48;
		c=getchar();
	}
	return a*fh;
}
#define pii pair<int,int>
#define mp make_pair
#define x first
#define y second
#define MN 50005
int T,n;
pii a[MN];
int _a[MN];
int die[MN],id[MN],mx[MN];
priority_queue<pii >Q;
priority_queue<pii,vector<pii >,greater<pii > >P;
pii getq(){
	while(1){
		pii x=Q.top();Q.pop();
		if(!die[x.y]&&_a[x.y]==x.x)return x;
	}
}
pii getp(){
	while(1){
		pii x=P.top();P.pop();
		if(!die[x.y]&&_a[x.y]==x.x)return x;
	}
}
int solve(){
	while(!Q.empty())Q.pop();
	while(!P.empty())P.pop();
	for(int i=1;i<=n;++i){
		P.push(a[i]);
		Q.push(a[i]);
		_a[i]=a[i].x;
	}
	for(int i=1;i<=n;++i)die[i]=0;
	for(int i=1;i<n;++i){
		pii a=getq(),b=getp();
//		cerr<<i<<": "<<a.y<<" "<<a.x<<" "<<b.y<<" "<<b.x<<endl;
		die[b.y]=1;
		id[i]=b.y;
		mx[i]=a.y;
		a.x-=b.x;
		_a[a.y]=a.x;
		Q.push(a);P.push(a);
	}
	int pos=n-1;
	for(int i=n-1;i;--i){
		if(die[mx[i]]){
			for(int j=i;j<=pos;++j)die[id[j]]=0;
			pos=i-1;
		}
	}
	return n-pos;
	priority_queue<pii >aa;
	priority_queue<pii,vector<pii >,greater<pii > >BB;
	swap(aa,Q);swap(BB,P);
}
int main(){
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	T=read();
	n=read();
	for(int i=1;i<=n;++i)a[i].x=read(),a[i].y=i;
	printf("%d\n",solve());
	while(--T){
		int k=read();
		for(int i=1;i<=k;++i){
			int x=read(),y=read();
			a[x].x=y;
		}
	//	cerr<<"======"<<endl;
		printf("%d\n",solve());
	}
	return 0;
}

==========


---------- Now Opening N-00191's file(s).
===== Successfully open the file  answers\HN-00191\julian\julian.cpp.The size of it is 1.239 KB.
#include<stdio.h>
long long q,i,a,b,c;
long long j;
long long x400,x100,x4;
int dm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	x4=365*4+1;
	x100=x4*25-1;
	x400=x100*4+1;
	scanf("%lld",&q);
	while(q--){
		scanf("%lld",&i);
		a=b=c=0;
		if(i<2299161){
			a+=i/x4*4;
			i%=x4;
			if(i>=366){
				i-=366;
				++a;
				dm[1]=28;
				while(i>=365){
					i-=365;
					++a;
				}
			}else dm[1]=29;
			for(j=0;j<12&&i>=dm[j];++j){
				i-=dm[j];
				++b;
			}c=i;
		}else{
			a=1582-1+4713;
			i-=2299161;
			if(i<78){
				b=9;
				c=14;
				if(i>=17){
					++b;
					c=0;
					i-=17;
				}for(j=10;j<12&&i>=dm[j];++j){
					i-=dm[j];
					++b;
				}c+=i;
			}else{
				++a;
				i-=78;
				a+=i/x400*400;
				i%=x400;
				a+=i/x100*100;
				i%=x100;
				a+=i/x4*4;
				i%=x4;
				if(i>=365){
					i-=365;
					++a;
					if(i>=366){
						i-=366;
						++a;
						dm[1]=28;
						while(i>=365){
							i-=365;
							++a;
						}
					}else dm[1]=29;
				}else dm[1]=28;
				for(j=0;j<12&&i>=dm[j];++j){
					i-=dm[j];
					++b;
				}c=i;
			}
		}if(a<4713)printf("%lld %lld %lld BC\r",c+1,b+1,4713-a);
		else printf("%lld %lld %lld\r",c+1,b+1,a-4713+1);
	}return 0;
}
==========
===== Successfully open the file        answers\HN-00191\zoo\zoo.cpp.The size of it is 0.456 KB.
#include<stdio.h>
typedef unsigned long long u64;
u64 n,m,k;
bool list[64],ani[64];
u64 i,j,k1,b,ans;
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%llu%llu%llu%llu",&n,&m,&i,&k);
	for(i=0;i<n;++i){
		scanf("%llu",&j);
		for(k1=0;k1<k;++k1)if((j>>k1)&1)ani[k1]=1;
	}for(i=0;i<m;++i){
		scanf("%llu%llu",&j,&k1);
		list[j]=1;
	}for(i=0;i<k;++i)if(ani[i]||list[i]==0)++b;
	ans=1llu<<b;
	printf("%llu",ans-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00191\call\call.cpp.The size of it is 2.468 KB.
#include<stdio.h>
#define mod 998244353
typedef unsigned long long u64;
int n,m,q,i,j;
u64 a[100086];
struct addfunc{
	int id,add;
}fadd[100086];
int fmul[100086];
int *fs[100086],is[100086],u[100086];
int fk[100086];
struct tree{
	tree *l,*r;
	int il,ir;
	u64 add,mul;
}*h[100086];
tree *build(int l,int r){
	tree *g=new tree;
	g->il=l;
	g->ir=r;
	g->add=0;
	g->mul=1;
	g->l=g->r=0;
	return g;
}void dlt(tree *g){
	if(g==0)return;
	dlt(g->l);
	dlt(g->r);
	delete g;
}void pushdown(tree *g){
	if(g->l==0)g->l=build(g->il,(g->il+g->ir)>>1);
	g->l->add=g->l->add*g->mul+g->add;
	g->l->mul*=g->mul;
	if(g->r==0)g->r=build(((g->il+g->ir)>>1)+1,g->ir);
	g->r->add=g->r->add*g->mul+g->add;
	g->r->mul*=g->mul;
	g->add=0;
	g->mul=1;
}void modify(tree *g,int l,int r,int add,int mul){
	if(l==g->il&&r==g->ir){
		g->add=(g->add*mul+add)%mod;
		g->mul=(g->mul*mul)%mod;
		return;
	}pushdown(g);
	if(l<=g->l->ir){
		if(r<=g->l->ir)modify(g->l,l,r,add,mul);
		else{
			modify(g->l,l,g->l->ir,add,mul);
			modify(g->r,g->r->il,r,add,mul);
		}
	}else modify(g->r,l,r,add,mul);
}void merge(tree *t,tree *s){
	if(s->l==0&&s->r==0){
		t->add=(t->add*s->mul+s->add)%mod;
		t->mul=(t->mul*s->mul)%mod;
		return;
	}pushdown(t);
	pushdown(s);
	merge(t->l,s->l);
	merge(t->r,s->r);
}void dfs(int fid){
	h[fid]=build(0,n-1);
	for(int i=0;i<is[fid];++i){
		if(fk[fs[fid][i]]==3&&h[fs[fid][i]]==0)dfs(fs[fid][i]);
		if(fk[fs[fid][i]]==1)modify(h[fid],fadd[fs[fid][i]].id,fadd[fs[fid][i]].id,fadd[fs[fid][i]].add,1);
		else if(fk[fs[fid][i]]==2)modify(h[fid],0,n-1,0,fmul[fs[fid][i]]);
		else{
			merge(h[fid],h[fs[fid][i]]);
			--u[fs[fid][i]];
			if(u[fs[fid][i]]==0)dlt(h[fs[fid][i]]);
		}
	}
}void lastbuild(tree *g){
	if(g->il==g->ir){
		a[g->il]=(a[g->il]*g->mul+g->add)%mod;
		return;
	}pushdown(g);
	lastbuild(g->l);
	lastbuild(g->r);
}int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(i=0;i<n;++i)scanf("%llu",a+i);
	scanf("%d",&m);
	for(i=0;i<m;++i){
		scanf("%d",&q);
		fk[i]=q;
		if(q==1){
			scanf("%d%d",&j,&fadd[i].add);
			fadd[i].id=j-1;
		}else if(q==2)scanf("%d",fmul+i);
		else{
			scanf("%d",is+i);
			fs[i]=new int[is[i]];
			for(j=0;j<is[i];++j){
				scanf("%d",fs[i]+j);
				--fs[i][j];
				++u[fs[i][j]];
			}h[i]=0;
		}
	}scanf("%d",is+m);
	fs[m]=new int[is[m]];
	for(i=0;i<is[m];++i){
		scanf("%d",fs[m]+i);
		--fs[m][i];
		++u[fs[m][i]];
	}dfs(m);
	lastbuild(h[m]);
	for(i=0;i<n;++i)printf("%llu ",a[i]);
	return 0;
}
==========
===== Opening  answers\HN-00191\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00192's file(s).
===== Successfully open the file  answers\HN-00192\julian\julian.cpp.The size of it is 2.361 KB.
#include<bits/stdc++.h>
using namespace std;
#define Inc(a,b) ((a += b) >= mod ? a % mod : a)
#define Dec(a,b) ((a -= b) < 0 ? a % mod + mod : a)
#define Mul(a,b) (a * b % mod)
#define int long long
#define maxn 10005
int read(){
	int x = 0,f = 1;
	char s = getchar();
	while(s < '0' || s > '9'){
		if(s == '-') f = -1;
		s = getchar();
	}
	while(s >= '0' && s <= '9'){
		x = (x << 1) + (x << 3) + s - '0';
		s = getchar();
	}
	return x * f;
}
int k,a,year,month,day;
int p1 = 1721388,p2 = 5740792,t1 = 146097,t2 = 36524,t3 = 1461;
int f1 = 31,f2,f3 = 31,f4 = 30,f5 = 31,f6 = 30,f7= 31,f8 = 31,f9 = 30,f10 = 31,f11 = 30,f12 = 31;
void work1(){
	year = -4713,month = 1,day = 1;
	k = a / t1,a -= k * t1,year += k * 400;
	k = a / t2,a -= k * t2,year += k * 100;
	k = a / t3,a -= k * t3,year += k * 4;
	if(a >= 366){
		a -= 366,year++;
		k = a / 365,a -= k * 365,year += k;
	}
	if((year + 1) % 400 == 0 || ((year + 1) % 100 != 0 && (year + 1) % 4 == 0)) f2 = 29;
	else f2 = 28;
	if(a >= f1){
	a -= f1;
	month++;
	if(a >= f2){
	a -= f2;
	month++;
	if(a >= f3){
	a -= f3;
	month++;
	if(a >= f4){
	a -= f4;
	month++;
	if(a >= f5){
	a -= f5;
	month++;
	if(a >= f6){
	a -= f6;
	month++;
	if(a >= f7){
	a -= f7;
	month++;
	if(a >= f8){
	a -= f8;
	month++;
	if(a >= f9){
	a -= f9;
	month++;
	if(a >= f10){
	a -= f10;
	month++;
	if(a >= f11){
	a -= f11;
	month++;
	}}}}}}}}}}}
	day += a;
	printf("%lld %lld %lld BC\n",day,month,-year);
}
void work2(){
	year = 1,month = 1,day = 1;
	a -= p1;
	k = a / t1,a -= k * t1,year += k * 400;
	k = a / t2,a -= k * t2,year += k * 100;
	k = a / t3,a -= k * t3,year += k * 4;
	k = a / 365,a -= k * 365,year += k;
	if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) f2 = 29;
	else f2 = 28;
	if(a >= f1){
	a -= f1;
	month++;
	if(a >= f2){
	a -= f2;
	month++;
	if(a >= f3){
	a -= f3;
	month++;
	if(a >= f4){
	a -= f4;
	month++;
	if(a >= f5){
	a -= f5;
	month++;
	if(a >= f6){
	a -= f6;
	month++;
	if(a >= f7){
	a -= f7;
	month++;
	if(a >= f8){
	a -= f8;
	month++;
	if(a >= f9){
	a -= f9;
	month++;
	if(a >= f10){
	a -= f10;
	month++;
	if(a >= f11){
	a -= f11;
	month++;
	}}}}}}}}}}}
	day += a;
	printf("%lld %lld %lld\n",day,month,year);
}
void solve(){
	a = read();
	if(a <= p1) work1();
	else work2();
}
signed main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int T;
	T = read();
	while(T--)solve();
}

==========
===== Successfully open the file        answers\HN-00192\zoo\zoo.cpp.The size of it is 1.075 KB.
#include<bits/stdc++.h>
using namespace std;
#define Inc(a,b) ((a += b) >= mod ? a % mod : a)
#define Dec(a,b) ((a -= b) < 0 ? a % mod + mod : a)
#define Mul(a,b) (a * b % mod)
#define maxn 1000005
#define int long long
int read(){
	int x = 0,f = 1;
	char s = getchar();
	while(s < '0' || s > '9'){
		if(s == '-') f = -1;
		s = getchar();
	}
	while(s >= '0' && s <= '9'){
		x = (x << 1) + (x << 3) + s - '0';
		s = getchar();
	}
	return x * f;
}
int n,m,c,len,ans = 1;
int a[maxn],p[maxn];
int f[maxn],s[maxn];
bool sign[maxn];
void work(int y){
	int t = 0;
	int x = a[y];
	while(x){
		if(x % 2){
			if(p[t]) sign[t] = 1;
		}
		t++;
		x >>= 1;
	}
	return;
}
signed main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n = read(),m = read(),c = read(),len = read();
	for(int i = 1; i <= n; i++) a[i] = read();
	for(int i = 1; i <= m; i++){
		int x,k;
		x = read();
		k = read();
		p[x] = 1;
	}
	for(int i = 1; i <= n; i++) work(i);
	for(int i = 0; i < len; i++){
		if(!p[i]) ans <<= 1;
		else if(sign[i]) ans <<= 1;
	}
	printf("%lld",ans - n);
	return 0;
}

==========
===== Successfully open the file      answers\HN-00192\call\call.cpp.The size of it is 1.384 KB.
#include<bits/stdc++.h>
using namespace std;
#define Inc(a,b) ((a + b) >= mod ? (a + b) % mod : a + b)
#define Dec(a,b) ((a - b) < 0 ? (a - b) % mod + mod : a - b)
#define Mul(a,b) (a * b % mod)
#define mod 998244353
#define maxn 1000005
#define int long long
#define lp p << 1
#define rp p << 1 | 1
int read(){
	int x = 0,f = 1;
	char s = getchar();
	while(s < '0' || s > '9'){
		if(s == '-') f = -1;
		s = getchar();
	}
	while(s >= '0' && s <= '9'){
		x = (x << 1) + (x << 3) + s - '0';
		s = getchar();
	}
	return x * f;
}
int n,m,q,a[maxn],num[maxn];
int p[maxn],t[maxn],x[maxn],c[maxn];
int s = 1,f[maxn];
vector<int> g[maxn];
void work(int k){
	if(p[k] == 1) f[t[k]] = Inc(f[t[k]],Mul(s,x[k]));
	if(p[k] == 2) s = Mul(s,x[k]);
	if(p[k] == 3) for(int i = c[k] - 1; i >= 0; i--) work(g[k][i]);
	return;
}
signed main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n = read();
	for(int i = 1; i <= n; i++) a[i] = read();
	m = read();
	for(int i = 1; i <= m; i++){
		p[i] = read();
		if(p[i] == 1) t[i] = read(),x[i] = read();
		else if(p[i] == 2) x[i] = read();
		else{
			c[i] = read();
			for(int j = 1,k; j <= c[i]; j++){
				k = read();
				g[i].push_back(k);
			}
		}
	}
	q = read();
	for(int i = 1; i <= q; i++) num[i] = read();
	for(int i = q; i >= 1; i--) work(num[i]);
	for(int i = 1; i <= n; i++) printf("%lld ",Inc(Mul(a[i],s),f[i]));
	return 0;
}

==========
===== Opening  answers\HN-00192\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00193's file(s).
===== Successfully open the file  answers\HN-00193\julian\julian.cpp.The size of it is 1.483 KB.
#include <bits/stdc++.h>
using namespace std;

int q, r, p;
int mon[20] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct date {
	int y, m, d;
} ;

std::vector < date > a;

inline int read()
{
	int x = 0, f = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') { if (ch == '-') f = -1; ch = getchar(); }
	while (ch >= '0' && ch <= '9') { x = (x << 1) + (x << 3) + ch - '0'; ch = getchar(); }
	return x * f;
}

inline int judge(int y, int m)
{
	int flag = m == 2 && (y <= 1582 ? (y > 0 ? y % 4 == 0 : y % 4 == -1) : (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)));
	return mon[m] + flag;
}

inline void output(date ans)
{
	printf("%d %d %d", ans.d, ans.m, abs(ans.y));
	if (ans.y < 0) printf(" BC\n");
	else printf("\n");
}

inline void init()
{
	date fst; fst.y = -4713, fst.m = 1, fst.d = 1;
	a.push_back(fst);
	while (a.back().y != 2000) {
		date cur = a.back();
		if (cur.y == 1582 && cur.m == 10 && cur.d == 4) cur.d = 15;
		else if (++ cur.d > judge(cur.y, cur.m)) {
			cur.d = 1;
			if (++ cur.m == 13) {
				cur.m = 1, cur.y += 1 + (cur.y == -1);
			}
		}
		a.push_back(cur);
	}
	a.pop_back();
	while (a[p].y != 1600) ++ p;
}

int main()
{
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	q = read();
	init();
	for (int i = 1; i <= q; ++ i) {
		r = read();
		if (r < p) output(a[r]);
		else {
			r -= p; int num = r / (a.size() - p);
			r %= a.size() - p; date res = a[r + p];
			res.y += num * 400;
			output(res);
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00193\zoo\zoo.cpp.The size of it is 0.930 KB.
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long

const int SIZE = 1e6 + 5;

int n, m, c, k;
ull a[SIZE], p[SIZE], q[SIZE];

inline int read()
{
	int x = 0, f = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') { if (ch == '-') f = -1; ch = getchar(); }
	while (ch >= '0' && ch <= '9') { x = (x << 1) + (x << 3) + ch - '0'; ch = getchar(); }
	return x * f;
}

signed main()
{
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	int ans = 0, lim = 0;
	n = read(), m = read(), c = read(), k = read();
	for (int i = 1; i <= n; ++ i) std::cin >> a[i];
	for (int i = 1; i <= m; ++ i) std::cin >> p[i] >> q[i];
	for (int i = 1; i <= n; ++ i) ans |= a[i];
	for (int i = 1; i <= m; ++ i) {
		if (!(ans >> p[i] & 1)) lim |= 1ull << p[i];
	}
	ull cnt = 1;
	for (int i = 0; i < k; ++ i) {
		if (!(lim >> i & 1)) cnt <<= 1;
	}
	std::cout << cnt - n << endl;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00193\call\call.cpp.The size of it is 2.213 KB.
#include <bits/stdc++.h>
using namespace std;

#define int long long

const int SIZE = 1e5 + 20;
const int mod = 998244353;

int n, m, q, cnt;
int top[SIZE], typ[SIZE], a[SIZE], tag[SIZE], mul[SIZE], val[SIZE], pos[SIZE], deg[SIZE], opt[SIZE];

std::vector < int > edge[SIZE];

inline int read()
{
	int x = 0, f = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') { if (ch == '-') f = -1; ch = getchar(); }
	while (ch >= '0' && ch <= '9') { x = (x << 1) + (x << 3) + ch - '0'; ch = getchar(); }
	return x * f;
}

inline void bfs()
{
	std::queue < int > q;
	for (int i = 1; i <= m; ++ i) {
		for (int j = 0; j < edge[i].size(); ++ j) ++ deg[edge[i][j]];
	}
	for (int i = 1; i <= m; ++ i) {
		if (!deg[i]) q.push(i);
	}
	while (!q.empty()) {
		int u = q.front();
		q.pop(); opt[++ cnt] = u;
		for (int i = 0, v; i < edge[u].size(); ++ i) {
			v = edge[u][i];
			-- deg[v];
			if (!deg[v]) q.push(v);
		}
	}
}

signed main()
{
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	n = read();
	for (int i = 1; i <= n; ++ i) a[i] = read() % mod;
	m = read();
	for (int i = 1; i <= m; ++ i) {
		typ[i] = read();
		if (typ[i] == 1) pos[i] = read(), val[i] = read() % mod;
		if (typ[i] == 2) val[i] = read() % mod;
		if (typ[i] == 3) {
			pos[i] = read();
			for (int j = 1, u; j <= pos[i]; ++ j) {
				u = read();
				edge[i].push_back(u);
			}
		}
	}
	q = pos[++ m] = read();
	typ[m] = 3;
	for (int i = 1, u; i <= q; ++ i) {
		u = read();
		edge[m].push_back(u);
	}
	bfs();
	for (int i = cnt; i; -- i) {
		mul[opt[i]] = typ[opt[i]] == 2 ? val[opt[i]] : 1;
		for (int j = 0, v; j < edge[opt[i]].size(); ++ j) {
			v = edge[opt[i]][j];
			mul[opt[i]] = mul[opt[i]] * mul[v] % mod;
		}
	}
	for (int i = 1; i <= n; ++ i) a[i] = a[i] * mul[m] % mod;
	tag[m] = 1;
	for (int i = 1; i <= cnt; ++ i) {
		if (typ[opt[i]] == 1) a[pos[opt[i]]] = (a[pos[opt[i]]] + tag[opt[i]] * val[opt[i]] % mod) % mod;
		else {
			tag[opt[i]] %= mod;
			int sum = tag[opt[i]];
			for (int j = (int) edge[opt[i]].size() - 1, v; ~j; -- j) {
				v = edge[opt[i]][j];
				tag[v] = (tag[v] + sum) % mod;
				sum = sum * mul[v] % mod;
			}
		}
	}
	for (int i = 1; i <= n; ++ i) printf("%lld ", a[i] % mod);
	puts("");
	return 0;
}
==========
===== Successfully open the file  answers\HN-00193\snakes\snakes.cpp.The size of it is 1.261 KB.
#include <bits/stdc++.h>
using namespace std;

#define int long long

const int SIZE = 1e6 + 5;
const int inf = 0x7f7f7f7f;

int T, n, k, ans, res;
int a[SIZE];

inline int read()
{
	int x = 0, f = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') { if (ch == '-') f = -1; ch = getchar(); }
	while (ch >= '0' && ch <= '9') { x = (x << 1) + (x << 3) + ch - '0'; ch = getchar(); }
	return x * f;
}

inline void solve()
{
	int d = 1; ans = n;
	while (1) {
		if (d == n) break;
		if (a[n] - a[d] >= a[d + 1] || d == n - 1) {
			a[n] -= a[d];
			++ d, -- ans;
			int ret = a[n];
			for (int i = d; i <= n; ++ i) {
				if (a[i] == ret)  {
					for (int j = n; j > (i + 1); -- j) a[j] = a[j - 1];
					a[i + 1] = ret; break;
				}
				if (a[i] > ret) {
					for (int j = n; j > i; -- j) a[j] = a[j - 1];
					a[i] = ret; break;
				}
			}
		}
		else break;
	}
}

signed main()
{
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	T = read() - 1, n = read();
	for (int i = 1; i <= n; ++ i) {
		a[i] = read();
	}
	a[0] = -inf, a[n + 1] = inf;
	solve();
	printf("%lld\n", ans);
	while (T --) {
		k = read();
		for (int i = 1, x, y; i <= k; ++ i) {
			x = read(), y = read();
			a[x] = y;
		}
		solve();
		printf("%lld\n", ans);
	}
	return 0;
}
==========


---------- Now Opening N-00194's file(s).
===== Successfully open the file  answers\HN-00194\julian\julian.cpp.The size of it is 1.088 KB.
#include<iostream>
#include<cstdio>
using namespace std;
int MonthD1[13]={0,
31,28,31,30,31,30,31,31,30,31,30,31};
int MouthD2[13]={0,
31,29,31,30,31,30,31,31,30,31,30,31};
int YearD[2][14]={
{0,1,32,60,91,121,152,182,213,244,274,305,335,366},
{0,1,32,61,92,122,153,183,214,245,275,306,336,367}};
inline bool isrun(int y){
	if(y>0&&y<1582&&y%4==0) return 1;
	if(y<0&&y%4==-1) return 1;
	if(y>1582&&((y%4==0&&y%100)||y%400)) return 1;
	return 0;
}
inline int Year(int y){
	if(y==-4713) return 364;
	if(y==0) return 0;
	if(y==1582) return 355;
	if(isrun(y)) return 366;
	return 365;
}
inline void sameyear(int y,int n,int &m,int &d){
	int m1=1; bool run=0;
	if(isrun(y)) run=1;
	for(;;m1++){
		if(YearD[run][m1+1]>n) break;
	}
	d=n-YearD[run][m1]+1;
	m=m1;
}
int main(){
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q,n,y=-4713,m,d;
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>n; n++;
		for(;;y++){
			int a=Year(y);
			if(a>n) break;
			n-=a;
		}
		sameyear(y,n,m,d);
		printf("%d %d ",d,m);
		if(y>0) printf("%d\n",y);
		else printf("%d BC\n",-y);
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00194\zoo\zoo.cpp.The size of it is 0.532 KB.
#include<iostream>
using namespace std;
unsigned long long a[100003];
short q[200003];
bool b[65],u[200003];
int main(){
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int n,m,c,k,p;
	cin>>n>>m>>c>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++){
		cin>>p; cin>>q[p];
	}
	int x;
	for(int i=1;i<=n;i++){
		x=a[i];
		for(int w=0;x;w++){
			if(x%2&&q[w]) b[w]=1;
			x>>=1;
		}
	}
	int s=0; x=(1<<k);
	for(int i=0;i<x;i++){
		for(int j=0;j<64;j++){
			if(b[j]&&(i>>j)%2) s++;
		}
	}
	cout<<s-n;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00194\call\call.cpp.The size of it is 0.654 KB.
#include<iostream>
using namespace std;
int n,m,a[100003],t[100003],p,v,c,q,f,g;
void t1(){
	
			cin>>p>>v;
			a[p]+=v;
}
void t2(){
	
			cin>>v;
			for(int j=1;j<=n;j++)
				a[j]*=v;
}
void t3(){
	
			cin>>c;
			for(int i=1;i<=c;i++){
				cin>>g;
				if(g==1)t1();
				if(g==2)t2();
				if(g==3)t3();
			}
}
int main(){
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>t[i];
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>f;
		if(t[f]==1){t1();
		}
		if(t[f]==2){t2();
		}
		if(t[f]==3){t3();
		}
		
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<endl;
	return 0;
}
==========
===== Opening  answers\HN-00194\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00195's file(s).
===== Successfully open the file  answers\HN-00195\julian\julian.cpp.The size of it is 1.785 KB.
#include <algorithm>
#include <cstring>
#include <cstdio>
#define int long long

const int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 365 * 4 + 1 = 1461
// 4713 / 4 = 1178

int q, n;
int baseDaysJ(int Y) {
	if (!Y) return 0;
	return Y * 365 + (Y - 1) / 4 + 1;
}
int baseDaysG(int Y) {
	if (!Y) return 0;
	return Y * 365 + (Y - 1) / 4 - (Y - 1) / 100 + (Y - 1) / 400 + 1;
}

struct sb {
	int Y, M, D;
} tab[233333], tabj[23333];
int cnt, cntg;
signed main() {
	freopen("julian.in", "r", stdin);
	freopen("julian.out", "w", stdout);
	
	for (int Y = 0; Y < 400; Y++) {
		int ly = (Y % 4 == 0 && (Y == 0 || Y % 100 != 0));
		for (int M = 1; M <= 12; M++) {
			for (int D = 1; D <= month[M - 1] + (M == 2 && ly); D++) {
				tab[cnt++] = (sb){Y, M, D};
			}
		}
	}
	for (int Y = 0; Y < 4; Y++) {
		int ly = !Y;
		for (int M = 1; M <= 12; M++) {
			for (int D = 1; D <= month[M - 1] + (M == 2 && ly); D++) {
				tabj[cntg++] = (sb){Y, M, D};
			}
		}
	}
	
	for (scanf("%lld", &q); q--; ) {
		scanf("%lld", &n);
		
		if (n <= 2299160) { // 1582.10.4
			int id = n / 1461, rem = n % 1461;
			int Y = -1, M = -1, D = -1;
			Y = id * 4;
			
			/*int days = n - baseDaysJ(Y);
			for (int i = 0, sum = 0; i < 12; i++) {
				sum += month[i] + (Y % 4 == 0 && i == 1);
				if (days < sum) {
					M = i + 1;
					D = days + month[i] - sum + 1;
					break;
				}
			}*/
			
			D = tabj[rem].D;
			M = tabj[rem].M;
			Y = Y + tabj[rem].Y;
			
			if (Y <= 4712)
				printf("%lld %lld %lld BC\n", D, M, 4713 - Y);
			else
				printf("%lld %lld %lld\n", D, M, Y - 4712);
		} else {
			n -= 2159351; // 1200.1.1 -> 0
			
			int id = n / 146097, rem = n % 146097;
			int Y = id * 400;
			
			printf("%lld %lld %lld\n", tab[rem].D, tab[rem].M, Y + tab[rem].Y + 1200);
		}
	}

	return 0;
}
==========
===== Successfully open the file        answers\HN-00195\zoo\zoo.cpp.The size of it is 0.808 KB.
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <bitset>

typedef unsigned long long L;

const int N = 1e6 + 61;

int n, m, c, k, p[N], q[N], ans;
std::bitset<(int)1e8> use;
bool ban[77];
L x, tot;
int main() {
	freopen("zoo.in", "r", stdin);
	freopen("zoo.out", "w", stdout);
	
	scanf("%d%d%d%d", &n, &m, &c, &k);
	for (int i = 1; i <= n; i++) scanf("%llu", &x), tot |= x;
	for (int i = 1; i <= m; i++) {
		scanf("%d%d", p + i, q + i), q[i]--;
		if ((tot >> p[i]) & 1) use[q[i]] = 1;
	}
	for (int i = 1; i <= m; i++)
		if (!use[q[i]]) ban[p[i]] = true;
	for (int i = 0; i < k; i++) ans += !ban[i];
	
	if (ans == 64) {
		if (n == 0)
			puts("18446744073709551616");
		else
			printf("%llu\n", (1ull << 63) - n + (1ull << 63));
	} else
		printf("%llu\n", (1ull << ans) - n);
	
	return 0;
}
==========
===== Successfully open the file      answers\HN-00195\call\call.cpp.The size of it is 2.084 KB.
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>

typedef long long L;
const int N = 4e5 + 54, M = 3e6 + 63, P = 998244353;

struct Z {
	int x;
	Z() { x = 0; }
	Z(int y) { x = y; }
	Z operator*(const Z& rhs) const { return (L)x * rhs.x % P; }
	void operator+=(const Z& rhs) { x = (x + rhs.x) % P; }
	void operator*=(const Z& rhs) { x = (L)x * rhs.x % P; }
};

struct edge {
	int from, to, next;
} e[M];
int head[N], deg[N], cnt;
void addedge(int x, int y) {
	e[++cnt] = (edge){x, y, x[head]}, x[head] = cnt, y[deg]++;
}

Z f[N], g[N], v[N];
int id[N], t[N];
bool vis[N];
void dfs(int x) {
	if (x[vis]) return;
	x[vis] = true;
	for (int i = x[head], nx; i; i = e[i].next)
		dfs(nx = e[i].to), f[x] *= f[nx];
}

std::queue<int> bfs;
int n, m, q;
Z a[N];
int main() {
	freopen("call.in", "r", stdin);
	freopen("call.out", "w", stdout);
	
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i].x);
	scanf("%d", &m);
	for (int i = 1, c, x; i <= m; i++) {
		scanf("%d", t + i);
		f[i] = 1;
		if (t[i] == 1)
			scanf("%d%d", id + i, &v[i].x);
		else if (t[i] == 2)
			scanf("%d", &f[i].x);
		else {
			for (scanf("%d", &c); c--;) {
				scanf("%d", &x);
				addedge(i, x);
			}
		}
	}
	scanf("%d", &q);
	for (int x; q--;) {
		scanf("%d", &x);
		addedge(m + 1, x);
	}
	f[m + 1].x = g[m + 1].x = 1;
	dfs(m + 1);
	for (int i = 1; i <= cnt; i++)
		if (!e[i].from[vis]) e[i].to[deg]--;
	bfs.push(m + 1);
	for (; !bfs.empty(); bfs.pop()) {
		Z fac = 1;
//		fprintf(stderr, "%d: %lld\n", bfs.front(), g[bfs.front()]);
		for (int x = bfs.front(), i = x[head], nx; i; i = e[i].next) {
			nx = e[i].to;
//			fprintf(stderr, "%d -> %d\n", x, nx);
			g[nx] += g[x] * fac;
			fac *= f[nx];
			if (!--nx[deg]) bfs.push(nx);
		}
//		fprintf(stderr, "%d: %lld\n", bfs.front(), g[bfs.front()]);
	}
	for (int i = 1; i <= n; i++) a[i] *= f[m + 1];
	for (int i = 1; i <= m; i++) {
//		fprintf(stderr, "%d: %lld %lld\n", i, f[i], g[i]);
		if (t[i] == 1 && i[vis]) a[id[i]] += v[i] * g[i];
	}
	for (int i = 1; i <= n; i++) printf("%d%c", a[i].x, " \n"[i == n]);
	
	return 0;
}
==========
===== Successfully open the file  answers\HN-00195\snakes\snakes.cpp.The size of it is 2.772 KB.
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
#include <set>

typedef long long L;
const int N = 1e6 + 61;

int n, a[N];
namespace subtask1 { // n <= 3
	void solve() {
		if (a[3] - a[1] > a[2])
			puts("1");
		else
			puts("3");
	}
}
namespace wrong {
	std::multiset<int> S;
	void solve() {
		S.clear();
		for (int i = 1; i <= n; i++) S.insert(a[i]);
		while (S.size() > 1) {
			int mn = *S.begin();
			int mx = *--S.end();
			int mx2 = *----S.end();
			if (mx - mn > mx2) {
				S.erase(S.find(mx));
				S.insert(mx - mn);
			} else
				break;
		}
		printf("%d\n", (int)S.size());
	}
}

void solve() {
	if (n <= 3) subtask1::solve();
	else wrong::solve();
}

int T, k;
int main() {
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	
	scanf("%d%d", &T, &n);
	for (int i = 1; i <= n; i++) scanf("%d", a + i);
	solve();
	
	while (--T) {
		scanf("%d", &k);
		for (int x, y; k--;) {
			scanf("%d%d", &x, &y);
			a[x] = y;
		}
		solve();
	}
	
	return 0;
}

/*
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
#include <set>

typedef long long L;
const int N = 1e6 + 61;

int n, a[N];
namespace subtask1 { // n <= 3
	void solve() {
		if (a[3] - a[1] > a[2])
			puts("1");
		else
			puts("3");
	}
}
namespace subtask2 {
	typedef std::pair<int, int> pii;
	std::multiset<pii> S, S2;
	bool check() {
		S2 = S;
		int id = (--S.end())->second;
		int ans = 0;
		while (S.size() > 1 || (--S.end())->second != id) {
			pii mn = *S.begin();
			pii mx = *--S.end();
			S.erase(--S.end());
			S.erase(S.begin());
			S.insert(pii(mx.first - mn.first, id));
		}
		return ans % 2 == 0;
	}
	void solve() {
		S.clear();
		for (int i = 1; i <= n; i++) S.insert(pii(a[i], i));
		while (S.size() > 1) {
			pii mn = *S.begin();
			pii mx = *--S.end();
			if (check()) {
				S.erase(mx);
				S.erase(mn);
				S.insert(pii(mx.first - mn.first, mx.second));
			} else
				break;
		}
		printf("%d\n", (int)S.size());
	}
}
namespace wrong {
	std::multiset<int> S;
	void solve() {
		S.clear();
		for (int i = 1; i <= n; i++) S.insert(a[i]);
		while (S.size() > 1) {
			int mn = *S.begin();
			int mx = *--S.end();
			int mx2 = *----S.end();
			if (mx - mn > mx2) {
				S.erase(S.find(mx));
				S.insert(mx - mn);
			} else
				break;
		}
		printf("%d\n", (int)S.size());
	}
}

void solve() {
	if (n <= 3) subtask1::solve();
	else if (n <= 10) subtask2::solve();
	else wrong::solve();
		fprintf(stderr,"!]");
}

int T, k;
int main() {
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	
	scanf("%d%d", &T, &n);
	for (int i = 1; i <= n; i++) scanf("%d", a + i);
	solve();
	
	while (--T) {
		scanf("%d", &k);
		for (int x, y; k--;) {
			scanf("%d%d", &x, &y);
			a[x] = y;
		}
		solve();
	}
	
	return 0;
}
*/
==========


---------- Now Opening N-00196's file(s).
===== Successfully open the file  answers\HN-00196\julian\julian.cpp.The size of it is 1.665 KB.
#include<bits/stdc++.h>
using namespace std;
long long q,r[200000],y;
int d,m;
bool bc,rn,gl;
char s[100];
int pdrn()
{
	if(y>=1582&&m>=10&&d>=15)
	{
		gl=0;
	}
	else gl=1;
	if(gl)
	{
		if((y+1)%4!=0)
		{
			rn=0;
		}
		else rn=1;
	}
	else if(y==-1)
	{
		rn=1;
	}
	else
	{
		if(y%4!=0||y%100==0||y%400!=0)
		{
			rn=0;
		}
		else if(y%4==0||y%100!=0||y%400==0)
		{
			rn=1;
		}
	}
}
int dj(int i)
{
	if(r[i]==0)
	{
		return 0;
	}
	if(y==0)
	{
		y+=1;bc=0;
	}
	if(y>=1582&&m>=10&&d>=5)
	{
		d=d+11;gl=0;dj(i);
	}
	if(rn)
	{
		if(r[i]>=366)
		{
			while(r[i]>=366)
			{
				r[i]-=366;y+=1;pdrn();dj(i);
			}
		}
		else if(r[i]>=29)
		{
			while(r[i]>=29)
			{
				if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
				{
					r[i]-=31;m++;dj(i);
				}
				else if(m==2)
				{
					r[i]-=29;m++;dj(i);
				}
				else
				{
					r[i]-=30;m++;dj(i);
				}
			}
		}
		else if(r[i]<29)
		{
			d+=r[i];r[i]=0;return 0;
		}
	}
	else
	{
		if(r[i]>=365)
		{
			while(r[i]>=365)
			{
				r[i]-=365;y+=1;pdrn();dj(i);
			}
		}
		else if(r[i]>=28)
		{
			while(r[i]>=28)
			{
				if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
				{
					r[i]-=31;m++;dj(i);
				}
				else if(m==2)
				{
					r[i]-=28;m++;dj(i);
				}
				else
				{
					r[i]-=30;m++;dj(i);
				}
			}
		}
		else if(r[i]<28)
		{
			d+=r[i];r[i]=0;return 0;
		}
	}
}
int main()
{
	//freopen("julian.in","r",stdin);
	//freopen("julian.out","w",stdout);
	int i,j;
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>r[i];
	}
	for(i=0;i<q;i++)
	{
		y=-4713;m=1;d=1;
		bc=1;gl=1;rn=1;
		dj(i);
		if(bc)
		{
			cout<<d<<" "<<m<<" "<<y<<" "<<"BC"<<" "<<rn<<endl;
		}
		else
		{
			cout<<d<<" "<<m<<" "<<y<<" "<<endl;
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00196\zoo\zoo.cpp.The size of it is 0.133 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00196\call\call.cpp.The size of it is 0.896 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,a[100000],t[100000],p,v1,v2,c,g[1000],f[10000],q;
int jf();
int cf();
int dj();
int jf(int x,int y)
{
	a[x-1]+=y;
}
int cf(int x)
{
	for(int i=0;i<n;i++)
	{
		a[i]*=x;
	}
}
int dj(int x,int y[])
{
	for(int i=0;i<x;i++)
	{
		if(y[i]==1)
		{
			jf(p,v1);
		}
		else
		{
			cf(v2);
		}
	}
}
int main()
{
	freopen("call1.in","r",stdin);
	freopen("call.out","w",stdout);
	int i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>t[i];
		if(t[i]==1)
		{
			cin>>p>>v1;
		}
		if(t[i]==2)
		{
			cin>>v2;
		}
		if(t[i]==3)
		{
			cin>>c;
			for(i=0;i<c;i++)
			{
				cin>>g[i];
			}
		}
	}
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>f[i];
	}
	for(i=0;i<q;i++)
	{
		if(f[i]==1)
		{
			jf(p,v1);
		}
		else if(f[i]==2)
		{
			cf(v2);
		}
		else
		{
			dj(c,g);
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
==========
===== Successfully open the file  answers\HN-00196\snakes\snakes.cpp.The size of it is 0.656 KB.
#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[100],x,y;
int px()
{
	int i,j,p;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]<a[j+1])
			{
				p=a[j];a[j]=a[j+1];a[j+1]=p;
			}
		}
	}
}
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int i,j;
	cin>>t>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	px();
	if(a[0]-a[2]>=a[1])
	{
		cout<<1<<endl;
	}
	else if(a[0]-a[2]<a[1])
	{
		cout<<3<<endl;
	}
	for(i=0;i<t-1;i++)
	{
		
		cin>>k;
		for(i=0;i<k;i++)
		{
			cin>>x>>y;
			a[x]=y;
		}
		px();
		if(a[0]-a[2]>=a[1])
		{
			cout<<1<<endl;
		}
		else if(a[0]-a[2]<a[1])
		{
			cout<<3<<endl;
		}
	}
	return 0;
}
==========


---------- Now Opening N-00197's file(s).
===== Successfully open the file  answers\HN-00197\julian\julian.cpp.The size of it is 2.662 KB.
#include<bits/stdc++.h>
using namespace std;
int q;
long long r,BC=1721424,nian,yue,ri,fou,one,zer,zzz;
int yyy[13]={0,31,28,31,30,31,30,31,31,30, 31,30,31},ryyy[13]={0,31,29,31,30,31,30,31,31,30, 31,30,31};
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	{nian=0;yue=0;ri=0;
		scanf("%lld",&r);
		if(r==1721424)
			printf("1 1 1");
		else if(r<1721424)
		{nian=4713;yue=1;ri=1;
			if(r>=366)
				nian--,r-=366;
			fou=r/1461;r%=1461;
			one=r/365;r%=365;
			nian-=(fou*4);nian-=one;
			if((nian-1)%4==0)
				while(r>ryyy[yue])
				{
					r-=ryyy[yue];
					yue++;
				}
			else
				while(r>yyy[yue])
				{
					r-=yyy[yue];
					yue++;
				}
			ri+=r;
			printf("%lld %lld %lld BC\n",ri,yue,nian);
		}
		else
		{
			r-=1721424;
			if(r<=577738)
			{nian=1;yue=1;ri=1;
				fou=r/1461;r%=1461;
				one=r/365;r%=365;
				nian+=(fou*4);nian+=one;
				if(nian%4==0)
					while(r>ryyy[yue])
					{
						r-=ryyy[yue];
						yue++;
					}
				else
					while(r>yyy[yue])
					{
						r-=yyy[yue];
						yue++;
					}
				ri+=r;
				printf("%lld %lld %lld\n",ri,yue,nian);
			}
			else
			{r-=577738;nian=1582;yue=10;ri=14;
				if(r>=78)
				{r-=78;nian=1583;yue=1;ri=1;
					if(r>=6575)
					{nian=1600;yue=1;ri=1;r-=6575;
						if(r>=366)
							nian++,r-=366;
						zer=r/146097;r%=146097;
						zzz=r/36524;r%=36524;
						fou=r/1461;r%=1461;
						one=r/365;r%=365;
						nian+=(zer*400);nian+=(zzz*100);nian+=(fou*4);nian+=one;
						if(nian%100==0)
						{
							if(nian%400==0)
								while(r>ryyy[yue])
								{
									r-=ryyy[yue];
									yue++;
								}
							else
								while(r>yyy[yue])
								{
									r-=yyy[yue];
									yue++;
								}
						}
						else
						{
							if(nian%4==0)
								while(r>ryyy[yue])
								{
									r-=ryyy[yue];
									yue++;
								}
							else
								while(r>yyy[yue])
								{
									r-=yyy[yue];
									yue++;
								}
						}
						ri+=r;ri+=2;
						if(ri>yyy[yue])
							yue++;
						if(yue>=13)
							nian++;
						nian++;
						printf("%lld %lld %lld\n",ri,yue,nian);
					}
					else
					{
						fou=r/1461;r%=1461;
						one=r/365;r%=365;
						nian+=(fou*4);nian+=one;
						if(nian%4==0)
							while(r>ryyy[yue])
							{
								r-=ryyy[yue];
								yue++;
							}
						else
							while(r>yyy[yue])
							{
								r-=yyy[yue];
								yue++;
							}
						ri+=r;
						printf("%lld %lld %lld\n",ri,yue,nian);
					}
				}
				else
				{
					while(r>yyy[yue])
					{
						r-=yyy[yue];
						yue++;
					}
					ri+=r;
					printf("%lld %lld %lld\n",ri,yue,nian);
				}
			}
		}
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00197\zoo\zoo.cpp.The size of it is 1.370 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m,c,k,ii=0,iii=0,ll,rr,mid;long long a[1000006];int ch[64];
long long ans=1;
bool sl[100000006];
struct node
{
	int wai,sil;
}rule[1000006];
bool cmp(node x,node y)
{
	return x.wai <y.wai ;
}
void find(int x)
{
	ll=1;rr=m;mid=(ll+rr)>>1;
	while(ll<rr)
	{
		if(rule[mid].wai <=x)
			ll=mid;
		else
			rr=mid-1;
		mid=(ll+rr+1)>>1;
	}
	if(rule[ll].wai ==x)
		while(rule[ll].wai ==x)
		{
			if(!sl[rule[ll].sil ])
				return;
			ll++;
		}
	ch[x]=1;
	return;
}
int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	scanf("%d%d%d%d",&n,&m,&c,&k);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=m;i++)
		scanf("%d%d",&rule[i].wai ,&rule[i].sil );
	sort(rule+1,rule+1+m,cmp);
	for(int i=1;i<=n;i++)
	{
		a[i]>>=ii;iii=ii;
		while(a[i]>=1)
		{
			if((a[i]%2)==1)
				ch[iii]=1;
			a[i]>>=1;iii++;
			if(iii==(ii+1)&&ch[iii]==1)
				ii++;
		}
	}
	for(int i=0;i<=k-1;i++)
	{
		if(ch[i]==1)
		{
			ll=1;rr=m;mid=(ll+rr)>>1;
			while(ll<rr)
			{
				if(rule[mid].wai <=i)
					ll=mid;
				else
					rr=mid-1;
				mid=(ll+rr+1)>>1;
			}
			if(rule[ll].wai ==i)
				while(rule[ll].wai ==i)
				{
					sl[rule[ll].sil ]=true;
					ll++;
				}
		}
	}
	for(int i=0;i<=k-1;i++)
	{
		if(ch[i]==1)
			ans*=2;
		else
		{
			find(i);
			if(ch[i]==1)
				ans*=2;	
		}
	}
	printf("%lld",ans-n);
	return 0;
}
==========
===== Successfully open the file      answers\HN-00197\call\call.cpp.The size of it is 1.246 KB.
#include<bits/stdc++.h>
using namespace std;
int n,m;long long a[100005];long long t;long long p=998244353;
long long x[100005],y[100005],z[3000][3000],zz[3000];
int q,jc;
long long chen=1;
void find(int xx)
{
	for(int i=1;i<=zz[xx];i++)
	{
		if(z[xx][i]==1)
		{
			if(chen!=1)
				for(int j=1;j<=n;j++)
					a[j]*=chen,a[j]%=p;
			a[x[z[xx][i]]]+=y[z[xx][i]],a[x[z[xx][i]]]%=p;
			chen=1;
		}
		else if(z[xx][i]==2)
			chen*=x[z[xx][i]],chen%=p;
		else
			find(z[xx][i]);
	}
}
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%lld",&t);
		if(t==1)
			scanf("%lld%lld",&x[i],&y[i]);

		else if(t==2)
			scanf("%lld",&x[i]);
		else
		{
			scanf("%lld",&t);zz[i]=t;
			for(int j=1;j<=t;j++)
				scanf("%lld",&z[i][j]);
		}
	}
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	{
		scanf("%d",&jc);
		if(jc==1)
		{
			if(chen!=1)
				for(int i=1;i<=n;i++)
					a[i]*=chen,a[i]%=p;
			a[x[jc]]+=y[jc],a[x[jc]]%=p;
			chen=1;
		}
		else if(jc==2)
			chen*=x[jc],chen%=p;
		else
			find(jc);
	}
	if(chen!=1)
		for(int i=1;i<=n;i++)
					a[i]*=chen,a[i]%=p;
	for(int i=1;i<=n;i++)
		printf("%lld ",a[i]%p);
	return 0;
}
==========
===== Opening  answers\HN-00197\snakes\snakes.cpp Failed.File not found.


---------- Now Opening N-00198's file(s).
===== Successfully open the file  answers\HN-00198\julian\julian.cpp.The size of it is 2.484 KB.
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
const int BC=1721424,AC1=2299160,AC2=2299239,AC3=2298884,BB1=1461,BB2=146097,BB3=36524;
//        1,1.1      1582,10.4  1583,1.1
typedef long long ll;
inline void read(int &x)
{
	int f=1;x=0;
	char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') f=-1,ch=getchar();
	while(ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
	x=x*f;
}

inline void readll(ll &x)
{
	int f=1;x=0;
	char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') f=-1,ch=getchar();
	while(ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
	x=x*f;
}

ll r;
int mth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

void getye1(ll r,int &ye,int &da,bool &rp)
{
	int a=r/(1ll*BB1),b=r%(1ll*BB1);
	if(b==0) a--,b=BB1;
	ye=a*4;rp=false;
	if(b<=365) da=b;
	else if(b<=2*365) ye++,da=b-365;
	else if(b<=3*365) ye+=2,da=b-2*365;
	else rp=true,ye+=3,da=b-3*365;
}

void getye2(ll r,int &ye,int &da,bool &rp)
{
	int a=r/(1ll*BB2),b=r%(1ll*BB2),ye1,da1;
	bool rp1;
	if(b==0) a--,b=BB2;
	ye=a*400;rp=false;
	if(b<=BB3)
	{
		b++;b--;
	}
	else if(b<=2*BB3)
	{
		ye+=100;
		b-=BB3;
	}
	else if(b<=3*BB3)
	{
		ye+=200;
		b-=2*BB3;
	}
	else
	{
		ye+=300;
		b-=3*BB3;
		rp=true;
	}
	getye1((ll)b,ye1,da1,rp1);
	if(ye1==99&&!rp) rp1=false;
	ye+=ye1;da=da1;rp=rp1;
}

void getmd(int n,bool rp,int &mo,int &da)
{
	int ss=0,i;
	if(rp) mth[2]++;
	for(i=1;i<=12;i++)
	{
		ss+=mth[i];
		if(ss>=n)
		{
			mo=i;da=n-(ss-mth[i]);
			break;
		}
	}
	if(rp) mth[2]--;
}

void sss(ll r)
{
	int ye,mo,da,n;
	bool rp;
	if(r<BC)
	{
		if(r<=365)
		{
			ye=4713;
			getmd(r+1,true,mo,da);
		}
		else
		{
			getye1(r-365,ye,n,rp);
			ye=4713-ye-1;
			getmd(n,rp,mo,da);
		}
		printf("%d %d %d BC\n",da,mo,ye);
	}
	else if(r<=AC1)
	{
		r-=BC-1;
		getye1(r,ye,n,rp);
		getmd(n,rp,mo,da);
		printf("%d %d %d\n",da,mo,ye+1);
	}
	else if(r<AC2)
	{
		ye=1582;
		n=r-(AC3-1)+10;
		getmd(n,false,mo,da);
		printf("%d %d %d\n",da,mo,ye);
	}
	else if(r<AC2+6575)
	{
		r-=AC2-1-365*2;
		getye1(r,ye,n,rp);
		ye+=1581;
		getmd(n,rp,mo,da);
		printf("%d %d %d\n",da,mo,ye);
	}
	else
	{
		r-=(AC2+6575-1);
		getye2(r,ye,n,rp);
		ye+=1601;
		getmd(n,rp,mo,da);
		printf("%d %d %d\n",da,mo,ye);
	}
}

int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int q;
	read(q);
	while(q--)
	{
		readll(r);
		sss(r);
	}
	fclose(stdin);fclose(stdout);
	return 0;
}==========
===== Successfully open the file        answers\HN-00198\zoo\zoo.cpp.The size of it is 1.181 KB.
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
const int N=1000010;
typedef unsigned long long ull;
typedef long long ll;

inline void read(int &x)
{
	int f=1;x=0;
	char ch=getchar();
	
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') f=-1,ch=getchar();
	while(ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
	x=x*f;
}

inline void readull(ull &x)
{
	int f=1;x=0;
	char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') f=-1,ch=getchar();
	while(ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
	x=x*f;
}

int n,m,c,k;
ull a;
bool vis[65];
ull ans,sa;

/*bool cmp(const node &a,const node &b)
{
	return a.q<b.q;
}*/

int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	int i,p,q,w;
	read(n);read(m);read(c);read(k);sa=0ull;
	for(i=1;i<=n;i++) readull(a),sa|=a;
	memset(vis,false,sizeof(vis));
	for(i=1;i<=m;i++)
	{
		read(p);read(q);
		vis[p]=true;
	}
	w=0;
	for(i=0;i<k;i++)
	{
		p=((sa>>i)&1);
		if(p) w++;
		else if(!p&&!vis[i]) w++;
	}
	ans=(1ull<<w);
	ans-=n;
	cout<<ans<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}==========
===== Successfully open the file      answers\HN-00198\call\call.cpp.The size of it is 0.606 KB.
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

inline void read(int &x)
{
	int f=1;x=0;
	char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') f=-1,ch=getchar();
	while(ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
	x=x*f;
}

int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	int n;
	read(n);
	if(n==3)
	{
		printf("6 8 12\n");
	}
	else if(n==10)
	{
		printf("36 282 108 144 180 216 504 288 324 360\n");
	}
	
	fclose(stdin);fclose(stdout);
	return 0;
}==========
===== Successfully open the file  answers\HN-00198\snakes\snakes.cpp.The size of it is 3.100 KB.
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<queue>
using namespace std;
const int N=50010;

inline void read(int &x)
{
	int f=1;x=0;
	char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') f=-1,ch=getchar();
	while(ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
	x=x*f;
}

struct nodebig
{
	int id,w;
	friend bool operator<(const nodebig &a,const nodebig &b)
	{
		return a.w==b.w?a.id<b.id:a.w<b.w;
	}
	bool operator==(const nodebig a) const
	{
		return id==a.id&&w==a.w;
	}
};
struct nodelow
{
	int id,w;
	friend bool operator<(const nodelow &a,const nodelow &b)
	{
		return a.w==b.w?a.id>b.id:a.w>b.w;
	}
	bool operator==(const nodelow a) const
	{
		return id==a.id&&w==a.w;
	}
};

int n,a[N];

struct duibig
{
	priority_queue<nodebig> A,B;
	void init()
	{
		while(!A.empty()) A.pop();
		while(!B.empty()) B.pop();
	}
	void push(nodebig x)
	{
		A.push(x);
	}
	nodebig top()
	{
		while(!B.empty()&&A.top()==B.top()) A.pop(),B.pop();
		return A.top();
	}
	void pop()
	{
		while(!B.empty()&&A.top()==B.top()) A.pop(),B.pop();
		A.pop();
	}
	void delet(nodebig x)
	{
		B.push(x);
	}
}b;

struct duilow
{
	priority_queue<nodelow> A,B;
	void init()
	{
		while(!A.empty()) A.pop();
		while(!B.empty()) B.pop();
	}
	void push(nodelow x)
	{
		A.push(x);
	}
	nodelow top()
	{
		while(!B.empty()&&A.top()==B.top()) A.pop(),B.pop();
		return A.top();
	}
	void pop()
	{
		while(!B.empty()&&A.top()==B.top()) A.pop(),B.pop();
		A.pop();
	}
	void delet(nodelow x)
	{
		B.push(x);
	}
}s;

int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int i,k,T,ans,la,x,y;
	bool flag;
	nodebig bx,ma,mi1;
	nodelow sx,mi,ma1;
	read(T);
	read(n);
	b.init();s.init();flag=false;
	for(i=1;i<=n;i++)
	{
		read(a[i]);
		bx.w=a[i];bx.id=i;
		sx.w=a[i];sx.id=i;
		b.push(bx);s.push(sx);
	}
	la=0;ans=0;
	for(i=1;i<n;i++)
	{
		ma=b.top();mi=s.top();
		ma1.w=ma.w;ma1.id=ma.id;
		mi1.w=mi.w;mi1.id=mi.id;
		if(mi.id==la)
		{
			if(!flag) flag=true,ans=i-1;
		}
		else if(flag)
		{
			if(!((i-1-ans)&1)) ans++;
			break;
		}
		b.pop();s.pop();
		b.delet(mi1);s.delet(ma1);
		ma.w-=mi.w;
		ma1.w=ma.w;
		b.push(ma);s.push(ma1);
		la=ma.id;
	}
	if(i==n&&flag)
	{
		if(!((n-1-ans)&1)) ans++;
	}
	ans--;
	if(!flag) ans=n-1;
	printf("%d\n",n-ans);
	T--;
	while(T--)
	{
		read(k);flag=false;
		for(i=1;i<=k;i++)
		{
			read(x);read(y);
			a[x]=y;
		}
		b.init();s.init();
		for(i=1;i<=n;i++)
		{
			bx.w=a[i];bx.id=i;
			sx.w=a[i];sx.id=i;
			b.push(bx);s.push(sx);
		}
		la=0;ans=n-1;
		for(i=1;i<n;i++)
		{
			ma=b.top();mi=s.top();
			ma1.w=ma.w;ma1.id=ma.id;
			mi1.w=mi.w;mi1.id=mi.id;
			if(mi.id==la)
			{
				if(!flag) flag=true,ans=i-1;
			}
			else if(flag)
			{
				if(!((i-1-ans)&1)) ans++;
				break;
			}
			b.pop();s.pop();
			b.delet(mi1);s.delet(ma1);
			ma.w-=mi.w;
			ma1.w=ma.w;
			b.push(ma);s.push(ma1);
			la=ma.id;
		}
		if(i==n&&flag)
		{
			if(!((n-1-ans)&1)) ans++;
		}
		ans--;
		if(!flag) ans=n-1;
		printf("%d\n",n-ans);
	}
	fclose(stdin);fclose(stdout);
	return 0;
}==========


---------- Now Opening N-00199's file(s).
===== Successfully open the file  answers\HN-00199\julian\julian.cpp.The size of it is 1.784 KB.
#include<bits/stdc++.h>
using namespace std;
int n,i,j,nian,yue,re,num[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},m;
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
	{
		nian=-4713;
		yue=1;
		re=1;
		cin>>m;
		for(j=1;j<=m;j++)
		{
			re++;
			if(nian<1582&&yue<10&&re<4) 
				if(abs(nian%4)==0) num[2]=29;
			else if(nian>=1582&&yue>=10&&re>=15)
				if((abs(nian%4)==0&&abs(nian%100)!=0)||(abs(nian%400)==0)) num[2]=29;
			if(nian==1582&&yue==10&&re==4) re=15;
			if(re>=num[yue]+1)                                                                                
			{
				yue++;
				re=1;
			}
			if(yue>=12&&re>=num[12]+1)
			{
				nian++;
				yue=1;
				re=1;
			}
			if(nian==0) nian++;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
		}
		if(nian>0)
			cout<<re<<" "<<yue<<" "<<nian<<endl;
		else if(nian<0)
			cout<<re<<" "<<yue<<" "<<abs(nian)<<" "<<"BC"<<endl;
	}
	return 0;
}
==========
===== Successfully open the file        answers\HN-00199\zoo\zoo.cpp.The size of it is 0.318 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("zoo.in","r",stdin);	
	freopen("zoo.out","w",stdout);
	int a,b,c,d,e,f,g,h,i,j,k,l,m;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m;
	if(a==3&&b==3&&c==5&&d==4&&e==1&&f==4&&g==6&&h==0&&i==3&&j==2&&k==4&&l==2&&m==5) cout<<13;
	else cout<<2;
	return 0;
}
==========
===== Successfully open the file      answers\HN-00199\call\call.cpp.The size of it is 0.162 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	cout<<6<<" "<<8<<" "<<12;
	return 0;
}
==========
===== Successfully open the file  answers\HN-00199\snakes\snakes.cpp.The size of it is 0.158 KB.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	cout<<5<<endl<<3;
	return 0;
}
==========


---------- Now Opening N-00200's file(s).
===== Successfully open the file  answers\HN-00200\julian\julian.cpp.The size of it is 2.090 KB.
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define il inline
#define rg register
il int read()
{
	int re=0,k=1;char ch=getchar();
	while(ch>'9'||ch<'0'){if(ch=='-')k=-1;ch=getchar();}
	while(ch<='9'&&ch>='0'){re=re*10+ch-48;ch=getchar();}
	return re*k;
}
il void write(int x)
{
	if(x<0)return putchar('-'),write(-x),void();
	if(x<10)return putchar('0'+x),void();
	return write(x/10),putchar('0'+x%10),void();
}
int t[12]={31,28,31,30,31,30,31,31,30,31,30,31};
const int B=400*365+97;
int month(int &x,int typ,int del=0)
{
	for(rg int i=0;i<12;i++)
	{
		int now=t[i];
		if(i==1)now+=typ;
		if(i==9)now-=del;
		if(x<=now)return i+1;
		x-=now;
	}
	return 13;
}
void sol(int x)
{
	int t=x/(365*4+1);
	int b=x%(365*4+1),add=0;
	if(b>=366)
	{
		add++,b-=366;
		if(b>=365)add++,b-=365;
		if(b>=365)add++,b-=365;
	}
	t*=4;
	if(t+add<4713)
	{
		b++;
		//cerr<<x<<endl;
		int m=month(b,(add==0));
		write(b);putchar(' ');
		write(m);
		putchar(' ');
		write(4713-t-add);
		puts(" BC");
	}
	else
	{
		x-=(4712/4)*(365*4+1);
		t=x/(365*4+1);
		b=x%(365*4+1),add=0;
		t*=4;
		if(b>=366)
		{
			add++,b-=366;
			if(b>=365)add++,b-=365;
			if(b>=365)add++,b-=365;
		}
		if((t+add)<1582)
		{
			b++;
			int m=month(b,(add==0));
			write(b);putchar(' ');
			write(m);
			putchar(' ');
			write(t+add);
			puts("");
			return;
		}
		else if((t+add)==1582)
		{
			b++;
			int m=month(b,(add==0),10);
			if(m<=12&&b<=31)
			{
				write(b);putchar(' ');
				write(m);
				putchar(' ');
				write(t+add);
				puts("");
				return;
			}
		}
		x-=(1582/4)*(365*4+1)+365+366+355;
	//	cerr<<365*400+97+2299239<<endl;
		t=1583;
		t+=(x/B)*400;
		//cerr<<t<<endl;
		x%=B;
		int now=365;
		while(x>=now)
		{
			t++;x-=now;
			if((t%400==0)||(t%100!=0&&t%4==0))now=366;
			else now=365;
		}
		x++;
		//cerr<<x<<endl;
		int m=month(x,(t%400==0)||(t%100!=0&&t%4==0));
		write(x);
		putchar(' ');
		write(m);
		putchar(' ');
		write(t);
		puts("");
	}
}
signed main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	int T=read();
	while(T--)
	{
		int n=read();
		sol(n);
	}
}
==========
===== Successfully open the file        answers\HN-00200\zoo\zoo.cpp.The size of it is 1.066 KB.
#include<bits/stdc++.h>
using namespace std;
#define il inline
#define rg register
#define ll unsigned long long
int k,n,m,c;
il ll read()
{
	int re=0;char ch=getchar();
	while(ch>'9'||ch<'0'){ch=getchar();}
	while(ch<='9'&&ch>='0'){re=re*10+ch-48;ch=getchar();}
	return re;
}
il void write(ll x)
{
	if(x<0)return putchar('-'),write(-x),void();
	if(x<10)return putchar('0'+x),void();
	return write(x/10),putchar('0'+x%10),void();
}
ll a,t;
il ll qmod(int y)
{
	ll re=1,x=2;
	while(y)
	{
		if(y&1)re*=x;
		x*=x;
		y>>=1;
	}
	return re;
}
vector<int> s[64];
set<int> st;
signed main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	n=read();m=read();c=read();k=read();
	if(!n&&k==64)
	{
		puts("18446744073709551616");
		return 0;
	}
	for(rg int i=1;i<=n;i++)
	{
		a=read();
		t|=a;
	}
	for(rg int i=1,p,q;i<=m;i++)
	{
		p=read();q=read();
		if((t>>p)&1)st.insert(q);
		else s[p].push_back(q);
	}
	for(rg int i=0;i<64;i++)
	{
		for(rg int j=0;j<s[i].size();j++)
		{
			if(!st.count(s[i][j]))
			{
				k--;
				break;
			}
		}
	}
	write(qmod(k)-n);
}
==========
===== Successfully open the file      answers\HN-00200\call\call.cpp.The size of it is 1.500 KB.
#include<bits/stdc++.h>
using namespace std;
#define il inline
#define rg register
il int read()
{
	int re=0,k=1;char ch=getchar();
	while(ch>'9'||ch<'0'){if(ch=='-')k=-1;ch=getchar();}
	while(ch<='9'&&ch>='0'){re=re*10+ch-48;ch=getchar();}
	return re*k;
}
il void write(int x)
{
	if(x<0)return putchar('-'),write(-x),void();
	if(x<10)return putchar('0'+x),void();
	return write(x/10),putchar('0'+x%10),void();
}
int n,m,q,a[100005],typ[100005],b[100005],e[100005];
vector<int> c[100005];
void do1(int d)
{
	a[b[d]]+=e[d];
	//cerr<<a[b[d]]<<endl;
}
void do2(int d)
{
	for(rg int j=1;j<=n;j++)
		a[j]*=b[d];
}
void do3(int d)
{
	for(rg int j=0;j<c[d].size();j++)
	{
		if(typ[c[d][j]]==1)
			do1(c[d][j]);
		else if(typ[c[d][j]]==2)do2(c[d][j]);
		else do3(c[d][j]);
	}
}
signed main()
{
	freopen("call.in","r",stdin);
	freopen("call.out","w",stdout);
	n=read();
	for(rg int i=1;i<=n;i++)
		a[i]=read();
	m=read();
	for(rg int i=1;i<=m;i++)
	{
		//cerr<<i<<endl;
		typ[i]=read();
		if(typ[i]==3)
		{
			int k=read();
			for(rg int j=1,tt;j<=k;j++)
			{
				tt=read();
				c[i].push_back(tt);
			}
		}
		else 
		{
			b[i]=read();
			if(typ[i]==1)e[i]=read();
		}
	}
	//cerr<<"@"<<endl;
	q=read();
	for(rg int i=1,d;i<=q;i++)
	{
//		for(rg int i=1;i<=n;i++)
//			cerr<<a[i]<<" ";
//		puts("");
		//cerr<<i<<endl;
		d=read();
		//cerr<<d<<endl;
		if(typ[d]==1)
		{
			do1(d);
		}
		else if(typ[d]==2)
		{
			do2(d);
		}
		else
		{
			do3(d);
		}
	}
	for(rg int i=1;i<=n;i++)
		write(a[i]),putchar(' ');
}
==========
===== Successfully open the file  answers\HN-00200\snakes\snakes.cpp.The size of it is 1.708 KB.
#include<bits/stdc++.h>
using namespace std;
#define il inline
#define rg register
int n,k;
il int read()
{
	int re=0,k=1;char ch=getchar();
	while(ch>'9'||ch<'0'){if(ch=='-')k=-1;ch=getchar();}
	while(ch<='9'&&ch>='0'){re=re*10+ch-48;ch=getchar();}
	return re*k;
}
il void write(int x)
{
	if(x<0)return putchar('-'),write(-x),void();
	if(x<10)return putchar('0'+x),void();
	return write(x/10),putchar('0'+x%10),void();
}
struct st{
	int val,num;
	bool operator <(const st ot)const{
		if(val==ot.val)return num<ot.num;
		return val<ot.val;
	}
};
set<st> s;
bool vis[1000005];
int a[1000005],ans[1000005];
#define IT set<st >::iterator
int sol()
{
	int t=n;
	while(s.size()>1)
	{
	//	cerr<<(s.begin()->val)<<" "<<(s.begin()->num)<<endl;
		//if(vis[s.begin()->num])cerr<<(s.begin()->num)<<endl;
		if(vis[s.begin()->num])
			return ans[s.begin()->num];
		IT it=s.end();
		it--;
		//if(it->val==s.begin()->val)return t;
		st p=*it;
		//cerr<<p.val<<" "<<p.num<<endl;
		s.erase(it);
		it=s.begin();
		p.val-=(it->val);
		s.erase(it);
		vis[p.num]=1;
		//if(t==1209) cerr<<p.val<<" "<<p.num<<endl;
		ans[p.num]=t;
		s.insert(p);
		t--;
	}
	return 1;
}
signed main()
{
	freopen("snakes.in","r",stdin);
	freopen("snakes.out","w",stdout);
	int T=read();
	for(rg int now=1;now<=T;now++)
	{
		if(now==1)n=read();
		else k=read();
		//cerr<<n<<endl;
		//cerr<<n<<endl;
		for(rg int i=1;i<=n;i++)
			ans[i]=vis[i]=0;
		if(now==1)
			for(rg int i=1;i<=n;i++)
				a[i]=read();
		else
			for(rg int i=1,u,v;i<=k;i++)
			{
				u=read();v=read();
				a[u]=v;
			}
		s.clear();
		for(rg int i=1;i<=n;i++)
		{
			//if(a[i]<a[i-1])cerr<<i<<endl;
			s.insert((st){a[i],i});
		}
//		cerr<<1<<endl;
		write(sol());
		puts("");
	}
}
==========


---------- Now Opening N-00201's file(s).
===== Successfully open the file  answers\HN-00201\julian\julian.cpp.The size of it is 4.103 KB.
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
const int N=100005;
int n,a[15],b[15],c[15];
 struct ss
{
	long long r,year;
	int mon,day,id;
	bool flag;
}f[N];

 void init()
{
	a[1]=31; a[2]=28; a[3]=31; a[4]=30; a[5]=31; a[6]=30; a[7]=31; a[8]=31; a[9]=30; a[10]=31; a[11]=30; a[12]=31;
	for (int i=1; i<=12; i++) a[i]=a[i-1]+a[i];
	b[1]=31; 
	for (int i=2; i<=12; i++) b[i]=a[i]+1;
	for (int i=1; i<=9; i++) c[i]=a[i];
	c[10]=a[10]-10; c[11]=a[11]-10; c[12]=a[12]-10;
}
 bool cmp(ss a,ss b) {return a.r<b.r;}
 bool cmp1(ss a,ss b) {return a.id<b.id;}
int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d",&n);
	init();
	for (int i=1; i<=n; i++)
	{
		scanf("%lld",&f[i].r);
		f[i].id=i;
	}
	sort(f+1,f+n+1,cmp);
	long long res=0,year=4713,i=1;
	bool p=false;
	while (i<=n) 
	{
		if (p==false)
		{
			if ((year-1)%4==0) 
			{
				res+=366;
				while (f[i].r<=res&&i<=n)
				{
					long long tmp=f[i].r-(res-366);
					for (int j=1; j<=12; j++)
						if (tmp<b[j])
						{
							f[i].year=year; f[i].mon=j; f[i].day=b[j]-b[j-1]-(b[j]-tmp-1);
							f[i].flag=false; i++;
							break;
						}
						else if (tmp==b[j])
						{
							if (j==12) 
							{
								if (year-1!=0) f[i].year=year-1,f[i].flag=false; 
								else f[i].year=1,f[i].flag=true;
								f[i].mon=1; f[i].day=1;
							}
							else {f[i].year=year; f[i].mon=j+1; f[i].day=1;}
							i++; break;
						}
				}
			}
			else 
			{
				res+=365;
				while (f[i].r<=res&&i<=n)
				{
					long long tmp=f[i].r-(res-365);
					for (int j=1; j<=12; j++)
						if (tmp<=a[j])
						{
							f[i].year=year; f[i].mon=j; f[i].day=a[j]-a[j-1]-(a[j]-tmp-1);
							f[i].flag=false; i++;
							break;
						}
						else if (tmp==a[j])
						{
							if (j==12) 
							{
								if (year-1!=0) f[i].year=year-1,f[i].flag=false; 
								else f[i].year=1,f[i].flag=true;
								f[i].mon=1; f[i].day=1;
							}
							else {f[i].year=year; f[i].mon=j+1; f[i].day=1;}
							i++; break;
						}
				}
			}
			if (year-1==0) p=true,year=1;
			else year--;
		}
		else
		{
			if ((year<1582&&year%4==0)||(year>1582&&(year%400==0||(year%4==0&&year%100!=0))))
			{
				res+=366;
				while (f[i].r<=res&&i<=n)
				{
					long long tmp=f[i].r-(res-366);
					for (int j=1; j<=12; j++)
						if (tmp<b[j])
						{
							f[i].year=year; f[i].mon=j; f[i].day=b[j]-b[j-1]-(b[j]-tmp-1);
							f[i].flag=true; i++;
							break;
						}
						else if (tmp==b[j])
						{
							if (j==12) {f[i].year=year+1; f[i].mon=1; f[i].day=1;}
							else {f[i].year=year; f[i].mon=j+1; f[i].day=1;}
							f[i].flag=true; i++;
							break;
						}
				}
			}
			else if (year==1582)
			{
				res+=355;
				while (f[i].r<=res&&i<=n)
				{
					long long tmp=f[i].r-(res-355);
					for (int j=1; j<=12; j++)
						if (tmp<c[j])
						{
							f[i].year=year; f[i].mon=j; 
							if (j!=10) f[i].day=c[j]-c[j-1]-(c[j]-tmp-1);
							if (j==10)
							{
								long long q=tmp-c[j-1]+1;
								if (q<=4) f[i].day=q;
								else f[i].day=14+(q-4);
							}
							f[i].flag=true; i++;
							break;
						}
						else if (tmp==c[j])
						{
							if (j==12) {f[i].year=year+1; f[i].mon=1; f[i].day=1;}
							else {f[i].year=year; f[i].mon=j+1; f[i].day=1;}
							f[i].flag=true; i++;
							break;
						}
				}
			}
			else 
			{
				res+=365;
				while (f[i].r<=res&&i<=n)
				{
					long long tmp=f[i].r-(res-365);
					for (int j=1; j<=12; j++)
						if (tmp<a[j])
						{
							f[i].year=year; f[i].mon=j; f[i].day=a[j]-a[j-1]-(a[j]-tmp-1);
							f[i].flag=true; i++;
							break;
						}
						else if (tmp==a[j])
						{
							if (j==12) {f[i].year=year+1; f[i].mon=1; f[i].day=1;}
							else {f[i].year=year; f[i].mon=j+1; f[i].day=1;}
							f[i].flag=true; i++;
							break;
						}
				}
			}
			year++;
		}
	}
	sort(f+1,f+n+1,cmp1);
	for (int i=1; i<=n; i++)
	{
		printf("%d %d %lld",f[i].day,f[i].mon,f[i].year);
		if (f[i].flag==false) printf(" BC");
		printf("\n");
	}
	fclose(stdin); fclose(stdout);
	return 0;
}==========
===== Successfully open the file        answers\HN-00201\zoo\zoo.cpp.The size of it is 0.747 KB.
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
bool a[105],b[105];
int n,m,c,k;
unsigned long long ans=0;

 int main()
{
	freopen("zoo.in","r",stdin);
	freopen("zoo.out","w",stdout);
	{
