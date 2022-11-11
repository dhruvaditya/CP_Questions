/**
 *    author:  dhruvaditya
 *    created: 11.11.2022 23:40       
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    bool ok = true;
    for (int i = 0; i < n; i++) {
      ok &= (a[0] <= a[i]);
    }
    cout << (ok ? "Yes" : "No") << '\n';
  }
  return 0;
}
