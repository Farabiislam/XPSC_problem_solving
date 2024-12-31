#include <bits/stdc++.h>
using namespace std;

int f(vector<int> nums)
{

    vector<int> hash(nums.size() + 1, 0);
    for (auto x : nums)
    {
        hash[x]++;
    }
    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;

        cin >> n >> k;
        vector<int> nums(n);
        for (auto &x : nums)
            cin >> x;

        int mex = f(nums);

        nums.push_back(mex);

        int rem = k % (n + 1);
        int idx = (n + 1 - rem) % (n + 1);

        vector<int> ans;
        for (int i = idx; i < n + 1; i++)
        {
            ans.push_back(nums[i]);
        }
        for (int i = 0; i < idx - 1; i++)
        {
            ans.push_back(nums[i]);
        }

        if (ans.size() > n)
        {
            ans.pop_back();
        }

        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
