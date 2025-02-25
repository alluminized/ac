#include <iostream>
using namespace std;

int main(void) {
  for (int cnt = 1;; cnt++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0 && b == 0 && c == 0 && d == 0)
      break;
    if (b != c) {
      int dum;
      for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
          cin >> dum;
        }
      }
      for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
          cin >> dum;
        }
      }
      cout << "Case #" << cnt << ":\nundefined\n";
    } else {
      long long arr1[101][101] = {
          0,
      };
      for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
          cin >> arr1[i][j];
        }
      }
      long long arr2[101][101] = {
          0,
      };
      for (int k = 0; k < c; k++) {
        for (int l = 0; l < d; l++) {
          cin >> arr2[k][l];
        }
      }
      long long arr3[101][101] = {
          0,
      };
      for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
          for (int k = 0; k < c; k++) {
            arr3[i][j] += arr1[i][k] * arr2[k][j];
          }
        }
      }
      cout << "Case #" << cnt << ":\n";
      for (int i = 0; i < a; i++) {
        cout << "| ";
        for (int j = 0; j < d; j++) {
          cout << arr3[i][j] << " ";
        }
        cout << "|\n";
      }
    }
  }
  return 0;
}