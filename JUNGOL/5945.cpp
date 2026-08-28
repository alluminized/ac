#include <iostream>
using namespace std;

int arr[55][55];

void num(int a) {
  int cnt = 1;
  for (int i = 1; i <= a; i++) {
    if (i % 2) {
      for (int j = 1; j <= i; j++) {
        arr[i][j] = cnt;
        cnt++;
      }
    } else {
      for (int j = i; j >= 1; j--) {
        arr[i][j] = cnt;
        cnt++;
      }
    }
  }
}

int main(void) {
  int a;
  cin >> a;
  if (!(a % 2) || a < 1 || a > 50) {
    cout << "INPUT ERROR!\n";
    return 0;
  }
  num(a);
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= i; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}