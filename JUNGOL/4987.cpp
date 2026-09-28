#include <iostream>
using namespace std;

int main(void) {
  string a, t;
  cin >> a >> t;
  while (a.find(t) != string::npos) {
    a.erase(a.find(t), t.length());
  }
  cout << a << "\n";
  return 0;
}