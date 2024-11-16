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
        long long n;
        cin >> n;
        vector<long long> a(n);

        for (auto &e : a)
        {
            cin >> e;
        }

        long long sum = 0, op = 0;
        bool isNegative = false;

        for (int i = 0; i <= n; i++)
        {
            if (i < n)
            {
                sum += abs(a[i]);
            }

            if (isNegative)
            {
                if (i == n || a[i] > 0)
                {
                    op++;
                    isNegative = false;
                }
            }
            else
            {
                if (a[i] < 0)
                {
                    isNegative = true;
                }
            }
        }

        cout << sum << " " << op << "\n";
    }

    return 0;
}