#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a, b, cnt = 0, ans = 0;
  cin >> a >> b;
  for (int i = 1; i <= a; i++) {
    if (a % i == 0)
      cnt++;
    if (cnt == b) {
      ans = i;
      break;
    }
  }
  cout << ans << "\n";
  return 0;
}