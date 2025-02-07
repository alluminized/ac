#include <iostream>
using namespace std;

int arr[1001][1001] = {
    0,
};
int t;
int count[101] = {
    0,
};

int main(void) {
  cin >> t;
  for (int n = 1; n <= t; n++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = a; i < c + a; i++) {
      for (int j = b; j < d + b; j++) {
        arr[j][i] = n;
      }
    }
  }
  for (int i = 0; i < 1000; i++) {
    for (int j = 0; j < 1000; j++) {
      if (arr[j][i])
        count[arr[j][i]]++;
    }
  }
  for (int i = 1; i <= t; i++)
    cout << count[i] << "\n";
}