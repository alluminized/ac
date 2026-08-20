#include <iostream>
using namespace std;

int n;
int arr[107][107];

void construct() {
  int a = 1;
  int b = n / 2 + 1;
  for (int i = 1; i <= n * n; i++) {
    arr[a][b] = i;
    if (i % n == 0)
      a++;
    else {
      a--;
      b--;
      if (a == 0)
        a = n;
      if (b == 0)
        b = n;
    }
  }
}

int main(void) {
  cin >> n;
  construct();
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}