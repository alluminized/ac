#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int a, n;
  vector<int> arr;
  arr.push_back(-1);
  cin >> a;
  for (int i = 0; i < a; i++) {
    cin >> n;
    if (arr.back() < n) {
      arr.push_back(n);
    } else {
      arr[lower_bound(arr.begin(), arr.end(), n) - arr.begin()] = n;
    }
  }
  cout << a - (arr.size() - 1) << "\n";
  return 0;
}