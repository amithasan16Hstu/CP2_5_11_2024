#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        int happy_count = 0;
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            if (p[i] == i + 1) {
                happy_count++;
            }
        }
        if (happy_count == n) {
            cout << 0 << "\n";
        } else if (happy_count == 0) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
