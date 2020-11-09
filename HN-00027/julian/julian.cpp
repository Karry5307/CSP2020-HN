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
