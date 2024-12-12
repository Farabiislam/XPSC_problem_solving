#include <bits/stdc++.h>

using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            ans = __gcd(ans, abs(x - i));
        }

        cout << ans << "\n";
    }
}