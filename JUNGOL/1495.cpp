#include <iostream>
using namespace std;

int arr[101][101];

void con(int a) {
  int x = 1, y = 1, cnt = 1, ran = a;
  arr[x][y] = cnt++;
  while (1) {
    if (x + 1 <= a)
      arr[++x][y] = cnt++;
    else
      arr[x][++y] = cnt++;
    while (x > 1 && y < a) {
      arr[--x][++y] = cnt++;
    }
    if (y + 1 <= a)
      arr[x][++y] = cnt++;
    else
      arr[++x][y] = cnt++;
    while (y > 1 && x < a) {
      arr[++x][--y] = cnt++;
    }
    if (x == a && y == a)
      break;
  }
}

int main(void) {
  int a;
  cin >> a;
  con(a);
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= a; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}