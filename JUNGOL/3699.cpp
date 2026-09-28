#include <iostream>
#include <map>

using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    map<string, int> mp;
    map<string, int>::iterator it;
    int a, cnt = 1;
    cin >> a;
    while (a--) {
      string sf, ss;
      cin >> sf >> ss;
      it = mp.find(ss);
      if (it != mp.end())
        mp[ss]++;
      else
        mp.insert({ss, 1});
    }
    for (it = mp.begin(); it != mp.end(); it++) {
      cnt *= it->second + 1;
    }
    cout << cnt - 1 << "\n";
  }
  return 0;
}