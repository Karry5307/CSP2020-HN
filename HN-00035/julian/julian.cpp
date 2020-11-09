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
