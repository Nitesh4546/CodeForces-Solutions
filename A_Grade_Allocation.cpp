#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n, m;
        cin >> n >> m;

        long long sum_ = 0;
        for(int i = 0; i < n; i++) {
            long long score;
            cin >> score;
            sum_ += score;
        }
        long long max_ = min(m , sum_);
        cout << max_ << "\n";
    }
}