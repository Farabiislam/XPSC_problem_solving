#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> l(n), R(m);

        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> R[i];
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (l[i] + R[j] <= k)
                    ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}