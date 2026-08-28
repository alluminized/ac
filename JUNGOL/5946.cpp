#include <iostream>
using namespace std;

int main(void) {
  int a, cnt = 0, sp_cnt = 0;
  cin >> a;
  if (!(a % 2) || a < 1 || a > 50) {
    cout << "INPUT ERROR!\n";
    return 0;
  }
  for (int i = a; i >= 1; i--) {
    for (int j = 1; j <= sp_cnt; j++) {
      cout << "  ";
    }
    sp_cnt++;
    for (int j = i * 2 - 1; j >= 1; j--)
      cout << cnt << " ";
    cnt++;
    cout << "\n";
  }
  return 0;
}