#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, long long> d;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    long long mx = 0, sum = 0;
    for (auto [key, value] : d)
    {
        sum += value;
        mx = max(sum, mx);
    }

    cout << mx << '\n';

    return 0;
}