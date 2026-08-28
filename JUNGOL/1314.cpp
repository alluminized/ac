#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string s = "ZABCDEFGHIJKLMNOPQRSTUVWXY";
  char arr[101][101];
  int a, cnt = 1;
  cin >> a;
  for (int i = 1; i <= a; i++) {
    if (i % 2) {
      for (int j = 1; j <= a; j++) {
        arr[j][i] = s[cnt++ % 26];
      }
    } else {
      for (int j = a; j >= 1; j--) {
        arr[j][i] = s[cnt++ % 26];
      }
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