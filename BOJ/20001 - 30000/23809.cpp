#include <iostream>
using namespace std;

int main(void) {
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    for (int i = 0; i < a; i++) {
      cout << "@";
    }
    for (int i = 0; i < 3; i++) {
      for (int i = 0; i < a; i++) {
        cout << " ";
      }
    }
    for (int i = 0; i < a; i++) {
      cout << "@";
    }
    cout << "\n";
  }
  for (int i = 0; i < a; i++) {
    for (int i = 0; i < a; i++) {
      cout << "@";
    }
    for (int i = 0; i < 2; i++) {
      for (int i = 0; i < a; i++) {
        cout << " ";
      }
    }
    for (int i = 0; i < a; i++) {
      cout << "@";
    }
    cout << "\n";
  }
  for (int i = 0; i < a; i++) {
    for (int i = 0; i < a * 3; i++) {
      cout << "@";
    }
    cout << "\n";
  }
  for (int i = 0; i < a; i++) {
    for (int i = 0; i < a; i++) {
      cout << "@";
    }
    for (int i = 0; i < 2; i++) {
      for (int i = 0; i < a; i++) {
        cout << " ";
      }
    }
    for (int i = 0; i < a; i++) {
      cout << "@";
    }
    cout << "\n";
  }
  for (int i = 0; i < a; i++) {
    for (int i = 0; i < a; i++) {
      cout << "@";
    }
    for (int i = 0; i < 3; i++) {
      for (int i = 0; i < a; i++) {
        cout << " ";
      }
    }
    for (int i = 0; i < a; i++) {
      cout << "@";
    }
    cout << "\n";
  }
}