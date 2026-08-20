#include <iostream>
using namespace std;

int main(void) {
  int a, b;
  cin >> a >> b;
  if (a < 2) {
    cout << "Before";
  } else if (a == 2) {
    if (b == 18)
      cout << "Special";
    else if (b < 18)
      cout << "Before";
    else if (b > 18)
      cout << "After";
  } else if (a > 2)
    cout << "After";
  return 0;
}