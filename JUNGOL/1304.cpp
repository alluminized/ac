#include <iostream>
using namespace std;

int main(void) {
  int a, cnt = 1, arr[101][101];
  cin >> a;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      arr[i][j] = cnt;
      cnt++;
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++)
      cout << arr[j][i] << " ";
    cout << "\n";
  }
  return 0;
}