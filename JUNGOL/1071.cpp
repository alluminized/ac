#include <iostream>
using namespace std;
int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int arr[41], n, s, y = 0, b = 0;
  for (int i = 0; i < 41; i++)
    arr[i] = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr[i] = a;
  }
  cin >> s;
  for (int i = 0; i < n; i++) {
    if (s % arr[i] == 0 && arr[i] <= s)
      y += arr[i];
    if (arr[i] % s == 0 && arr[i] >= s)
      b += arr[i];
  }
  cout << y << "\n" << b << "\n";
  return 0;
}