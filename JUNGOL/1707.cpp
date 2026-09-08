#include <iostream>
using namespace std;

int arr[101][101];

void construct(int a) {
  int c = 1;
  int m = a;
  int x = 0, y = 0;
  while (m >= 1) {
    for (int i = 0; i < m; i++) {
      arr[y][++x] = c++;
    }
    m--;
    for (int i = 0; i < m; i++) {
      arr[++y][x] = c++;
    }
    for (int i = 0; i < m; i++) {
      arr[y][--x] = c++;
    }
    m--;
    for (int i = 0; i < m; i++) {
      arr[--y][x] = c++;
    }
  }
}

int main(void) {
  int a;
  cin >> a;
  construct(a);
  for (int i = 0; i < a; i++) {
    for (int j = 1; j <= a; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}