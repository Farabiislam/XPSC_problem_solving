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
        int N, M;
        cin >> N >> M;

        if (((N % 2 == 0) && (M % 2 == 1)) || (M < N))
        {
            cout << "NO\n";
        }
        else if ((N % 2) == 1)
        {
            cout << "YES\n";
            for (int i = 1; i < N; ++i)
            {
                cout << "1 ";
            }
            cout << M - N + 1 << '\n';
        }
        else
        {
            cout << "YES\n";
            for (int i = 2; i < N; ++i)
            {
                cout << "1 ";
            }
            cout << (M - N + 2) / 2 << ' ' << (M - N + 2) / 2 << '\n';
        }
    }

    return 0;
}