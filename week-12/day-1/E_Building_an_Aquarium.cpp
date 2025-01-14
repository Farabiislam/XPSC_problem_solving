#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long x;
        cin >> x;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long l = 1, r = 1e10;
        long long mid = 0;
        while (l < r - 1)
        {
            mid = l + (r - l) / 2;
            long long sum = 0;
            for (long long i = 0; i < n; i++)
            {
                if (v[i] < mid)
                {
                    sum += mid - v[i];
                }
            }
            if (sum > x)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        cout << l << "\n";
    }
    return 0;
}
