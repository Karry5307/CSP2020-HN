#include<bits/stdc++.h>

using namespace std;

const int kMaxN = 1000000 + 5;
const int kMaxM = 1000000 + 5;
const int kMaxC = 100000000 + 5;

int n , m , c , k , ans , a[kMaxN] , p[kMaxM] , q[kMaxM];

string s[kMaxN]; 

bool vis[kMaxC];

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
	
	freopen("zoo.in" , "r" , stdin);
	freopen("zoo.out" , "w" , stdout);
	
	n = read();
	m = read();
	c = read();
	k = read();
	
	for(int i = 1 ; i <= n ; i++ ){
		a[i] = read();
	}
	
	for(int i = 1 ; i <= m ; i++ ){
		p[i] = read();
		q[i] = read();
	}
	
	for(int i = 1 ; i <= n ; i++ ){
		while(a[i] != 0){
			s[i] = s[i] + (char)(a[i] % 2 + '0');
			a[i] /= 2; 
		}
	} 
	
	for(int i = 1 ; i <= n ; i++ ){
		for(int j = 1 ; j <= m ; j++ ){
			if(s[i][p[j]] == '1'){
				vis[q[j]] = true;
			}
		}
	}
	
	ans = -n;
	
	for(int i = 0 ; i < (1 << k) ; i++ ){
		int x = i;
		string st;
		bool flag = true;
		while(x != 0){
			st = st + (char)(x % 2 + '0');
			x /= 2; 
		}
		for(int j = 1 ; j <= m ; j++ ){
			if(st[p[j]] == '1' && vis[q[j]] == false){
				flag = false;
				break;
			}
		}
		if(flag == true){
			ans++;
		}
	}
	
	cout << ans << endl;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
