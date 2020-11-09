#include<bits/stdc++.h>

using namespace std;

#define N 205 
#define re register
#define Rep(i, s, e) for (re int i = s; i <= e; i ++)
#define Dep(i, s, e) for (re int i = s; i >= e; i --)

int read()
{
	int x = 0, f = 1; char ch = getchar();
	while (!isdigit(ch)) {if (ch == '-') f = -1; ch = getchar();}
	while (isdigit(ch)) {x = (x << 1) + (x << 3) + (ch ^ 48); ch = getchar();}
	return x * f;
}

struct node
{
	int dis, num;
	bool operator <(const node &y)const
	{
		if (dis != y.dis) return dis < y.dis;
		else return num < y.num; 
	}
};

struct node2
{
	int dis, num;
	bool operator <(const node2 &y)const
	{
		if (dis != y.dis) return dis > y.dis;
		else return num > y.num; 
	}
};

int T, a[N], vis[N], ans;
priority_queue<node> q;
priority_queue<node2> q2;

int main()
{
	freopen("snakes.in", "r", stdin);
	freopen("snakes.out", "w", stdout);
	T = read();
	int n = read();
	Rep (i, 1, n) 
	{
		node k;
		a[i] = read();
		k.dis = a[i];
		k.num = i;
		node2 kk;
		kk.dis = k.dis;
		kk.num = k.num;
		q.push(k);
		q2.push(kk);
	}
	while (1)
	{
		while (vis[q.top().num]) q.pop();
		node a = q.top();
		node2 b = q2.top(); q2.pop();
		node2 c = q2.top(); 
		if (a.dis - b.dis < c.dis || (a.dis - b.dis == c.dis && a.num < c.num)) 
		{
			q.push(a);
			q2.push(b);
			break;
		}
		{
			a.dis -= b.dis;
			q.push(a);
			node2 aa;
			aa.dis = a.dis;
			aa.num = a.num;
			q2.push(aa);
			q2.push(c);
			vis[b.num] = 1;
			ans ++;
		}
	}
	printf("%d\n", n - ans);
	T --;
	while (T --)
	{
		while (!q.empty()) q.pop();
		while (!q2.empty()) q2.pop();
		int k = read();
		int xx[N], yy[N], vis2[N];
		Rep (i, 1, k) vis2[i] = 0, xx[i] = 0, yy[i] = 0;
		Rep (i, 1, n) vis[i] = 0;
		Rep (i, 1, k) xx[i] = read(), yy[i] = read();
		Dep (i, k, 1)
		{
			if (!vis2[xx[i]])
			{
				vis2[xx[i]] = 1;
				a[xx[i]] += yy[i];
			}
		}
	Rep (i, 1, n) 
	{
		node k;
		k.dis = a[i];
		k.num = i;
		node2 kk;
		kk.dis = k.dis;
		kk.num = k.num;
		q.push(k);
		q2.push(kk);
	}
	while (1)
	{
		while (vis[q.top().num]) q.pop();
		node a = q.top();
		node2 b = q2.top(); q2.pop();
		node2 c = q2.top(); 
		if (a.dis - b.dis < c.dis || (a.dis - b.dis == c.dis && a.num < c.num)) 
		{
			q.push(a);
			q2.push(b);
			break;
		}
		else if (a.dis - b.dis > c.dis || (a.dis - b.dis == c.dis && a.num > c.num)){
			a.dis -= b.dis;
			q.push(a);
			node2 aa;
			aa.dis = a.dis;
			aa.num = a.num;
			q2.push(aa);
			q2.push(c);
			vis[b.num] = 1;
			ans ++;
		}
	   }
	   printf("%d\n", n - ans);
	}
	return 0;
}
