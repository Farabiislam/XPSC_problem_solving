#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        
        long long grid[n][m];
        
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        long long maximumSum = 0;

        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                long long temp_sum = 0;
    
                temp_sum += grid[i][j];
                long long temp_i = i - 1, temp_j = j - 1;

                while (temp_i >= 0 && temp_j >= 0)
                {
                    temp_sum += grid[temp_i][temp_j];
                    temp_i--;
                    temp_j--;
                }
                temp_i = i - 1;
                temp_j = j + 1;
                while (temp_i >= 0 && temp_j < m)
                {
                    temp_sum += grid[temp_i][temp_j];
                    temp_i--;
                    temp_j++;
                }
                temp_i = i + 1;
                temp_j = j - 1;
                while (temp_i < n && temp_j >= 0)
                {
                    temp_sum += grid[temp_i][temp_j];
                    temp_i++;
                    temp_j--;
                }
                temp_i = i + 1;
                temp_j = j + 1;
                while (temp_i < n && temp_j < m)
                {
                    temp_sum += grid[temp_i][temp_j];
                    temp_i++;
                    temp_j++;
                }
                maximumSum = max(maximumSum, temp_sum);
            }
        }
        cout << maximumSum << endl;
    }
       
    
    return 0;
}