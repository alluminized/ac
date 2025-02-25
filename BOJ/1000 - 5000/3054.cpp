#include <iostream>
using namespace std;

int main(void) {
  string a;
  cin >> a;
  char arr[5][15 * 4 + 1];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 61; j++) {
      arr[i][j] = '.';
    }
  }
  for (int i = 0; i < a.length(); i++) {
    arr[2][4 * (i) + 2] = a[i];
  }
  for (int i = 0; i < a.length(); i++) {
    arr[0][i * 4 + 2] = arr[1][i * 4 + 1] = arr[1][i * 4 + 3] = arr[2][i * 4] =
        arr[2][i * 4 + 4] = arr[3][i * 4 + 1] = arr[3][i * 4 + 3] =
            arr[4][i * 4 + 2] = '#';
  }
  for (int i = 2; i < a.length(); i += 3) {
    arr[0][i * 4 + 2] = arr[1][i * 4 + 1] = arr[1][i * 4 + 3] = arr[2][i * 4] =
        arr[2][i * 4 + 4] = arr[3][i * 4 + 1] = arr[3][i * 4 + 3] =
            arr[4][i * 4 + 2] = '*';
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < (a.length() * 4) + 1; j++) {
      cout << arr[i][j];
    }
    cout << "\n";
  }
  return 0;
}