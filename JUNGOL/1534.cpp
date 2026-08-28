#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> v;

void conv(int a, int n) {
  while (a > 1) {
    v.push_back(a % n);
    a /= n;
  }
  if (a == 1)
    v.push_back(1);
}

int main(void) {
  string v_d = "0123456789ABCDEF";
  int a, b;
  cin >> a >> b;
  conv(a, b);
  reverse(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++) {
    cout << v_d[v[i]];
  }
  cout << "\n";
  return 0;
}