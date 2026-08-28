#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<long long> v;

long long conv_f(string a, long long n) {
  if (a == "0")
    return 0;
  long long res = 0;
  for (int i = 0; i < a.length(); i++) {
    if ('0' <= a[i] && a[i] <= '9')
      res = res * n + (a[i] - '0');
    else
      res = res * n + (a[i] - 55);
  }
  return res;
}

void conv_s(long long a, long long n) {
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

int main(void) {
  string digit = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  while (1) {
    long long a, b;
    string n;
    cin >> a >> n >> b;
    if (a == 0)
      return 0;
    conv_s(conv_f(n, a), b);
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
      cout << digit[v[i]];
    }
    cout << "\n";
    while (!v.empty())
      v.pop_back();
  }
  return 0;
}