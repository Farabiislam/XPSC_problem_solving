#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, long long> freq;
        for (const auto &x : s)
            freq[x]++;

        vector<pair<long long, char>> chrs;
        for (const auto &x : freq)
            chrs.push_back({x.second, x.first});

        sort(chrs.begin(), chrs.end());
        reverse(chrs.begin(), chrs.end());

        long long idx = 0;
        string t(n, '$');

        for (const auto &x : chrs)
        {
            long long f = x.first;
            const char c = x.second;
            while (f--)
            {
                if (idx >= n)
                    idx = 1;
                t[idx] = c;
                idx += 2;
            }
        }

        cout << t << endl;
    }

    return 0;
}