#include <iostream>
using namespace std;

int main(void) {
  int dp[55];
  dp[0] = 1;
  dp[1] = 1;
  for (int i = 2; i < 55; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  int a, b;
  cin >> a >> b;
  for (int i = 1; i < 100000; i++) {
    for (int j = i; j < 100000; j++) {
      if ((dp[a - 3] * i) + (dp[a - 2] * j) == b) {
        cout << i << "\n" << j << "\n";
        return 0;
      }
    }
  }
}