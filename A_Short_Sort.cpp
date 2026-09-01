#include <iostream>

using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s == "abc" || s == "acb" || s == "bac" || s == "cba") {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}