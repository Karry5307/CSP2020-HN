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
