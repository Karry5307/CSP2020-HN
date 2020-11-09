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
