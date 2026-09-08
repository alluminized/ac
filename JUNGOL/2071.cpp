#include <iostream>
using namespace std;

int arr[31][31];

void con() {
  for (int i = 0; i < 31; i++) {
    arr[i][0] = 1;
  }
  for (int i = 0; i < 31; i++) {
    arr[i][i] = 1;
  }
  for (int i = 0; i < 31; i++) {
    for (int j = 0; j <= i; j++) {
      if (arr[i][j] != 1) {
        arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
      }
    }
  }
}

void print(int a, int n) {
  if (n == 1) {
    for (int i = 0; i < a; i++) {
      for (int j = 0; j <= i; j++) {
        cout << arr[i][j] << " ";
      }
      cout << "\n";
    }
  }
  if (n == 2) {
    int sp = 0;
    for (int i = a - 1; i >= 0; i--) {
      for (int i = 0; i < sp; i++)
        cout << " ";
      sp++;
      for (int j = 0; j <= i; j++) {
        cout << arr[i][j] << " ";
      }
      cout << "\n";
    }
  }
  if (n == 3) {
    for (int j = a - 1; j >= 0; j--) {
      for (int i = a - 1; i >= j; i--) {
        cout << arr[i][j] << " ";
      }
      cout << "\n";
    }
  }
}

int main(void) {
  con();
  int a, n;
  cin >> a >> n;
  print(a, n);
  return 0;
}