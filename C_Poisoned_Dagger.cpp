#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

bool helper(long long mid, long long n, long long h, vector<long long>& arr) {
    long long damage = 0;
    for(int i = 1; i < n; i++) {
        damage += min(mid, arr[i] - arr[i - 1]); 
        if(damage >= h) {
            return true;
        }
    }
    return damage + mid >= h;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, h;
        cin >> n >> h;
        
        vector<long long> arr(n, 0);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long l = 1;
        long long r = h;
        long long res = -1;

        while(l <= r) {
            long long mid = l + (r - l) / 2;

            if(helper(mid, n, h, arr)) {
                res = mid;
                r = mid - 1;
            }else {
                l = mid + 1;
            }
        }
        cout << res << "\n";
    }
}