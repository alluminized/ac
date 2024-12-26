#include <iostream>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    double n;
    cin >> n;
    string a;
    getline(cin, a);
    for (int i = 1; i < a.length(); i += 2) {
      if (a[i] == '@')
        n *= 3;
      else if (a[i] == '%')
        n += 5;
      else if (a[i] == '#')
        n -= 7;
    }
    cout.precision(2);
    cout << fixed << n << "\n";
  }
}