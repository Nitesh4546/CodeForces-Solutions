#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n = 0ll;
    cin >> n;
    long long even_c = 0ll;
    long long odd_c = 0ll;
    long long even_lind = 0ll;
    long long odd_lind = 0ll;

    for(long long i = 1ll; i <= n; i++) {
        long long num;
        cin >> num;
        if(num % 2) {
            odd_c++;
            odd_lind = i;
        }else {
            even_c++;
            even_lind = i;
        }
    }

    if(even_c == 1) {
        cout << even_lind << "\n";
    }else {
        cout << odd_lind << "\n";
    }
    return 0;
}
