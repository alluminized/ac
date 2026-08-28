#include <iostream>
using namespace std;

void star(int a, int b) {
  if (b == 1) {
    for (int i = 1; i <= a; i++) {
      for (int j = 1; j <= i; j++)
        cout << "*";
      cout << "\n";
    }
  } else if (b == 2) {
    for (int i = a; i >= 1; i--) {
      for (int j = i; j >= 1; j--)
        cout << "*";
      cout << "\n";
    }
  } else if (b == 3) {
    int sp = a - 1, st = 1;
    for (int i = 0; i < a; i++) {
      for (int i = 1; i <= sp; i++)
        cout << " ";
      for (int i = 1; i <= st; i++)
        cout << "*";
      sp--;
      st += 2;
      cout << "\n";
    }
  }
}

int main(void) {
  int a, b;
  cin >> a >> b;
  if (a > 100 || a < 1 || b > 4 || b < 1) {
    cout << "INPUT ERROR!\n";
    return 0;
  }
  star(a, b);
  return 0;
}