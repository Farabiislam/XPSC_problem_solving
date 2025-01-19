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

        vector<int> a(n), temp(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            temp[i] = a[i];
        }

        if (n == 1)
        {
            cout << "-1\n";
            continue;
        }

        sort(temp.begin(), temp.end());

        for (int i = 0; i < n; i++)
        {
            if (a[i] == temp[i])
            {

                if (i == n - 1)
                {
                    swap(temp[i], temp[i - 1]);
                }
                else
                {

                    swap(temp[i], temp[i + 1]);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << temp[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
