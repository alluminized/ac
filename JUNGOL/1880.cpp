#include <iostream>
#include <string>
using namespace std;

string solve(const string& psw, const string& a) {
  string sol = "";
  for (int i = 0; i < a.length(); i++) {
    if ('A' <= a[i] && a[i] <= 'Z')
      sol += toupper(psw[a[i] - 'A']);
    else if ('a' <= a[i] && a[i] <= 'z')
      sol += psw[a[i] - 'a'];
    else
      sol += a[i];
  }
  return sol;
}

int main(void) {
  string psw, a;
  getline(cin, psw);
  getline(cin, a);
  cout << solve(psw, a) << "\n";
  return 0;
}