#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long  n, m, h;
        cin >> n >> m >> h;
        long long  a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n, greater<int>());
        sort(b, b + m, greater<int>());
        long long ans = 0;
        for (int i = 0; i < min(n, m); i++)
        {
            ans += min(a[i], (b[i] * h));
        }
        cout << ans << endl;
    }
    return 0;
}