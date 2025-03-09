#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    unsigned long long ai = 0, bi = 0;
    bool A = 1, B = 1;
    string a, b;
    cin >> a >> b;
    if (a[0] == '-') {
      ai = (unsigned long long)(a[1] - '0') * 1000000000;
      A = 0;
    } else {
      ai = (unsigned long long)(a[0] - '0') * 1000000000;
    }
    if (b[0] == '-') {
      bi = (unsigned long long)(b[1] - '0') * 1000000000;
      B = 0;
    } else {
      bi = (unsigned long long)(b[0] - '0') * 1000000000;
    }
    if (A == 0) {
      ai += stoull(a.substr(3, 9));
    } else {
      ai += stoull(a.substr(2, 9));
    }
    if (B == 0) {
      bi += stoull(b.substr(3, 9));
    } else {
      bi += stoull(b.substr(2, 9));
    }
    string str = to_string((unsigned long long)(ai * bi));
    while (str.length() < 18)
      str = "0" + str;
    if ((A ^ B) && (a != "0.000000000" && b != "0.000000000"))
      cout << "-";
    if (str.length() > 18)
      cout << str.substr(0, str.length() - 18) << "."
           << str.substr(str.length() - 18, 18);
    else
      cout << "0." << str;
    cout << "\n";
  }
  return 0;
}