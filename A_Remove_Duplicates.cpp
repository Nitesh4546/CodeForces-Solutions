#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_set<int> seen;
    vector<int> result;

    for (int i = n - 1; i >= 0; i--) {
        if (seen.find(a[i]) == seen.end()) {
            seen.insert(a[i]);
            result.push_back(a[i]);
        }
    }

    reverse(result.begin(), result.end());

    cout << result.size() << "\n";

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i == result.size() - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
