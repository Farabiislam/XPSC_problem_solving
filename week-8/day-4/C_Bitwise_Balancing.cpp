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
        long long a, b, c, d;
        cin >> b >> c >> d;
        bool f = 0;
         a = 0;

        for (int i = 0; i < 62; i++)
        {
            bool fb = 0, fc = 0, fd = 0;

            if ((1LL << i) & b)
                fb = 1;
            if ((1LL << i) & c)
                fc = 1;
            if ((1LL << i) & d)
                fd = 1;

            if (fb == 0 && fc == 0 && fd == 0);      
            else if (fb == 0 && fc == 0 && fd == 1) a += (1LL << i);
            else if (fb == 0 && fc == 1 && fd == 0) a += (1LL << i);
            else if (fb == 0 && fc == 1 && fd == 1) f = 1;
            else if (fb == 1 && fc == 0 && fd == 0) f = 1;
            else if (fb == 1 && fc == 0 && fd == 1) a += (1LL << i);
            else if (fb == 1 && fc == 1 && fd == 0) a += (1LL << i);
            else if (fb == 1 && fc == 1 && fd == 1);     
        }

        if (f)
        {
            a = -1;
        }
        cout << a << "\n";
    }

    return 0;
}