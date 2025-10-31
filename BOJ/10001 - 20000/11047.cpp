#include <iostream>
using namespace std;

int main(void) {
  int a, b, arr[10], cnt = 0;
  cin >> a >> b;
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }
  for (int i = a - 1; i >= 0; i--) {
    if (b >= arr[i]) {
      cnt += b / arr[i];
      b %= arr[i];
    }
  }
  cout << cnt << "\n";
  return 0;
}