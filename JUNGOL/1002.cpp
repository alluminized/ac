#include <iostream>
using namespace std;

int gcd(int a, int b) {
  while (b) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a, arr[11], g = 0, l = 0;
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }
  g = arr[0];
  l = arr[0];
  for (int i = 1; i < a; i++) {
    g = gcd(g, arr[i]);
    l = l / gcd(l, arr[i]) * arr[i];
  }
  cout << g << " " << l << "\n";
  return 0;
}