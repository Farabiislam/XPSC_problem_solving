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

        for (auto &e : v)
        {

            cin >> e;
        }

        int m;
        string s;

        for (int i = 0; i < n; i++)
        {
            cin >> m >> s;

            for (int j = 0; j < m; j++)
            {

                if (s[j] == 'U')
                {
                    if (v[i] == 0)
                    {
                        v[i] = 9;
                    }
                    else
                    {
                        v[i]--;
                    }
                }
                else
                {
                    if (v[i] == 9)
                    {
                        v[i] = 0;
                    }
                    else
                    {
                        v[i]++;
                    }
                }
            }
        }
        for (auto it : v)
        {
            cout << it << " ";
        }

        cout << "\n";
    }

    return 0;
}