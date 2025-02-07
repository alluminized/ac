#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int a;
  long long cnt = 0;
  cin >> a;
  vector<int> arr;
  for (int i = 0; i < a; i++) {
    int t;
    cin >> t;
    arr.push_back(t);
  }
  sort(arr.begin(), arr.end(), greater<>());
  for (int i = 0; i < a; i++) {
    if (arr[i] - i > 0)
      cnt += arr[i] - i;
  }
  cout << cnt << "\n";
  return 0;
}