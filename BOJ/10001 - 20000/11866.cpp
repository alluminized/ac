#include <iostream>
#include <queue>
using namespace std;

int main(void) {
  int a, b;
  queue<int> q;
  cin >> a >> b;
  for (int i = 1; i <= a; i++) {
    q.push(i);
  }
  cout << "<";
  while (q.empty() == 0) {
    for (int i = 1; i < b; i++) {
      q.push(q.front());
      q.pop();
    }
    cout << q.front();
    if (q.size() != 1)
      cout << ", ";
    q.pop();
  }
  cout << ">\n";
  return 0;
}