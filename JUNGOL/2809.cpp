#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a, arr[100001], idx = 0;
  cin >> a;
  for (int i = 1; i * i <= a; i++) {
    if (a % i == 0) {
      arr[idx++] = i;
      if (a / i != i)
        arr[idx++] = a / i;
    }
  }
  sort(arr, arr + idx);
  for (int i = 0; i < idx; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}