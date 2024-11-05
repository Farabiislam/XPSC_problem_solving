#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    
    int n;
    cin >> n;

    multiset<int> ms;
  
    for(int i = 0;i<n;i++){
     int v;
     cin >> v;
      ms.insert(v);
    }
    
    int ans =0, problems = 1;

    while (!ms.empty() )
    {
        auto lb = ms.lower_bound(problems);
        if(lb !=ms.end()){
            ans++;
            ms.erase(lb);
        }else{
            break;
        }
        problems++;

    }
    
    cout << ans;
    
    return 0;
}