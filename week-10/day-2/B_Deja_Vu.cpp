#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n), x;
        for (auto &e : a)
            cin >> e;
        for (long long i = 0; i < q; i++)
        {
            long long b;
            cin >> b;

            if (x.empty() || x.back() > b)
            {
                x.push_back(b);
            }
        }
        for (auto e : x)
        {
            for (auto &f : a)
            {
                if (f % (1 << e) == 0)
                {
                    f += 1 << e - 1;
                }
            }
        }
        for (auto e : a)
        {
            cout << e << " ";
        }
        cout << endl;
    }

    return 0;
}