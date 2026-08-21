#include <iostream>
using namespace std;
int main(void) {
  int a, b;
  while (cin >> a >> b) {
    if (2 <= a && a <= 9 && 2 <= b && b <= 9) {
      if (a < b) {
        for (int i = a; i <= b; i++) {
          for (int j = 1; j <= 9; j++) {
            if (i * j < 10)
              cout << i << " * " << j << " =  " << i * j;
            else
              cout << i << " * " << j << " = " << i * j;
            if (j == 3 || j == 6 || j == 9)
              cout << "\n";
            else
              cout << "   ";
          }
          cout << "\n";
        }
      } else {
        for (int i = a; i >= b; i--) {
          for (int j = 1; j <= 9; j++) {
            if (i * j < 10)
              cout << i << " * " << j << " =  " << i * j;
            else
              cout << i << " * " << j << " = " << i * j;
            if (j == 3 || j == 6 || j == 9)
              cout << "\n";
            else
              cout << "   ";
          }
          cout << "\n";
        }
      }
    } else
      cout << "INPUT ERROR!\n";
  }
  return 0;
}