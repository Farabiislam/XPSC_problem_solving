#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int MAXN = 1e5 + 5;
    int n, k;
    vector<int> v;
    int tms[MAXN];
    cin >> n >> k;
    v.resize(n);
    for (auto &x : v)
        cin >> x;
    long long ans = 0;
    long long l = 0, num = 0;
    for (int i = 0; i < n; ++i)
    {
        if (!tms[v[i]]++)
        {
            if (++num > k)
            {
                while (true)
                    if (--tms[v[l++]] == 0){

                        break;
                    }
            }
        }
        ans += i - l + 1;
    }
    cout << ans << "\n";
    return 0;
}