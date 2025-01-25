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
        int n, m;
        cin >> n >> m;

        string str1, str2;
        cin >> str1 >> str2;

        int cnt = 0, j = 0;

        for (int i = 0; i < m; i++)
        {
            if (str1[j] == str2[i])
            {
                cnt++;
                j++;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}