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
