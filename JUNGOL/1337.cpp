#include <iostream>
using namespace std;

int arr[101][101];

void construct(int a) {
  int c = 0;
  int m = a;
  int x = 0, y = 0;
  while (m >= 1) {
    for (int i = 0; i < m; i++) {
      arr[++y][++x] = c % 10;
      c++;
    }
    m--;
    for (int i = 0; i < m; i++) {
      arr[y][--x] = c % 10;
      c++;
    }
    m--;
    for (int i = 0; i < m; i++) {
      arr[--y][x] = c % 10;
      c++;
    }
    m--;
  }
}

int main(void) {
  int a;
  cin >> a;
  construct(a);
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= i; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}