#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool cmp(vector<string> a, vector<string> b) {
  if (a[1] == b[1])
    return a[0] < b[0];
  return a[1] < b[1];
}

int main(void) {
  vector<vector<string>> arr(5, vector<string>(2, ""));
  int num_arr[5];
  bool flag = 1;
  int score = 0;
  for (int i = 0; i < 5; i++) {
    string a, b;
    cin >> a >> b;
    arr[i][0] = a;
    arr[i][1] = b;
  }
  sort(arr.begin(), arr.end(), cmp);
  for (int i = 0; i < 5; i++) {
    num_arr[i] = stoi(arr[i][1]);
  }
  for (int i = 0; i < 4; i++) {
    if (arr[i][0] != arr[i + 1][0]) {
      flag = 0;
      break;
    }
  }
  if (flag) {
    if (num_arr[2] * 2 == num_arr[0] + num_arr[4])
      score = 900 + num_arr[4];  // rule 1
    else
      score = 600 + num_arr[4];  // rule 4
  } else {
    bool num_flag_four = 1;
    for (int i = 0; i < 3; i++) {
      if (num_arr[i] != num_arr[i + 1]) {
        num_flag_four = 0;
        break;
      }
    }
    if (num_flag_four) {
      score = 800 + num_arr[2];  // rule 2
    } else {
      if ((num_arr[0] == num_arr[1] && num_arr[1] == num_arr[2] &&
           num_arr[3] == num_arr[4]) ||
          (num_arr[0] == num_arr[1] && num_arr[2] == num_arr[3] &&
           num_arr[3] == num_arr[4])) {
        if (num_arr[0] == num_arr[1] && num_arr[1] == num_arr[2] &&
            num_arr[3] == num_arr[4]) {
          score = 700 + num_arr[0] * 10 + num_arr[4];
        } else
          score = 700 + num_arr[0] + num_arr[4] * 10;
        // rule 3
      } else {
        bool num_flag_three = 0;
        for (int i = 0; i <= 2; i++) {
          if (num_arr[i] == num_arr[i + 1] &&
              num_arr[i + 1] == num_arr[i + 2]) {
            num_flag_three = 1;
            break;
          }
        }
        if (num_flag_three) {
          for (int i = 0; i <= 2; i++) {
            if (num_arr[i] == num_arr[i + 1] &&
                num_arr[i + 1] == num_arr[i + 2]) {
              score = num_arr[i + 1] + 400;  // rule 6
              break;
            }
          }
        } else {
          int num_flag_two = 0;
          int checker[3] = {0, 0, 0};
          for (int i = 0; i < 4; i++) {
            if (num_arr[i] == num_arr[i + 1]) {
              num_flag_two++;
              checker[num_flag_two] = num_arr[i];
            }
          }
          if (num_flag_two == 2) {
            score = 300 + max(checker[1], checker[2]) * 10 +
                    min(checker[1], checker[2]);
            // rule 7
          } else if (num_flag_two == 1) {
            score = 200 + checker[1];
            // rule 8
          } else {
            score =
                100 + max(num_arr[0],
                          max(num_arr[1],
                              max(num_arr[2], max(num_arr[3], num_arr[4]))));
            // rule 9
          }
        }
      }
    }
    if (num_arr[2] * 2 == num_arr[0] + num_arr[4])
      score = 500 + num_arr[4];  // rule 5
  }
  cout << score << "\n";
  return 0;
}