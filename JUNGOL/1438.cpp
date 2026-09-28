#include <iostream>
using namespace std;

int main(void) {
  int arr[101][101];
  for (int i = 1; i <= 100; i++) {
    for (int j = 1; j <= 100; j++) {
      arr[i][j] = 0;
    }
  }
  int t, cnt = 0;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    for (int i = a; i < a + 10; i++) {
      for (int j = b; j < b + 10; j++) {
        arr[i][j] = 1;
      }
    }
  }
  for (int i = 1; i <= 100; i++) {
    for (int j = 1; j <= 100; j++) {
      cnt += arr[i][j];
    }
  }
  cout << cnt << "\n";
  return 0;
}