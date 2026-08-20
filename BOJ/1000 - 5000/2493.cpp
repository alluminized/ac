#include <iostream>
#include <stack>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  cin >> a;
  stack<pair<int, int>> s;
  for (int i = 1; i <= a; i++) {
    int n;
    cin >> n;
    while (!s.empty()) {
      if (s.top().second > n) {
        cout << s.top().first << " ";
        break;
      } else {
        s.pop();
      }
    }
    if (s.empty())
      cout << "0 ";
    s.push({i, n});
  }
  return 0;
}