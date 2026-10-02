#include <iostream>
using namespace std;

int main(void) {
  int cnt, arr[11][2], ans = 0;
  cin >> cnt;
  int x = 0, y = 0;
  arr[0][0] = 0;
  arr[0][1] = 0;
  for (int i = 1; i <= 6; i++) {
    int dir, len;
    cin >> dir >> len;
    if (dir == 1) {
      x += len;
    } else if (dir == 2) {
      x -= len;
    } else if (dir == 3) {
      y -= len;
    } else if (dir == 4) {
      y += len;
    }
    arr[i][0] = x;
    arr[i][1] = y;
  }
  for (int i = 0; i < 7; i++) {
    ans += (arr[i][0] * arr[i + 1][1]) - (arr[i][1] * arr[i + 1][0]);
  }
  if (ans < 0)
    ans -= (ans * 2);
  ans /= 2;
  cout << ans * cnt << "\n";
  return 0;
}