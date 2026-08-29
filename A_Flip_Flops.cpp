#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        long long n;
        long long c;
        long long k;
        cin >> n >> c >> k;
        vector<long long> arr(n);
        for(long long i = 0ll; i < n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());

        for(long long i = 0ll; i < n; i++) {
            if(arr[i] > c) {
                break;
            }
            long long ops = min(k, c - arr[i]);
            k -= ops;
            c+= (arr[i] + ops);
        }
        cout << c << "\n";
    }
}
