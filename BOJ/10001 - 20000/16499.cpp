#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main(void) {
  set<string> str;
  int t;
  cin >> t;
  while (t--) {
    string a;
    cin >> a;
    sort(a.begin(), a.end());
    str.insert(a);
  }
  cout << str.size() << "\n";
  return 0;
}