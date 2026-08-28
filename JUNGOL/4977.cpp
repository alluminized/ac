#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
vector<int> v2;

void conv(int a, int n) {
  if (a == 0) {
    v.push_back(0);
  } else {
    while (a > 1) {
      v.push_back(a % n);
      a /= n;
    }
    if (a == 1)
      v.push_back(1);
  }
}

void conv_s(double a, int n) {
  if (a == 0.0)
    return;
  double m = a * (double)n;
  v2.push_back((int)m);
  conv_s(m - (int)m, n);
}

int main(void) {
  double a;
  cin >> a;
  int a_i = (int)a;
  double a_s = a - (int)a;
  conv(a_i, 2);
  conv_s(a_s, 2);
  reverse(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
  }
  cout << ".";
  for (int i = 0; i < ((v2.size() < 4) ? v2.size() : 4); i++) {
    cout << v2[i];
  }
  if (v2.size() < 4) {
    for (int i = 0; i < 4 - v2.size(); i++) {
      cout << "0";
    }
  }
  cout << "\n";
  return 0;
}