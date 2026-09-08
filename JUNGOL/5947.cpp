#include <iostream>
using namespace std;

void triangle(int a) {
  for (int i = 1; i <= a / 2 + 1; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << "\n";
  }
  for (int i = a / 2; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  int a;
  cin >> a;
  if (a > 50 || a < 1 || !(a % 2)) {
    cout << "INPUT ERROR!\n";
    return 0;
  }
  triangle(a);
  return 0;
}