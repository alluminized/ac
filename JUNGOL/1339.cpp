#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string s = "ZABCDEFGHIJKLMNOPQRSTUVWXY";
  char arr[101][101];
  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      arr[i][j] = ' ';
    }
  }
  int a, cnt = 1;
  cin >> a;
  if (a % 2 == 0 || a <= 0 || a >= 101) {
    cout << "INPUT ERROR";
    return 0;
  }
  for (int i = a * 2 - 1; i >= 0; i--) {
    for (int j = i; j < a - i; j++) {
      arr[j][i] = s[cnt++ % 26];
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a / 2 + 1; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}