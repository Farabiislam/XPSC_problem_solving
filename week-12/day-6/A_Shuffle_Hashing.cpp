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

        string p, h, n;
        cin >> p >> h;
        sort(p.begin(), p.end());

        int n1 = p.size(), n2 = h.size();
        bool f = false;
        for (int i = 0; i <=n2 - n1; i++)
        {
            n = h.substr(i, n1);
            sort(n.begin(), n.end());

            if (n == p)
            {

                f = true;
                break;
            }
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