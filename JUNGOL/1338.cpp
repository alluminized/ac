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
  for (int i = 1; i <= a; i++) {
    for (int j = i, k = a; j <= a; j++, k--) {
      arr[j][k] = s[cnt++ % 26];
    }
  }
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= a; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}