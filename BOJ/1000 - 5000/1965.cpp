#include <iostream>
using namespace std;

int arr[1001];
int dp[1001];

int main(void) {
  int res = -1;
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> arr[i];
  }
  // LIS
  for (int i = 0; i < t; i++) {
    dp[i] = 1;
    for (int j = 0; j < i; j++) {
      if (arr[j] < arr[i]) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
  }
  // LIS END
  for (int i = 0; i < t; i++) {
    if (res < dp[i])
      res = dp[i];
  }
  cout << res << "\n";
  return 0;
}