#include <iostream>
using namespace std;

int main(void) {
  int a, b, c, s;
  cin >> a >> b >> c >> s;
  c += s;
  if (c >= 60) {
    b += c / 60;
    c %= 60;
  }
  if (b >= 60) {
    a += b / 60;
    b %= 60;
  }
  if (a >= 24)
    a %= 24;
  cout << a << " " << b << " " << c << "\n";
  return 0;
}