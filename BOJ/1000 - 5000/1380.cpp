#include <iostream>
using namespace std;

int main(void) {
  for (int cnt = 1;; cnt++) {
    int arr[101];
    string arrs[101];
    int a;
    cin >> a;
    if (a == 0)
      break;
    string str;
    cin.ignore();
    for (int i = 1; i <= a; i++) {
      getline(cin, str);
      arrs[i] = str;
      arr[i] = 2;
    }
    for (int i = 0; i < 2 * a - 1; i++) {
      int n;
      string g;
      cin >> n >> g;
      arr[n]--;
    }
    for (int i = 1; i <= a; i++) {
      if (arr[i]) {
        cout << cnt << " " << arrs[i] << "\n";
      }
    }
  }
  return 0;
}