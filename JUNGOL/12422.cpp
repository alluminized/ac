#include <iostream>
using namespace std;
int main(void) {
  int a, b;
  while (cin >> a >> b) {
    if (2 <= a && a <= 9 && 2 <= b && b <= 9) {
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
    } else
      cout << "INPUT ERROR!\n";
  }
  return 0;
}