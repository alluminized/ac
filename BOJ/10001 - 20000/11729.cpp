#include <cmath>
#include <iostream>
using namespace std;

/**  namu: n번째 링을 세번째 기둥으로 옮기기 위해선 1부터 n-1까지의 링을 모두
 * 세번째 기둥이 아닌 다른 기둥으로 옮겨야 한다. 그렇다면 1부터 n-1까지의 링을
 * 어떻게 두번째 기둥으로 옮길까? 당연히 1부터 n-2까지의 링을 모두 두번째 링이
 * 아닌 다른 기둥으로 옮겨두는 것이다.
 */

void hanoi(int num, int s, int m, int e) {
  if (num == 1) {
    cout << s << " " << e << "\n";
    return;
  }
  hanoi(num - 1, s, e, m);
  cout << s << " " << e << "\n";
  hanoi(num - 1, m, s, e);
}

int main(void) {
  int a;
  cin >> a;
  cout << (int)pow(2, a) - 1 << "\n";
  hanoi(a, 1, 2, 3);
  return 0;
}