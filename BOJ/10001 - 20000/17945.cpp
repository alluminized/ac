#include <iostream>
using namespace std;

int main(void) {
  int a, b;
  cin >> a >> b;
  for (int i = -1000; i <= 1000; i++) {
    for (int j = -1000; j <= 1000; j++) {
      if ((i + j == a * (-2)) && (i * j == b)) {
        if (i == j) {
          cout << i << "\n";
        } else {
          cout << min(i, j) << " " << max(i, j) << "\n";
        }
        return 0;
      }
    }
  }
}