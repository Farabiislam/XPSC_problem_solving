#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k, n;
    cin >> k >> n;

    vector<long long> groups(n);
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> groups[i];
        sum += groups[i];
    }

    auto ok = [&](long long council)
    {
        long long slot = council * k;
        for (auto x : groups)
        {
            slot -= min(x, council);
            if (slot <= 0)
            {
                return true;
            }
        }
        return false;
    };

    long long l = 0, r = (sum / k) + 10, mid;

    while (r > l + 1)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << "\n";
    return 0;
}
