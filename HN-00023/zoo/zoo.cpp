#include <bits/stdc++.h>

using namespace std;

const int KMaxN = 1000005;

int a[KMaxN], p[KMaxN], q[KMaxN];
int n, m, c, k, ans = 0;

bool Find(int g) {
  for (int i = 1; i <= n; i++) {
    int o2 = a[i] / pow(2, g);
    if (o2 % 2 == 1) {
      return true;
    }
  }
  return false;
}

bool Work(int i) {
  bool t = true;
  for (int j = 1; j <= m; j++) {
    if (p[j] != 0 && q[j] != 0) {
      int g1 = i / pow(2, p[j]);
      if (g1 % 2 != 0) {
        t = true;
      }
    }
  }
  for (int j = 1; j <= m; j++) {
    if (p[j] != 0 && q[j] == 0) {
      int g1 = i / pow(2, p[j]);
      if (g1 % 2 != 0) {
        t = false;
      }
    }
  }
  for (int j = 1; j <= n; j++) {
    if ((t) && i == a[j]) {
      return false;
    }
  }
  return t;
}

int main() {
  freopen("zoo.in", "r", stdin);
  freopen("zoo.out", "w", stdout);
  cin >> n >> m >> c >> k;
  int y = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= m; i++) {
    cin >> p[i] >> q[i];
    if(!Find(p[i])) {
      q[i] = 0;
    }
  }
  int o = 0;
  for (int i = 0; i <= k - 1; i++)  {
    o += pow(2, i);
  }
  for (int i = 0; i <= o; i++) {
    if (Work(i))  {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
