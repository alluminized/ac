#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
struct part {
  int a, b, c, n;
};

vector<part> arr;

bool comp(part a, part b) {
  if (a.a == b.a) {
    if (a.b == b.b) {
      return a.c < b.c;
    }
    return a.b < b.b;
  }
  return a.a > b.a;
}

int main(void) {
  int a;
  cin >> a;
  arr.resize(a);
  for (int i = 0; i < a; i++) {
    cin >> arr[i].a >> arr[i].b >> arr[i].c;
    arr[i].n = i + 1;
  }
  sort(arr.begin(), arr.end(), comp);
  cout << arr[0].n << "\n";
  return 0;
}