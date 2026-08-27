#include <iostream>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long ball_pos;
    cin >> ball_pos;

    for(long long i = 0; i < 3; i++) {
        long long u, v;
        cin >> u >> v;

        if(ball_pos == u) {
            ball_pos = v;
        }else if(ball_pos == v) {
            ball_pos = u;
        }
    }
    cout << ball_pos << "\n";
    return 0;
}