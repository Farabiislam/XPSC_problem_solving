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
        int b = (1 << __lg(n));
        int a = (n ^ b);

        cout << a << " " << b << '\n';
    }

    return 0;
}