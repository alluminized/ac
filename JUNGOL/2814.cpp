#include <iostream>
#include <string>
using namespace std;

int conv(string a) {
  int res = 0;
  for (int i = 0; i < a.length(); i++) {
    res = res * 2 + (a[i] - '0');
  }
  return res;
}

int main(void) {
  string a;
  cin >> a;
  cout << conv(a) << "\n";
  return 0;
}