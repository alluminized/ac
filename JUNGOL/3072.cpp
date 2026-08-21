#include <iostream>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  while (n--) {
    int arr_a[5] = {0, 0, 0, 0, 0}, arr_b[5] = {0, 0, 0, 0, 0};
    int a, b;
    cin >> a;
    while (a--) {
      int num;
      cin >> num;
      arr_a[num]++;
    }
    cin >> b;
    while (b--) {
      int num;
      cin >> num;
      arr_b[num]++;
    }
    for (int i = 4; i >= 0; i--) {
      if (arr_a[i] > arr_b[i]) {
        cout << "A\n";
        break;
      } else if (arr_a[i] < arr_b[i]) {
        cout << "B\n";
        break;
      }
      if (i == 0)
        cout << "D\n";
    }
  }
  return 0;
}