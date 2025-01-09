#include <iostream>
using namespace std;

int main(void) {
  int a;
  cin >> a;
  if (a & 1) {
    for (int i = 0; i < a; i++) {
      cout << "*";
    }
    cout << "\n";
    a /= 2;
    a += 1;
    for (int i = 0; i < a; i++) {
      for (int q = 1; q < a - i; q++) {
        cout << " ";
      }
      for (int j = 0; j <= i; j++) {
        if (j == 0)
          cout << "* ";
        else if (j == i)
          cout << "*";
        else
          cout << "  ";
      }
      cout << "\n";
    }
  } else
    cout << "I LOVE CBNU\n";
  return 0;
}