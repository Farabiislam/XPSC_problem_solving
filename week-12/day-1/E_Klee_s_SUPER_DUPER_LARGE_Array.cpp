#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        auto sum = [&](long long a, long long n)
        {
            return ((n * (2 * a + (n - 1) * 1)) / 2); // s = (n/2) * (2a + (n-1)*d)
        };

        long long l = 0, r = n - 1;
        long long ans = INT_MAX;
        
        while (l <= r)
        {
            long long mid = l + (r - l) / 2;
            long long x = sum(k, mid);
            long long y = sum(k + mid, n - mid);
            if (x == y)
            {
                ans = 0;
                break;
            }
            if (x < y)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
            ans = min(ans, abs(x - y));
        }
        cout << ans << endl;
    }
    return 0;
}
