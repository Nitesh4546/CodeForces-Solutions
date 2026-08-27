#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        string t;
        cin >> s >> t;

        int max_ = max(s.size(), t.size());
        int k = 0;

        while(k < max_ && s[k] == t[k]) k++;

        long long time = s.size() + t.size();
        if(k > 0) {
            time -= k;
            time++;
        }
        cout << time << "\n";
    }
    return 0;
}