#include <iostream>
using namespace std;

int main(void) {
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++) {
    if (i % 2) {
      for (int j = 1; j <= a; j++)
        cout << j << " ";
    } else {
      for (int j = a; j >= 1; j--)
        cout << j << " ";
    }
    cout << "\n";
  }
  return 0;
}