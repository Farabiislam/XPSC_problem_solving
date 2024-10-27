#include<bits/stdc++.h>
using namespace std;
int main()
{
      int a,b,x;
      cin >> a >> b;
      int ans = 0;
        if(a != b){
            x = max(a,b);  
            ans = (2*x)- 1;
        }
        else{
             ans = a + b;
        }
       
      cout << ans;
    
    return 0;
}