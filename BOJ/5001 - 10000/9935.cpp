#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

int main(void) {
  string a, b, ans;
  cin >> a >> b;
  stack<char> s;
  for (int i = 0; i < a.length(); i++) {
    s.push(a[i]);
    if (a[i] == b[b.length() - 1] && s.size() >= b.length()) {
      string check;
      for (int j = 0; j < b.length(); j++) {
        check.push_back(s.top());
        s.pop();
      }
      reverse(check.begin(), check.end());
      if (check.compare(b) != 0) {
        for (int j = 0; j < check.length(); j++)
          s.push(check[j]);
      }
    }
  }
  while (!s.empty()) {
    ans.push_back(s.top());
    s.pop();
  }
  reverse(ans.begin(), ans.end());
  if (ans.empty())
    cout << "FRULA\n";
  else
    cout << ans << "\n";
  return 0;
}

/* https://howudong.tistory.com/303 에서 참고 */