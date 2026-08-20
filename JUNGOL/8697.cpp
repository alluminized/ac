#include <iostream>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  while (n--) {
    int a;
    cin >> a;
    if (0 <= a % 25 && a % 25 <= 16) {
      cout << "ONLINE\n";
    } else {
      cout << "OFFLINE\n";
    }
  }
  return 0;
}