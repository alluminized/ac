#include <iostream>
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++) {
      if (i == 1 || i == a) {
        for (int i = 0; i < a; i++) {
          cout << "#";
        }
      } else {
        for (int i = 1; i <= a; i++) {
          if (i == 1 || i == a) {
            cout << "#";
          } else
            cout << "J";
        }
      }
      cout << "\n";
    }
    cout << "\n";
  }
  return 0;
}