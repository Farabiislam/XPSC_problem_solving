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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        auto ok = [&](int k)
        {
            multiset<int> s;
            for (auto i : a)
            {
                s.insert(i);
            }

            for (int i = 1; i <= k; i++)
            {
                if (s.empty())
                    return false;
                int req = k - i + 1;
                auto ii = s.upper_bound(req);
                if (ii == s.begin())
                    return false;
                ii--;

                s.erase(ii);
                if (!s.empty())
                {
                    ii = s.begin();
                    long long v = (*ii);
                    v += (req);
                    s.erase(ii);
                    s.insert(v);
                }
            }
            return true;
        };

        int low = 0, high = n, k;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (ok(mid))
            {
                k = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << k << endl;
    }

    return 0;
}