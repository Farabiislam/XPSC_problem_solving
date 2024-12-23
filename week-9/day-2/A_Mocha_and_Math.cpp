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
          vector<long long> a(n);
        for (int i = 0; i < n; i++){

            cin >> a[i];
        }
        long long res = a[0];

        for (int i = 1; i < n; i++)
        {

            res &= a[i];
        }
        cout << res << endl;
    }

    return 0;
}