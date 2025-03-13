#include <iostream>
using namespace std;

char tex[200][200];

int main(void) {
  int ba, bb;
  int ta, tb;
  cin >> ba >> bb >> ta >> tb;
  for (int i = 0; i < ta; i++) {
    for (int j = 0; j < tb; j++) {
      cin >> tex[i][j];
    }
  }
  for (int i = 0; i < ba; i++) {
    for (int j = 0; j < bb; j++) {
      cout << tex[min(i, ta - 1)][min(j, tb - 1)];
    }
    cout << "\n";
  }
  for (int i = 0; i < ba; i++) {
    for (int j = 0; j < bb; j++) {
      cout << tex[i % ta][j % tb];
    }
    cout << "\n";
  }
  for (int i = 0; i < ba; i++) {
    for (int j = 0; j < bb; j++) {
      if (i / ta % 2 == 0 && j / tb % 2 == 0)
        cout << tex[i % ta][j % tb];
      else
        cout << tex[ta - 1 - (i % ta)][tb - 1 - (j % tb)];
    }
    cout << "\n";
  }
}