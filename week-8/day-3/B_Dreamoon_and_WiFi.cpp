#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s1, s2;

    cin >> s1 >> s2;

    int ps1 = 0;
    int ps2 = 0;
    int empty = 0;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '+')
        {
            ps1++;
        }
        if (s2[i] == '+')
        {
            ps2++;
        }
        if (s2[i] == '?')
        {
            empty++;
        }
    }

    int cnt = 0;

    for (int i = 0; i < (1 << empty); i++)
    {
        int c = 0;
        for (int k = 0; k < empty; k++)
        {
            if ((i >> k) & 1)
            {
                c++;
            }
        }

        if (c + ps2 == ps1)
        {
            cnt++;
        }
    }

    cout << fixed << setprecision(12) << (double)cnt / (1 << empty) << "\n";

    return 0;
}