#include<bits/stdc++.h>

using namespace std;

#define int long long

const int kMaxY = 400 + 5; 

int months[13] = {0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};

int ans , q , r , x , y , p , px , py , o , ox , oy , pp , cnt , cnt1 , cnt2 , day , year , month , day1 , day2 , f[kMaxY] , s[kMaxY];

bool flag1 , flag2;

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
	
	freopen("julian.in" , "r" , stdin);
	freopen("julian.out" , "w" , stdout);
	
	day1 = 146100;
	day2 = 146097;
	
	q = read();
	
	for(int i = 4 ; i <= 403 ; i++ ){
		if(i % 4 == 0){
			f[i - 3] = 366;
		}
		else{
			f[i - 3] = 365;
		}
	}
	
	for(int i = 3 ; i <= 402 ; i++ ){
		if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
			s[i - 2] = 366;
		}
		else{
			s[i - 2] = 365;
		}
	}
	
	while(q--){
		r = read();
		if(r <= 2299143){
			x = r / day1;
			y = r % day1;
			cnt = 0;
			flag1 = false;
			flag2 = false;
			for(int i = 1 ; i <= 400 ; i++ ){
				if(cnt + f[i] <= y){
					cnt += f[i];
				}
				else{
					if(flag1 == false){
						flag1 = true;
						year = -4713 + x * 400 + i - 1;
						if(f[i] == 366){
							months[2] = 29;
						}
						pp = 0;
						for(int j = 1 ; j <= 12 ; j++ ){
							if(pp + months[j] <= y - cnt){
								pp += months[j];
							}
							else{
								if(flag2 == false){
									flag2 = true;
									month = j;
									day = y - cnt - pp + 1;
								}
							}
						}
						if(f[i] == 366){
							months[2] = 28;
						}
					}
				}
			}
			if(r <= 1721387){
				cout << day << " " << month << " " << abs(year) << " BC" << endl;
			}
			else{
				cout << day << " " << month << " " << year + 1 << endl;
			}
		}
		else{
			if(r <= 2299221){
				if(r <= 2299160){
					cout << r - 2299143 + 15 - 1 << " " << 10 << " " << 1582 << endl;
				}
				if(r <= 2299190){
					cout << r - 2299160 << " " << 11 << " " << 1582 << endl;
				}
				if(r <= 2299221){
					cout << r - 2299190 << " " << 12 << " " << 1582 << endl;
				}
			}
			else{
				p = (r - 2299221);
				px = p / day1;
				py = p % day1;
				p = px * day2 + py;
				px = p / day2;
				py = p % day2;
				cnt1 = 0;
				cnt2 = 0;
				flag1 = false;
				flag2 = false;
				for(int i = 1 ; i <= 400 ; i++ ){
					if(cnt1 + f[i] < py){
						cnt1 += f[i];
						cnt2 += s[i];
					}
					else{
						if(flag1 == false){
							flag1 = true;
							year = 1583 + px * 400 + i - 1;
							if(f[i] == 366){
								months[2] = 29;
							}
							pp = 0;
							for(int j = 1 ; j <= 12 ; j++ ){
								if(pp + months[j] < py - cnt1){
									pp += months[j];
								}
								else{
									if(flag2 == false){
										flag2 = true;
										month = j;
										day = py - cnt1 - pp;
									}
								}
							}
							if(f[i] == 366){
								months[2] = 28;
							}
						}
					}
				}
				cout << day << " " << month << " " << year << endl;
			}
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
