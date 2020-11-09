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
