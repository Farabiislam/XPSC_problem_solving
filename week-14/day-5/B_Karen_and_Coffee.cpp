#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> pref(2e5 + 5);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        pref[l]++;
        pref[r + 1]--;
    }

    long long sum = 0;

    for (int i = 0; i < pref.size(); i++)
    {
        sum += pref[i];
        if (sum >= k)
            pref[i] = 1;
        else
            pref[i] = 0;
    }

    for (int i = 0; i < pref.size(); i++)
    {
        sum += pref[i];
        pref[i] = sum;
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        cout << pref[y] - pref[x - 1] << "\n";
    }

    return 0;
}