#include <iostream>
using namespace std;
int main(void) {
  int a, b;
  cin >> a >> b;
  if (a < b) {
    for (int i = a; i <= b; i++) {
      for (int j = 1; j <= 9; j++)
        cout << i << " * " << j << " = " << i * j << "\n";
      cout << "\n";
    }
  } else {
    for (int i = a; i >= b; i--) {
      for (int j = 1; j <= 9; j++)
        cout << i << " * " << j << " = " << i * j << "\n";
      cout << "\n";
    }
  }
  return 0;
}