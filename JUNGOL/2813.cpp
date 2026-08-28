#include <iostream>
using namespace std;

int arr[10000001];

void prime(int a) {
  arr[0] = 1;
  arr[1] = 1;
  for (int i = 2; i <= a / i; i++) {
    if (!arr[i]) {
      for (int j = i * i; j <= a; j += i)
        arr[j] = 1;
    }
  }
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a, b, cnt = 0;
  cin >> a >> b;
  prime(b);
  for (int i = a; i <= b; i++) {
    if (!arr[i])
      cnt++;
  }
  cout << cnt << "\n";
  return 0;
}