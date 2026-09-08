#include <iostream>
using namespace std;

int solve(string a) {
  int cnt = 10;
  for (int i = 0; i < a.length() - 1; i++) {
    if (a[i] != a[i + 1])
      cnt += 10;
    else
      cnt += 5;
  }
  return cnt;
}

int main(void) {
  string a;
  cin >> a;
  cout << solve(a) << "\n";
  return 0;
}