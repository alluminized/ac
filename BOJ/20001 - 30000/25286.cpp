#include <iostream>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    if (b == 1)
      cout << a - 1 << " 12 31\n";
    else if (b == 5 || b == 7 || b == 10 || b == 12)
      cout << a << " " << b - 1 << " 30\n";
    else if (b == 2 || b == 4 || b == 6 || b == 8 || b == 9 || b == 11)
      cout << a << " " << b - 1 << " 31\n";
    else if (b == 3) {
      if ((a % 4 == 0 && a % 100 > 0) || a % 400 == 0)
        cout << a << " " << b - 1 << " 29\n";
      else
        cout << a << " " << b - 1 << " 28\n";
    }
  }
  return 0;
}