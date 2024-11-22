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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 0, r = 0, sum = 0, ans = 0;
        while (r < n)
        {
            sum += a[r];
            if (sum == s)
            {
                ans = max(ans, r - l + 1);
            }
            if (sum > s)
            {
                while (sum > s && l <= r)
                {
                    sum -= a[l];
                    l++;
                }
            }
            r++;
        }
        if (sum != s){

            cout << -1 << "\n";
        }
        else
        {

            cout << n - ans <<"\n";
        }
    }

    return 0;
}
