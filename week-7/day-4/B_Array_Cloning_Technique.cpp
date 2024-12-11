#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            freq[x]++;
        }
        int mf = 0;
        for (auto &[x, y] : freq) {
            mf = max(mf, y);
        }

        int ans = 0;

        while (mf < n) {
            int rem = min(n - mf, mf);
            ans += 1 + rem;
            mf += rem;
        }
        cout << ans << '\n';
    }
    return 0;
}