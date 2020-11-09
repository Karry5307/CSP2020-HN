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
