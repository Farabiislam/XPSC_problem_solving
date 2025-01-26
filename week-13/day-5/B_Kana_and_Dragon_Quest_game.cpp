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
        int x, n, m;
        cin >> x >> n >> m;
        bool f = false;

        while (n > 0)
        {
            if (x > (x / 2 + 10))
            {
                x = x / 2 + 10;
            }
            else
            {
                break;
            }
            n--;
        }
        while (m > 0)
        {
            x -= 10;
            if (x <= 0)
            {
                f = true;
                break;
            }
            m--;
        }

        if (f)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}