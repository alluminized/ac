#include <algorithm>
#include <iostream>
using namespace std;

int arr[100001];

int main(void) {
  int cnt = 1;
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + a);
  int minp = arr[0];
  for (int i = 0; i < a; i++) {
    if (minp * 2 <= arr[i]) {
      minp = arr[i];
      cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}