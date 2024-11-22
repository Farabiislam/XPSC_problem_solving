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
        int n, s;
        cin >> n >> s;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long sum = 0;
        int l = 0, r = 0, ans = 0;

        while (r < n)
        {
            if (r == n - 1)
            {
                sum += a[r];
                if (sum <= s)
                    ans = max(ans, r - l + 1);
                r++;
            }
            else
            {
                if (b[r] % b[r + 1] == 0)
                {
                    sum += a[r];
                    if (sum <= s)
                        ans = max(ans, r - l + 1);
                    else
                    {
                        while (sum > s && l <= r)
                        {
                            sum -= a[l];
                            l++;
                        }
                    }
                    r++;
                }
                else
                {
                    sum += a[r];
                    if (sum <= s)
                        ans = max(ans, r - l + 1);
                    r++;
                    l = r;
                    sum = 0;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}