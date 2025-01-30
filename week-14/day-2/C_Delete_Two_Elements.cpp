#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }

        if ((2 * sum) % n != 0)
        {
            cout << 0 << '\n';
            continue;
        }
        long long target = (2 * sum) / n;

        unordered_map<long long, int> freq;
        long long ans = 0;
        for (long long x : a)
        {
            long long complement = target - x;
            ans += freq[complement];
            freq[x]++;
        }

        cout << ans << '\n';
    }

    return 0;
}