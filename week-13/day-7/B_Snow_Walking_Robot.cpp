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
        string s;
        cin >> s;
        map<char, int> m;
        for (auto x : s)
        {
            m[x]++;
        }

        int minUD = min(m['U'], m['D']);
        int minLR = min(m['L'], m['R']);

        if (minUD == 0 && minLR == 0)
        {
            cout << 0 << "\n";
            cout << " " << "\n";
        }
        else if (minUD == 0)
        {
            cout << 2 << "\n"
                 << "LR" << "\n";
        }
        else if (minLR == 0)
        {
            cout << 2 << "\n"
                 << "UD" << "\n";
        }
        else
        {
            string s = "";
            // for (int i = 0; i < minLR; i++)
            // {
            //     s += 'R';
            // }
            s += string(minLR, 'R');
            s += string(minUD, 'U');
            s += string(minLR, 'L');
            s += string(minUD, 'D');

            cout << s.size() << "\n"
                 << s << "\n";
        }
    }

    return 0;
}