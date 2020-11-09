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
