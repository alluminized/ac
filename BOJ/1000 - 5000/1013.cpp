#include <iostream>
#include <string>
#include <regex>
using namespace std;

int reg(string a) {
    regex r("(100+1+|01)+");
    return regex_match(a, r);
}

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        cout << (reg(a) ? "YES" : "NO") << "\n";
    }
    return 0;
}