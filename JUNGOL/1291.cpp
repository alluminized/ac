#include <iostream>
using namespace std;
int main(void) {
  int a, b;
  while (cin >> a >> b) {
    if (2 <= a && a <= 9 && 2 <= b && b <= 9) {
      if (a < b) {
        for (int i = 1; i <= 9; i++) {
          for (int j = a; j <= b; j++) {
            if (i * j < 10)
              cout << j << " * " << i << " =  " << i * j << "   ";
            else
              cout << j << " * " << i << " = " << i * j << "   ";
          }
          cout << "\n";
        }
      } else {
        for (int i = 1; i <= 9; i++) {
          for (int j = a; j >= b; j--) {
            if (i * j < 10)
              cout << j << " * " << i << " =  " << i * j << "   ";
            else
              cout << j << " * " << i << " = " << i * j << "   ";
          }
          cout << "\n";
        }
      }
    } else
      cout << "INPUT ERROR!\n";
  }
  return 0;
}