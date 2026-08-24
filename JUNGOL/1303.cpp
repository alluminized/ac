#include <iostream>
using namespace std;

int main(void) {
  int a, b, cnt = 1;
  cin >> a >> b;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cout << cnt << " ";
      cnt++;
    }
    cout << "\n";
  }
  return 0;
}