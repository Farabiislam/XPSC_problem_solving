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
        long long n, k;
        cin >> n >> k;

        vector<long long> a(k);
        for (auto &e :a)
        {
            cin >> e;
        }
        sort(a.rbegin(), a.rend());

        long long cat_position = 0;
        long long total = 0;
        for (int i = 0; i < k; i++)
        {
            if (cat_position < a[i])
            {
                cat_position += (n - a[i]);
                total++;
            }
            else{

                break;
            }
        }
        cout << total << "\n";
    }

    return 0;
}