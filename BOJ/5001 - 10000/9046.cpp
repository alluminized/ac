#include <iostream>
using namespace std;

int main(void) {
  string a;
  getline(cin, a);
  int ia = stoi(a);
  while (ia--) {
    getline(cin, a);
    int max_in = 0, max_cnt = -1, d = 0;
    int arr[27] = {
        0,
    };
    string s = a.c_str();
    for (int i = 0; i < a.length(); i++) {
      arr[s[i] - 97]++;
    }
    for (int i = 0; i <= 26; i++) {
      if (max_cnt < arr[i]) {
        max_in = i;
        max_cnt = arr[i];
        d = 0;
      } else if (max_cnt == arr[i]) {
        d = 1;
      }
    }
    if (d == 1)
      cout << "?\n";
    else
      cout << (char)(max_in + 97) << "\n";
  }
}