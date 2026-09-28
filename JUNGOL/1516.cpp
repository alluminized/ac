#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main(void) {
  while (1) {
    map<string, int> mp;
    map<string, int>::iterator it;
    string a;
    getline(cin, a);
    if (a == "END")
      return 0;
    stringstream a_sep(a);
    string lst;
    while (a_sep >> lst) {
      it = mp.find(lst);
      if (it != mp.end())
        mp[lst] += 1;
      else
        mp.insert({lst, 1});
    }
    for (it = mp.begin(); it != mp.end(); it++) {
      cout << it->first << " : " << it->second << "\n";
    }
  }
}