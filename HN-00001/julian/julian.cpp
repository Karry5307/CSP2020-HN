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