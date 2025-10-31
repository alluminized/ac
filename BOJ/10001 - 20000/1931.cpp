#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct location {
  int a;
  int b;
};

bool comp(location a, location b) {
  if (a.b == b.b) {
    return a.a < b.a;
  } else {
    return a.b < b.b;
  }
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  location arr[100001];
  for (int i = 0; i < t; i++) {
    cin >> arr[i].a >> arr[i].b;
  }
  sort(arr, arr + t, comp);
  int pnt = 0, cnt = 0;
  for (int i = 0; i < t; i++) {
    if (pnt >= arr[i].b)
      pnt = arr[i].b;
    if (arr[i].a >= pnt) {
      cnt++;
      pnt = arr[i].b;
    }
  }
  cout << cnt << "\n";
  return 0;
}