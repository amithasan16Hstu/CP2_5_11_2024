#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> A(n);
    int operations = 0;
    int zero_count = 0;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        if (A[i] == 0) {
            zero_count++;
        } else if (A[i] < 0) {
            operations += (-A[i] - 1);
        } else {
            operations += (A[i] - 1);
        }
    }
    if (zero_count > 0) {
        cout << operations << "\n";
    } else if (count(A.begin(), A.end(), -1) % 2 != 0) {
        cout << operations + 2 << "\n";
    } else {
        cout << operations << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
