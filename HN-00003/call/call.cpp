#include<bits/stdc++.h>

using namespace std;

#define int long long

const int Mod = 998244353;
const int kMaxN = 100000 + 5;
const int kMaxM = 100000 + 5;

int n , m , q , a[kMaxN];

struct Node{
	int t , p , v , c;
	vector <int> g;
};

Node b[kMaxM];

inline void dfs(int x){
	for(int j = 0 ; j < b[x].g.size() ; j++ ){
		if(b[b[x].g[j]].t == 1){
			a[b[b[x].g[j]].p] = (a[b[b[x].g[j]].p] + b[b[x].g[j]].v) % Mod; 
		}
		if(b[b[x].g[j]].t == 2){
			for(int k = 1 ; k <= n ; k++ ){
				a[k] = (a[k] * b[b[x].g[j]].v) % Mod; 
			}
		}
		if(b[b[x].g[j]].t == 3){
			dfs(b[x].g[j]);
		}
	}
	return ;
}

int read(){
	int s = 0 , w = 1;
	char ch = getchar();
	while((ch < '0') || (ch > '9')){
		if(ch == '-'){
			w = -1;
		}
		ch = getchar();
	}
	while((ch >= '0') && (ch <= '9')){
		s = (s << 3) + (s << 1) + ch - '0';
		ch = getchar();
	}
	return s * w;
}

signed main(){
	
	freopen("call.in" , "r" , stdin);
	freopen("call.out" , "w" , stdout);
	
	n = read();
	
	for(int i = 1 ; i <= n ; i++ ){
		a[i] = read();
	}
	
	m = read();
	
	for(int i = 1 ; i <= m ; i++ ){
		b[i].t = read();
		if(b[i].t == 1){
			b[i].p = read();
			b[i].v = read();
		}
		if(b[i].t == 2){
			b[i].v = read();
		}
		if(b[i].t == 3){
			b[i].c = read();
			for(int j = 1 ; j <= b[i].c ; j++ ){
				int x;
				x = read();
				b[i].g.push_back(x);
			}
		}
	}
	
	q = read();
	
	for(int i = 1 ; i <= q ; i++ ){
		int f;
		f = read();
		if(b[f].t == 1){
			a[b[f].p] = (a[b[f].p] + b[f].v) % Mod; 
		}
		if(b[f].t == 2){
			for(int j = 1 ; j <= n ; j++ ){
				a[j] = (a[j] * b[f].v) % Mod; 
			}
		}
		if(b[f].t == 3){
			dfs(f);
		}
	}
	
	for(int i = 1 ; i <= n ; i++ ){
		cout << a[i] << " ";
	}
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
