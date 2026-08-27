#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int y = n / 7;

  for(int i = y; i >= 0; i--) {
    if((n - 7 * i) % 4 == 0) {
      cout << string((n - 7 * i) / 4, '4') << string(i, '7') << "\n";
      return 0;
    }
  }
  cout << -1 << "\n";
    return 0;
}