#include <iostream>
using namespace std;

char arr[65][65];

void comp(int x, int y, int a) {
  int ch = arr[x][y];
  int range = a;
  bool same = 1;
  for (int i = x; i < x + a; i++) {
    for (int j = y; j < y + a; j++) {
      if (ch != arr[i][j]) {
        same = 0;
        break;
      }
    }
  }
  if (same == 0) {
    cout << "(";
    comp(x, y, a / 2);
    comp(x, y + a / 2, a / 2);
    comp(x + a / 2, y, a / 2);
    comp(x + a / 2, y + a / 2, a / 2);
    cout << ")";
  } else {
    cout << ch;
  }
}

int main(void) {
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      char str;
      cin >> str;
      arr[i][j] = str - '0';
    }
  }
  comp(0, 0, a);
}