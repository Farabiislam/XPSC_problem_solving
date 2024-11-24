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
        vector<int> v(n);
        map<int, int> cnt;
        string s = "";

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            for (char j = 'a'; j <= 'z'; j++)
            {
                if (cnt[j] == v[i])
                {
                    cnt[j]++;
                    s += j;
                    break;
                }
            }
        }

        cout << s << "\n";
    }

    return 0;
}