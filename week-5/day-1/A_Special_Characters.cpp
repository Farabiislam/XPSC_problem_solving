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
        if (n % 2 == 1)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            char c;
            for (int i = 0; i < n / 2; i++)
            {
                if (i % 2 == 0)
                {
                    c = 'A';
                }
                else
                {
                    c = 'B';
                }
                cout << c << c;
            }

            cout << '\n';
        }
    }

    return 0;
}