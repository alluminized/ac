#include <iostream>
using namespace std;

void star(int a) {
  for (int i = 1; i <= (a + 1) / 2; i++) {
    for (int j = 0; j < i - 1; j++) {
      cout << " ";
    }
    for (int j = 1; j <= (i * 2) - 1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  for (int i = a / 2; i >= 1; i--) {
    for (int j = 0; j < i - 1; j++) {
      cout << " ";
    }
    for (int j = 1; j <= (i * 2) - 1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}

int main(void) {
  int a;
  cin >> a;
  if (!(a % 2) || a < 0 || a > 100)
    cout << "INPUT ERROR!\n";
  else
    star(a);
  return 0;
}