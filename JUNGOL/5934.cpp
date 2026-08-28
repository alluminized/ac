#include <iostream>
using namespace std;

void star(int a) {
  int rp = (a + 1) / 2, sp = (a - 1) / 2;
  for (int i = rp; i >= 1; i--) {
    for (int j = 0; j < rp - i; j++) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  for (int i = 2; i <= rp; i++) {
    for (int j = 0; j < sp; j++) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}

int main(void) {
  int a;
  cin >> a;
  if ((a % 2) && 0 < a && a < 100)
    star(a);
  else
    cout << "INPUT ERROR!\n";
  return 0;
}