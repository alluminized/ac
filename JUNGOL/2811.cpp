#include <iostream>
using namespace std;

int prime(int a) {
  if (a == 1)
    return 2;
  for (int i = 2; i <= a / i; i++) {
    if (a % i == 0)
      return 0;
  }
  return 1;
}

int main(void) {
  for (int i = 0; i < 5; i++) {
    int a;
    cin >> a;
    cout << ((prime(a) == 2)
                 ? "number one\n"
                 : ((prime(a) == 1) ? "prime number\n" : "composite number\n"));
  }
  return 0;
}