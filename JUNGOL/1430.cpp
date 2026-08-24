#include <iostream>
#include <string>
using namespace std;

int main(void) {
  int a, b, c, arr[17];
  for (int i = 0; i < 17; i++)
    arr[i] = 0;
  cin >> a >> b >> c;
  string ans = to_string(a * b * c);
  for (int i = 0; i < ans.length(); i++)
    arr[ans[i] - '0']++;
  for (int i = 0; i < 10; i++)
    cout << arr[i] << "\n";
  return 0;
}