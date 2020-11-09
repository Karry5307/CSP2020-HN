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
