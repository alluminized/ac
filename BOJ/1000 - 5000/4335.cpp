#include <iostream>
using namespace std;

int main(void) {
  int arr[11];
  int a;
  string s;
  while (1) {
    cin >> a;
    if (a == 0)
      break;
    cin.ignore();
    getline(cin, s);
    if (s == "too high") {
      for (int i = 1; i <= a; i++) {
        arr[i] = 0;
      }
      for (int i = a; i <= 10; i++) {
        arr[i] = 1;
      }
    } else if (s == "too low") {
      for (int i = 1; i <= a; i++) {
        arr[i] = 1;
      }
      for (int i = a; i <= 10; i++) {
        arr[i] = 0;
      }
    } else if (s == "right on") {
      if (arr[a] == 1)
        cout << "Stan is dishonest" << "\n ";
      else
        cout << "Stan may be honest" << "\n";
    }
  }
  return 0;
}