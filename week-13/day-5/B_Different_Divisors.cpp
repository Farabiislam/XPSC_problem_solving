#include <bits/stdc++.h>
using namespace std;
long long prime(long long a)
{
    bool p = false;
    while (true)
    {
        p = false;
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                p = true;
                break;
            }
        }
        if (p)
        {
            a++;
        }
        else
        {
            break;
        }
    }

    return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int d;
        cin >> d;

        long long ans = 0;
        long long a = 1 + d;
        a = prime(a);

        long long b = a + d;
        b = prime(b);
        ans = a * b;
        cout << ans << "\n";
    }

    return 0;
}