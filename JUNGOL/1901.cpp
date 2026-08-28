#include <iostream>
using namespace std;

int prime(int a) {
  if (a == 1)
    return 0;
  for (int i = 2; i <= a / i; i++) {
    if (a % i == 0)
      return 0;
  }
  return 1;
}

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    int f = 0;
    for (int i = 0; !f; i++) {
      if (a == 1) {
        cout << 2;
        break;
      }
      if (prime(a)) {
        cout << a;
        break;
      }
      if (prime(a - i)) {
        cout << a - i << " ";
        f++;
      }
      if (prime(a + i)) {
        cout << a + i << " ";
        f++;
      }
    }
    cout << "\n";
  }
  return 0;
}