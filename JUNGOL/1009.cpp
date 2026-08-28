#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string a;
  while (1) {
    int cnt = 0;
    cin >> a;
    if (a == "0")
      return 0;
    for (int i = 0; i < a.length(); i++) {
      cnt += (int)a[i] - '0';
    }
    reverse(a.begin(), a.end());
    a.erase(0, a.find_first_not_of('0'));
    cout << a << " " << cnt << "\n";
  }
  return 0;
}