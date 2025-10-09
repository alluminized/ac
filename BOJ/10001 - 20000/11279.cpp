#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  priority_queue<int, vector<int>> q;
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    if (a != 0) {
      q.push(a);
    } else {
      if (!q.empty()) {
        cout << q.top() << "\n";
        q.pop();
      } else
        cout << 0 << "\n";
    }
  }
  return 0;
}