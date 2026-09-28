#include <iostream>
using namespace std;

int main(void) {
  int arr[103][103];
  for (int i = 1; i <= 102; i++) {
    for (int j = 1; j <= 102; j++) {
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
      if (arr[i][j]) {
        if (!arr[i - 1][j])
          cnt++;
        if (!arr[i][j - 1])
          cnt++;
        if (!arr[i + 1][j])
          cnt++;
        if (!arr[i][j + 1])
          cnt++;
      }
    }
  }
  cout << cnt << "\n";
  return 0;
}