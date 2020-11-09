#include <cstdio>
using namespace std;
int main()
{
	//freopen("julian.in","r",stdin);
	//freopen("julian.out","w",stdout);
	int q,a[10000],day,month,year,i,j,t;
	int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&q);
	for(i=1;i<=q;i++)
	{
		scanf("%d",&a[i]);   
	}
	for(i=1;i<=q;i++)
	{
		t=a[i];
		for(j=0;j<12;j++)
		{
			day=a[i];
			a[i]=a[i]-b[j];
			if(a[i]<=0)
			{
				break;
			}
		}
		month=j;
		if(t<31) day=day+1;
		printf("%d %d 4173 BC\n",day,month+1);
	}
	return 0;
	//fclose(stdin);
	//fclose(stdout);
}
