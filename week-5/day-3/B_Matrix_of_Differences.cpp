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
        int ans[n + 1][n + 1];
        int min = 1, max = n * n;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2 == 0)
                    {
                        ans[i][j] = max;
                        max--;
                    }
                    else
                    {
                        ans[i][j] = min;
                        min++;
                    }
                }
            }
            else if (i % 2 == 0)
            {
                for (int j = n; j > 0; j--)
                {
                    if (j % 2 == 0)
                    {
                        ans[i][j] = min;
                        min++;
                    }
                    else
                    {
                        ans[i][j] = max;
                        max--;
                    }
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}