#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long s;
    vector<int> v;
    cin >> n >> s;
    v.resize(n);
    for (auto &x : v)
        cin >> x;
    int l = 0, ans = n + 1;
    long long sum = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        sum += v[i];
        if (sum < s)
            continue;
        while (sum >= s)
        {
            sum -= v[l++];
        }
        ans = min(ans, i - l + 2);
    }
    if (ans > n)
        ans = -1;
    cout << ans << endl;
    return 0;
}