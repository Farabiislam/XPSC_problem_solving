#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,t;
    cin >> a >> b >> t;
     int ans = 0;
      int moments = a;

      while (moments <= t + 0.5)
      {
         ans += b;
         moments +=a;
      }
      
    cout << ans;
    
    return 0;
}