#include <iostream>

using namespace std;
    
int main() {
    long long sh, ma, co;
    cin >> sh >> ma >> co;

    long long sh_co = sh % co;
    long long ma_co = ma % co;
    long long coconut = (sh + ma) / co;
    long long min_ = 0;

    if(sh_co + ma_co >= co) {
        min_ = min(co - sh_co, co - ma_co);
    }
    cout << coconut << " " << min_ << "\n";
    
    return 0;
}
