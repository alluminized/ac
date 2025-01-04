#include <iostream>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int num = 0, up = 0, low = 0, h = 0;
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++) {
      if (65 <= a[i] && a[i] <= 90)
        up++;
      else if (97 <= a[i] && a[i] <= 122)
        low++;
      else if (48 <= a[i] && a[i] <= 57)
        num++;
      else if (a[i] == 45)
        h++;
    }
    if ((up <= low) && (a.length() <= 10) && (up > 0 || low > 0 || h > 0)) {
      cout << a << "\n";
      return 0;
    }
  }
  return 0;
}