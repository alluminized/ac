#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

char arr[16][16];

string solve() {
  string st = "";
  for (int j = 0; j < 15; j++) {
    for (int i = 0; i < 5; i++) {
      if (arr[i][j] != 0)
        st += arr[i][j];
    }
  }
  return st;
}

int main(void) {
  for (int i = 0; i < 5; i++) {
    string a;
    cin >> a;
    for (int j = 0; j < a.length(); j++) {
      arr[i][j] = a[j];
    }
  }
  cout << solve() << "\n";
  return 0;
}