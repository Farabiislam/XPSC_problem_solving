#include <bits/stdc++.h>

using namespace std;

char start, End;

bool compareByIndex(pair<char, int> &a, pair<char, int> &b)
{
    return a.second < b.second;
}

bool compareInnerElements(pair<char, int> &a, pair<char, int> &b)
{
    if (start > End)
        return a.first > b.first;
    return a.first < b.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<pair<char, int>> v;
        char minn = min(s[0], s[n - 1]);
        char maxx = max(s[0], s[n - 1]);

        start = s[0];
        End = s[n - 1];

        for (int i = 0; i < n; i++)
        {
            if ((s[i] >= minn && s[i] <= maxx))
            {
                v.push_back({s[i], i});
            }
        }

        sort(v.begin(), v.end(), compareByIndex);

        if (v.size() > 2)
        {
            sort(v.begin() + 1, v.begin() + v.size() - 1, compareInnerElements);
        }

        vector<int> a;
        long long c = 0;

        a.push_back(1);

        for (int i = 1; i < v.size(); i++)
        {
            c += abs(v[i - 1].first - v[i].first);
            a.push_back(v[i].second + 1);
        }

        cout << c << " " << a.size() << endl;

        for (auto i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}