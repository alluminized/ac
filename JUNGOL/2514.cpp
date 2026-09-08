#include <iostream>
#include <vector>
using namespace std;

pair<int, int> solve(const string& a) {
  int koi = 0, ioi = 0;
  for (int i = 0; i < a.length() - 2; i++) {
    if (a[i] == 'K' && a[i + 1] == 'O' && a[i + 2] == 'I')
      koi++;
    if (a[i] == 'I' && a[i + 1] == 'O' && a[i + 2] == 'I')
      ioi++;
  }
  return {koi, ioi};
}

int main(void) {
  string a;
  cin >> a;
  cout << solve(a).first << "\n" << solve(a).second << "\n";
  return 0;
}