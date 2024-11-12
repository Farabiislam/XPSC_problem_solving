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
        string str;
        cin >> str;
        long long sum = 0;
        vector<long long> v;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'L')
            {
                v.push_back((n - 1 - i) - i);
                sum += i;
            }
            else
            {
                v.push_back(i - (n - 1 - i));
                sum += (n - 1 - i);
            }
        }

        sort(v.begin(), v.end(), greater<long long>());

        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                sum += v[i];
            }
            cout << sum << ' ';
        }
        cout << '\n';
    }

    return 0;
}