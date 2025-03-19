#include <iostream>
using namespace std;

int arr[1001][1001] = {
    0,
};

int main(void) {
  int cnt = 0, chk = 0;
  int x1, y1, x2, y2;
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      if (arr[i][j] == 2) {
        x1 = i;
        y1 = j;
      } else if (arr[i][j] == 5) {
        x2 = i;
        y2 = j;
      }
    }
  }
  int mx = min(x1, x2);
  int my = min(y1, y2);
  int maax = max(x1, x2);
  int maay = max(y1, y2);
  for (int i = mx; i <= maax; i++) {
    for (int j = my; j <= maay; j++) {
      if (arr[i][j] == 1)
        cnt++;
    }
  }
  if (cnt >= 3 && ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)) >= 25) {
    if (x1 == x2 || y1 == y2)
      chk = 1;
    else if (((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)) >= 25)
      chk = 1;
  } else
    chk = 0;
  cout << chk << "\n";
  return 0;
}