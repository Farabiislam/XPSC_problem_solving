 #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> factor_count(n + 1, 0);

    for (int i = 2; i <= n; i++)
    {
        if (factor_count[i] == 0)
        {
            for (int j = i; j <= n; j += i)
            {
                factor_count[j]++;
            }
        }
    }

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (factor_count[i] == 2)
        {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}
