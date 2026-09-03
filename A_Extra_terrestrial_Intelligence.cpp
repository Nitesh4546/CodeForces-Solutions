//ANSWER NOT ACCEPTED
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (!(cin >> n)) return 0;
    string s;
    cin >> s;
    
    vector<int> pos;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            pos.push_back(i);
        }
    }
    
    if (pos.size() < 3) {
        cout << "NO\n";
        return 0;
    }
    
    int diff = pos[1] - pos[0];
    bool pref = true;
    for (size_t i = 1; i < pos.size() - 1; ++i) {
        if (pos[i + 1] - pos[i] != diff) {
            pref = false;
            break;
        }
    }
    
    if (pref) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
