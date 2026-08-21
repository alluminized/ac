#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string a, b;
  cin >> a >> b;
  string c = a + b;
  reverse(c.begin(), c.end());
  cout << c << "\n";
}