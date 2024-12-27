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
        vector<int> A(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }

        int optimalScore = INT_MAX;

        for (int i = 0; i < n; ++i)
        {

            int maxDifference = 0;
            if (i > 0)
            {
                maxDifference = max(maxDifference, abs(A[i] - A[i - 1]));
            }
            if (i < n - 1)
            {
                maxDifference = max(maxDifference, abs(A[i] - A[i + 1]));
            }
            optimalScore = min(optimalScore, maxDifference);
        }
        cout << optimalScore << "\n";
    }

    return 0;
}
