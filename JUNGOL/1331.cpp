#include <iostream>
#include <string>
using namespace std;

char arr[201][201];

void con(int a) {
  string st = "ZABCDEFGHIJKLMNOPQRSTUVWXY";
  int c = 1;
  int m = a - 1;
  int x = 0, y = a - 1;
  while (m >= 1) {
    for (int i = 0; i < m; i++) {
      arr[x++][y--] = st[c++ % 26];
    }
    for (int i = 0; i < m; i++) {
      arr[x++][y++] = st[c++ % 26];
    }
    for (int i = 0; i < m; i++) {
      arr[x--][y++] = st[c++ % 26];
    }
    for (int i = 0; i < m; i++) {
      arr[x--][y--] = st[c++ % 26];
    }
    m--;
    x++;
  }
  arr[a - 1][a - 1] = st[c++ % 26];
}

int main(void) {
  for (int i = 0; i < 201; i++) {
    for (int j = 0; j < 201; j++) {
      arr[i][j] = ' ';
    }
  }
  int a;
  cin >> a;
  con(a);
  for (int i = 0; i < a * 2 - 1; i++) {
    for (int j = 0; j < a * 2 - 1; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}