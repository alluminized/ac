#include <iostream>
using namespace std;

int main(void) {
  int a, b;
  cin >> a >> b;
  for (int i = 1; i <= b; i++) {
    if (a % 2)
      a = (a * 2) ^ 6;
    else
      a = (a / 2) ^ 6;
  }
  cout << a << "\n";
  return 0;
}