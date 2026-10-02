#include <iostream>
using namespace std;

int main(void) {
  int arr[5][5], cnt = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 1; i <= 25; i++) {
    int cnt = 0;
    int a;
    cin >> a;
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k < 5; k++) {
        if (arr[j][k] == a)
          arr[j][k] = 0;
      }
    }
    for (int j = 0; j < 5; j++) {
      if (arr[j][0] == arr[j][1] && arr[j][1] == arr[j][2] &&
          arr[j][2] == arr[j][3] && arr[j][3] == arr[j][4]) {
        cnt++;
      }
      if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] &&
          arr[2][j] == arr[3][j] && arr[3][j] == arr[4][j]) {
        cnt++;
      }
    }
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] &&
        arr[2][2] == arr[3][3] && arr[3][3] == arr[4][4]) {
      cnt++;
    }
    if (arr[0][4] == arr[1][3] && arr[1][3] == arr[2][2] &&
        arr[2][2] == arr[3][1] && arr[3][1] == arr[4][0]) {
      cnt++;
    }
    if (cnt >= 3) {
      cout << i << "\n";
      return 0;
    }
  }
}