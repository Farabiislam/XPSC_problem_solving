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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        map<tuple<int, int, int>, int> cnt;
        long long ans = 0;
        for (int i = 0; i < n - 2; ++i)
        {
            tuple<int, int, int> triplet = make_tuple(a[i], a[i + 1], a[i + 2]);
            vector<tuple<int, int, int>> subTriplet(3);
            subTriplet[0] = make_tuple(0, a[i + 1], a[i + 2]);
            subTriplet[1] = make_tuple(a[i], 0, a[i + 2]);
            subTriplet[2] = make_tuple(a[i], a[i + 1], 0);

            for (auto &trip : subTriplet)
            {
                ans += cnt[trip] - cnt[triplet];
                cnt[trip]++;
            }
            cnt[triplet]++;
        }
        cout << ans << '\n';
    }

    return 0;
}