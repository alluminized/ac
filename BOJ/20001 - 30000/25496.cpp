#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int a, b, i = 0, cnt = 0;
  cin >> a >> b;
  vector<int> arr;
  for (int i = 0; i < b; i++) {
    int n;
    cin >> n;
    arr.push_back(n);
  }
  sort(arr.begin(), arr.end());
  while (a < 200 && i < arr.size()) {
    cnt++;
    a += arr[i++];
  }
  cout << cnt << "\n";
  return 0;
}