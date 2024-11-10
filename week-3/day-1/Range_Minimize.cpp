#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        vector<long long> b = a;
        b.pop_back();
        b.pop_back();
        long long ans = LLONG_MAX;

        ans = min(b.back() - b.front(), ans);
        b = a;
        ans = min({b.back() - b[2], b[n - 2] - b[1], ans});

        cout << ans << "\n";
    }

    return 0;
}