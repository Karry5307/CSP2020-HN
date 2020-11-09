#include<bits/stdc++.h>
#define rg register
using namespace std;
const int N = 100000 + 2;
struct Node{
	int id, m, x, y, z;
}node[N];
int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, n, m;

inline int read()
{
	int f = 0;
	char c;
	scanf("%c", &c);
	while(c != ' ' && c != 10)
		f = f*10 + (int)c-'0';
	return f;
}

inline bool RL(int x)
{
	if(x < 0)
		++x;
	if(!(x%4))
		return 1;
	return 0;
}

inline bool GL(int x)
{
	if(!(x%4) && x%100)
		return 1;
	if(!(x%400))
		return 1;
	return 0;
}

inline bool cmp(Node x, Node y)
{
	return x.m < y.m;
}

inline bool cmp1(Node x, Node y)
{
	return x.id < y.id;
}

int main()
{
	freopen("julian.in","r",stdin);
	freopen("julian.out","w",stdout);
	scanf("%d", &n);
	for(rg int i = 1; i <= n; ++i)
	{
		scanf("%d", &m);
		node[i].id = i, node[i].m = m;
	}
	sort(node+1, node+1+n, cmp);
	int k = 1, x = -4713, y = 1, z = 1, ans = 0;
	while(node[k].m == ans && k <= n)
	{
		node[k].x = x, node[k].y = y, node[k].z = z;
		++k;
	}
	while(ans < 2299160 && k <= n)
	{
		mon[2] = 28 + RL(x);
		if(node[k].m - ans >= 28 && ans + 28 < 2299160)
			z += 28, ans += 28;
		else
			++z, ++ans;
		if(z > mon[y])
			z -= mon[y], ++y;
		if(y > 12)
			y = 1, ++x;
		if(x == 0)
			++x;
		while(node[k].m == ans && k <= n)
		{
			node[k].x = x, node[k].y = y, node[k].z = z;
			++k;
		}
	}
	ans++, z = 15;
	while(node[k].m == ans && k <= n)
	{
		node[k].x = x, node[k].y = y, node[k].z = z;
		++k;
	}
	while(ans < node[n].m && k <= n)
	{
		if(node[k].m - ans >= 28)
			z += 28, ans += 28;
		else
			++z, ++ans;
		mon[2] = 28 + GL(x);
		if(z > mon[y])
			z -= mon[y], ++y;
		if(y > 12)
			y = 1, ++x;
		while(node[k].m == ans && k <= n)
		{
			node[k].x = x, node[k].y = y, node[k].z = z;
			++k;
		}
	}
	sort(node+1,node+1+n,cmp1);
	for(rg int i = 1; i <= n; ++i)
	{
		if(node[i].x < 0)
			printf("%d %d %d BC\n", node[i].z, node[i].y, -node[i].x);
		else printf("%d %d %d\n", node[i].z, node[i].y, node[i].x);
	}
	return 0;
}
