#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a, n, t;
  cin >> t;
  while (t--) {
    cin >> a;
    vector<int> arr;
    arr.push_back(-1);
    for (int i = 0; i < a; i++) {
      cin >> n;
      if (arr.back() < n) {
        arr.push_back(n);
      } else {
        arr[lower_bound(arr.begin(), arr.end(), n) - arr.begin()] = n;
      }
    }
    cout << arr.size() - 1 << "\n";
  }
  return 0;
}