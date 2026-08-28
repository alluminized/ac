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
  int a, b, sum = 0, s = 0;
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    if (prime(i)) {
      if (sum == 0)
        s = i;
      sum += i;
    }
  }
  if (sum == 0)
    cout << -1 << "\n";
  else
    cout << sum << "\n" << s << "\n";
  return 0;
}