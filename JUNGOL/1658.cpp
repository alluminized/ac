#include <iostream>
using namespace std;

int gcd(int a, int b) {
  while (b) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a, b;
  cin >> a >> b;
  cout << gcd(a, b) << "\n" << a * b / gcd(a, b) << "\n";
  return 0;
}