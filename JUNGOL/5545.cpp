#include <cmath>
#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
  while (b) {
    long long r = a % b;
    a = b;
    b = r;
  }
  return a;
}

long long lcm(long long a, long long b) {
  return a * b / gcd(a, b);
}

int main(void) {
  long long p, v, a;
  cin >> p >> v >> a;
  long long p_fail = a / (p + 1);
  long long v_fail = a / (v + 1);
  long long all_fail = a / lcm(p + 1, v + 1);
  long long ac = a - p_fail - v_fail + all_fail;
  cout << ac << " " << all_fail << " " << v_fail - all_fail << " "
       << p_fail - all_fail << "\n";
  return 0;
}