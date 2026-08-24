#include <iostream>
using namespace std;

int main(void) {
  int a, b, cnt = 1, arr[101][101];
  cin >> a >> b;
  for (int i = 1; i <= a; i++) {
    if (!(i % 2)) {
      for (int j = b - 1; j >= 0; j--) {
        arr[i][j] = cnt;
        cnt++;
      }
    } else {
      for (int j = 0; j < b; j++) {
        arr[i][j] = cnt;
        cnt++;
      }
    }
  }
  for (int i = 1; i <= a; i++) {
    for (int j = 0; j < b; j++)
      cout << arr[i][j] << " ";
    cout << "\n";
  }
  return 0;
}