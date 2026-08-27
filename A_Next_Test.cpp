#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<bool> arr(3002, false);

    for(long long i = 0; i < n; i++) {
        long long val;
        cin >> val;
        if(val <= 3001) {
            arr[val] = true;
        }
    }
    for(long long i = 1; i <= 3001; i++) {
        if(!arr[i]) {
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}