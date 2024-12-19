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
        vector<int> a(n), res(32);
        for (auto &e : a)
        {
            cin >> e;
        }
        for (int i = 0; i < 31; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((1 << i) & a[j])
                    res[i]++;
            }
        }

        for (int i = 1; i < n + 1; i++)
        {
            bool ok = true;
            for (int j = 0; j < 31; j++)
            {
                if (res[j] % i != 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {

                cout << i << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}