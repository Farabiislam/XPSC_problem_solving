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
        long long a, b, c;
        cin >> a >> b >> c;
        long long e1, e2;
        e1 = a - 1;
        e2 = abs(b - c) + c - 1;
        if (e1 < e2)
        {
            cout << 1 << "\n";
        }
        else if (e1 > e2)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << 3 << "\n";
        }
    }

    return 0;
}