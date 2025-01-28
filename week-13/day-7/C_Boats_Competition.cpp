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
        int n, ans = 0;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        for (int s = 2; s <= 2 * n; s++)
        {
            int cnt = 0;
            int i = 1, j = n;
            while (i < j)
            {
                if (a[i] + a[j] > s)
                    j--;
                else if (a[i] + a[j] < s)
                    i++;
                else
                {
                    cnt++;
                    i++, j--;
                }
            }
            ans = max(ans, cnt);
        }

        cout << ans << endl;
    }

    return 0;
}