#include <iostream>
#include <vector>
using namespace std;

vector<int> perm;

vector<int> sb(string a, int s, int b) {
  vector<int> new_perm;
  for (int i = 0; i < perm.size(); i++) {
    int cs = 0, cb = 0;
    string perm_i = to_string(perm[i]);
    for (int j = 0; j < 3; j++) {
      if (a[j] == perm_i[j]) {
        cs++;
      } else if (perm_i.find(a[j]) != string::npos) {
        cb++;
      }
    }
    if (cs == s && cb == b)
      new_perm.push_back(perm[i]);
  }
  return new_perm;
}

int main(void) {
  int t;
  for (int i = 123; i <= 987; i++) {
    string is = to_string(i);
    if (((is[0] != is[1] && is[1] != is[2]) && is[2] != is[0]) &&
        (is[0] != '0' && is[1] != '0') && is[2] != '0')
      perm.push_back(i);
  }
  cin >> t;
  while (t--) {
    string chk;
    int s, b;
    cin >> chk >> s >> b;
    perm = move(sb(chk, s, b));
  }
  cout << perm.size() << "\n";
  return 0;
}