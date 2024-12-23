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
        long long ans = 0;
        for (int j = 29; j >= 0; j--)
        {
            long long cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] >= (1 << j) && a[i] < (1 << (j + 1)))
                {
                    cnt++;
                }
            }
            ans += cnt * (cnt - 1) / 2;
        }
        cout << ans << '\n';
    }
}