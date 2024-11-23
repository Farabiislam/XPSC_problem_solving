class Solution
{
public:
    int lenOfLongestSubarr(vector<int> &arr, int k)
    {
      unordered_map<int, int> mp;
        int sum = 0;
        mp[0] = -1;
        int ans = 0;

        for (int i = 0; i < arr.size(); i++)
        {

            sum = sum + arr[i];
            int rem = sum - k;
            if (mp.find(rem) != mp.end())
            {
                ans = max(ans, i - mp[rem]);
            }

            if (mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }
        return ans;
    }
};