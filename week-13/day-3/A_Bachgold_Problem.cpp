#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    int k = n / 2;
    cout << k << "\n";

    if (n % 2 == 1)
    {
        cout << 3 << " ";
        n -= 3;
    }

    for (int i = 0; i < n / 2; i++)
    {
        cout << 2 << " ";
    }

    cout << "\n";
    return 0;
}
