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
        int n, c;
        cin >> n >> c;
        vector<long long> v(n);
        int i = 0;
        for (auto &e : v)
        {
            cin >> e;
            e += i + 1;
            i++;
        }
        long long sum = 0, count = 0;
        sort(v.begin(), v.end());
        for (auto e : v)
        {
            sum += e;
            if (sum <= c)
            {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}