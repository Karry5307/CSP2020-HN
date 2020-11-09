#include <bits/stdc++.h>

using namespace std;

const int KMaxN = 10000005;

struct node{
  int g;
  int h;
} b[KMaxN];
int a[KMaxN];
int T, n, k;
int t = 1, r = 1, e = 1, ans = 0;

void Sort() {
  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      if (b[j].g > b[i].g) {
        swap(b[i].g, b[j].g);
        swap(b[i].h, b[j].h);
      }
    } 
  }
}

void Work() {
  int f = 0;
  while(1) {
    Sort();
    if (b[1].g - b[n - f].g > b[2].g || (b[1].g - b[n - f].g == b[2].g && b[1].h > b[2].h) || (b[1].g - b[n - f].g < b[2].g && ans > 3)) {
      f++;
      ans--;
      b[1].g -= b[n - f].g;
    } else {
      break;
    }
  }
  cout << ans << endl;
  for (int j = 1; j <= n; j++) {
    b[j].g = a[j];
    b[j].h = j;
  }
  return;
}

int main() {
  freopen("snakes.in", "r", stdin);
  freopen("snakes.out", "w", stdout);
  cin >> T;
  for (int i = 1; i <= T; i++) {
    if (i == 1) {
      cin >> n;
      ans = n;
      for (int j = 1; j <= n; j++) {
        cin >> a[j];
        b[j].g = a[j];
        b[j].h = j;
      }
      Work();
    } else {
      cin >> k;
      for (int i = 1; i <= k; i++) {
        int A, d;
        cin >> A >> d;
        b[A].g = d;
        b[A].h = A;
      }
      Work();
    }
  }
	return 0;
}
