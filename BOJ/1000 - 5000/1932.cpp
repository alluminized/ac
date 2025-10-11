#include <iostream>
using namespace std;

int arr[501][501];

int main(void) {
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= i; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = a - 1; i >= 1; i--) {
    for (int j = 1; j <= a - 1; j++) {
      arr[i][j] = max(arr[i][j] + arr[i + 1][j], arr[i][j] + arr[i + 1][j + 1]);
    }
  }
  cout << arr[1][1] << "\n";
  return 0;
}