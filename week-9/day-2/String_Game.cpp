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
       int n;
       cin >> n;

       string s;    
       cin >> s;
         int cnt_one = 0,cnt_zero = 0;

         for (int i = 0; i < n; i++)
         {
             if (s[i] == '1')
             {
                 cnt_one++;
             }
             else
             {
                 cnt_zero++;
             }
         }
         int ans = min(cnt_one, cnt_zero);
         if (ans % 2 == 0)
         {
             cout << "Ramos" << '\n';
         }
         else
         {
             cout << "Zlatan" << '\n';
         }


    }
    
    
    
    return 0;
}