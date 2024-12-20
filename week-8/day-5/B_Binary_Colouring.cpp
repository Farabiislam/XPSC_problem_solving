#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> ans(32, 0);

        for (int i = 0; i < 31; i++)
        {
            if (1LL & (n >> i))
            {
                if (ans[i])
                {
                    ans[i + 1] = 1;
                    ans[i] = 0;
                }
                else if (i > 0)
                {
                    if (ans[i - 1] == 1)
                    {
                        ans[i + 1] = 1;
                        ans[i - 1] = -1;
                    }
                    else
                    {
                        ans[i] = 1;
                    }
                }
                else if (i == 0)
                {
                    ans[i] = 1;
                }
            }
        }

        int size = 0;
        for (int i = 0; i < 31; i++)
        {
            if (ans[i] != 0)
            {
                size = i + 1;
            }
        }

        cout << size << "\n";
        for (int i = 0; i < size; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}