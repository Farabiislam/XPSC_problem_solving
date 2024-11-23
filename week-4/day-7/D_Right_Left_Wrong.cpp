#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> a;
        a.push_back(0);
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            a.push_back(a.back() + x);
        }

        string s;
        cin >> s;

        long long ans = 0;
        long long l = 0, r = n - 1;

        while (r > l)
        {
            while (l < n && s[l] == 'R')
            {
                l++;
            }
            while (r >= 0 && s[r] == 'L')
            {
                r--;
            }
            if (l < r)
            {
                ans += a[r + 1] - a[l];
                l++;
                r--;
            }
        }

        cout << ans << endl;
    }
    return 0;
}